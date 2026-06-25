/* Generated code for Python module 'websockets$protocol'
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



/* The "module_websockets$protocol" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_websockets$protocol;
PyDictObject *moduledict_websockets$protocol;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_uuid;
PyObject *const_str_plain_uuid4;
PyObject *const_str_plain_id;
PyObject *const_str_plain_logging;
PyObject *const_str_plain_getLogger;
PyObject *const_str_digest_b4cfe57e7a7c5d859ef172016f38f714;
PyObject *const_str_plain_logger;
PyObject *const_str_plain_isEnabledFor;
PyObject *const_str_plain_DEBUG;
PyObject *const_str_plain_debug;
PyObject *const_str_plain_side;
PyObject *const_str_plain_state;
PyObject *const_str_plain_max_message_size;
PyObject *const_str_plain_max_fragment_size;
PyObject *const_str_plain_current_size;
PyObject *const_str_plain_expect_continuation_frame;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_extensions;
PyObject *const_str_plain_subprotocol;
PyObject *const_str_plain_close_rcvd;
PyObject *const_str_plain_close_sent;
PyObject *const_str_plain_close_rcvd_then_sent;
PyObject *const_str_plain_handshake_exc;
PyObject *const_str_plain_eof_sent;
PyObject *const_str_plain_StreamReader;
PyObject *const_str_plain_reader;
PyObject *const_str_plain_events;
PyObject *const_str_plain_writes;
PyObject *const_str_plain_parse;
PyObject *const_str_plain_parser;
PyObject *const_str_plain_parser_exc;
PyObject *const_str_plain__state;
PyObject *const_str_digest_cf172e2ea8a55afe62c198a7709a31a7;
PyObject *const_str_digest_2da91eb9301980fdca19d95b93f530b6;
PyObject *const_str_plain_CLOSED;
PyObject *const_str_plain_CloseCode;
PyObject *const_str_plain_ABNORMAL_CLOSURE;
PyObject *const_str_plain_code;
PyObject *const_str_digest_5f6b9a7beab5c84fec7eb731ca88c2e3;
PyObject *const_str_plain_reason;
PyObject *const_str_digest_4e6d06f9ecfbc7b84f72c0aa9d2c58fa;
PyObject *const_str_digest_4506a6ea80e6c4ea1e1e4cfd0b08f7a8;
PyObject *const_str_plain_OK_CLOSE_CODES;
PyObject *const_str_plain_ConnectionClosedOK;
PyObject *const_str_plain_ConnectionClosedError;
PyObject *const_str_plain___cause__;
PyObject *const_str_digest_6fdb368c1ba25e9a376d76c54197be88;
PyObject *const_str_plain_feed_data;
PyObject *const_str_digest_8dd4c68f2ad4263f21c1532967e27520;
PyObject *const_str_plain_eof;
PyObject *const_str_plain_feed_eof;
PyObject *const_str_digest_0d77c13731b083432ce32d88b93a9f1b;
PyObject *const_str_plain_ProtocolError;
PyObject *const_tuple_str_digest_a22e9e9a4815278d6fb39e1f930c4d87_tuple;
PyObject *const_str_plain_OPEN;
PyObject *const_str_plain_InvalidState;
PyObject *const_str_digest_c01c51d0279b9341535e9c65fe845211;
PyObject *const_str_plain_send_frame;
PyObject *const_str_plain_Frame;
PyObject *const_str_plain_OP_CONT;
PyObject *const_str_digest_61511e21f5be559024b619c4e019ed0c;
PyObject *const_tuple_str_digest_a1ca2c1d6c0cc693d5616595c1943bf3_tuple;
PyObject *const_str_plain_OP_TEXT;
PyObject *const_str_digest_77ab108b5bf1f73af273e039096fefa7;
PyObject *const_str_plain_OP_BINARY;
PyObject *const_str_digest_59d2a709bf1c4438bbbc271cf15e4a61;
PyObject *const_tuple_str_digest_0090efbc893f3364b67f36cecf938216_tuple;
PyObject *const_str_plain_Close;
PyObject *const_str_plain_NO_STATUS_RCVD;
PyObject *const_str_plain_serialize;
PyObject *const_str_plain_OP_CLOSE;
PyObject *const_str_plain_CLOSING;
PyObject *const_str_digest_0b7f7f4af88b4c4e6f29599888913e4e;
PyObject *const_str_plain_OP_PING;
PyObject *const_str_digest_5e69653c320343a95bb75b6d23f9ca37;
PyObject *const_str_plain_OP_PONG;
PyObject *const_str_digest_2046667b8c630facbcfede63b2e291ec;
PyObject *const_str_plain_SERVER;
PyObject *const_str_plain_send_eof;
PyObject *const_str_plain_discard;
PyObject *const_str_digest_fe361088a02c7f541eab9966f60bb29e;
PyObject *const_str_digest_604b46b6acb3a5b35a0758da6de214a0;
PyObject *const_str_digest_d17f3846b6ea249e42ad8b9aa3b080f2;
PyObject *const_str_plain_CONNECTING;
PyObject *const_str_digest_7c9863627c68ddf0d4c2f99f909a7e34;
PyObject *const_str_digest_b38b7d2d28c2455c4f2887607c043224;
PyObject *const_str_plain_self;
PyObject *const_str_plain_at_eof;
PyObject *const_tuple_str_digest_c75a0defaf8d9a13f7c93cdc63f80b31_tuple;
PyObject *const_str_digest_da6d1f64c16d9bbd1b14da2673e5ef21;
PyObject *const_str_plain_min;
PyObject *const_str_plain_read_exact;
PyObject *const_tuple_str_plain_mask_str_plain_max_size_str_plain_extensions_tuple;
PyObject *const_str_digest_222bd0d7fdce5a655e754c1b048cf78d;
PyObject *const_str_plain_recv_frame;
PyObject *const_str_plain_fail;
PyObject *const_str_plain_PROTOCOL_ERROR;
PyObject *const_str_plain_INVALID_DATA;
PyObject *const_str_digest_3ac33d9850d9d7a7d2782efa72a2d403;
PyObject *const_str_plain_start;
PyObject *const_str_plain_PayloadTooBig;
PyObject *const_str_plain_set_current_size;
PyObject *const_str_plain_MESSAGE_TOO_BIG;
PyObject *const_str_plain_error;
PyObject *const_tuple_str_digest_4fd9aa2a52973b8b61ab3b7b61d3c486_true_tuple;
PyObject *const_tuple_str_plain_exc_info_tuple;
PyObject *const_str_plain_INTERNAL_ERROR;
PyObject *const_str_digest_afb2d0eff73f028df2bd91e32cc9eaf5;
PyObject *const_str_digest_87727ab499511692afe24137b37bda4b;
PyObject *const_str_digest_10852fb3b026a7626daf6973e58903c2;
PyObject *const_str_plain_CLIENT;
PyObject *const_str_digest_4cbf954de7b23ee7d734e1b0d6f8d03c;
PyObject *const_str_digest_dc4e579514737aae7c6d0e999283b1c9;
PyObject *const_str_plain_opcode;
PyObject *const_str_plain_fin;
PyObject *const_str_plain_data;
PyObject *const_tuple_str_digest_9f85ec54bccb123247005f3d08f0100f_tuple;
PyObject *const_str_digest_05c4874b2524d0437df74263d0cf866d;
PyObject *const_str_plain_02x;
PyObject *const_str_plain_append;
PyObject *const_str_digest_57a861628633d14384e171015b7e9fa0;
PyObject *const_str_digest_80cdda66c11f8d6336cf3636d3981b0f;
PyObject *const_tuple_str_plain_mask_str_plain_extensions_tuple;
PyObject *const_tuple_str_digest_01473d63ff65b4c02d86f75a2f0b57c9_tuple;
PyObject *const_str_plain_SEND_EOF;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_enum;
PyObject *const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
PyObject *const_tuple_str_plain_Generator_tuple;
PyObject *const_str_plain_Generator;
PyObject *const_str_plain_exceptions;
PyObject *const_tuple_3520041fb0e264576a2b71f8b5943791_tuple;
PyObject *const_str_plain_ConnectionClosed;
PyObject *const_tuple_str_plain_Extension_tuple;
PyObject *const_str_plain_Extension;
PyObject *const_str_plain_frames;
PyObject *const_tuple_eed96743e6a2c6597e4aa97ac0c2ae4b_tuple;
PyObject *const_str_plain_http11;
PyObject *const_tuple_str_plain_Request_str_plain_Response_tuple;
PyObject *const_str_plain_Request;
PyObject *const_str_plain_Response;
PyObject *const_str_plain_streams;
PyObject *const_tuple_str_plain_StreamReader_tuple;
PyObject *const_str_plain_typing;
PyObject *const_tuple_a7d1027478eeb662f2180c7a8d510dfa_tuple;
PyObject *const_str_plain_BytesLike;
PyObject *const_str_plain_LoggerLike;
PyObject *const_str_plain_Origin;
PyObject *const_str_plain_Subprotocol;
PyObject *const_list_49aea8477c302808c50cc9def784047a_list;
PyObject *const_str_plain_Event;
PyObject *const_str_plain_IntEnum;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_Side;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_3cd6ac1bd1cb919941d493834e2ad6f0;
PyObject *const_str_digest_5eac742e0b1285e3eb657a6984114ce7;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_45;
PyObject *const_str_plain___firstlineno__;
PyObject *const_tuple_int_pos_2_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_State;
PyObject *const_str_digest_f3232ebaf2e03f8d55a1299d263b5a90;
PyObject *const_int_pos_55;
PyObject *const_tuple_int_pos_4_tuple;
PyObject *const_str_digest_cb80e1e685f9070e7392b65779f535a3;
PyObject *const_str_plain_Protocol;
PyObject *const_int_pos_71;
PyObject *const_str_plain_max_size;
PyObject *const_int_pos_1048576;
PyObject *const_dict_724f86ab616c907a6b9df68c7077f64f;
PyObject *const_str_digest_b96fac313115d5169230e3421a1f9f27;
PyObject *const_dict_872c1239b13eee6130c05d2e988489c5;
PyObject *const_str_digest_7c012172864373037a6b2f56188d81a8;
PyObject *const_str_plain_setter;
PyObject *const_dict_2749590df7593f480ccc68138d274ac5;
PyObject *const_dict_4ceb13db20db0a5d6b10c13b92db4345;
PyObject *const_str_plain_close_code;
PyObject *const_str_digest_16f80b062d8ffea5e563cca87945ba86;
PyObject *const_dict_fb2aef63cbe899ae3db5a90391a96071;
PyObject *const_str_plain_close_reason;
PyObject *const_str_digest_ad577b78bc9f41122546e8c4d2e9359a;
PyObject *const_dict_23fba3063950d2e9ec90a2a5552d0410;
PyObject *const_str_plain_close_exc;
PyObject *const_str_digest_422d4440266e4856b97ec893b4a4aa56;
PyObject *const_dict_d97434bec4d8753174e1f5e59bdf6c3a;
PyObject *const_str_plain_receive_data;
PyObject *const_str_digest_6005beaea5f560caab9d863a3e90e8af;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_plain_receive_eof;
PyObject *const_str_digest_04322128f45b8605e2a9b58fe48f547f;
PyObject *const_dict_f65636fbb25e9a2cc50bdf4372172db0;
PyObject *const_str_plain_send_continuation;
PyObject *const_str_digest_293328105b5a1b985eae796a0e94981b;
PyObject *const_tuple_true_tuple;
PyObject *const_str_plain_send_text;
PyObject *const_str_digest_d280bbd095b32120e8f02b8520f31f44;
PyObject *const_str_plain_send_binary;
PyObject *const_str_digest_26b7b944b739f5500015ae9666b0d991;
PyObject *const_tuple_none_str_empty_tuple;
PyObject *const_dict_a568723f5fd31797777e30eff7cc899b;
PyObject *const_str_plain_send_close;
PyObject *const_str_digest_41ce80a45f4eb6fdcab6c5007f38df47;
PyObject *const_dict_3b552aeabeb6f8a78aa6f219823650a4;
PyObject *const_str_plain_send_ping;
PyObject *const_str_digest_36905314b676209cb03c42f03ee9679e;
PyObject *const_str_plain_send_pong;
PyObject *const_str_digest_b62621193b1d7b030b0285b5f9736aa0;
PyObject *const_tuple_str_empty_tuple;
PyObject *const_dict_87a3f0b3d0a040552dc0c998c42cb021;
PyObject *const_str_digest_a30839757adba178836cfad05add5445;
PyObject *const_dict_3c152de3bdbbfdc26015c4bc5b58b19d;
PyObject *const_str_plain_events_received;
PyObject *const_str_digest_948c7f7bd0c933664cd5cd4e6ee29d86;
PyObject *const_dict_8bac5993459d60a1f3d5d83c33b91c50;
PyObject *const_str_plain_data_to_send;
PyObject *const_str_digest_c46d7d9f95b3611f8a8c356052483c60;
PyObject *const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6;
PyObject *const_str_plain_close_expected;
PyObject *const_str_digest_c87b8a39e4a4f8712de14c2273e08015;
PyObject *const_dict_a34d90b90400a0d4208eb8f23ecaf5f5;
PyObject *const_dict_17fcd30e4eb497b13d2db75bb020fd9c;
PyObject *const_str_digest_d44f9d35043858a3728280037ae9bfde;
PyObject *const_str_digest_8f70d9706108ed7e76763475f6624465;
PyObject *const_str_digest_17e60704bef1fc47962bdd5b60039802;
PyObject *const_tuple_26db5d65ef245a6de67cc4c0ec89f517_tuple;
PyObject *const_str_digest_0966133bdd9ef717ecc08b7926f4d229;
PyObject *const_str_digest_a2b53898ad8d8612b131cc4e494e5f10;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_8807519efc9509dce67da6fb68759e03_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_exc_type_str_plain_exc_tuple;
PyObject *const_tuple_str_plain_self_str_plain_writes_tuple;
PyObject *const_tuple_str_plain_self_str_plain_events_tuple;
PyObject *const_tuple_deb1d79403b3c13bb7843de1395ac5db_tuple;
PyObject *const_tuple_283fd8dcf0afc4f8c51de8c19f4864f5_tuple;
PyObject *const_tuple_str_plain_self_str_plain_data_tuple;
PyObject *const_tuple_str_plain_self_str_plain_frame_str_plain_pong_frame_tuple;
PyObject *const_tuple_str_plain_self_str_plain_data_str_plain_fin_tuple;
PyObject *const_tuple_str_plain_self_str_plain_frame_tuple;
PyObject *const_tuple_str_plain_self_str_plain_state_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[246];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("websockets.protocol"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_uuid);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_uuid4);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_id);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_logging);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_b4cfe57e7a7c5d859ef172016f38f714);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_logger);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_isEnabledFor);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEBUG);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_debug);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_side);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_state);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_max_message_size);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_max_fragment_size);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_current_size);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_expect_continuation_frame);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_extensions);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_subprotocol);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_close_rcvd);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_close_sent);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_close_rcvd_then_sent);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_handshake_exc);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_eof_sent);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_StreamReader);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_reader);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_events);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_writes);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_parser);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_parser_exc);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain__state);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_cf172e2ea8a55afe62c198a7709a31a7);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_2da91eb9301980fdca19d95b93f530b6);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_CLOSED);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_CloseCode);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_ABNORMAL_CLOSURE);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_code);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_5f6b9a7beab5c84fec7eb731ca88c2e3);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_reason);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_4e6d06f9ecfbc7b84f72c0aa9d2c58fa);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_4506a6ea80e6c4ea1e1e4cfd0b08f7a8);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_OK_CLOSE_CODES);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionClosedOK);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionClosedError);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain___cause__);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_6fdb368c1ba25e9a376d76c54197be88);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_feed_data);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_8dd4c68f2ad4263f21c1532967e27520);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_eof);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_feed_eof);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_0d77c13731b083432ce32d88b93a9f1b);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_ProtocolError);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a22e9e9a4815278d6fb39e1f930c4d87_tuple);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_OPEN);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidState);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_digest_c01c51d0279b9341535e9c65fe845211);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_send_frame);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_Frame);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_OP_CONT);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_61511e21f5be559024b619c4e019ed0c);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a1ca2c1d6c0cc693d5616595c1943bf3_tuple);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_OP_TEXT);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_77ab108b5bf1f73af273e039096fefa7);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_OP_BINARY);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_59d2a709bf1c4438bbbc271cf15e4a61);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_0090efbc893f3364b67f36cecf938216_tuple);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_Close);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_NO_STATUS_RCVD);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_serialize);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_OP_CLOSE);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_CLOSING);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_0b7f7f4af88b4c4e6f29599888913e4e);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_OP_PING);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_5e69653c320343a95bb75b6d23f9ca37);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_OP_PONG);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_2046667b8c630facbcfede63b2e291ec);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_SERVER);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_send_eof);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_discard);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_fe361088a02c7f541eab9966f60bb29e);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_604b46b6acb3a5b35a0758da6de214a0);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_digest_d17f3846b6ea249e42ad8b9aa3b080f2);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_CONNECTING);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_digest_7c9863627c68ddf0d4c2f99f909a7e34);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_b38b7d2d28c2455c4f2887607c043224);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_at_eof);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c75a0defaf8d9a13f7c93cdc63f80b31_tuple);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_digest_da6d1f64c16d9bbd1b14da2673e5ef21);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_min);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_read_exact);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_mask_str_plain_max_size_str_plain_extensions_tuple);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_222bd0d7fdce5a655e754c1b048cf78d);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_recv_frame);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_fail);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_PROTOCOL_ERROR);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_INVALID_DATA);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_digest_3ac33d9850d9d7a7d2782efa72a2d403);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_start);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_PayloadTooBig);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_current_size);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_MESSAGE_TOO_BIG);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_error);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_4fd9aa2a52973b8b61ab3b7b61d3c486_true_tuple);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exc_info_tuple);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_INTERNAL_ERROR);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_digest_afb2d0eff73f028df2bd91e32cc9eaf5);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_digest_87727ab499511692afe24137b37bda4b);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_10852fb3b026a7626daf6973e58903c2);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_CLIENT);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_digest_4cbf954de7b23ee7d734e1b0d6f8d03c);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc4e579514737aae7c6d0e999283b1c9);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_opcode);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_fin);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_data);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_9f85ec54bccb123247005f3d08f0100f_tuple);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_digest_05c4874b2524d0437df74263d0cf866d);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_02x);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_digest_57a861628633d14384e171015b7e9fa0);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_digest_80cdda66c11f8d6336cf3636d3981b0f);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_mask_str_plain_extensions_tuple);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_01473d63ff65b4c02d86f75a2f0b57c9_tuple);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_SEND_EOF);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_enum);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Generator_tuple);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_Generator);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_tuple_3520041fb0e264576a2b71f8b5943791_tuple);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionClosed);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Extension_tuple);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_Extension);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_frames);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_tuple_eed96743e6a2c6597e4aa97ac0c2ae4b_tuple);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_http11);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Request_str_plain_Response_tuple);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_Request);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_Response);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_streams);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_StreamReader_tuple);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_tuple_a7d1027478eeb662f2180c7a8d510dfa_tuple);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_BytesLike);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain_LoggerLike);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_Origin);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_Subprotocol);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_list_49aea8477c302808c50cc9def784047a_list);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_Event);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_IntEnum);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain_Side);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_digest_3cd6ac1bd1cb919941d493834e2ad6f0);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_digest_5eac742e0b1285e3eb657a6984114ce7);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_int_pos_45);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_2_tuple);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain_State);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_digest_f3232ebaf2e03f8d55a1299d263b5a90);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_int_pos_55);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_4_tuple);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_digest_cb80e1e685f9070e7392b65779f535a3);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain_Protocol);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_int_pos_71);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain_max_size);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_int_pos_1048576);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_dict_724f86ab616c907a6b9df68c7077f64f);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_digest_b96fac313115d5169230e3421a1f9f27);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_dict_872c1239b13eee6130c05d2e988489c5);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_digest_7c012172864373037a6b2f56188d81a8);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_plain_setter);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_dict_2749590df7593f480ccc68138d274ac5);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_dict_4ceb13db20db0a5d6b10c13b92db4345);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_plain_close_code);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_digest_16f80b062d8ffea5e563cca87945ba86);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_plain_close_reason);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_digest_ad577b78bc9f41122546e8c4d2e9359a);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_dict_23fba3063950d2e9ec90a2a5552d0410);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_plain_close_exc);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_digest_422d4440266e4856b97ec893b4a4aa56);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_dict_d97434bec4d8753174e1f5e59bdf6c3a);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_plain_receive_data);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_digest_6005beaea5f560caab9d863a3e90e8af);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_str_plain_receive_eof);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_digest_04322128f45b8605e2a9b58fe48f547f);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_dict_f65636fbb25e9a2cc50bdf4372172db0);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_str_plain_send_continuation);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_str_digest_293328105b5a1b985eae796a0e94981b);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_str_plain_send_text);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_digest_d280bbd095b32120e8f02b8520f31f44);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_str_plain_send_binary);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_str_digest_26b7b944b739f5500015ae9666b0d991);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_tuple_none_str_empty_tuple);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_dict_a568723f5fd31797777e30eff7cc899b);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_str_plain_send_close);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_str_digest_41ce80a45f4eb6fdcab6c5007f38df47);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_dict_3b552aeabeb6f8a78aa6f219823650a4);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_str_plain_send_ping);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_str_digest_36905314b676209cb03c42f03ee9679e);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_str_plain_send_pong);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_str_digest_b62621193b1d7b030b0285b5f9736aa0);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_tuple_str_empty_tuple);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_dict_87a3f0b3d0a040552dc0c998c42cb021);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_str_digest_a30839757adba178836cfad05add5445);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_dict_3c152de3bdbbfdc26015c4bc5b58b19d);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_str_plain_events_received);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_str_digest_948c7f7bd0c933664cd5cd4e6ee29d86);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_dict_8bac5993459d60a1f3d5d83c33b91c50);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_str_plain_data_to_send);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_str_digest_c46d7d9f95b3611f8a8c356052483c60);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_str_plain_close_expected);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_str_digest_c87b8a39e4a4f8712de14c2273e08015);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_dict_a34d90b90400a0d4208eb8f23ecaf5f5);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_dict_17fcd30e4eb497b13d2db75bb020fd9c);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_str_digest_d44f9d35043858a3728280037ae9bfde);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_str_digest_8f70d9706108ed7e76763475f6624465);
mod_consts_hash[229] = DEEP_HASH(tstate, mod_consts.const_str_digest_17e60704bef1fc47962bdd5b60039802);
mod_consts_hash[230] = DEEP_HASH(tstate, mod_consts.const_tuple_26db5d65ef245a6de67cc4c0ec89f517_tuple);
mod_consts_hash[231] = DEEP_HASH(tstate, mod_consts.const_str_digest_0966133bdd9ef717ecc08b7926f4d229);
mod_consts_hash[232] = DEEP_HASH(tstate, mod_consts.const_str_digest_a2b53898ad8d8612b131cc4e494e5f10);
mod_consts_hash[233] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[234] = DEEP_HASH(tstate, mod_consts.const_tuple_8807519efc9509dce67da6fb68759e03_tuple);
mod_consts_hash[235] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[236] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_exc_type_str_plain_exc_tuple);
mod_consts_hash[237] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_writes_tuple);
mod_consts_hash[238] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_events_tuple);
mod_consts_hash[239] = DEEP_HASH(tstate, mod_consts.const_tuple_deb1d79403b3c13bb7843de1395ac5db_tuple);
mod_consts_hash[240] = DEEP_HASH(tstate, mod_consts.const_tuple_283fd8dcf0afc4f8c51de8c19f4864f5_tuple);
mod_consts_hash[241] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_data_tuple);
mod_consts_hash[242] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_frame_str_plain_pong_frame_tuple);
mod_consts_hash[243] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain_fin_tuple);
mod_consts_hash[244] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_frame_tuple);
mod_consts_hash[245] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_state_tuple);
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
void checkModuleConstants_websockets$protocol(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_uuid));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_uuid);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_uuid4));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_uuid4);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_id);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_logging));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logging);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getLogger);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_b4cfe57e7a7c5d859ef172016f38f714));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b4cfe57e7a7c5d859ef172016f38f714);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_logger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logger);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_isEnabledFor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isEnabledFor);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEBUG));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEBUG);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_debug));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_debug);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_side));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_side);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_state));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_state);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_max_message_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max_message_size);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_max_fragment_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max_fragment_size);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_current_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_current_size);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_expect_continuation_frame));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_expect_continuation_frame);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extensions);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_subprotocol));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_subprotocol);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_close_rcvd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_close_rcvd);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_close_sent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_close_sent);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_close_rcvd_then_sent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_close_rcvd_then_sent);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_handshake_exc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_handshake_exc);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_eof_sent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_eof_sent);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_StreamReader));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StreamReader);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_reader));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reader);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_events));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_events);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_writes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_writes);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_parser));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parser);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_parser_exc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parser_exc);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain__state));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__state);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_cf172e2ea8a55afe62c198a7709a31a7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cf172e2ea8a55afe62c198a7709a31a7);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_2da91eb9301980fdca19d95b93f530b6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2da91eb9301980fdca19d95b93f530b6);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_CLOSED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CLOSED);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_CloseCode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CloseCode);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_ABNORMAL_CLOSURE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ABNORMAL_CLOSURE);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_code));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_code);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_5f6b9a7beab5c84fec7eb731ca88c2e3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5f6b9a7beab5c84fec7eb731ca88c2e3);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_reason));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reason);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_4e6d06f9ecfbc7b84f72c0aa9d2c58fa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4e6d06f9ecfbc7b84f72c0aa9d2c58fa);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_4506a6ea80e6c4ea1e1e4cfd0b08f7a8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4506a6ea80e6c4ea1e1e4cfd0b08f7a8);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_OK_CLOSE_CODES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OK_CLOSE_CODES);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionClosedOK));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConnectionClosedOK);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionClosedError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConnectionClosedError);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain___cause__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___cause__);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_6fdb368c1ba25e9a376d76c54197be88));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6fdb368c1ba25e9a376d76c54197be88);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_feed_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_feed_data);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_8dd4c68f2ad4263f21c1532967e27520));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8dd4c68f2ad4263f21c1532967e27520);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_eof));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_eof);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_feed_eof));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_feed_eof);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_0d77c13731b083432ce32d88b93a9f1b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0d77c13731b083432ce32d88b93a9f1b);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_ProtocolError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ProtocolError);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a22e9e9a4815278d6fb39e1f930c4d87_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_a22e9e9a4815278d6fb39e1f930c4d87_tuple);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_OPEN));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OPEN);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidState));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidState);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_digest_c01c51d0279b9341535e9c65fe845211));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c01c51d0279b9341535e9c65fe845211);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_send_frame));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_send_frame);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_Frame));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Frame);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_OP_CONT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OP_CONT);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_61511e21f5be559024b619c4e019ed0c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_61511e21f5be559024b619c4e019ed0c);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a1ca2c1d6c0cc693d5616595c1943bf3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_a1ca2c1d6c0cc693d5616595c1943bf3_tuple);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_OP_TEXT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OP_TEXT);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_77ab108b5bf1f73af273e039096fefa7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_77ab108b5bf1f73af273e039096fefa7);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_OP_BINARY));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OP_BINARY);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_59d2a709bf1c4438bbbc271cf15e4a61));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_59d2a709bf1c4438bbbc271cf15e4a61);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_0090efbc893f3364b67f36cecf938216_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_0090efbc893f3364b67f36cecf938216_tuple);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_Close));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Close);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_NO_STATUS_RCVD));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NO_STATUS_RCVD);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_serialize));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_serialize);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_OP_CLOSE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OP_CLOSE);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_CLOSING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CLOSING);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_0b7f7f4af88b4c4e6f29599888913e4e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0b7f7f4af88b4c4e6f29599888913e4e);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_OP_PING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OP_PING);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_5e69653c320343a95bb75b6d23f9ca37));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5e69653c320343a95bb75b6d23f9ca37);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_OP_PONG));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OP_PONG);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_2046667b8c630facbcfede63b2e291ec));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2046667b8c630facbcfede63b2e291ec);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_SERVER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SERVER);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_send_eof));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_send_eof);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_discard));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_discard);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_fe361088a02c7f541eab9966f60bb29e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fe361088a02c7f541eab9966f60bb29e);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_604b46b6acb3a5b35a0758da6de214a0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_604b46b6acb3a5b35a0758da6de214a0);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_digest_d17f3846b6ea249e42ad8b9aa3b080f2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d17f3846b6ea249e42ad8b9aa3b080f2);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_CONNECTING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CONNECTING);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_digest_7c9863627c68ddf0d4c2f99f909a7e34));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7c9863627c68ddf0d4c2f99f909a7e34);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_b38b7d2d28c2455c4f2887607c043224));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b38b7d2d28c2455c4f2887607c043224);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_at_eof));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_at_eof);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c75a0defaf8d9a13f7c93cdc63f80b31_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_c75a0defaf8d9a13f7c93cdc63f80b31_tuple);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_digest_da6d1f64c16d9bbd1b14da2673e5ef21));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_da6d1f64c16d9bbd1b14da2673e5ef21);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_min));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_min);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_read_exact));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_read_exact);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_mask_str_plain_max_size_str_plain_extensions_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_mask_str_plain_max_size_str_plain_extensions_tuple);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_222bd0d7fdce5a655e754c1b048cf78d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_222bd0d7fdce5a655e754c1b048cf78d);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_recv_frame));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_recv_frame);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_fail));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fail);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_PROTOCOL_ERROR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PROTOCOL_ERROR);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_INVALID_DATA));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_INVALID_DATA);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_digest_3ac33d9850d9d7a7d2782efa72a2d403));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3ac33d9850d9d7a7d2782efa72a2d403);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_start));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_start);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_PayloadTooBig));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PayloadTooBig);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_current_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_current_size);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_MESSAGE_TOO_BIG));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MESSAGE_TOO_BIG);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_error);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_4fd9aa2a52973b8b61ab3b7b61d3c486_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_4fd9aa2a52973b8b61ab3b7b61d3c486_true_tuple);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exc_info_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_exc_info_tuple);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_INTERNAL_ERROR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_INTERNAL_ERROR);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_digest_afb2d0eff73f028df2bd91e32cc9eaf5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_afb2d0eff73f028df2bd91e32cc9eaf5);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_digest_87727ab499511692afe24137b37bda4b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_87727ab499511692afe24137b37bda4b);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_10852fb3b026a7626daf6973e58903c2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_10852fb3b026a7626daf6973e58903c2);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_CLIENT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CLIENT);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_digest_4cbf954de7b23ee7d734e1b0d6f8d03c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4cbf954de7b23ee7d734e1b0d6f8d03c);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc4e579514737aae7c6d0e999283b1c9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc4e579514737aae7c6d0e999283b1c9);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_opcode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_opcode);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_fin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fin);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_data);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_9f85ec54bccb123247005f3d08f0100f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_9f85ec54bccb123247005f3d08f0100f_tuple);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_digest_05c4874b2524d0437df74263d0cf866d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_05c4874b2524d0437df74263d0cf866d);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_02x));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_02x);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_digest_57a861628633d14384e171015b7e9fa0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_57a861628633d14384e171015b7e9fa0);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_digest_80cdda66c11f8d6336cf3636d3981b0f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_80cdda66c11f8d6336cf3636d3981b0f);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_mask_str_plain_extensions_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_mask_str_plain_extensions_tuple);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_01473d63ff65b4c02d86f75a2f0b57c9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_01473d63ff65b4c02d86f75a2f0b57c9_tuple);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_SEND_EOF));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SEND_EOF);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_enum));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_enum);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Generator_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Generator_tuple);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_Generator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Generator);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_tuple_3520041fb0e264576a2b71f8b5943791_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_3520041fb0e264576a2b71f8b5943791_tuple);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionClosed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConnectionClosed);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Extension_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Extension_tuple);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_Extension));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Extension);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_frames));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_frames);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_tuple_eed96743e6a2c6597e4aa97ac0c2ae4b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_eed96743e6a2c6597e4aa97ac0c2ae4b_tuple);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_http11));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_http11);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Request_str_plain_Response_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Request_str_plain_Response_tuple);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_Request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Request);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_Response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Response);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_streams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_streams);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_StreamReader_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_StreamReader_tuple);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_tuple_a7d1027478eeb662f2180c7a8d510dfa_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a7d1027478eeb662f2180c7a8d510dfa_tuple);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_BytesLike));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BytesLike);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain_LoggerLike));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LoggerLike);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_Origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Origin);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_Subprotocol));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Subprotocol);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_list_49aea8477c302808c50cc9def784047a_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_49aea8477c302808c50cc9def784047a_list);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_Event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Event);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_IntEnum));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IntEnum);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain_Side));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Side);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_digest_3cd6ac1bd1cb919941d493834e2ad6f0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3cd6ac1bd1cb919941d493834e2ad6f0);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_digest_5eac742e0b1285e3eb657a6984114ce7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5eac742e0b1285e3eb657a6984114ce7);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_int_pos_45));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_45);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_2_tuple);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain_State));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_State);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_digest_f3232ebaf2e03f8d55a1299d263b5a90));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f3232ebaf2e03f8d55a1299d263b5a90);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_int_pos_55));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_55);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_4_tuple);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_digest_cb80e1e685f9070e7392b65779f535a3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cb80e1e685f9070e7392b65779f535a3);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain_Protocol));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Protocol);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_int_pos_71));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_71);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain_max_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max_size);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_int_pos_1048576));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_1048576);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_dict_724f86ab616c907a6b9df68c7077f64f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_724f86ab616c907a6b9df68c7077f64f);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_digest_b96fac313115d5169230e3421a1f9f27));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b96fac313115d5169230e3421a1f9f27);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_dict_872c1239b13eee6130c05d2e988489c5));
CHECK_OBJECT_DEEP(mod_consts.const_dict_872c1239b13eee6130c05d2e988489c5);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_digest_7c012172864373037a6b2f56188d81a8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7c012172864373037a6b2f56188d81a8);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_plain_setter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_setter);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_dict_2749590df7593f480ccc68138d274ac5));
CHECK_OBJECT_DEEP(mod_consts.const_dict_2749590df7593f480ccc68138d274ac5);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_dict_4ceb13db20db0a5d6b10c13b92db4345));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4ceb13db20db0a5d6b10c13b92db4345);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_plain_close_code));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_close_code);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_digest_16f80b062d8ffea5e563cca87945ba86));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_16f80b062d8ffea5e563cca87945ba86);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071));
CHECK_OBJECT_DEEP(mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_plain_close_reason));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_close_reason);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_digest_ad577b78bc9f41122546e8c4d2e9359a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ad577b78bc9f41122546e8c4d2e9359a);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_dict_23fba3063950d2e9ec90a2a5552d0410));
CHECK_OBJECT_DEEP(mod_consts.const_dict_23fba3063950d2e9ec90a2a5552d0410);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_plain_close_exc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_close_exc);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_digest_422d4440266e4856b97ec893b4a4aa56));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_422d4440266e4856b97ec893b4a4aa56);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_dict_d97434bec4d8753174e1f5e59bdf6c3a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d97434bec4d8753174e1f5e59bdf6c3a);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_plain_receive_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_receive_data);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_digest_6005beaea5f560caab9d863a3e90e8af));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6005beaea5f560caab9d863a3e90e8af);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_str_plain_receive_eof));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_receive_eof);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_digest_04322128f45b8605e2a9b58fe48f547f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_04322128f45b8605e2a9b58fe48f547f);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_dict_f65636fbb25e9a2cc50bdf4372172db0));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f65636fbb25e9a2cc50bdf4372172db0);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_str_plain_send_continuation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_send_continuation);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_str_digest_293328105b5a1b985eae796a0e94981b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_293328105b5a1b985eae796a0e94981b);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_str_plain_send_text));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_send_text);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_digest_d280bbd095b32120e8f02b8520f31f44));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d280bbd095b32120e8f02b8520f31f44);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_str_plain_send_binary));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_send_binary);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_str_digest_26b7b944b739f5500015ae9666b0d991));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_26b7b944b739f5500015ae9666b0d991);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_tuple_none_str_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_str_empty_tuple);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_dict_a568723f5fd31797777e30eff7cc899b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a568723f5fd31797777e30eff7cc899b);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_str_plain_send_close));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_send_close);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_str_digest_41ce80a45f4eb6fdcab6c5007f38df47));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_41ce80a45f4eb6fdcab6c5007f38df47);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_dict_3b552aeabeb6f8a78aa6f219823650a4));
CHECK_OBJECT_DEEP(mod_consts.const_dict_3b552aeabeb6f8a78aa6f219823650a4);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_str_plain_send_ping));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_send_ping);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_str_digest_36905314b676209cb03c42f03ee9679e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_36905314b676209cb03c42f03ee9679e);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_str_plain_send_pong));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_send_pong);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_str_digest_b62621193b1d7b030b0285b5f9736aa0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b62621193b1d7b030b0285b5f9736aa0);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_tuple_str_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_empty_tuple);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_dict_87a3f0b3d0a040552dc0c998c42cb021));
CHECK_OBJECT_DEEP(mod_consts.const_dict_87a3f0b3d0a040552dc0c998c42cb021);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_str_digest_a30839757adba178836cfad05add5445));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a30839757adba178836cfad05add5445);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_dict_3c152de3bdbbfdc26015c4bc5b58b19d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_3c152de3bdbbfdc26015c4bc5b58b19d);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_str_plain_events_received));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_events_received);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_str_digest_948c7f7bd0c933664cd5cd4e6ee29d86));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_948c7f7bd0c933664cd5cd4e6ee29d86);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_dict_8bac5993459d60a1f3d5d83c33b91c50));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8bac5993459d60a1f3d5d83c33b91c50);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_str_plain_data_to_send));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_data_to_send);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_str_digest_c46d7d9f95b3611f8a8c356052483c60));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c46d7d9f95b3611f8a8c356052483c60);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_str_plain_close_expected));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_close_expected);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_str_digest_c87b8a39e4a4f8712de14c2273e08015));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c87b8a39e4a4f8712de14c2273e08015);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_dict_a34d90b90400a0d4208eb8f23ecaf5f5));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a34d90b90400a0d4208eb8f23ecaf5f5);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_dict_17fcd30e4eb497b13d2db75bb020fd9c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_17fcd30e4eb497b13d2db75bb020fd9c);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_str_digest_d44f9d35043858a3728280037ae9bfde));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d44f9d35043858a3728280037ae9bfde);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_str_digest_8f70d9706108ed7e76763475f6624465));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8f70d9706108ed7e76763475f6624465);
assert(mod_consts_hash[229] == DEEP_HASH(tstate, mod_consts.const_str_digest_17e60704bef1fc47962bdd5b60039802));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_17e60704bef1fc47962bdd5b60039802);
assert(mod_consts_hash[230] == DEEP_HASH(tstate, mod_consts.const_tuple_26db5d65ef245a6de67cc4c0ec89f517_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_26db5d65ef245a6de67cc4c0ec89f517_tuple);
assert(mod_consts_hash[231] == DEEP_HASH(tstate, mod_consts.const_str_digest_0966133bdd9ef717ecc08b7926f4d229));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0966133bdd9ef717ecc08b7926f4d229);
assert(mod_consts_hash[232] == DEEP_HASH(tstate, mod_consts.const_str_digest_a2b53898ad8d8612b131cc4e494e5f10));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a2b53898ad8d8612b131cc4e494e5f10);
assert(mod_consts_hash[233] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[234] == DEEP_HASH(tstate, mod_consts.const_tuple_8807519efc9509dce67da6fb68759e03_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8807519efc9509dce67da6fb68759e03_tuple);
assert(mod_consts_hash[235] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[236] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_exc_type_str_plain_exc_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_exc_type_str_plain_exc_tuple);
assert(mod_consts_hash[237] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_writes_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_writes_tuple);
assert(mod_consts_hash[238] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_events_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_events_tuple);
assert(mod_consts_hash[239] == DEEP_HASH(tstate, mod_consts.const_tuple_deb1d79403b3c13bb7843de1395ac5db_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_deb1d79403b3c13bb7843de1395ac5db_tuple);
assert(mod_consts_hash[240] == DEEP_HASH(tstate, mod_consts.const_tuple_283fd8dcf0afc4f8c51de8c19f4864f5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_283fd8dcf0afc4f8c51de8c19f4864f5_tuple);
assert(mod_consts_hash[241] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_data_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_data_tuple);
assert(mod_consts_hash[242] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_frame_str_plain_pong_frame_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_frame_str_plain_pong_frame_tuple);
assert(mod_consts_hash[243] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain_fin_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain_fin_tuple);
assert(mod_consts_hash[244] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_frame_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_frame_tuple);
assert(mod_consts_hash[245] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_state_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_state_tuple);
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
static PyObject *module_var_accessor_websockets$protocol$CLIENT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$protocol->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$protocol->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_CLIENT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$protocol->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_CLIENT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_CLIENT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CLIENT);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$protocol$CLOSED(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$protocol->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$protocol->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_CLOSED);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$protocol->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CLOSED);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CLOSED, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CLOSED);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CLOSED, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_CLOSED);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_CLOSED);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CLOSED);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$protocol$CLOSING(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$protocol->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$protocol->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_CLOSING);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$protocol->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CLOSING);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CLOSING, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CLOSING);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CLOSING, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_CLOSING);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_CLOSING);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CLOSING);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$protocol$CONNECTING(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$protocol->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$protocol->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_CONNECTING);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$protocol->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CONNECTING);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CONNECTING, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CONNECTING);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CONNECTING, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_CONNECTING);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_CONNECTING);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CONNECTING);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$protocol$Close(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$protocol->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$protocol->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_Close);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$protocol->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Close);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Close, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Close);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Close, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_Close);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_Close);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Close);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$protocol$CloseCode(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$protocol->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$protocol->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_CloseCode);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$protocol->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CloseCode);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CloseCode, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CloseCode);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CloseCode, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_CloseCode);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_CloseCode);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CloseCode);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$protocol$ConnectionClosedError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$protocol->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$protocol->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionClosedError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$protocol->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ConnectionClosedError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ConnectionClosedError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ConnectionClosedError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ConnectionClosedError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionClosedError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionClosedError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionClosedError);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$protocol$ConnectionClosedOK(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$protocol->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$protocol->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionClosedOK);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$protocol->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ConnectionClosedOK);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ConnectionClosedOK, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ConnectionClosedOK);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ConnectionClosedOK, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionClosedOK);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionClosedOK);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionClosedOK);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$protocol$Frame(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$protocol->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$protocol->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_Frame);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$protocol->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Frame);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Frame, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Frame);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Frame, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_Frame);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_Frame);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Frame);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$protocol$InvalidState(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$protocol->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$protocol->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidState);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$protocol->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InvalidState);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InvalidState, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InvalidState);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InvalidState, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidState);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidState);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidState);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$protocol$OK_CLOSE_CODES(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$protocol->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$protocol->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_OK_CLOSE_CODES);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$protocol->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OK_CLOSE_CODES);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OK_CLOSE_CODES, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OK_CLOSE_CODES);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OK_CLOSE_CODES, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_OK_CLOSE_CODES);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_OK_CLOSE_CODES);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_OK_CLOSE_CODES);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$protocol$OPEN(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$protocol->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$protocol->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_OPEN);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$protocol->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OPEN);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OPEN, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OPEN);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OPEN, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_OPEN);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_OPEN);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_OPEN);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$protocol$OP_BINARY(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$protocol->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$protocol->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_BINARY);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$protocol->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OP_BINARY);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OP_BINARY, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OP_BINARY);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OP_BINARY, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_BINARY);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_BINARY);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_BINARY);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$protocol$OP_CLOSE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$protocol->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$protocol->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_CLOSE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$protocol->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OP_CLOSE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OP_CLOSE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OP_CLOSE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OP_CLOSE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_CLOSE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_CLOSE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_CLOSE);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$protocol$OP_CONT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$protocol->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$protocol->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_CONT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$protocol->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OP_CONT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OP_CONT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OP_CONT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OP_CONT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_CONT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_CONT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_CONT);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$protocol$OP_PING(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$protocol->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$protocol->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_PING);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$protocol->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OP_PING);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OP_PING, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OP_PING);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OP_PING, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_PING);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_PING);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_PING);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$protocol$OP_PONG(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$protocol->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$protocol->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_PONG);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$protocol->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OP_PONG);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OP_PONG, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OP_PONG);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OP_PONG, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_PONG);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_PONG);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_PONG);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$protocol$OP_TEXT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$protocol->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$protocol->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_TEXT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$protocol->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OP_TEXT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OP_TEXT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OP_TEXT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OP_TEXT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_TEXT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_TEXT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_TEXT);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$protocol$PayloadTooBig(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$protocol->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$protocol->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_PayloadTooBig);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$protocol->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PayloadTooBig);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PayloadTooBig, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PayloadTooBig);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PayloadTooBig, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_PayloadTooBig);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_PayloadTooBig);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PayloadTooBig);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$protocol$ProtocolError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$protocol->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$protocol->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_ProtocolError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$protocol->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ProtocolError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ProtocolError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ProtocolError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ProtocolError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_ProtocolError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_ProtocolError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ProtocolError);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$protocol$Request(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$protocol->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$protocol->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_Request);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$protocol->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_Request);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_Request);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Request);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$protocol$Response(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$protocol->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$protocol->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_Response);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$protocol->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_Response);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_Response);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Response);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$protocol$SEND_EOF(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$protocol->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$protocol->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_SEND_EOF);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$protocol->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SEND_EOF);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SEND_EOF, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SEND_EOF);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SEND_EOF, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_SEND_EOF);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_SEND_EOF);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SEND_EOF);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$protocol$SERVER(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$protocol->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$protocol->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_SERVER);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$protocol->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_SERVER);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_SERVER);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SERVER);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$protocol$Side(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$protocol->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$protocol->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_Side);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$protocol->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Side);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Side, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Side);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Side, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_Side);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_Side);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Side);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$protocol$State(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$protocol->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$protocol->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_State);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$protocol->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_State);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_State, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_State);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_State, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_State);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_State);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_State);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$protocol$StreamReader(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$protocol->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$protocol->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_StreamReader);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$protocol->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_StreamReader);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_StreamReader, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_StreamReader);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_StreamReader, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_StreamReader);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_StreamReader);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_StreamReader);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$protocol$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$protocol->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$protocol->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$protocol->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$protocol$enum(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$protocol->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$protocol->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_enum);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$protocol->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_enum);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_enum, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_enum);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_enum, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_enum);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_enum);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_enum);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$protocol$logging(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$protocol->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$protocol->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$protocol->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_logging);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_logging, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_logging);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_logging, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$protocol$uuid(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$protocol->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$protocol->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_uuid);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$protocol->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_uuid);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_uuid, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_uuid);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_uuid, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_uuid);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_uuid);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_uuid);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_bef4b16a31fcfb3f380d09db6951d079;
static PyCodeObject *code_objects_5343cd7c87e8007cb344e92281b78979;
static PyCodeObject *code_objects_333e4926fc0acb9ac824c1f2d17cffb7;
static PyCodeObject *code_objects_d8f3eb2de76ac2412a47837052a93ee3;
static PyCodeObject *code_objects_0d33bfed59d4e93805e1fb6f9e7c48b5;
static PyCodeObject *code_objects_2888f340974fda5bb8c8a14daf920437;
static PyCodeObject *code_objects_f4b3eb2c46ff0d0d36d10272ea8cbb7c;
static PyCodeObject *code_objects_4c31acede4e3d2b77a61ad2a74c9bac8;
static PyCodeObject *code_objects_3ebbae6f85792ec0bae3d062d4f9fb3f;
static PyCodeObject *code_objects_60c2b9e39ce739d965ffdd2d16e7072e;
static PyCodeObject *code_objects_5b333e637eabbd00a2c0870ce8fbfb41;
static PyCodeObject *code_objects_6a7d4607a5933ea26f76865e2f2beba9;
static PyCodeObject *code_objects_1a2089e721b9c43fa3e32eadf32db61b;
static PyCodeObject *code_objects_b328e2bae753ceacdbf75b1d908edb0f;
static PyCodeObject *code_objects_84cce1bdaa287014141ff7cb9a5c19b0;
static PyCodeObject *code_objects_dfb1494dc3b683a60a80c2164bd36d00;
static PyCodeObject *code_objects_37af3a1b412b29e4d367d8ec61a810bc;
static PyCodeObject *code_objects_c62b6b756bfc7050d9fc3ba80ffe536c;
static PyCodeObject *code_objects_febcde1ad55b068c2b5bfa22acc15d7c;
static PyCodeObject *code_objects_a74f17a63a64e119be3f59439075ac59;
static PyCodeObject *code_objects_a62ff1b057a7d054a59f8c8a1cb44a38;
static PyCodeObject *code_objects_9752c9851c741cbb478b325088d81053;
static PyCodeObject *code_objects_f65b164838d61548f90b1dab36fd128c;
static PyCodeObject *code_objects_b634bea97c79777baa05262644fe8cdf;
static PyCodeObject *code_objects_4291b49c0b28cac2603db75700398e93;
static PyCodeObject *code_objects_857e36c440eb8df7ac5d6951d8a757cc;
static PyCodeObject *code_objects_cfa1be10a33981e5a829b76030726707;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_0966133bdd9ef717ecc08b7926f4d229); CHECK_OBJECT(module_filename_obj);
code_objects_bef4b16a31fcfb3f380d09db6951d079 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_a2b53898ad8d8612b131cc4e494e5f10, mod_consts.const_str_digest_a2b53898ad8d8612b131cc4e494e5f10, NULL, NULL, 0, 0, 0);
code_objects_5343cd7c87e8007cb344e92281b78979 = MAKE_CODE_OBJECT(module_filename_obj, 71, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Protocol, mod_consts.const_str_plain_Protocol, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_333e4926fc0acb9ac824c1f2d17cffb7 = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Side, mod_consts.const_str_plain_Side, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_d8f3eb2de76ac2412a47837052a93ee3 = MAKE_CODE_OBJECT(module_filename_obj, 55, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_State, mod_consts.const_str_plain_State, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_0d33bfed59d4e93805e1fb6f9e7c48b5 = MAKE_CODE_OBJECT(module_filename_obj, 89, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_b96fac313115d5169230e3421a1f9f27, mod_consts.const_tuple_8807519efc9509dce67da6fb68759e03_tuple, NULL, 2, 3, 0);
code_objects_2888f340974fda5bb8c8a14daf920437 = MAKE_CODE_OBJECT(module_filename_obj, 182, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_close_code, mod_consts.const_str_digest_16f80b062d8ffea5e563cca87945ba86, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_f4b3eb2c46ff0d0d36d10272ea8cbb7c = MAKE_CODE_OBJECT(module_filename_obj, 220, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_close_exc, mod_consts.const_str_digest_422d4440266e4856b97ec893b4a4aa56, mod_consts.const_tuple_str_plain_self_str_plain_exc_type_str_plain_exc_tuple, NULL, 1, 0, 0);
code_objects_4c31acede4e3d2b77a61ad2a74c9bac8 = MAKE_CODE_OBJECT(module_filename_obj, 517, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_close_expected, mod_consts.const_str_digest_c87b8a39e4a4f8712de14c2273e08015, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_3ebbae6f85792ec0bae3d062d4f9fb3f = MAKE_CODE_OBJECT(module_filename_obj, 201, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_close_reason, mod_consts.const_str_digest_ad577b78bc9f41122546e8c4d2e9359a, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_60c2b9e39ce739d965ffdd2d16e7072e = MAKE_CODE_OBJECT(module_filename_obj, 497, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_data_to_send, mod_consts.const_str_digest_c46d7d9f95b3611f8a8c356052483c60, mod_consts.const_tuple_str_plain_self_str_plain_writes_tuple, NULL, 1, 0, 0);
code_objects_5b333e637eabbd00a2c0870ce8fbfb41 = MAKE_CODE_OBJECT(module_filename_obj, 641, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_discard, mod_consts.const_str_digest_dc4e579514737aae7c6d0e999283b1c9, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_6a7d4607a5933ea26f76865e2f2beba9 = MAKE_CODE_OBJECT(module_filename_obj, 481, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_events_received, mod_consts.const_str_digest_948c7f7bd0c933664cd5cd4e6ee29d86, mod_consts.const_tuple_str_plain_self_str_plain_events_tuple, NULL, 1, 0, 0);
code_objects_1a2089e721b9c43fa3e32eadf32db61b = MAKE_CODE_OBJECT(module_filename_obj, 432, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_fail, mod_consts.const_str_digest_a30839757adba178836cfad05add5445, mod_consts.const_tuple_deb1d79403b3c13bb7843de1395ac5db_tuple, NULL, 3, 0, 0);
code_objects_b328e2bae753ceacdbf75b1d908edb0f = MAKE_CODE_OBJECT(module_filename_obj, 562, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_parse, mod_consts.const_str_digest_87727ab499511692afe24137b37bda4b, mod_consts.const_tuple_283fd8dcf0afc4f8c51de8c19f4864f5_tuple, NULL, 1, 0, 0);
code_objects_84cce1bdaa287014141ff7cb9a5c19b0 = MAKE_CODE_OBJECT(module_filename_obj, 257, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_receive_data, mod_consts.const_str_digest_6005beaea5f560caab9d863a3e90e8af, mod_consts.const_tuple_str_plain_self_str_plain_data_tuple, NULL, 2, 0, 0);
code_objects_dfb1494dc3b683a60a80c2164bd36d00 = MAKE_CODE_OBJECT(module_filename_obj, 273, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_receive_eof, mod_consts.const_str_digest_04322128f45b8605e2a9b58fe48f547f, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_37af3a1b412b29e4d367d8ec61a810bc = MAKE_CODE_OBJECT(module_filename_obj, 671, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_recv_frame, mod_consts.const_str_digest_d44f9d35043858a3728280037ae9bfde, mod_consts.const_tuple_str_plain_self_str_plain_frame_str_plain_pong_frame_tuple, NULL, 2, 0, 0);
code_objects_c62b6b756bfc7050d9fc3ba80ffe536c = MAKE_CODE_OBJECT(module_filename_obj, 341, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_send_binary, mod_consts.const_str_digest_26b7b944b739f5500015ae9666b0d991, mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain_fin_tuple, NULL, 3, 0, 0);
code_objects_febcde1ad55b068c2b5bfa22acc15d7c = MAKE_CODE_OBJECT(module_filename_obj, 364, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_send_close, mod_consts.const_str_digest_41ce80a45f4eb6fdcab6c5007f38df47, mod_consts.const_tuple_deb1d79403b3c13bb7843de1395ac5db_tuple, NULL, 3, 0, 0);
code_objects_a74f17a63a64e119be3f59439075ac59 = MAKE_CODE_OBJECT(module_filename_obj, 294, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_send_continuation, mod_consts.const_str_digest_293328105b5a1b985eae796a0e94981b, mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain_fin_tuple, NULL, 3, 0, 0);
code_objects_a62ff1b057a7d054a59f8c8a1cb44a38 = MAKE_CODE_OBJECT(module_filename_obj, 763, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_send_eof, mod_consts.const_str_digest_17e60704bef1fc47962bdd5b60039802, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_9752c9851c741cbb478b325088d81053 = MAKE_CODE_OBJECT(module_filename_obj, 753, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_send_frame, mod_consts.const_str_digest_8f70d9706108ed7e76763475f6624465, mod_consts.const_tuple_str_plain_self_str_plain_frame_tuple, NULL, 2, 0, 0);
code_objects_f65b164838d61548f90b1dab36fd128c = MAKE_CODE_OBJECT(module_filename_obj, 400, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_send_ping, mod_consts.const_str_digest_36905314b676209cb03c42f03ee9679e, mod_consts.const_tuple_str_plain_self_str_plain_data_tuple, NULL, 2, 0, 0);
code_objects_b634bea97c79777baa05262644fe8cdf = MAKE_CODE_OBJECT(module_filename_obj, 416, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_send_pong, mod_consts.const_str_digest_b62621193b1d7b030b0285b5f9736aa0, mod_consts.const_tuple_str_plain_self_str_plain_data_tuple, NULL, 2, 0, 0);
code_objects_4291b49c0b28cac2603db75700398e93 = MAKE_CODE_OBJECT(module_filename_obj, 318, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_send_text, mod_consts.const_str_digest_d280bbd095b32120e8f02b8520f31f44, mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain_fin_tuple, NULL, 3, 0, 0);
code_objects_857e36c440eb8df7ac5d6951d8a757cc = MAKE_CODE_OBJECT(module_filename_obj, 161, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_state, mod_consts.const_str_digest_7c012172864373037a6b2f56188d81a8, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_cfa1be10a33981e5a829b76030726707 = MAKE_CODE_OBJECT(module_filename_obj, 176, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_state, mod_consts.const_str_digest_7c012172864373037a6b2f56188d81a8, mod_consts.const_tuple_str_plain_self_str_plain_state_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_websockets$protocol$$$function__19_parse$$$genobj__1_parse(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_websockets$protocol$$$function__20_discard$$$genobj__1_discard(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__10_send_text(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__11_send_binary(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__12_send_close(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__13_send_ping(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__14_send_pong(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__15_fail(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__16_events_received(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__17_data_to_send(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__18_close_expected(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__19_parse(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__1___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__20_discard(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__21_recv_frame(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__22_send_frame(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__23_send_eof(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__2_state(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__3_state(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__4_close_code(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__5_close_reason(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__6_close_exc(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__7_receive_data(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__8_receive_eof(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__9_send_continuation(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_websockets$protocol$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_side = python_pars[1];
PyObject *par_state = python_pars[2];
PyObject *par_max_size = python_pars[3];
PyObject *par_logger = python_pars[4];
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$protocol$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$protocol$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_websockets$protocol$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_websockets$protocol$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$protocol$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$protocol$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_0d33bfed59d4e93805e1fb6f9e7c48b5, module_websockets$protocol, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$protocol$$$function__1___init__->m_type_description == NULL);
frame_frame_websockets$protocol$$$function__1___init__ = cache_frame_frame_websockets$protocol$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$protocol$$$function__1___init__);
assert(Py_REFCNT(frame_frame_websockets$protocol$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_assattr_target_1;
tmp_called_instance_1 = module_var_accessor_websockets$protocol$uuid(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_uuid);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 98;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$protocol$$$function__1___init__->m_frame.f_lineno = 98;
tmp_assattr_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_uuid4);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_id, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_logger);
tmp_cmp_expr_left_1 = par_logger;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_expression_value_1 = module_var_accessor_websockets$protocol$logging(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 103;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_getLogger);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_b4cfe57e7a7c5d859ef172016f38f714;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_side);
tmp_expression_value_3 = par_side;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_name);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_lower);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
frame_frame_websockets$protocol$$$function__1___init__->m_frame.f_lineno = 103;
tmp_format_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_1 == NULL));
frame_frame_websockets$protocol$$$function__1___init__->m_frame.f_lineno = 103;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_logger;
    assert(old != NULL);
    par_logger = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_logger);
tmp_assattr_value_2 = par_logger;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_logger, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_logger);
tmp_expression_value_4 = par_logger;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_isEnabledFor);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = module_var_accessor_websockets$protocol$logging(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 108;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_DEBUG);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 108;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$protocol$$$function__1___init__->m_frame.f_lineno = 108;
tmp_assattr_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_debug, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_side);
tmp_assattr_value_4 = par_side;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_side, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(par_state);
tmp_assattr_value_5 = par_state;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_state, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_2;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_max_size);
tmp_isinstance_inst_1 = par_max_size;
tmp_isinstance_cls_1 = (PyObject *)&PyLong_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_max_size);
tmp_cmp_expr_left_2 = par_max_size;
tmp_cmp_expr_right_2 = Py_None;
tmp_or_right_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_2 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(par_max_size);
tmp_tuple_element_2 = par_max_size;
tmp_iter_arg_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_iter_arg_1, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = Py_None;
PyTuple_SET_ITEM0(tmp_iter_arg_1, 1, tmp_tuple_element_2);
tmp_assign_source_2 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
assert(!(tmp_assign_source_2 == NULL));
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 118;
type_description_1 = "ooooo";
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



exception_lineno = 118;
type_description_1 = "ooooo";
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



exception_lineno = 118;
type_description_1 = "ooooo";
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
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assattr_value_6 = tmp_tuple_unpack_1__element_1;
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain_max_message_size, tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assattr_value_7;
PyObject *tmp_assattr_target_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assattr_value_7 = tmp_tuple_unpack_1__element_2;
CHECK_OBJECT(par_self);
tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain_max_fragment_size, tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
}
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
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

goto branch_end_2;
branch_no_2:;
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(par_max_size);
tmp_iter_arg_2 = par_max_size;
tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
assert(tmp_tuple_unpack_2__source_iter == NULL);
tmp_tuple_unpack_2__source_iter = tmp_assign_source_5;
}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 120;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_1 == NULL);
tmp_tuple_unpack_2__element_1 = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 120;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_2 == NULL);
tmp_tuple_unpack_2__element_2 = tmp_assign_source_7;
}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 120;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assattr_value_8;
PyObject *tmp_assattr_target_8;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assattr_value_8 = tmp_tuple_unpack_2__element_1;
CHECK_OBJECT(par_self);
tmp_assattr_target_8 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain_max_message_size, tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assattr_value_9;
PyObject *tmp_assattr_target_9;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assattr_value_9 = tmp_tuple_unpack_2__element_2;
CHECK_OBJECT(par_self);
tmp_assattr_target_9 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts.const_str_plain_max_fragment_size, tmp_assattr_value_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
}
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

branch_end_2:;
{
PyObject *tmp_assattr_value_10;
PyObject *tmp_assattr_target_10;
tmp_assattr_value_10 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_10 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts.const_str_plain_current_size, tmp_assattr_value_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_11;
PyObject *tmp_assattr_target_11;
tmp_assattr_value_11 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_11 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts.const_str_plain_expect_continuation_frame, tmp_assattr_value_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_12;
PyObject *tmp_assattr_target_12;
tmp_assattr_value_12 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_12 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts.const_str_plain_origin, tmp_assattr_value_12);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_13;
PyObject *tmp_assattr_target_13;
tmp_assattr_value_13 = MAKE_LIST_EMPTY(tstate, 0);
CHECK_OBJECT(par_self);
tmp_assattr_target_13 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_13, mod_consts.const_str_plain_extensions, tmp_assattr_value_13);
CHECK_OBJECT(tmp_assattr_value_13);
Py_DECREF(tmp_assattr_value_13);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_14;
PyObject *tmp_assattr_target_14;
tmp_assattr_value_14 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_14 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_14, mod_consts.const_str_plain_subprotocol, tmp_assattr_value_14);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_15;
PyObject *tmp_assattr_target_15;
tmp_assattr_value_15 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_15 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_15, mod_consts.const_str_plain_close_rcvd, tmp_assattr_value_15);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_16;
PyObject *tmp_assattr_target_16;
tmp_assattr_value_16 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_16 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_16, mod_consts.const_str_plain_close_sent, tmp_assattr_value_16);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_17;
PyObject *tmp_assattr_target_17;
tmp_assattr_value_17 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_17 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_17, mod_consts.const_str_plain_close_rcvd_then_sent, tmp_assattr_value_17);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_18;
PyObject *tmp_assattr_target_18;
tmp_assattr_value_18 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_18 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_18, mod_consts.const_str_plain_handshake_exc, tmp_assattr_value_18);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_19;
PyObject *tmp_assattr_target_19;
tmp_assattr_value_19 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_19 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_19, mod_consts.const_str_plain_eof_sent, tmp_assattr_value_19);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_20;
PyObject *tmp_called_value_4;
PyObject *tmp_assattr_target_20;
tmp_called_value_4 = module_var_accessor_websockets$protocol$StreamReader(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_StreamReader);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 153;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$protocol$$$function__1___init__->m_frame.f_lineno = 153;
tmp_assattr_value_20 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
if (tmp_assattr_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_20 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_20, mod_consts.const_str_plain_reader, tmp_assattr_value_20);
CHECK_OBJECT(tmp_assattr_value_20);
Py_DECREF(tmp_assattr_value_20);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_21;
PyObject *tmp_assattr_target_21;
tmp_assattr_value_21 = MAKE_LIST_EMPTY(tstate, 0);
CHECK_OBJECT(par_self);
tmp_assattr_target_21 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_21, mod_consts.const_str_plain_events, tmp_assattr_value_21);
CHECK_OBJECT(tmp_assattr_value_21);
Py_DECREF(tmp_assattr_value_21);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_22;
PyObject *tmp_assattr_target_22;
tmp_assattr_value_22 = MAKE_LIST_EMPTY(tstate, 0);
CHECK_OBJECT(par_self);
tmp_assattr_target_22 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_22, mod_consts.const_str_plain_writes, tmp_assattr_value_22);
CHECK_OBJECT(tmp_assattr_value_22);
Py_DECREF(tmp_assattr_value_22);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_23;
PyObject *tmp_called_instance_2;
PyObject *tmp_assattr_target_23;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_websockets$protocol$$$function__1___init__->m_frame.f_lineno = 156;
tmp_assattr_value_23 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_parse);
if (tmp_assattr_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_23 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_23, mod_consts.const_str_plain_parser, tmp_assattr_value_23);
CHECK_OBJECT(tmp_assattr_value_23);
Py_DECREF(tmp_assattr_value_23);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_value_value_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_next_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_value_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_parser);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_next_value_1 = ITERATOR_NEXT(tmp_value_value_1);
if (tmp_next_value_1 == NULL) {
    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

    if (!HAS_EXCEPTION_STATE(&exception_state)) {
        SET_EXCEPTION_PRESERVATION_STATE_STOP_ITERATION_EMPTY(tstate, &exception_state);
    }
}

CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_next_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 157;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_next_value_1);
Py_DECREF(tmp_next_value_1);
}
{
PyObject *tmp_assattr_value_24;
PyObject *tmp_assattr_target_24;
tmp_assattr_value_24 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_24 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_24, mod_consts.const_str_plain_parser_exc, tmp_assattr_value_24);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$protocol$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$protocol$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$protocol$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$protocol$$$function__1___init__,
    type_description_1,
    par_self,
    par_side,
    par_state,
    par_max_size,
    par_logger
);


// Release cached frame if used for exception.
if (frame_frame_websockets$protocol$$$function__1___init__ == cache_frame_frame_websockets$protocol$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$protocol$$$function__1___init__);
    cache_frame_frame_websockets$protocol$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_websockets$protocol$$$function__1___init__);

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
CHECK_OBJECT(par_logger);
CHECK_OBJECT(par_logger);
Py_DECREF(par_logger);
par_logger = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_logger);
par_logger = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_side);
Py_DECREF(par_side);
CHECK_OBJECT(par_state);
Py_DECREF(par_state);
CHECK_OBJECT(par_max_size);
Py_DECREF(par_max_size);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_side);
Py_DECREF(par_side);
CHECK_OBJECT(par_state);
Py_DECREF(par_state);
CHECK_OBJECT(par_max_size);
Py_DECREF(par_max_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_websockets$protocol$$$function__2_state(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_websockets$protocol$$$function__2_state;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$protocol$$$function__2_state = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$protocol$$$function__2_state)) {
    Py_XDECREF(cache_frame_frame_websockets$protocol$$$function__2_state);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$protocol$$$function__2_state == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$protocol$$$function__2_state = MAKE_FUNCTION_FRAME(tstate, code_objects_857e36c440eb8df7ac5d6951d8a757cc, module_websockets$protocol, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$protocol$$$function__2_state->m_type_description == NULL);
frame_frame_websockets$protocol$$$function__2_state = cache_frame_frame_websockets$protocol$$$function__2_state;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$protocol$$$function__2_state);
assert(Py_REFCNT(frame_frame_websockets$protocol$$$function__2_state) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__state);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$protocol$$$function__2_state, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$protocol$$$function__2_state->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$protocol$$$function__2_state, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$protocol$$$function__2_state,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_websockets$protocol$$$function__2_state == cache_frame_frame_websockets$protocol$$$function__2_state) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$protocol$$$function__2_state);
    cache_frame_frame_websockets$protocol$$$function__2_state = NULL;
}

assertFrameObject(frame_frame_websockets$protocol$$$function__2_state);

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


static PyObject *impl_websockets$protocol$$$function__3_state(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_state = python_pars[1];
struct Nuitka_FrameObject *frame_frame_websockets$protocol$$$function__3_state;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$protocol$$$function__3_state = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$protocol$$$function__3_state)) {
    Py_XDECREF(cache_frame_frame_websockets$protocol$$$function__3_state);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$protocol$$$function__3_state == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$protocol$$$function__3_state = MAKE_FUNCTION_FRAME(tstate, code_objects_cfa1be10a33981e5a829b76030726707, module_websockets$protocol, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$protocol$$$function__3_state->m_type_description == NULL);
frame_frame_websockets$protocol$$$function__3_state = cache_frame_frame_websockets$protocol$$$function__3_state;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$protocol$$$function__3_state);
assert(Py_REFCNT(frame_frame_websockets$protocol$$$function__3_state) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_debug);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 177;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_logger);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_debug);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_2da91eb9301980fdca19d95b93f530b6;
CHECK_OBJECT(par_state);
tmp_expression_value_4 = par_state;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_name);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 178;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$protocol$$$function__3_state->m_frame.f_lineno = 178;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_state);
tmp_assattr_value_1 = par_state;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__state, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$protocol$$$function__3_state, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$protocol$$$function__3_state->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$protocol$$$function__3_state, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$protocol$$$function__3_state,
    type_description_1,
    par_self,
    par_state
);


// Release cached frame if used for exception.
if (frame_frame_websockets$protocol$$$function__3_state == cache_frame_frame_websockets$protocol$$$function__3_state) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$protocol$$$function__3_state);
    cache_frame_frame_websockets$protocol$$$function__3_state = NULL;
}

assertFrameObject(frame_frame_websockets$protocol$$$function__3_state);

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
CHECK_OBJECT(par_state);
Py_DECREF(par_state);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_state);
Py_DECREF(par_state);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_websockets$protocol$$$function__4_close_code(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_websockets$protocol$$$function__4_close_code;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$protocol$$$function__4_close_code = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$protocol$$$function__4_close_code)) {
    Py_XDECREF(cache_frame_frame_websockets$protocol$$$function__4_close_code);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$protocol$$$function__4_close_code == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$protocol$$$function__4_close_code = MAKE_FUNCTION_FRAME(tstate, code_objects_2888f340974fda5bb8c8a14daf920437, module_websockets$protocol, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$protocol$$$function__4_close_code->m_type_description == NULL);
frame_frame_websockets$protocol$$$function__4_close_code = cache_frame_frame_websockets$protocol$$$function__4_close_code;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$protocol$$$function__4_close_code);
assert(Py_REFCNT(frame_frame_websockets$protocol$$$function__4_close_code) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_state);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = module_var_accessor_websockets$protocol$CLOSED(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CLOSED);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 193;
type_description_1 = "o";
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_1;
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_close_rcvd);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
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
PyObject *tmp_expression_value_3;
tmp_expression_value_3 = module_var_accessor_websockets$protocol$CloseCode(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CloseCode);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 196;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_ABNORMAL_CLOSURE);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_close_rcvd);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_code);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_end_2:;
branch_end_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$protocol$$$function__4_close_code, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$protocol$$$function__4_close_code->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$protocol$$$function__4_close_code, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$protocol$$$function__4_close_code,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_websockets$protocol$$$function__4_close_code == cache_frame_frame_websockets$protocol$$$function__4_close_code) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$protocol$$$function__4_close_code);
    cache_frame_frame_websockets$protocol$$$function__4_close_code = NULL;
}

assertFrameObject(frame_frame_websockets$protocol$$$function__4_close_code);

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


static PyObject *impl_websockets$protocol$$$function__5_close_reason(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_websockets$protocol$$$function__5_close_reason;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$protocol$$$function__5_close_reason = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$protocol$$$function__5_close_reason)) {
    Py_XDECREF(cache_frame_frame_websockets$protocol$$$function__5_close_reason);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$protocol$$$function__5_close_reason == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$protocol$$$function__5_close_reason = MAKE_FUNCTION_FRAME(tstate, code_objects_3ebbae6f85792ec0bae3d062d4f9fb3f, module_websockets$protocol, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$protocol$$$function__5_close_reason->m_type_description == NULL);
frame_frame_websockets$protocol$$$function__5_close_reason = cache_frame_frame_websockets$protocol$$$function__5_close_reason;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$protocol$$$function__5_close_reason);
assert(Py_REFCNT(frame_frame_websockets$protocol$$$function__5_close_reason) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_state);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = module_var_accessor_websockets$protocol$CLOSED(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CLOSED);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 212;
type_description_1 = "o";
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_1;
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_close_rcvd);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
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
tmp_return_value = const_str_empty;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_close_rcvd);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_reason);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_end_2:;
branch_end_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$protocol$$$function__5_close_reason, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$protocol$$$function__5_close_reason->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$protocol$$$function__5_close_reason, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$protocol$$$function__5_close_reason,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_websockets$protocol$$$function__5_close_reason == cache_frame_frame_websockets$protocol$$$function__5_close_reason) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$protocol$$$function__5_close_reason);
    cache_frame_frame_websockets$protocol$$$function__5_close_reason = NULL;
}

assertFrameObject(frame_frame_websockets$protocol$$$function__5_close_reason);

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


static PyObject *impl_websockets$protocol$$$function__6_close_exc(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_exc_type = NULL;
PyObject *var_exc = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$protocol$$$function__6_close_exc;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$protocol$$$function__6_close_exc = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_websockets$protocol$$$function__6_close_exc)) {
    Py_XDECREF(cache_frame_frame_websockets$protocol$$$function__6_close_exc);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$protocol$$$function__6_close_exc == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$protocol$$$function__6_close_exc = MAKE_FUNCTION_FRAME(tstate, code_objects_f4b3eb2c46ff0d0d36d10272ea8cbb7c, module_websockets$protocol, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$protocol$$$function__6_close_exc->m_type_description == NULL);
frame_frame_websockets$protocol$$$function__6_close_exc = cache_frame_frame_websockets$protocol$$$function__6_close_exc;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$protocol$$$function__6_close_exc);
assert(Py_REFCNT(frame_frame_websockets$protocol$$$function__6_close_exc) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_state);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = module_var_accessor_websockets$protocol$CLOSED(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CLOSED);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 235;
type_description_1 = "ooo";
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
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_4506a6ea80e6c4ea1e1e4cfd0b08f7a8;
frame_frame_websockets$protocol$$$function__6_close_exc->m_frame.f_lineno = 235;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_AssertionError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 235;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
int tmp_and_left_truth_2;
bool tmp_and_left_value_2;
bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_3;
int tmp_and_left_truth_3;
bool tmp_and_left_value_3;
bool tmp_and_right_value_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_close_rcvd);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_close_sent);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_and_left_value_2 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_close_rcvd);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_code);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = module_var_accessor_websockets$protocol$OK_CLOSE_CODES(tstate);
if (unlikely(tmp_cmp_expr_right_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OK_CLOSE_CODES);
}

if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_4);

exception_lineno = 240;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "ooo";
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
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_close_sent);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_code);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = module_var_accessor_websockets$protocol$OK_CLOSE_CODES(tstate);
if (unlikely(tmp_cmp_expr_right_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OK_CLOSE_CODES);
}

if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_5);

exception_lineno = 241;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_3 = (tmp_res == 1) ? true : false;
tmp_and_right_value_2 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_and_right_value_2 = tmp_and_left_value_3;
and_end_3:;
tmp_and_right_value_1 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_and_right_value_1 = tmp_and_left_value_2;
and_end_2:;
tmp_condition_result_2 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_2 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = module_var_accessor_websockets$protocol$ConnectionClosedOK(tstate);
if (unlikely(tmp_assign_source_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ConnectionClosedOK);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 243;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_exc_type == NULL);
Py_INCREF(tmp_assign_source_1);
var_exc_type = tmp_assign_source_1;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_var_accessor_websockets$protocol$ConnectionClosedError(tstate);
if (unlikely(tmp_assign_source_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ConnectionClosedError);
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 245;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_exc_type == NULL);
Py_INCREF(tmp_assign_source_2);
var_exc_type = tmp_assign_source_2;
}
branch_end_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(var_exc_type);
tmp_called_value_1 = var_exc_type;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_close_rcvd);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_close_sent);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 248;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_close_rcvd_then_sent);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 249;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$protocol$$$function__6_close_exc->m_frame.f_lineno = 246;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_exc == NULL);
var_exc = tmp_assign_source_3;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_parser_exc);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_exc);
tmp_assattr_target_1 = var_exc;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain___cause__, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$protocol$$$function__6_close_exc, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$protocol$$$function__6_close_exc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$protocol$$$function__6_close_exc, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$protocol$$$function__6_close_exc,
    type_description_1,
    par_self,
    var_exc_type,
    var_exc
);


// Release cached frame if used for exception.
if (frame_frame_websockets$protocol$$$function__6_close_exc == cache_frame_frame_websockets$protocol$$$function__6_close_exc) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$protocol$$$function__6_close_exc);
    cache_frame_frame_websockets$protocol$$$function__6_close_exc = NULL;
}

assertFrameObject(frame_frame_websockets$protocol$$$function__6_close_exc);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_exc);
tmp_return_value = var_exc;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_exc_type);
CHECK_OBJECT(var_exc_type);
Py_DECREF(var_exc_type);
var_exc_type = NULL;
CHECK_OBJECT(var_exc);
CHECK_OBJECT(var_exc);
Py_DECREF(var_exc);
var_exc = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_exc_type);
var_exc_type = NULL;
Py_XDECREF(var_exc);
var_exc = NULL;
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


static PyObject *impl_websockets$protocol$$$function__7_receive_data(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_data = python_pars[1];
struct Nuitka_FrameObject *frame_frame_websockets$protocol$$$function__7_receive_data;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$protocol$$$function__7_receive_data = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$protocol$$$function__7_receive_data)) {
    Py_XDECREF(cache_frame_frame_websockets$protocol$$$function__7_receive_data);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$protocol$$$function__7_receive_data == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$protocol$$$function__7_receive_data = MAKE_FUNCTION_FRAME(tstate, code_objects_84cce1bdaa287014141ff7cb9a5c19b0, module_websockets$protocol, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$protocol$$$function__7_receive_data->m_type_description == NULL);
frame_frame_websockets$protocol$$$function__7_receive_data = cache_frame_frame_websockets$protocol$$$function__7_receive_data;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$protocol$$$function__7_receive_data);
assert(Py_REFCNT(frame_frame_websockets$protocol$$$function__7_receive_data) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_reader);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_data);
tmp_args_element_value_1 = par_data;
frame_frame_websockets$protocol$$$function__7_receive_data->m_frame.f_lineno = 270;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_feed_data, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_value_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_next_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_value_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_parser);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_next_value_1 = ITERATOR_NEXT(tmp_value_value_1);
if (tmp_next_value_1 == NULL) {
    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

    if (!HAS_EXCEPTION_STATE(&exception_state)) {
        SET_EXCEPTION_PRESERVATION_STATE_STOP_ITERATION_EMPTY(tstate, &exception_state);
    }
}

CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_next_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 271;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_next_value_1);
Py_DECREF(tmp_next_value_1);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$protocol$$$function__7_receive_data, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$protocol$$$function__7_receive_data->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$protocol$$$function__7_receive_data, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$protocol$$$function__7_receive_data,
    type_description_1,
    par_self,
    par_data
);


// Release cached frame if used for exception.
if (frame_frame_websockets$protocol$$$function__7_receive_data == cache_frame_frame_websockets$protocol$$$function__7_receive_data) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$protocol$$$function__7_receive_data);
    cache_frame_frame_websockets$protocol$$$function__7_receive_data = NULL;
}

assertFrameObject(frame_frame_websockets$protocol$$$function__7_receive_data);

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


static PyObject *impl_websockets$protocol$$$function__8_receive_eof(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_websockets$protocol$$$function__8_receive_eof;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$protocol$$$function__8_receive_eof = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$protocol$$$function__8_receive_eof)) {
    Py_XDECREF(cache_frame_frame_websockets$protocol$$$function__8_receive_eof);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$protocol$$$function__8_receive_eof == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$protocol$$$function__8_receive_eof = MAKE_FUNCTION_FRAME(tstate, code_objects_dfb1494dc3b683a60a80c2164bd36d00, module_websockets$protocol, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$protocol$$$function__8_receive_eof->m_type_description == NULL);
frame_frame_websockets$protocol$$$function__8_receive_eof = cache_frame_frame_websockets$protocol$$$function__8_receive_eof;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$protocol$$$function__8_receive_eof);
assert(Py_REFCNT(frame_frame_websockets$protocol$$$function__8_receive_eof) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_reader);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_eof);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 287;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_reader);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_websockets$protocol$$$function__8_receive_eof->m_frame.f_lineno = 289;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_feed_eof);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_value_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_next_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_value_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_parser);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_next_value_1 = ITERATOR_NEXT(tmp_value_value_1);
if (tmp_next_value_1 == NULL) {
    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

    if (!HAS_EXCEPTION_STATE(&exception_state)) {
        SET_EXCEPTION_PRESERVATION_STATE_STOP_ITERATION_EMPTY(tstate, &exception_state);
    }
}

CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_next_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 290;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_next_value_1);
Py_DECREF(tmp_next_value_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$protocol$$$function__8_receive_eof, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$protocol$$$function__8_receive_eof->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$protocol$$$function__8_receive_eof, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$protocol$$$function__8_receive_eof,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_websockets$protocol$$$function__8_receive_eof == cache_frame_frame_websockets$protocol$$$function__8_receive_eof) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$protocol$$$function__8_receive_eof);
    cache_frame_frame_websockets$protocol$$$function__8_receive_eof = NULL;
}

assertFrameObject(frame_frame_websockets$protocol$$$function__8_receive_eof);

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


static PyObject *impl_websockets$protocol$$$function__9_send_continuation(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_data = python_pars[1];
PyObject *par_fin = python_pars[2];
struct Nuitka_FrameObject *frame_frame_websockets$protocol$$$function__9_send_continuation;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$protocol$$$function__9_send_continuation = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$protocol$$$function__9_send_continuation)) {
    Py_XDECREF(cache_frame_frame_websockets$protocol$$$function__9_send_continuation);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$protocol$$$function__9_send_continuation == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$protocol$$$function__9_send_continuation = MAKE_FUNCTION_FRAME(tstate, code_objects_a74f17a63a64e119be3f59439075ac59, module_websockets$protocol, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$protocol$$$function__9_send_continuation->m_type_description == NULL);
frame_frame_websockets$protocol$$$function__9_send_continuation = cache_frame_frame_websockets$protocol$$$function__9_send_continuation;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$protocol$$$function__9_send_continuation);
assert(Py_REFCNT(frame_frame_websockets$protocol$$$function__9_send_continuation) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_expect_continuation_frame);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
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
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_websockets$protocol$ProtocolError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ProtocolError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 312;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$protocol$$$function__9_send_continuation->m_frame.f_lineno = 312;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_a22e9e9a4815278d6fb39e1f930c4d87_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 312;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__state);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = module_var_accessor_websockets$protocol$OPEN(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OPEN);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 313;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_called_value_2 = module_var_accessor_websockets$protocol$InvalidState(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidState);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 314;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_c01c51d0279b9341535e9c65fe845211;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_state);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_name);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_lower);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
frame_frame_websockets$protocol$$$function__9_send_continuation->m_frame.f_lineno = 314;
tmp_format_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "ooo";
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
tmp_args_element_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_1 == NULL));
frame_frame_websockets$protocol$$$function__9_send_continuation->m_frame.f_lineno = 314;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 314;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_fin);
tmp_operand_value_2 = par_fin;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assattr_value_1 = (tmp_res == 0) ? Py_True : Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_expect_continuation_frame, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_send_frame);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = module_var_accessor_websockets$protocol$Frame(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Frame);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 316;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = module_var_accessor_websockets$protocol$OP_CONT(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OP_CONT);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 316;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_data);
tmp_args_element_value_4 = par_data;
CHECK_OBJECT(par_fin);
tmp_args_element_value_5 = par_fin;
frame_frame_websockets$protocol$$$function__9_send_continuation->m_frame.f_lineno = 316;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 316;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$protocol$$$function__9_send_continuation->m_frame.f_lineno = 316;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$protocol$$$function__9_send_continuation, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$protocol$$$function__9_send_continuation->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$protocol$$$function__9_send_continuation, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$protocol$$$function__9_send_continuation,
    type_description_1,
    par_self,
    par_data,
    par_fin
);


// Release cached frame if used for exception.
if (frame_frame_websockets$protocol$$$function__9_send_continuation == cache_frame_frame_websockets$protocol$$$function__9_send_continuation) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$protocol$$$function__9_send_continuation);
    cache_frame_frame_websockets$protocol$$$function__9_send_continuation = NULL;
}

assertFrameObject(frame_frame_websockets$protocol$$$function__9_send_continuation);

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
CHECK_OBJECT(par_fin);
Py_DECREF(par_fin);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_fin);
Py_DECREF(par_fin);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_websockets$protocol$$$function__10_send_text(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_data = python_pars[1];
PyObject *par_fin = python_pars[2];
struct Nuitka_FrameObject *frame_frame_websockets$protocol$$$function__10_send_text;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$protocol$$$function__10_send_text = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$protocol$$$function__10_send_text)) {
    Py_XDECREF(cache_frame_frame_websockets$protocol$$$function__10_send_text);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$protocol$$$function__10_send_text == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$protocol$$$function__10_send_text = MAKE_FUNCTION_FRAME(tstate, code_objects_4291b49c0b28cac2603db75700398e93, module_websockets$protocol, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$protocol$$$function__10_send_text->m_type_description == NULL);
frame_frame_websockets$protocol$$$function__10_send_text = cache_frame_frame_websockets$protocol$$$function__10_send_text;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$protocol$$$function__10_send_text);
assert(Py_REFCNT(frame_frame_websockets$protocol$$$function__10_send_text) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_expect_continuation_frame);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 334;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
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
tmp_called_value_1 = module_var_accessor_websockets$protocol$ProtocolError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ProtocolError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 335;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$protocol$$$function__10_send_text->m_frame.f_lineno = 335;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_a1ca2c1d6c0cc693d5616595c1943bf3_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 335;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__state);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = module_var_accessor_websockets$protocol$OPEN(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OPEN);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 336;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_called_value_2 = module_var_accessor_websockets$protocol$InvalidState(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidState);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 337;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_c01c51d0279b9341535e9c65fe845211;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_state);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_name);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_lower);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
frame_frame_websockets$protocol$$$function__10_send_text->m_frame.f_lineno = 337;
tmp_format_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "ooo";
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
tmp_args_element_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_1 == NULL));
frame_frame_websockets$protocol$$$function__10_send_text->m_frame.f_lineno = 337;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 337;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_fin);
tmp_operand_value_1 = par_fin;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assattr_value_1 = (tmp_res == 0) ? Py_True : Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_expect_continuation_frame, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_send_frame);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 339;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = module_var_accessor_websockets$protocol$Frame(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Frame);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 339;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = module_var_accessor_websockets$protocol$OP_TEXT(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OP_TEXT);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 339;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_data);
tmp_args_element_value_4 = par_data;
CHECK_OBJECT(par_fin);
tmp_args_element_value_5 = par_fin;
frame_frame_websockets$protocol$$$function__10_send_text->m_frame.f_lineno = 339;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 339;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$protocol$$$function__10_send_text->m_frame.f_lineno = 339;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 339;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$protocol$$$function__10_send_text, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$protocol$$$function__10_send_text->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$protocol$$$function__10_send_text, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$protocol$$$function__10_send_text,
    type_description_1,
    par_self,
    par_data,
    par_fin
);


// Release cached frame if used for exception.
if (frame_frame_websockets$protocol$$$function__10_send_text == cache_frame_frame_websockets$protocol$$$function__10_send_text) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$protocol$$$function__10_send_text);
    cache_frame_frame_websockets$protocol$$$function__10_send_text = NULL;
}

assertFrameObject(frame_frame_websockets$protocol$$$function__10_send_text);

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
CHECK_OBJECT(par_fin);
Py_DECREF(par_fin);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_fin);
Py_DECREF(par_fin);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_websockets$protocol$$$function__11_send_binary(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_data = python_pars[1];
PyObject *par_fin = python_pars[2];
struct Nuitka_FrameObject *frame_frame_websockets$protocol$$$function__11_send_binary;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$protocol$$$function__11_send_binary = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$protocol$$$function__11_send_binary)) {
    Py_XDECREF(cache_frame_frame_websockets$protocol$$$function__11_send_binary);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$protocol$$$function__11_send_binary == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$protocol$$$function__11_send_binary = MAKE_FUNCTION_FRAME(tstate, code_objects_c62b6b756bfc7050d9fc3ba80ffe536c, module_websockets$protocol, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$protocol$$$function__11_send_binary->m_type_description == NULL);
frame_frame_websockets$protocol$$$function__11_send_binary = cache_frame_frame_websockets$protocol$$$function__11_send_binary;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$protocol$$$function__11_send_binary);
assert(Py_REFCNT(frame_frame_websockets$protocol$$$function__11_send_binary) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_expect_continuation_frame);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 357;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
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
tmp_called_value_1 = module_var_accessor_websockets$protocol$ProtocolError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ProtocolError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 358;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$protocol$$$function__11_send_binary->m_frame.f_lineno = 358;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_a1ca2c1d6c0cc693d5616595c1943bf3_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 358;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__state);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = module_var_accessor_websockets$protocol$OPEN(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OPEN);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 359;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_called_value_2 = module_var_accessor_websockets$protocol$InvalidState(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidState);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 360;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_c01c51d0279b9341535e9c65fe845211;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_state);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_name);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_lower);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
frame_frame_websockets$protocol$$$function__11_send_binary->m_frame.f_lineno = 360;
tmp_format_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_1 = "ooo";
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
tmp_args_element_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_1 == NULL));
frame_frame_websockets$protocol$$$function__11_send_binary->m_frame.f_lineno = 360;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 360;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_fin);
tmp_operand_value_1 = par_fin;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assattr_value_1 = (tmp_res == 0) ? Py_True : Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_expect_continuation_frame, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_send_frame);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = module_var_accessor_websockets$protocol$Frame(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Frame);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 362;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = module_var_accessor_websockets$protocol$OP_BINARY(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OP_BINARY);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 362;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_data);
tmp_args_element_value_4 = par_data;
CHECK_OBJECT(par_fin);
tmp_args_element_value_5 = par_fin;
frame_frame_websockets$protocol$$$function__11_send_binary->m_frame.f_lineno = 362;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 362;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$protocol$$$function__11_send_binary->m_frame.f_lineno = 362;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$protocol$$$function__11_send_binary, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$protocol$$$function__11_send_binary->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$protocol$$$function__11_send_binary, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$protocol$$$function__11_send_binary,
    type_description_1,
    par_self,
    par_data,
    par_fin
);


// Release cached frame if used for exception.
if (frame_frame_websockets$protocol$$$function__11_send_binary == cache_frame_frame_websockets$protocol$$$function__11_send_binary) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$protocol$$$function__11_send_binary);
    cache_frame_frame_websockets$protocol$$$function__11_send_binary = NULL;
}

assertFrameObject(frame_frame_websockets$protocol$$$function__11_send_binary);

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
CHECK_OBJECT(par_fin);
Py_DECREF(par_fin);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_fin);
Py_DECREF(par_fin);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_websockets$protocol$$$function__12_send_close(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_code = python_pars[1];
PyObject *par_reason = python_pars[2];
PyObject *var_close = NULL;
PyObject *var_data = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$protocol$$$function__12_send_close;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$protocol$$$function__12_send_close = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_websockets$protocol$$$function__12_send_close)) {
    Py_XDECREF(cache_frame_frame_websockets$protocol$$$function__12_send_close);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$protocol$$$function__12_send_close == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$protocol$$$function__12_send_close = MAKE_FUNCTION_FRAME(tstate, code_objects_febcde1ad55b068c2b5bfa22acc15d7c, module_websockets$protocol, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$protocol$$$function__12_send_close->m_type_description == NULL);
frame_frame_websockets$protocol$$$function__12_send_close = cache_frame_frame_websockets$protocol$$$function__12_send_close;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$protocol$$$function__12_send_close);
assert(Py_REFCNT(frame_frame_websockets$protocol$$$function__12_send_close) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__state);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = module_var_accessor_websockets$protocol$OPEN(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OPEN);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 382;
type_description_1 = "ooooo";
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
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_called_value_1 = module_var_accessor_websockets$protocol$InvalidState(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidState);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 383;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_c01c51d0279b9341535e9c65fe845211;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_state);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_name);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_lower);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
frame_frame_websockets$protocol$$$function__12_send_close->m_frame.f_lineno = 383;
tmp_format_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;
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
tmp_args_element_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_1 == NULL));
frame_frame_websockets$protocol$$$function__12_send_close->m_frame.f_lineno = 383;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 383;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_code);
tmp_cmp_expr_left_2 = par_code;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_reason);
tmp_cmp_expr_left_3 = par_reason;
tmp_cmp_expr_right_3 = const_str_empty;
tmp_condition_result_3 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 385;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_3;
tmp_called_value_3 = module_var_accessor_websockets$protocol$ProtocolError(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ProtocolError);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 386;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$protocol$$$function__12_send_close->m_frame.f_lineno = 386;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_digest_0090efbc893f3364b67f36cecf938216_tuple);

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 386;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 386;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 386;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_3;
tmp_called_value_4 = module_var_accessor_websockets$protocol$Close(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Close);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 387;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = module_var_accessor_websockets$protocol$CloseCode(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CloseCode);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 387;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_NO_STATUS_RCVD);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = const_str_empty;
frame_frame_websockets$protocol$$$function__12_send_close->m_frame.f_lineno = 387;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_close == NULL);
var_close = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = const_bytes_empty;
assert(var_data == NULL);
Py_INCREF(tmp_assign_source_2);
var_data = tmp_assign_source_2;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_value_5 = module_var_accessor_websockets$protocol$Close(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Close);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 390;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_code);
tmp_args_element_value_4 = par_code;
CHECK_OBJECT(par_reason);
tmp_args_element_value_5 = par_reason;
frame_frame_websockets$protocol$$$function__12_send_close->m_frame.f_lineno = 390;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 390;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_close == NULL);
var_close = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var_close);
tmp_called_instance_1 = var_close;
frame_frame_websockets$protocol$$$function__12_send_close->m_frame.f_lineno = 391;
tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_serialize);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_data == NULL);
var_data = tmp_assign_source_4;
}
branch_end_2:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_6;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_send_frame);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 393;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = module_var_accessor_websockets$protocol$Frame(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Frame);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);

exception_lineno = 393;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_7 = module_var_accessor_websockets$protocol$OP_CLOSE(tstate);
if (unlikely(tmp_args_element_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OP_CLOSE);
}

if (tmp_args_element_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);

exception_lineno = 393;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_data);
tmp_args_element_value_8 = var_data;
frame_frame_websockets$protocol$$$function__12_send_close->m_frame.f_lineno = 393;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_args_element_value_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 393;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$protocol$$$function__12_send_close->m_frame.f_lineno = 393;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 393;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_close_rcvd);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 396;
type_description_1 = "ooooo";
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
PyObject *tmp_raise_type_3;
frame_frame_websockets$protocol$$$function__12_send_close->m_frame.f_lineno = 396;
tmp_raise_type_3 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 396;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto frame_exception_exit_1;
}
branch_no_4:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
if (var_close == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, const_str_plain_close);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 397;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_value_1 = var_close;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_close_sent, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 397;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = module_var_accessor_websockets$protocol$CLOSING(tstate);
if (unlikely(tmp_assattr_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CLOSING);
}

if (tmp_assattr_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 398;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_state, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 398;
type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$protocol$$$function__12_send_close, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$protocol$$$function__12_send_close->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$protocol$$$function__12_send_close, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$protocol$$$function__12_send_close,
    type_description_1,
    par_self,
    par_code,
    par_reason,
    var_close,
    var_data
);


// Release cached frame if used for exception.
if (frame_frame_websockets$protocol$$$function__12_send_close == cache_frame_frame_websockets$protocol$$$function__12_send_close) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$protocol$$$function__12_send_close);
    cache_frame_frame_websockets$protocol$$$function__12_send_close = NULL;
}

assertFrameObject(frame_frame_websockets$protocol$$$function__12_send_close);

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
Py_XDECREF(var_close);
var_close = NULL;
CHECK_OBJECT(var_data);
CHECK_OBJECT(var_data);
Py_DECREF(var_data);
var_data = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_close);
var_close = NULL;
Py_XDECREF(var_data);
var_data = NULL;
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
CHECK_OBJECT(par_code);
Py_DECREF(par_code);
CHECK_OBJECT(par_reason);
Py_DECREF(par_reason);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_code);
Py_DECREF(par_code);
CHECK_OBJECT(par_reason);
Py_DECREF(par_reason);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_websockets$protocol$$$function__13_send_ping(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_data = python_pars[1];
struct Nuitka_FrameObject *frame_frame_websockets$protocol$$$function__13_send_ping;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$protocol$$$function__13_send_ping = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$protocol$$$function__13_send_ping)) {
    Py_XDECREF(cache_frame_frame_websockets$protocol$$$function__13_send_ping);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$protocol$$$function__13_send_ping == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$protocol$$$function__13_send_ping = MAKE_FUNCTION_FRAME(tstate, code_objects_f65b164838d61548f90b1dab36fd128c, module_websockets$protocol, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$protocol$$$function__13_send_ping->m_type_description == NULL);
frame_frame_websockets$protocol$$$function__13_send_ping = cache_frame_frame_websockets$protocol$$$function__13_send_ping;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$protocol$$$function__13_send_ping);
assert(Py_REFCNT(frame_frame_websockets$protocol$$$function__13_send_ping) == 2);

// Framed code:
{
bool tmp_condition_result_1;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__state);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 412;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = module_var_accessor_websockets$protocol$OPEN(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OPEN);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 412;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__state);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 412;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = module_var_accessor_websockets$protocol$CLOSING(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CLOSING);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 412;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_called_value_1 = module_var_accessor_websockets$protocol$InvalidState(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidState);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 413;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_c01c51d0279b9341535e9c65fe845211;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_state);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 413;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_name);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 413;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_lower);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 413;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
frame_frame_websockets$protocol$$$function__13_send_ping->m_frame.f_lineno = 413;
tmp_format_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 413;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 413;
type_description_1 = "oo";
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
tmp_args_element_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_1 == NULL));
frame_frame_websockets$protocol$$$function__13_send_ping->m_frame.f_lineno = 413;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 413;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 413;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 413;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_send_frame);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 414;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = module_var_accessor_websockets$protocol$Frame(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Frame);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 414;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = module_var_accessor_websockets$protocol$OP_PING(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OP_PING);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 414;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_data);
tmp_args_element_value_4 = par_data;
frame_frame_websockets$protocol$$$function__13_send_ping->m_frame.f_lineno = 414;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 414;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$protocol$$$function__13_send_ping->m_frame.f_lineno = 414;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 414;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$protocol$$$function__13_send_ping, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$protocol$$$function__13_send_ping->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$protocol$$$function__13_send_ping, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$protocol$$$function__13_send_ping,
    type_description_1,
    par_self,
    par_data
);


// Release cached frame if used for exception.
if (frame_frame_websockets$protocol$$$function__13_send_ping == cache_frame_frame_websockets$protocol$$$function__13_send_ping) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$protocol$$$function__13_send_ping);
    cache_frame_frame_websockets$protocol$$$function__13_send_ping = NULL;
}

assertFrameObject(frame_frame_websockets$protocol$$$function__13_send_ping);

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


static PyObject *impl_websockets$protocol$$$function__14_send_pong(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_data = python_pars[1];
struct Nuitka_FrameObject *frame_frame_websockets$protocol$$$function__14_send_pong;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$protocol$$$function__14_send_pong = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$protocol$$$function__14_send_pong)) {
    Py_XDECREF(cache_frame_frame_websockets$protocol$$$function__14_send_pong);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$protocol$$$function__14_send_pong == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$protocol$$$function__14_send_pong = MAKE_FUNCTION_FRAME(tstate, code_objects_b634bea97c79777baa05262644fe8cdf, module_websockets$protocol, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$protocol$$$function__14_send_pong->m_type_description == NULL);
frame_frame_websockets$protocol$$$function__14_send_pong = cache_frame_frame_websockets$protocol$$$function__14_send_pong;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$protocol$$$function__14_send_pong);
assert(Py_REFCNT(frame_frame_websockets$protocol$$$function__14_send_pong) == 2);

// Framed code:
{
bool tmp_condition_result_1;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__state);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 428;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = module_var_accessor_websockets$protocol$OPEN(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OPEN);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 428;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__state);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 428;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = module_var_accessor_websockets$protocol$CLOSING(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CLOSING);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 428;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_called_value_1 = module_var_accessor_websockets$protocol$InvalidState(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidState);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 429;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_c01c51d0279b9341535e9c65fe845211;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_state);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_name);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_lower);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
frame_frame_websockets$protocol$$$function__14_send_pong->m_frame.f_lineno = 429;
tmp_format_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;
type_description_1 = "oo";
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
tmp_args_element_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_1 == NULL));
frame_frame_websockets$protocol$$$function__14_send_pong->m_frame.f_lineno = 429;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 429;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_send_frame);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 430;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = module_var_accessor_websockets$protocol$Frame(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Frame);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 430;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = module_var_accessor_websockets$protocol$OP_PONG(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OP_PONG);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 430;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_data);
tmp_args_element_value_4 = par_data;
frame_frame_websockets$protocol$$$function__14_send_pong->m_frame.f_lineno = 430;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 430;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$protocol$$$function__14_send_pong->m_frame.f_lineno = 430;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 430;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$protocol$$$function__14_send_pong, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$protocol$$$function__14_send_pong->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$protocol$$$function__14_send_pong, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$protocol$$$function__14_send_pong,
    type_description_1,
    par_self,
    par_data
);


// Release cached frame if used for exception.
if (frame_frame_websockets$protocol$$$function__14_send_pong == cache_frame_frame_websockets$protocol$$$function__14_send_pong) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$protocol$$$function__14_send_pong);
    cache_frame_frame_websockets$protocol$$$function__14_send_pong = NULL;
}

assertFrameObject(frame_frame_websockets$protocol$$$function__14_send_pong);

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


static PyObject *impl_websockets$protocol$$$function__15_fail(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_code = python_pars[1];
PyObject *par_reason = python_pars[2];
PyObject *var_close = NULL;
PyObject *var_data = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$protocol$$$function__15_fail;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$protocol$$$function__15_fail = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_websockets$protocol$$$function__15_fail)) {
    Py_XDECREF(cache_frame_frame_websockets$protocol$$$function__15_fail);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$protocol$$$function__15_fail == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$protocol$$$function__15_fail = MAKE_FUNCTION_FRAME(tstate, code_objects_1a2089e721b9c43fa3e32eadf32db61b, module_websockets$protocol, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$protocol$$$function__15_fail->m_type_description == NULL);
frame_frame_websockets$protocol$$$function__15_fail = cache_frame_frame_websockets$protocol$$$function__15_fail;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$protocol$$$function__15_fail);
assert(Py_REFCNT(frame_frame_websockets$protocol$$$function__15_fail) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_state);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = module_var_accessor_websockets$protocol$OPEN(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OPEN);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 451;
type_description_1 = "ooooo";
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
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_code);
tmp_cmp_expr_left_2 = par_code;
tmp_expression_value_2 = module_var_accessor_websockets$protocol$CloseCode(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CloseCode);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 452;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ABNORMAL_CLOSURE);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
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
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_websockets$protocol$Close(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Close);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 453;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_code);
tmp_args_element_value_1 = par_code;
CHECK_OBJECT(par_reason);
tmp_args_element_value_2 = par_reason;
frame_frame_websockets$protocol$$$function__15_fail->m_frame.f_lineno = 453;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 453;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_close == NULL);
var_close = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var_close);
tmp_called_instance_1 = var_close;
frame_frame_websockets$protocol$$$function__15_fail->m_frame.f_lineno = 454;
tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_serialize);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_data == NULL);
var_data = tmp_assign_source_2;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_send_frame);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = module_var_accessor_websockets$protocol$Frame(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Frame);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 455;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = module_var_accessor_websockets$protocol$OP_CLOSE(tstate);
if (unlikely(tmp_args_element_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OP_CLOSE);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 455;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_data);
tmp_args_element_value_5 = var_data;
frame_frame_websockets$protocol$$$function__15_fail->m_frame.f_lineno = 455;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_args_element_value_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 455;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$protocol$$$function__15_fail->m_frame.f_lineno = 455;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(var_close);
tmp_assattr_value_1 = var_close;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_close_sent, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 456;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_close_rcvd);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 461;
type_description_1 = "ooooo";
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
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = Py_True;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_close_rcvd_then_sent, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 462;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
branch_no_3:;
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = module_var_accessor_websockets$protocol$CLOSING(tstate);
if (unlikely(tmp_assattr_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CLOSING);
}

if (tmp_assattr_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 463;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_state, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 463;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
branch_no_2:;
branch_no_1:;
{
bool tmp_condition_result_4;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_side);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 469;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = module_var_accessor_websockets$protocol$SERVER(tstate);
if (unlikely(tmp_cmp_expr_right_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SERVER);
}

if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_4);

exception_lineno = 469;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_eof_sent);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 469;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 469;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 0) ? true : false;
tmp_condition_result_4 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_4 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_websockets$protocol$$$function__15_fail->m_frame.f_lineno = 470;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_send_eof);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 470;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_4:;
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_called_instance_3;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_self);
tmp_called_instance_3 = par_self;
frame_frame_websockets$protocol$$$function__15_fail->m_frame.f_lineno = 476;
tmp_assattr_value_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_discard);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 476;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_parser, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 476;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_value_value_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_next_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_value_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_parser);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 477;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_next_value_1 = ITERATOR_NEXT(tmp_value_value_1);
if (tmp_next_value_1 == NULL) {
    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

    if (!HAS_EXCEPTION_STATE(&exception_state)) {
        SET_EXCEPTION_PRESERVATION_STATE_STOP_ITERATION_EMPTY(tstate, &exception_state);
    }
}

CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_next_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 477;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_next_value_1);
Py_DECREF(tmp_next_value_1);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$protocol$$$function__15_fail, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$protocol$$$function__15_fail->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$protocol$$$function__15_fail, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$protocol$$$function__15_fail,
    type_description_1,
    par_self,
    par_code,
    par_reason,
    var_close,
    var_data
);


// Release cached frame if used for exception.
if (frame_frame_websockets$protocol$$$function__15_fail == cache_frame_frame_websockets$protocol$$$function__15_fail) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$protocol$$$function__15_fail);
    cache_frame_frame_websockets$protocol$$$function__15_fail = NULL;
}

assertFrameObject(frame_frame_websockets$protocol$$$function__15_fail);

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
Py_XDECREF(var_close);
var_close = NULL;
Py_XDECREF(var_data);
var_data = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_close);
var_close = NULL;
Py_XDECREF(var_data);
var_data = NULL;
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
CHECK_OBJECT(par_code);
Py_DECREF(par_code);
CHECK_OBJECT(par_reason);
Py_DECREF(par_reason);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_code);
Py_DECREF(par_code);
CHECK_OBJECT(par_reason);
Py_DECREF(par_reason);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_websockets$protocol$$$function__16_events_received(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_events = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$protocol$$$function__16_events_received;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$protocol$$$function__16_events_received = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_websockets$protocol$$$function__16_events_received)) {
    Py_XDECREF(cache_frame_frame_websockets$protocol$$$function__16_events_received);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$protocol$$$function__16_events_received == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$protocol$$$function__16_events_received = MAKE_FUNCTION_FRAME(tstate, code_objects_6a7d4607a5933ea26f76865e2f2beba9, module_websockets$protocol, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$protocol$$$function__16_events_received->m_type_description == NULL);
frame_frame_websockets$protocol$$$function__16_events_received = cache_frame_frame_websockets$protocol$$$function__16_events_received;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$protocol$$$function__16_events_received);
assert(Py_REFCNT(frame_frame_websockets$protocol$$$function__16_events_received) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_events);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 492;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_iter_arg_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_iter_arg_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = MAKE_LIST_EMPTY(tstate, 0);
PyTuple_SET_ITEM(tmp_iter_arg_1, 1, tmp_tuple_element_1);
tmp_assign_source_1 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
assert(!(tmp_assign_source_1 == NULL));
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 492;
type_description_1 = "oo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 492;
type_description_1 = "oo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 492;
type_description_1 = "oo";
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
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
assert(var_events == NULL);
Py_INCREF(tmp_assign_source_4);
var_events = tmp_assign_source_4;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assattr_value_1 = tmp_tuple_unpack_1__element_2;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_events, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 492;
type_description_1 = "oo";
    goto try_except_handler_2;
}
}
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$protocol$$$function__16_events_received, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$protocol$$$function__16_events_received->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$protocol$$$function__16_events_received, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$protocol$$$function__16_events_received,
    type_description_1,
    par_self,
    var_events
);


// Release cached frame if used for exception.
if (frame_frame_websockets$protocol$$$function__16_events_received == cache_frame_frame_websockets$protocol$$$function__16_events_received) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$protocol$$$function__16_events_received);
    cache_frame_frame_websockets$protocol$$$function__16_events_received = NULL;
}

assertFrameObject(frame_frame_websockets$protocol$$$function__16_events_received);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

CHECK_OBJECT(var_events);
tmp_return_value = var_events;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_events);
CHECK_OBJECT(var_events);
Py_DECREF(var_events);
var_events = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_events);
var_events = NULL;
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


static PyObject *impl_websockets$protocol$$$function__17_data_to_send(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_writes = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$protocol$$$function__17_data_to_send;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$protocol$$$function__17_data_to_send = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_websockets$protocol$$$function__17_data_to_send)) {
    Py_XDECREF(cache_frame_frame_websockets$protocol$$$function__17_data_to_send);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$protocol$$$function__17_data_to_send == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$protocol$$$function__17_data_to_send = MAKE_FUNCTION_FRAME(tstate, code_objects_60c2b9e39ce739d965ffdd2d16e7072e, module_websockets$protocol, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$protocol$$$function__17_data_to_send->m_type_description == NULL);
frame_frame_websockets$protocol$$$function__17_data_to_send = cache_frame_frame_websockets$protocol$$$function__17_data_to_send;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$protocol$$$function__17_data_to_send);
assert(Py_REFCNT(frame_frame_websockets$protocol$$$function__17_data_to_send) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_writes);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 514;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_iter_arg_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_iter_arg_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = MAKE_LIST_EMPTY(tstate, 0);
PyTuple_SET_ITEM(tmp_iter_arg_1, 1, tmp_tuple_element_1);
tmp_assign_source_1 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
assert(!(tmp_assign_source_1 == NULL));
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 514;
type_description_1 = "oo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 514;
type_description_1 = "oo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 514;
type_description_1 = "oo";
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
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
assert(var_writes == NULL);
Py_INCREF(tmp_assign_source_4);
var_writes = tmp_assign_source_4;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assattr_value_1 = tmp_tuple_unpack_1__element_2;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_writes, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 514;
type_description_1 = "oo";
    goto try_except_handler_2;
}
}
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$protocol$$$function__17_data_to_send, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$protocol$$$function__17_data_to_send->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$protocol$$$function__17_data_to_send, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$protocol$$$function__17_data_to_send,
    type_description_1,
    par_self,
    var_writes
);


// Release cached frame if used for exception.
if (frame_frame_websockets$protocol$$$function__17_data_to_send == cache_frame_frame_websockets$protocol$$$function__17_data_to_send) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$protocol$$$function__17_data_to_send);
    cache_frame_frame_websockets$protocol$$$function__17_data_to_send = NULL;
}

assertFrameObject(frame_frame_websockets$protocol$$$function__17_data_to_send);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

CHECK_OBJECT(var_writes);
tmp_return_value = var_writes;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_writes);
CHECK_OBJECT(var_writes);
Py_DECREF(var_writes);
var_writes = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_writes);
var_writes = NULL;
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


static PyObject *impl_websockets$protocol$$$function__18_close_expected(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_websockets$protocol$$$function__18_close_expected;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$protocol$$$function__18_close_expected = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$protocol$$$function__18_close_expected)) {
    Py_XDECREF(cache_frame_frame_websockets$protocol$$$function__18_close_expected);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$protocol$$$function__18_close_expected == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$protocol$$$function__18_close_expected = MAKE_FUNCTION_FRAME(tstate, code_objects_4c31acede4e3d2b77a61ad2a74c9bac8, module_websockets$protocol, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$protocol$$$function__18_close_expected->m_type_description == NULL);
frame_frame_websockets$protocol$$$function__18_close_expected = cache_frame_frame_websockets$protocol$$$function__18_close_expected;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$protocol$$$function__18_close_expected);
assert(Py_REFCNT(frame_frame_websockets$protocol$$$function__18_close_expected) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_state);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 551;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = module_var_accessor_websockets$protocol$OPEN(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OPEN);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 551;
type_description_1 = "o";
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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_state);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 553;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = module_var_accessor_websockets$protocol$CLOSING(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CLOSING);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 553;
type_description_1 = "o";
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
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_state);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 555;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = module_var_accessor_websockets$protocol$CLOSED(tstate);
if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CLOSED);
}

if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 555;
type_description_1 = "o";
    goto frame_exception_exit_1;
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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_state);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 557;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = module_var_accessor_websockets$protocol$CONNECTING(tstate);
if (unlikely(tmp_cmp_expr_right_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CONNECTING);
}

if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_4);

exception_lineno = 557;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
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
PyObject *tmp_raise_type_1;
frame_frame_websockets$protocol$$$function__18_close_expected->m_frame.f_lineno = 557;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 557;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}
branch_no_4:;
{
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_eof_sent);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 558;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$protocol$$$function__18_close_expected, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$protocol$$$function__18_close_expected->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$protocol$$$function__18_close_expected, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$protocol$$$function__18_close_expected,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_websockets$protocol$$$function__18_close_expected == cache_frame_frame_websockets$protocol$$$function__18_close_expected) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$protocol$$$function__18_close_expected);
    cache_frame_frame_websockets$protocol$$$function__18_close_expected = NULL;
}

assertFrameObject(frame_frame_websockets$protocol$$$function__18_close_expected);

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


static PyObject *impl_websockets$protocol$$$function__19_parse(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_self;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_GENERATOR_websockets$protocol$$$function__19_parse$$$genobj__1_parse(tstate, tmp_closure_1);

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
struct websockets$protocol$$$function__19_parse$$$genobj__1_parse_locals {
PyObject *var_max_size;
PyObject *var_frame;
PyObject *var_exc;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
int exception_keeper_lineno_8;
};
#endif

static PyObject *websockets$protocol$$$function__19_parse$$$genobj__1_parse_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct websockets$protocol$$$function__19_parse$$$genobj__1_parse_locals *generator_heap = (struct websockets$protocol$$$function__19_parse$$$genobj__1_parse_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 3: goto yield_return_3;
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_max_size = NULL;
generator_heap->var_frame = NULL;
generator_heap->var_exc = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_b328e2bae753ceacdbf75b1d908edb0f, module_websockets$protocol, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_yieldfrom_result_1;
int tmp_truth_name_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 575;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}

tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_reader);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 575;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 575;
tmp_expression_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_at_eof);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 575;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
generator->m_yield_from = tmp_expression_value_1;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 575;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
tmp_yieldfrom_result_1 = yield_return_value;
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_yieldfrom_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_yieldfrom_result_1);

generator_heap->exception_lineno = 575;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_yieldfrom_result_1);
Py_DECREF(tmp_yieldfrom_result_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_2;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 576;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}

tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_debug);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 576;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_attribute_value_1);

generator_heap->exception_lineno = 576;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
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
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 577;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}

tmp_expression_value_4 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_logger);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 577;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 577;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_debug,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_c75a0defaf8d9a13f7c93cdc63f80b31_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 577;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_2:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_da6d1f64c16d9bbd1b14da2673e5ef21;
generator->m_frame->m_frame.f_lineno = 582;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_EOFError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
generator_heap->exception_state.exception_value = tmp_raise_type_1;
generator_heap->exception_lineno = 582;
RAISE_EXCEPTION_WITH_VALUE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "cooo";
goto try_except_handler_2;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
{
    PyObject *old = generator_heap->var_max_size;
    generator_heap->var_max_size = tmp_assign_source_1;
    Py_INCREF(generator_heap->var_max_size);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_5;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 586;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}

tmp_expression_value_5 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_max_message_size);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 586;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_6;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 587;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}

tmp_expression_value_6 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_current_size);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 587;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_7;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 588;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}

tmp_expression_value_7 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_max_message_size);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 588;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
{
    PyObject *old = generator_heap->var_max_size;
    assert(old != NULL);
    generator_heap->var_max_size = tmp_assign_source_2;
    Py_DECREF(old);
}

}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 590;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}

tmp_expression_value_8 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_sub_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_max_message_size);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 590;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
Py_DECREF(tmp_sub_expr_left_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 590;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}

tmp_expression_value_9 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_sub_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_current_size);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_sub_expr_left_1);

generator_heap->exception_lineno = 590;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
tmp_assign_source_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 590;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
{
    PyObject *old = generator_heap->var_max_size;
    assert(old != NULL);
    generator_heap->var_max_size = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_end_4:;
branch_no_3:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_10;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 592;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}

tmp_expression_value_10 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_max_fragment_size);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 592;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(generator_heap->var_max_size);
tmp_cmp_expr_left_4 = generator_heap->var_max_size;
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_6 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_11;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 594;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}

tmp_expression_value_11 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_max_fragment_size);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 594;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
{
    PyObject *old = generator_heap->var_max_size;
    assert(old != NULL);
    generator_heap->var_max_size = tmp_assign_source_4;
    Py_DECREF(old);
}

}
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_12;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_1 != NULL);
CHECK_OBJECT(generator_heap->var_max_size);
tmp_args_element_value_1 = generator_heap->var_max_size;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 596;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}

tmp_expression_value_12 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_max_fragment_size);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 596;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 596;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 596;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
{
    PyObject *old = generator_heap->var_max_size;
    assert(old != NULL);
    generator_heap->var_max_size = tmp_assign_source_5;
    Py_DECREF(old);
}

}
branch_end_6:;
branch_no_5:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_13;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_14;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_17;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_expression_value_18;
tmp_expression_value_14 = module_var_accessor_websockets$protocol$Frame(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Frame);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 601;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_parse);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 601;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 602;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}

tmp_expression_value_16 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_reader);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_2);

generator_heap->exception_lineno = 602;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_read_exact);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_2);

generator_heap->exception_lineno = 602;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_arg_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 603;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}

tmp_expression_value_17 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_side);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_arg_value_0_1);

generator_heap->exception_lineno = 603;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_5 = module_var_accessor_websockets$protocol$SERVER(tstate);
if (unlikely(tmp_cmp_expr_right_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_SERVER);
}

if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_cmp_expr_left_5);

generator_heap->exception_lineno = 603;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
tmp_kw_call_dict_value_0_1 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? Py_True : Py_False;
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
CHECK_OBJECT(generator_heap->var_max_size);
tmp_kw_call_dict_value_1_1 = generator_heap->var_max_size;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_arg_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 605;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}

tmp_expression_value_18 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_kw_call_dict_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_extensions);
if (tmp_kw_call_dict_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_arg_value_0_1);

generator_heap->exception_lineno = 605;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 601;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
    tmp_expression_value_13 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_mask_str_plain_max_size_str_plain_extensions_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_2_1);
Py_DECREF(tmp_kw_call_dict_value_2_1);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 601;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_14, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_expression_value_15, sizeof(PyObject *), &tmp_expression_value_16, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_cmp_expr_left_5, sizeof(PyObject *), &tmp_cmp_expr_right_5, sizeof(PyObject *), &tmp_expression_value_17, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), &tmp_kw_call_dict_value_2_1, sizeof(PyObject *), &tmp_expression_value_18, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 2;
generator->m_yield_from = tmp_expression_value_13;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_14, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_expression_value_15, sizeof(PyObject *), &tmp_expression_value_16, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_cmp_expr_left_5, sizeof(PyObject *), &tmp_cmp_expr_right_5, sizeof(PyObject *), &tmp_expression_value_17, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), &tmp_kw_call_dict_value_2_1, sizeof(PyObject *), &tmp_expression_value_18, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 601;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
tmp_assign_source_6 = yield_return_value;
{
    PyObject *old = generator_heap->var_frame;
    generator_heap->var_frame = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_expression_value_19;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_3;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 608;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}

tmp_expression_value_19 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_debug);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 608;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_attribute_value_2);

generator_heap->exception_lineno = 608;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
tmp_condition_result_7 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_20;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 609;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}

tmp_expression_value_20 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_logger);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 609;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
tmp_args_element_value_3 = mod_consts.const_str_digest_222bd0d7fdce5a655e754c1b048cf78d;
CHECK_OBJECT(generator_heap->var_frame);
tmp_args_element_value_4 = generator_heap->var_frame;
generator->m_frame->m_frame.f_lineno = 609;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain_debug,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 609;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_7:;
{
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_5;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 611;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}

tmp_called_instance_4 = Nuitka_Cell_GET(generator->m_closure[0]);
CHECK_OBJECT(generator_heap->var_frame);
tmp_args_element_value_5 = generator_heap->var_frame;
generator->m_frame->m_frame.f_lineno = 611;
tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_recv_frame, tmp_args_element_value_5);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 611;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 574;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
goto loop_start_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Preserve existing published exception id 1.
generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1, exception_tb);
    } else if (generator_heap->exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
tmp_cmp_expr_left_6 = EXC_TYPE(tstate);
tmp_cmp_expr_right_6 = module_var_accessor_websockets$protocol$ProtocolError(tstate);
if (unlikely(tmp_cmp_expr_right_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_ProtocolError);
}

if (tmp_cmp_expr_right_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 613;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_3;
}
generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 613;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_3;
}
tmp_condition_result_8 = (generator_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_7); 
assert(generator_heap->var_exc == NULL);
Py_INCREF(tmp_assign_source_7);
generator_heap->var_exc = tmp_assign_source_7;
}
// Tried code:
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_21;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_22;
PyObject *tmp_args_element_value_7;
PyObject *tmp_unicode_arg_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 614;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_4;
}

tmp_expression_value_21 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_fail);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 614;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_4;
}
tmp_expression_value_22 = module_var_accessor_websockets$protocol$CloseCode(tstate);
if (unlikely(tmp_expression_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_CloseCode);
}

if (tmp_expression_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));

Py_DECREF(tmp_called_value_3);

generator_heap->exception_lineno = 614;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_4;
}
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_PROTOCOL_ERROR);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_3);

generator_heap->exception_lineno = 614;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(generator_heap->var_exc);
tmp_unicode_arg_1 = generator_heap->var_exc;
tmp_args_element_value_7 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_args_element_value_6);

generator_heap->exception_lineno = 614;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_4;
}
generator->m_frame->m_frame.f_lineno = 614;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 614;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(generator_heap->var_exc);
tmp_assattr_value_1 = generator_heap->var_exc;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 615;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_4;
}

tmp_assattr_target_1 = Nuitka_Cell_GET(generator->m_closure[0]);
generator_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_parser_exc, tmp_assattr_value_1);
if (generator_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 615;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_4;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_exc);
generator_heap->var_exc = NULL;

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
try_end_1:;
Py_XDECREF(generator_heap->var_exc);
generator_heap->var_exc = NULL;

goto branch_end_8;
branch_no_8:;
{
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
tmp_cmp_expr_left_7 = EXC_TYPE(tstate);
tmp_cmp_expr_right_7 = PyExc_EOFError;
generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
assert(!(generator_heap->tmp_res == -1));
tmp_condition_result_9 = (generator_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_8); 
assert(generator_heap->var_exc == NULL);
Py_INCREF(tmp_assign_source_8);
generator_heap->var_exc = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_23;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_24;
PyObject *tmp_args_element_value_9;
PyObject *tmp_unicode_arg_2;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 618;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_5;
}

tmp_expression_value_23 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_fail);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 618;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_5;
}
tmp_expression_value_24 = module_var_accessor_websockets$protocol$CloseCode(tstate);
if (unlikely(tmp_expression_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_CloseCode);
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));

Py_DECREF(tmp_called_value_4);

generator_heap->exception_lineno = 618;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_5;
}
tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_ABNORMAL_CLOSURE);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_4);

generator_heap->exception_lineno = 618;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(generator_heap->var_exc);
tmp_unicode_arg_2 = generator_heap->var_exc;
tmp_args_element_value_9 = BUILTIN_UNICODE1(tmp_unicode_arg_2);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_8);

generator_heap->exception_lineno = 618;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_5;
}
generator->m_frame->m_frame.f_lineno = 618;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 618;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(generator_heap->var_exc);
tmp_assattr_value_2 = generator_heap->var_exc;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 619;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_5;
}

tmp_assattr_target_2 = Nuitka_Cell_GET(generator->m_closure[0]);
generator_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_parser_exc, tmp_assattr_value_2);
if (generator_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 619;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_5;
}
}
goto try_end_2;
// Exception handler code:
try_except_handler_5:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_exc);
generator_heap->var_exc = NULL;

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto try_except_handler_3;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->var_exc);
generator_heap->var_exc = NULL;

goto branch_end_9;
branch_no_9:;
{
bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
tmp_cmp_expr_left_8 = EXC_TYPE(tstate);
tmp_cmp_expr_right_8 = PyExc_UnicodeDecodeError;
generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
assert(!(generator_heap->tmp_res == -1));
tmp_condition_result_10 = (generator_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_9); 
assert(generator_heap->var_exc == NULL);
Py_INCREF(tmp_assign_source_9);
generator_heap->var_exc = tmp_assign_source_9;
}
// Tried code:
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_25;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_10;
PyObject *tmp_expression_value_26;
PyObject *tmp_args_element_value_11;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_27;
PyObject *tmp_format_spec_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 622;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_6;
}

tmp_expression_value_25 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_fail);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 622;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_6;
}
tmp_expression_value_26 = module_var_accessor_websockets$protocol$CloseCode(tstate);
if (unlikely(tmp_expression_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_CloseCode);
}

if (tmp_expression_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));

Py_DECREF(tmp_called_value_5);

generator_heap->exception_lineno = 622;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_6;
}
tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_INVALID_DATA);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_5);

generator_heap->exception_lineno = 622;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(generator_heap->var_exc);
tmp_expression_value_27 = generator_heap->var_exc;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_reason);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_args_element_value_10);

generator_heap->exception_lineno = 622;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_6;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_args_element_value_10);

generator_heap->exception_lineno = 622;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_6;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_28;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_3ac33d9850d9d7a7d2782efa72a2d403;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(generator_heap->var_exc);
tmp_expression_value_28 = generator_heap->var_exc;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_start);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 622;
generator_heap->type_description_1 = "cooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 622;
generator_heap->type_description_1 = "cooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_args_element_value_10);
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_11 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_11 == NULL));
generator->m_frame->m_frame.f_lineno = 622;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 622;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(generator_heap->var_exc);
tmp_assattr_value_3 = generator_heap->var_exc;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 623;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_6;
}

tmp_assattr_target_3 = Nuitka_Cell_GET(generator->m_closure[0]);
generator_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_parser_exc, tmp_assattr_value_3);
if (generator_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 623;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_6;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_6:;
generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_4 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_exc);
generator_heap->var_exc = NULL;

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto try_except_handler_3;
// End of try:
try_end_3:;
Py_XDECREF(generator_heap->var_exc);
generator_heap->var_exc = NULL;

goto branch_end_10;
branch_no_10:;
{
bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
tmp_cmp_expr_left_9 = EXC_TYPE(tstate);
tmp_cmp_expr_right_9 = module_var_accessor_websockets$protocol$PayloadTooBig(tstate);
if (unlikely(tmp_cmp_expr_right_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_PayloadTooBig);
}

if (tmp_cmp_expr_right_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 625;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_3;
}
generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 625;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_3;
}
tmp_condition_result_11 = (generator_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_10); 
assert(generator_heap->var_exc == NULL);
Py_INCREF(tmp_assign_source_10);
generator_heap->var_exc = tmp_assign_source_10;
}
// Tried code:
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_29;
PyObject *tmp_call_result_7;
PyObject *tmp_args_element_value_12;
PyObject *tmp_expression_value_30;
CHECK_OBJECT(generator_heap->var_exc);
tmp_expression_value_29 = generator_heap->var_exc;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_set_current_size);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 626;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_7;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_6);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 626;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_7;
}

tmp_expression_value_30 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_current_size);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_6);

generator_heap->exception_lineno = 626;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_7;
}
generator->m_frame->m_frame.f_lineno = 626;
tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 626;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_31;
PyObject *tmp_call_result_8;
PyObject *tmp_args_element_value_13;
PyObject *tmp_expression_value_32;
PyObject *tmp_args_element_value_14;
PyObject *tmp_unicode_arg_3;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 627;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_7;
}

tmp_expression_value_31 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_fail);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 627;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_7;
}
tmp_expression_value_32 = module_var_accessor_websockets$protocol$CloseCode(tstate);
if (unlikely(tmp_expression_value_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_CloseCode);
}

if (tmp_expression_value_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));

Py_DECREF(tmp_called_value_7);

generator_heap->exception_lineno = 627;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_7;
}
tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_MESSAGE_TOO_BIG);
if (tmp_args_element_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_7);

generator_heap->exception_lineno = 627;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(generator_heap->var_exc);
tmp_unicode_arg_3 = generator_heap->var_exc;
tmp_args_element_value_14 = BUILTIN_UNICODE1(tmp_unicode_arg_3);
if (tmp_args_element_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_args_element_value_13);

generator_heap->exception_lineno = 627;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_7;
}
generator->m_frame->m_frame.f_lineno = 627;
{
    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_call_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 627;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_8);
Py_DECREF(tmp_call_result_8);
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(generator_heap->var_exc);
tmp_assattr_value_4 = generator_heap->var_exc;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 628;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_7;
}

tmp_assattr_target_4 = Nuitka_Cell_GET(generator->m_closure[0]);
generator_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_parser_exc, tmp_assattr_value_4);
if (generator_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 628;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_7;
}
}
goto try_end_4;
// Exception handler code:
try_except_handler_7:;
generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_5 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_exc);
generator_heap->var_exc = NULL;

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_5;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

goto try_except_handler_3;
// End of try:
try_end_4:;
Py_XDECREF(generator_heap->var_exc);
generator_heap->var_exc = NULL;

goto branch_end_11;
branch_no_11:;
{
bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
tmp_cmp_expr_left_10 = EXC_TYPE(tstate);
tmp_cmp_expr_right_10 = PyExc_Exception;
generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
assert(!(generator_heap->tmp_res == -1));
tmp_condition_result_12 = (generator_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_11); 
assert(generator_heap->var_exc == NULL);
Py_INCREF(tmp_assign_source_11);
generator_heap->var_exc = tmp_assign_source_11;
}
// Tried code:
{
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_33;
PyObject *tmp_expression_value_34;
PyObject *tmp_call_result_9;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 631;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_8;
}

tmp_expression_value_34 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_expression_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_logger);
if (tmp_expression_value_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 631;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_8;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_error);
CHECK_OBJECT(tmp_expression_value_33);
Py_DECREF(tmp_expression_value_33);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 631;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_8;
}
generator->m_frame->m_frame.f_lineno = 631;
tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_8, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_4fd9aa2a52973b8b61ab3b7b61d3c486_true_tuple, 0), mod_consts.const_tuple_str_plain_exc_info_tuple);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_call_result_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 631;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_9);
Py_DECREF(tmp_call_result_9);
}
{
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_35;
PyObject *tmp_call_result_10;
PyObject *tmp_args_element_value_15;
PyObject *tmp_expression_value_36;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 633;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_8;
}

tmp_expression_value_35 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_fail);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 633;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_8;
}
tmp_expression_value_36 = module_var_accessor_websockets$protocol$CloseCode(tstate);
if (unlikely(tmp_expression_value_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_CloseCode);
}

if (tmp_expression_value_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));

Py_DECREF(tmp_called_value_9);

generator_heap->exception_lineno = 633;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_8;
}
tmp_args_element_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain_INTERNAL_ERROR);
if (tmp_args_element_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_9);

generator_heap->exception_lineno = 633;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_8;
}
generator->m_frame->m_frame.f_lineno = 633;
tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_15);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_call_result_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 633;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_10);
Py_DECREF(tmp_call_result_10);
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(generator_heap->var_exc);
tmp_assattr_value_5 = generator_heap->var_exc;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 634;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_8;
}

tmp_assattr_target_5 = Nuitka_Cell_GET(generator->m_closure[0]);
generator_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_parser_exc, tmp_assattr_value_5);
if (generator_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 634;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_8;
}
}
goto try_end_5;
// Exception handler code:
try_except_handler_8:;
generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_6 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_exc);
generator_heap->var_exc = NULL;

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_6;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_6;

goto try_except_handler_3;
// End of try:
try_end_5:;
Py_XDECREF(generator_heap->var_exc);
generator_heap->var_exc = NULL;

goto branch_end_12;
branch_no_12:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 573;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "cooo";
goto try_except_handler_3;
branch_end_12:;
branch_end_11:;
branch_end_10:;
branch_end_9:;
branch_end_8:;
goto try_end_6;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_7 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_7 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_7;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

goto try_end_7;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_7:;
{
PyObject *tmp_expression_value_37;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_expression_value_37 = Py_None;
Py_INCREF(tmp_expression_value_37);
generator->m_yield_return_index = 3;
return tmp_expression_value_37;
yield_return_3:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 638;
generator_heap->type_description_1 = "cooo";
    goto frame_exception_exit_1;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_afb2d0eff73f028df2bd91e32cc9eaf5;
generator->m_frame->m_frame.f_lineno = 639;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_AssertionError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
generator_heap->exception_state.exception_value = tmp_raise_type_2;
generator_heap->exception_lineno = 639;
RAISE_EXCEPTION_WITH_VALUE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "cooo";
goto frame_exception_exit_1;
}

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
    generator->m_closure[0],
    generator_heap->var_max_size,
    generator_heap->var_frame,
    generator_heap->var_exc
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
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_8 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_8 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_max_size);
generator_heap->var_max_size = NULL;
Py_XDECREF(generator_heap->var_frame);
generator_heap->var_frame = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_8;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_8;

goto function_exception_exit;
// End of try:


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_websockets$protocol$$$function__19_parse$$$genobj__1_parse(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        websockets$protocol$$$function__19_parse$$$genobj__1_parse_context,
        module_websockets$protocol,
        mod_consts.const_str_plain_parse,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_87727ab499511692afe24137b37bda4b,
#endif
        code_objects_b328e2bae753ceacdbf75b1d908edb0f,
        closure,
        1,
#if 1
        sizeof(struct websockets$protocol$$$function__19_parse$$$genobj__1_parse_locals)
#else
        0
#endif
    );
}


static PyObject *impl_websockets$protocol$$$function__20_discard(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_self;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_GENERATOR_websockets$protocol$$$function__20_discard$$$genobj__1_discard(tstate, tmp_closure_1);

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
struct websockets$protocol$$$function__20_discard$$$genobj__1_discard_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
char yield_tmps[1024];
bool tmp_result;
};
#endif

static PyObject *websockets$protocol$$$function__20_discard$$$genobj__1_discard_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct websockets$protocol$$$function__20_discard$$$genobj__1_discard_locals *generator_heap = (struct websockets$protocol$$$function__20_discard$$$genobj__1_discard_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->type_description_1 = NULL;
generator_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
generator_heap->exception_lineno = 0;

    // Actual generator function body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_5b333e637eabbd00a2c0870ce8fbfb41, module_websockets$protocol, sizeof(void *));
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
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 655;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_side);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 655;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = module_var_accessor_websockets$protocol$SERVER(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_SERVER);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));

Py_DECREF(tmp_cmp_expr_left_2);

generator_heap->exception_lineno = 655;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? Py_True : Py_False;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 655;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_state);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 655;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = module_var_accessor_websockets$protocol$CONNECTING(tstate);
if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_CONNECTING);
}

if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));

Py_DECREF(tmp_cmp_expr_left_3);

generator_heap->exception_lineno = 655;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? Py_True : Py_False;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
tmp_cmp_expr_left_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_cmp_expr_left_1 = tmp_or_left_value_1;
or_end_1:;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 655;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_eof_sent);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 655;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 655;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 655;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (generator_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_raise_type_1;
generator->m_frame->m_frame.f_lineno = 655;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
generator_heap->exception_state.exception_value = tmp_raise_type_1;
generator_heap->exception_lineno = 655;
RAISE_EXCEPTION_WITH_VALUE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "c";
goto frame_exception_exit_1;
}
branch_no_1:;
loop_start_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_2;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_5;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 656;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_5 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_reader);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 656;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 656;
tmp_expression_value_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_at_eof);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 656;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_condition_result_2, sizeof(bool), &tmp_operand_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
generator->m_yield_from = tmp_expression_value_4;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_condition_result_2, sizeof(bool), &tmp_operand_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 656;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_operand_value_3 = yield_return_value;
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 656;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_operand_value_2 = (generator_heap->tmp_res == 0) ? Py_True : Py_False;
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
assert(!(generator_heap->tmp_res == -1));
tmp_condition_result_2 = (generator_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
goto loop_end_1;
branch_no_2:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 657;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_6 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_reader);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 657;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 657;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_discard);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 657;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 656;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 658;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_7 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_debug);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 658;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_attribute_value_1);

generator_heap->exception_lineno = 658;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_2;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 659;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_8 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_logger);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 659;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 659;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_debug,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_c75a0defaf8d9a13f7c93cdc63f80b31_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 659;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_3:;
{
bool tmp_condition_result_4;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_9;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_10;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 662;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_9 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_side);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 662;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = module_var_accessor_websockets$protocol$CLIENT(tstate);
if (unlikely(tmp_cmp_expr_right_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_CLIENT);
}

if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));

Py_DECREF(tmp_cmp_expr_left_4);

generator_heap->exception_lineno = 662;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 662;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_10 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_state);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 662;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = module_var_accessor_websockets$protocol$CONNECTING(tstate);
if (unlikely(tmp_cmp_expr_right_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_CONNECTING);
}

if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));

Py_DECREF(tmp_cmp_expr_left_5);

generator_heap->exception_lineno = 662;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
tmp_condition_result_4 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_4 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_3;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 663;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_called_instance_4 = Nuitka_Cell_GET(generator->m_closure[0]);
generator->m_frame->m_frame.f_lineno = 663;
tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_send_eof);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 663;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_4:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_var_accessor_websockets$protocol$CLOSED(tstate);
if (unlikely(tmp_assattr_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_CLOSED);
}

if (tmp_assattr_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 664;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 664;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_assattr_target_1 = Nuitka_Cell_GET(generator->m_closure[0]);
generator_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_state, tmp_assattr_value_1);
if (generator_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 664;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_expression_value_11;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_expression_value_11 = Py_None;
Py_INCREF(tmp_expression_value_11);
generator->m_yield_return_index = 2;
return tmp_expression_value_11;
yield_return_2:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 666;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_4cbf954de7b23ee7d734e1b0d6f8d03c;
generator->m_frame->m_frame.f_lineno = 669;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_AssertionError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_2 == NULL));
generator_heap->exception_state.exception_value = tmp_raise_type_2;
generator_heap->exception_lineno = 669;
RAISE_EXCEPTION_WITH_VALUE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "c";
goto frame_exception_exit_1;
}

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
    generator->m_closure[0]
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
goto function_exception_exit;
frame_no_exception_1:;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_websockets$protocol$$$function__20_discard$$$genobj__1_discard(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        websockets$protocol$$$function__20_discard$$$genobj__1_discard_context,
        module_websockets$protocol,
        mod_consts.const_str_plain_discard,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_dc4e579514737aae7c6d0e999283b1c9,
#endif
        code_objects_5b333e637eabbd00a2c0870ce8fbfb41,
        closure,
        1,
#if 1
        sizeof(struct websockets$protocol$$$function__20_discard$$$genobj__1_discard_locals)
#else
        0
#endif
    );
}


static PyObject *impl_websockets$protocol$$$function__21_recv_frame(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_frame = python_pars[1];
PyObject *var_pong_frame = NULL;
PyObject *tmp_inplace_assign_1__value = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$protocol$$$function__21_recv_frame;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$protocol$$$function__21_recv_frame = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_websockets$protocol$$$function__21_recv_frame)) {
    Py_XDECREF(cache_frame_frame_websockets$protocol$$$function__21_recv_frame);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$protocol$$$function__21_recv_frame == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$protocol$$$function__21_recv_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_37af3a1b412b29e4d367d8ec61a810bc, module_websockets$protocol, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$protocol$$$function__21_recv_frame->m_type_description == NULL);
frame_frame_websockets$protocol$$$function__21_recv_frame = cache_frame_frame_websockets$protocol$$$function__21_recv_frame;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$protocol$$$function__21_recv_frame);
assert(Py_REFCNT(frame_frame_websockets$protocol$$$function__21_recv_frame) == 2);

// Framed code:
{
bool tmp_condition_result_1;
int tmp_or_left_truth_1;
bool tmp_or_left_value_1;
bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_frame);
tmp_expression_value_1 = par_frame;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_opcode);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 676;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = module_var_accessor_websockets$protocol$OP_TEXT(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OP_TEXT);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 676;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_frame);
tmp_expression_value_2 = par_frame;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_opcode);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 676;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = module_var_accessor_websockets$protocol$OP_BINARY(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OP_BINARY);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 676;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
tmp_condition_result_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_1 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_current_size);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 677;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_websockets$protocol$ProtocolError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ProtocolError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 678;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$protocol$$$function__21_recv_frame->m_frame.f_lineno = 678;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_a1ca2c1d6c0cc693d5616595c1943bf3_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 678;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 678;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 678;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_frame);
tmp_expression_value_4 = par_frame;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_fin);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 679;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 679;
type_description_1 = "ooo";
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
PyObject *tmp_assattr_value_1;
PyObject *tmp_len_arg_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_frame);
tmp_expression_value_5 = par_frame;
tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_data);
if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 680;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assattr_value_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 680;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_current_size, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 680;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
branch_no_3:;
goto branch_end_1;
branch_no_1:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_frame);
tmp_expression_value_6 = par_frame;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_opcode);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 682;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = module_var_accessor_websockets$protocol$OP_CONT(tstate);
if (unlikely(tmp_cmp_expr_right_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OP_CONT);
}

if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_4);

exception_lineno = 682;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
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
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_current_size);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 683;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = Py_None;
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
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_websockets$protocol$ProtocolError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ProtocolError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 684;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$protocol$$$function__21_recv_frame->m_frame.f_lineno = 684;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_a22e9e9a4815278d6fb39e1f930c4d87_tuple);

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 684;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 684;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 684;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_5:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_expression_value_8;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_frame);
tmp_expression_value_8 = par_frame;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_fin);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 685;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 685;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_current_size, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 686;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_current_size);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 688;
type_description_1 = "ooo";
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
PyObject *tmp_len_arg_2;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
CHECK_OBJECT(par_frame);
tmp_expression_value_10 = par_frame;
tmp_len_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_data);
if (tmp_len_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 688;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_iadd_expr_right_1 = BUILTIN_LEN(tstate, tmp_len_arg_2);
CHECK_OBJECT(tmp_len_arg_2);
Py_DECREF(tmp_len_arg_2);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 688;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 688;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = tmp_iadd_expr_left_1;
tmp_inplace_assign_1__value = tmp_assign_source_2;

}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_assattr_value_3 = tmp_inplace_assign_1__value;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_current_size, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 688;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
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
branch_end_6:;
goto branch_end_4;
branch_no_4:;
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(par_frame);
tmp_expression_value_11 = par_frame;
tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_opcode);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 690;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_6 = module_var_accessor_websockets$protocol$OP_PING(tstate);
if (unlikely(tmp_cmp_expr_right_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OP_PING);
}

if (tmp_cmp_expr_right_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_6);

exception_lineno = 690;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_12;
tmp_called_value_3 = module_var_accessor_websockets$protocol$Frame(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Frame);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 693;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_websockets$protocol$OP_PONG(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OP_PONG);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 693;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_frame);
tmp_expression_value_12 = par_frame;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_data);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 693;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$protocol$$$function__21_recv_frame->m_frame.f_lineno = 693;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 693;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_pong_frame == NULL);
var_pong_frame = tmp_assign_source_3;
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(var_pong_frame);
tmp_args_element_value_3 = var_pong_frame;
frame_frame_websockets$protocol$$$function__21_recv_frame->m_frame.f_lineno = 694;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_send_frame, tmp_args_element_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 694;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto branch_end_7;
branch_no_7:;
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(par_frame);
tmp_expression_value_13 = par_frame;
tmp_cmp_expr_left_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_opcode);
if (tmp_cmp_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 696;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_7 = module_var_accessor_websockets$protocol$OP_PONG(tstate);
if (unlikely(tmp_cmp_expr_right_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OP_PONG);
}

if (tmp_cmp_expr_right_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_7);

exception_lineno = 696;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = (tmp_cmp_expr_left_7 != tmp_cmp_expr_right_7) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(par_frame);
tmp_expression_value_14 = par_frame;
tmp_cmp_expr_left_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_opcode);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 701;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_8 = module_var_accessor_websockets$protocol$OP_CLOSE(tstate);
if (unlikely(tmp_cmp_expr_right_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OP_CLOSE);
}

if (tmp_cmp_expr_right_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_8);

exception_lineno = 701;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = (tmp_cmp_expr_left_8 == tmp_cmp_expr_right_8) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_16;
PyObject *tmp_assattr_target_4;
tmp_expression_value_15 = module_var_accessor_websockets$protocol$Close(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Close);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 704;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_parse);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 704;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_frame);
tmp_expression_value_16 = par_frame;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_data);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 704;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$protocol$$$function__21_recv_frame->m_frame.f_lineno = 704;
tmp_assattr_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 704;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_close_rcvd, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 704;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(par_self);
tmp_expression_value_17 = par_self;
tmp_cmp_expr_left_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_state);
if (tmp_cmp_expr_left_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 705;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_9 = module_var_accessor_websockets$protocol$CLOSING(tstate);
if (unlikely(tmp_cmp_expr_right_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CLOSING);
}

if (tmp_cmp_expr_right_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_9);

exception_lineno = 705;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_10 = (tmp_cmp_expr_left_9 == tmp_cmp_expr_right_9) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_9);
Py_DECREF(tmp_cmp_expr_left_9);
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
PyObject *tmp_expression_value_18;
CHECK_OBJECT(par_self);
tmp_expression_value_18 = par_self;
tmp_cmp_expr_left_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_close_sent);
if (tmp_cmp_expr_left_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 706;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_10 = Py_None;
tmp_condition_result_11 = (tmp_cmp_expr_left_10 == tmp_cmp_expr_right_10) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_10);
Py_DECREF(tmp_cmp_expr_left_10);
if (tmp_condition_result_11 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_raise_type_3;
frame_frame_websockets$protocol$$$function__21_recv_frame->m_frame.f_lineno = 706;
tmp_raise_type_3 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 706;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_11:;
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
tmp_assattr_value_5 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_close_rcvd_then_sent, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 707;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
branch_no_10:;
{
bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
PyObject *tmp_expression_value_19;
CHECK_OBJECT(par_self);
tmp_expression_value_19 = par_self;
tmp_cmp_expr_left_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_current_size);
if (tmp_cmp_expr_left_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 709;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_11 = Py_None;
tmp_condition_result_12 = (tmp_cmp_expr_left_11 != tmp_cmp_expr_right_11) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_11);
Py_DECREF(tmp_cmp_expr_left_11);
if (tmp_condition_result_12 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_raise_type_input_3;
PyObject *tmp_called_value_5;
tmp_called_value_5 = module_var_accessor_websockets$protocol$ProtocolError(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ProtocolError);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 710;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$protocol$$$function__21_recv_frame->m_frame.f_lineno = 710;
tmp_raise_type_input_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_digest_9f85ec54bccb123247005f3d08f0100f_tuple);

if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 710;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_4 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
CHECK_OBJECT(tmp_raise_type_input_3);
Py_DECREF(tmp_raise_type_input_3);
if (tmp_raise_type_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 710;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 710;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_12:;
{
bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
PyObject *tmp_expression_value_20;
CHECK_OBJECT(par_self);
tmp_expression_value_20 = par_self;
tmp_cmp_expr_left_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_state);
if (tmp_cmp_expr_left_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 718;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_12 = module_var_accessor_websockets$protocol$OPEN(tstate);
if (unlikely(tmp_cmp_expr_right_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OPEN);
}

if (tmp_cmp_expr_right_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_12);

exception_lineno = 718;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_13 = (tmp_cmp_expr_left_12 == tmp_cmp_expr_right_12) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_12);
Py_DECREF(tmp_cmp_expr_left_12);
if (tmp_condition_result_13 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_21;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_22;
CHECK_OBJECT(par_self);
tmp_expression_value_21 = par_self;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_send_frame);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 723;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = module_var_accessor_websockets$protocol$Frame(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Frame);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);

exception_lineno = 723;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = module_var_accessor_websockets$protocol$OP_CLOSE(tstate);
if (unlikely(tmp_args_element_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OP_CLOSE);
}

if (tmp_args_element_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);

exception_lineno = 723;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_frame);
tmp_expression_value_22 = par_frame;
tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_data);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 723;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$protocol$$$function__21_recv_frame->m_frame.f_lineno = 723;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_args_element_value_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 723;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$protocol$$$function__21_recv_frame->m_frame.f_lineno = 723;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 723;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_expression_value_23;
PyObject *tmp_assattr_target_6;
CHECK_OBJECT(par_self);
tmp_expression_value_23 = par_self;
tmp_assattr_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_close_rcvd);
if (tmp_assattr_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 724;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain_close_sent, tmp_assattr_value_6);
CHECK_OBJECT(tmp_assattr_value_6);
Py_DECREF(tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 724;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_assattr_target_7;
tmp_assattr_value_7 = Py_True;
CHECK_OBJECT(par_self);
tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain_close_rcvd_then_sent, tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 725;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_8;
PyObject *tmp_assattr_target_8;
tmp_assattr_value_8 = module_var_accessor_websockets$protocol$CLOSING(tstate);
if (unlikely(tmp_assattr_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CLOSING);
}

if (tmp_assattr_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 726;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_8 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain_state, tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 726;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
branch_no_13:;
{
bool tmp_condition_result_14;
PyObject *tmp_cmp_expr_left_13;
PyObject *tmp_cmp_expr_right_13;
PyObject *tmp_expression_value_24;
CHECK_OBJECT(par_self);
tmp_expression_value_24 = par_self;
tmp_cmp_expr_left_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_side);
if (tmp_cmp_expr_left_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 734;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_13 = module_var_accessor_websockets$protocol$SERVER(tstate);
if (unlikely(tmp_cmp_expr_right_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SERVER);
}

if (tmp_cmp_expr_right_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_13);

exception_lineno = 734;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_14 = (tmp_cmp_expr_left_13 == tmp_cmp_expr_right_13) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_13);
Py_DECREF(tmp_cmp_expr_left_13);
if (tmp_condition_result_14 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_3;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_websockets$protocol$$$function__21_recv_frame->m_frame.f_lineno = 735;
tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_send_eof);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 735;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_14:;
{
PyObject *tmp_assattr_value_9;
PyObject *tmp_called_instance_3;
PyObject *tmp_assattr_target_9;
CHECK_OBJECT(par_self);
tmp_called_instance_3 = par_self;
frame_frame_websockets$protocol$$$function__21_recv_frame->m_frame.f_lineno = 742;
tmp_assattr_value_9 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_discard);
if (tmp_assattr_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 742;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_9 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts.const_str_plain_parser, tmp_assattr_value_9);
CHECK_OBJECT(tmp_assattr_value_9);
Py_DECREF(tmp_assattr_value_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 742;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_value_value_1;
PyObject *tmp_expression_value_25;
PyObject *tmp_next_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_25 = par_self;
tmp_value_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_parser);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 743;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_next_value_1 = ITERATOR_NEXT(tmp_value_value_1);
if (tmp_next_value_1 == NULL) {
    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

    if (!HAS_EXCEPTION_STATE(&exception_state)) {
        SET_EXCEPTION_PRESERVATION_STATE_STOP_ITERATION_EMPTY(tstate, &exception_state);
    }
}

CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_next_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 743;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_next_value_1);
Py_DECREF(tmp_next_value_1);
}
goto branch_end_9;
branch_no_9:;
{
PyObject *tmp_raise_type_5;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_05c4874b2524d0437df74263d0cf866d;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_26;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_frame);
tmp_expression_value_26 = par_frame;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_opcode);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 747;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = mod_consts.const_str_plain_02x;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 747;
type_description_1 = "ooo";
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
frame_frame_websockets$protocol$$$function__21_recv_frame->m_frame.f_lineno = 747;
tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_AssertionError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 747;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_end_9:;
branch_no_8:;
branch_end_7:;
branch_end_4:;
branch_end_1:;
{
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_27;
PyObject *tmp_expression_value_28;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_8;
CHECK_OBJECT(par_self);
tmp_expression_value_28 = par_self;
tmp_expression_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_events);
if (tmp_expression_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 749;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_append);
CHECK_OBJECT(tmp_expression_value_27);
Py_DECREF(tmp_expression_value_27);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 749;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_frame);
tmp_args_element_value_8 = par_frame;
frame_frame_websockets$protocol$$$function__21_recv_frame->m_frame.f_lineno = 749;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 749;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$protocol$$$function__21_recv_frame, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$protocol$$$function__21_recv_frame->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$protocol$$$function__21_recv_frame, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$protocol$$$function__21_recv_frame,
    type_description_1,
    par_self,
    par_frame,
    var_pong_frame
);


// Release cached frame if used for exception.
if (frame_frame_websockets$protocol$$$function__21_recv_frame == cache_frame_frame_websockets$protocol$$$function__21_recv_frame) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$protocol$$$function__21_recv_frame);
    cache_frame_frame_websockets$protocol$$$function__21_recv_frame = NULL;
}

assertFrameObject(frame_frame_websockets$protocol$$$function__21_recv_frame);

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
Py_XDECREF(var_pong_frame);
var_pong_frame = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_pong_frame);
var_pong_frame = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_frame);
Py_DECREF(par_frame);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_frame);
Py_DECREF(par_frame);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_websockets$protocol$$$function__22_send_frame(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_frame = python_pars[1];
struct Nuitka_FrameObject *frame_frame_websockets$protocol$$$function__22_send_frame;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$protocol$$$function__22_send_frame = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$protocol$$$function__22_send_frame)) {
    Py_XDECREF(cache_frame_frame_websockets$protocol$$$function__22_send_frame);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$protocol$$$function__22_send_frame == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$protocol$$$function__22_send_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_9752c9851c741cbb478b325088d81053, module_websockets$protocol, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$protocol$$$function__22_send_frame->m_type_description == NULL);
frame_frame_websockets$protocol$$$function__22_send_frame = cache_frame_frame_websockets$protocol$$$function__22_send_frame;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$protocol$$$function__22_send_frame);
assert(Py_REFCNT(frame_frame_websockets$protocol$$$function__22_send_frame) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_debug);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 754;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 754;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_logger);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 755;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_80cdda66c11f8d6336cf3636d3981b0f;
CHECK_OBJECT(par_frame);
tmp_args_element_value_2 = par_frame;
frame_frame_websockets$protocol$$$function__22_send_frame->m_frame.f_lineno = 755;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_debug,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 755;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_writes);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 756;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_append);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 756;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_frame);
tmp_expression_value_5 = par_frame;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_serialize);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 757;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_side);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 758;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = module_var_accessor_websockets$protocol$CLIENT(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CLIENT);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 758;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? Py_True : Py_False;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_extensions);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 759;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$protocol$$$function__22_send_frame->m_frame.f_lineno = 757;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

    tmp_args_element_value_3 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_str_plain_mask_str_plain_extensions_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 757;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$protocol$$$function__22_send_frame->m_frame.f_lineno = 756;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 756;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$protocol$$$function__22_send_frame, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$protocol$$$function__22_send_frame->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$protocol$$$function__22_send_frame, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$protocol$$$function__22_send_frame,
    type_description_1,
    par_self,
    par_frame
);


// Release cached frame if used for exception.
if (frame_frame_websockets$protocol$$$function__22_send_frame == cache_frame_frame_websockets$protocol$$$function__22_send_frame) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$protocol$$$function__22_send_frame);
    cache_frame_frame_websockets$protocol$$$function__22_send_frame = NULL;
}

assertFrameObject(frame_frame_websockets$protocol$$$function__22_send_frame);

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
CHECK_OBJECT(par_frame);
Py_DECREF(par_frame);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_frame);
Py_DECREF(par_frame);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_websockets$protocol$$$function__23_send_eof(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_websockets$protocol$$$function__23_send_eof;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$protocol$$$function__23_send_eof = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$protocol$$$function__23_send_eof)) {
    Py_XDECREF(cache_frame_frame_websockets$protocol$$$function__23_send_eof);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$protocol$$$function__23_send_eof == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$protocol$$$function__23_send_eof = MAKE_FUNCTION_FRAME(tstate, code_objects_a62ff1b057a7d054a59f8c8a1cb44a38, module_websockets$protocol, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$protocol$$$function__23_send_eof->m_type_description == NULL);
frame_frame_websockets$protocol$$$function__23_send_eof = cache_frame_frame_websockets$protocol$$$function__23_send_eof;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$protocol$$$function__23_send_eof);
assert(Py_REFCNT(frame_frame_websockets$protocol$$$function__23_send_eof) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_eof_sent);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 764;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 764;
type_description_1 = "o";
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
frame_frame_websockets$protocol$$$function__23_send_eof->m_frame.f_lineno = 764;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 764;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_True;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_eof_sent, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 765;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_debug);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 766;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 766;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
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
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_logger);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 767;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_websockets$protocol$$$function__23_send_eof->m_frame.f_lineno = 767;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_debug,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_01473d63ff65b4c02d86f75a2f0b57c9_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 767;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_2:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_writes);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 768;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_append);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 768;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_websockets$protocol$SEND_EOF(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SEND_EOF);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 768;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_websockets$protocol$$$function__23_send_eof->m_frame.f_lineno = 768;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 768;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$protocol$$$function__23_send_eof, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$protocol$$$function__23_send_eof->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$protocol$$$function__23_send_eof, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$protocol$$$function__23_send_eof,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_websockets$protocol$$$function__23_send_eof == cache_frame_frame_websockets$protocol$$$function__23_send_eof) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$protocol$$$function__23_send_eof);
    cache_frame_frame_websockets$protocol$$$function__23_send_eof = NULL;
}

assertFrameObject(frame_frame_websockets$protocol$$$function__23_send_eof);

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



static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__10_send_text(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$protocol$$$function__10_send_text,
        mod_consts.const_str_plain_send_text,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d280bbd095b32120e8f02b8520f31f44,
#endif
        code_objects_4291b49c0b28cac2603db75700398e93,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$protocol,
        mod_consts.const_str_digest_77ab108b5bf1f73af273e039096fefa7,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__11_send_binary(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$protocol$$$function__11_send_binary,
        mod_consts.const_str_plain_send_binary,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_26b7b944b739f5500015ae9666b0d991,
#endif
        code_objects_c62b6b756bfc7050d9fc3ba80ffe536c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$protocol,
        mod_consts.const_str_digest_59d2a709bf1c4438bbbc271cf15e4a61,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__12_send_close(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$protocol$$$function__12_send_close,
        mod_consts.const_str_plain_send_close,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_41ce80a45f4eb6fdcab6c5007f38df47,
#endif
        code_objects_febcde1ad55b068c2b5bfa22acc15d7c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$protocol,
        mod_consts.const_str_digest_0b7f7f4af88b4c4e6f29599888913e4e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__13_send_ping(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$protocol$$$function__13_send_ping,
        mod_consts.const_str_plain_send_ping,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_36905314b676209cb03c42f03ee9679e,
#endif
        code_objects_f65b164838d61548f90b1dab36fd128c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$protocol,
        mod_consts.const_str_digest_5e69653c320343a95bb75b6d23f9ca37,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__14_send_pong(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$protocol$$$function__14_send_pong,
        mod_consts.const_str_plain_send_pong,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b62621193b1d7b030b0285b5f9736aa0,
#endif
        code_objects_b634bea97c79777baa05262644fe8cdf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$protocol,
        mod_consts.const_str_digest_2046667b8c630facbcfede63b2e291ec,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__15_fail(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$protocol$$$function__15_fail,
        mod_consts.const_str_plain_fail,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a30839757adba178836cfad05add5445,
#endif
        code_objects_1a2089e721b9c43fa3e32eadf32db61b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$protocol,
        mod_consts.const_str_digest_fe361088a02c7f541eab9966f60bb29e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__16_events_received(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$protocol$$$function__16_events_received,
        mod_consts.const_str_plain_events_received,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_948c7f7bd0c933664cd5cd4e6ee29d86,
#endif
        code_objects_6a7d4607a5933ea26f76865e2f2beba9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$protocol,
        mod_consts.const_str_digest_604b46b6acb3a5b35a0758da6de214a0,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__17_data_to_send(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$protocol$$$function__17_data_to_send,
        mod_consts.const_str_plain_data_to_send,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c46d7d9f95b3611f8a8c356052483c60,
#endif
        code_objects_60c2b9e39ce739d965ffdd2d16e7072e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$protocol,
        mod_consts.const_str_digest_d17f3846b6ea249e42ad8b9aa3b080f2,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__18_close_expected(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$protocol$$$function__18_close_expected,
        mod_consts.const_str_plain_close_expected,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c87b8a39e4a4f8712de14c2273e08015,
#endif
        code_objects_4c31acede4e3d2b77a61ad2a74c9bac8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$protocol,
        mod_consts.const_str_digest_7c9863627c68ddf0d4c2f99f909a7e34,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__19_parse(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$protocol$$$function__19_parse,
        mod_consts.const_str_plain_parse,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_87727ab499511692afe24137b37bda4b,
#endif
        code_objects_b328e2bae753ceacdbf75b1d908edb0f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$protocol,
        mod_consts.const_str_digest_b38b7d2d28c2455c4f2887607c043224,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__1___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$protocol$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b96fac313115d5169230e3421a1f9f27,
#endif
        code_objects_0d33bfed59d4e93805e1fb6f9e7c48b5,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_websockets$protocol,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__20_discard(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$protocol$$$function__20_discard,
        mod_consts.const_str_plain_discard,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_dc4e579514737aae7c6d0e999283b1c9,
#endif
        code_objects_5b333e637eabbd00a2c0870ce8fbfb41,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$protocol,
        mod_consts.const_str_digest_10852fb3b026a7626daf6973e58903c2,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__21_recv_frame(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$protocol$$$function__21_recv_frame,
        mod_consts.const_str_plain_recv_frame,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d44f9d35043858a3728280037ae9bfde,
#endif
        code_objects_37af3a1b412b29e4d367d8ec61a810bc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$protocol,
        mod_consts.const_str_digest_57a861628633d14384e171015b7e9fa0,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__22_send_frame(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$protocol$$$function__22_send_frame,
        mod_consts.const_str_plain_send_frame,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8f70d9706108ed7e76763475f6624465,
#endif
        code_objects_9752c9851c741cbb478b325088d81053,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$protocol,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__23_send_eof(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$protocol$$$function__23_send_eof,
        mod_consts.const_str_plain_send_eof,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_17e60704bef1fc47962bdd5b60039802,
#endif
        code_objects_a62ff1b057a7d054a59f8c8a1cb44a38,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$protocol,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__2_state(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$protocol$$$function__2_state,
        mod_consts.const_str_plain_state,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7c012172864373037a6b2f56188d81a8,
#endif
        code_objects_857e36c440eb8df7ac5d6951d8a757cc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$protocol,
        mod_consts.const_str_digest_cf172e2ea8a55afe62c198a7709a31a7,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__3_state(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$protocol$$$function__3_state,
        mod_consts.const_str_plain_state,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7c012172864373037a6b2f56188d81a8,
#endif
        code_objects_cfa1be10a33981e5a829b76030726707,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$protocol,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__4_close_code(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$protocol$$$function__4_close_code,
        mod_consts.const_str_plain_close_code,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_16f80b062d8ffea5e563cca87945ba86,
#endif
        code_objects_2888f340974fda5bb8c8a14daf920437,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$protocol,
        mod_consts.const_str_digest_5f6b9a7beab5c84fec7eb731ca88c2e3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__5_close_reason(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$protocol$$$function__5_close_reason,
        mod_consts.const_str_plain_close_reason,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ad577b78bc9f41122546e8c4d2e9359a,
#endif
        code_objects_3ebbae6f85792ec0bae3d062d4f9fb3f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$protocol,
        mod_consts.const_str_digest_4e6d06f9ecfbc7b84f72c0aa9d2c58fa,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__6_close_exc(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$protocol$$$function__6_close_exc,
        mod_consts.const_str_plain_close_exc,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_422d4440266e4856b97ec893b4a4aa56,
#endif
        code_objects_f4b3eb2c46ff0d0d36d10272ea8cbb7c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$protocol,
        mod_consts.const_str_digest_6fdb368c1ba25e9a376d76c54197be88,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__7_receive_data(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$protocol$$$function__7_receive_data,
        mod_consts.const_str_plain_receive_data,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6005beaea5f560caab9d863a3e90e8af,
#endif
        code_objects_84cce1bdaa287014141ff7cb9a5c19b0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$protocol,
        mod_consts.const_str_digest_8dd4c68f2ad4263f21c1532967e27520,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__8_receive_eof(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$protocol$$$function__8_receive_eof,
        mod_consts.const_str_plain_receive_eof,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_04322128f45b8605e2a9b58fe48f547f,
#endif
        code_objects_dfb1494dc3b683a60a80c2164bd36d00,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$protocol,
        mod_consts.const_str_digest_0d77c13731b083432ce32d88b93a9f1b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$protocol$$$function__9_send_continuation(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$protocol$$$function__9_send_continuation,
        mod_consts.const_str_plain_send_continuation,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_293328105b5a1b985eae796a0e94981b,
#endif
        code_objects_a74f17a63a64e119be3f59439075ac59,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$protocol,
        mod_consts.const_str_digest_61511e21f5be559024b619c4e019ed0c,
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

static function_impl_code const function_table_websockets$protocol[] = {
impl_websockets$protocol$$$function__1___init__,
impl_websockets$protocol$$$function__2_state,
impl_websockets$protocol$$$function__3_state,
impl_websockets$protocol$$$function__4_close_code,
impl_websockets$protocol$$$function__5_close_reason,
impl_websockets$protocol$$$function__6_close_exc,
impl_websockets$protocol$$$function__7_receive_data,
impl_websockets$protocol$$$function__8_receive_eof,
impl_websockets$protocol$$$function__9_send_continuation,
impl_websockets$protocol$$$function__10_send_text,
impl_websockets$protocol$$$function__11_send_binary,
impl_websockets$protocol$$$function__12_send_close,
impl_websockets$protocol$$$function__13_send_ping,
impl_websockets$protocol$$$function__14_send_pong,
impl_websockets$protocol$$$function__15_fail,
impl_websockets$protocol$$$function__16_events_received,
impl_websockets$protocol$$$function__17_data_to_send,
impl_websockets$protocol$$$function__18_close_expected,
impl_websockets$protocol$$$function__19_parse,
impl_websockets$protocol$$$function__20_discard,
impl_websockets$protocol$$$function__21_recv_frame,
impl_websockets$protocol$$$function__22_send_frame,
impl_websockets$protocol$$$function__23_send_eof,
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

    return Nuitka_Function_GetFunctionState(function, function_table_websockets$protocol);
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
        module_websockets$protocol,
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
        function_table_websockets$protocol,
        sizeof(function_table_websockets$protocol) / sizeof(function_impl_code)
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
static char const *module_full_name = "websockets.protocol";
#endif

// Internal entry point for module code.
PyObject *module_code_websockets$protocol(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("websockets$protocol");

    // Store the module for future use.
    module_websockets$protocol = module;

    moduledict_websockets$protocol = MODULE_DICT(module_websockets$protocol);

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
        PRINT_STRING("websockets$protocol: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("websockets$protocol: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("websockets$protocol: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "websockets.protocol" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initwebsockets$protocol\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_websockets$protocol,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_websockets$protocol,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_websockets$protocol,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_websockets$protocol,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_websockets$protocol,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_websockets$protocol);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_websockets$protocol, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_websockets$protocol, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_websockets$protocol, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_websockets$protocol);
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

        UPDATE_STRING_DICT1(moduledict_websockets$protocol, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *tmp_Side$tuple_unpack_1__element_1 = NULL;
PyObject *tmp_Side$tuple_unpack_1__element_2 = NULL;
PyObject *tmp_Side$tuple_unpack_1__source_iter = NULL;
PyObject *tmp_State$tuple_unpack_1__element_1 = NULL;
PyObject *tmp_State$tuple_unpack_1__element_2 = NULL;
PyObject *tmp_State$tuple_unpack_1__element_3 = NULL;
PyObject *tmp_State$tuple_unpack_1__element_4 = NULL;
PyObject *tmp_State$tuple_unpack_1__source_iter = NULL;
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
struct Nuitka_FrameObject *frame_frame_websockets$protocol;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_websockets$protocol$$$class__1_Side_45 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_websockets$protocol$$$class__1_Side_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
PyObject *locals_websockets$protocol$$$class__2_State_55 = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$protocol$$$class__2_State_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
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
PyObject *locals_websockets$protocol$$$class__3_Protocol_71 = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$protocol$$$class__3_Protocol_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_websockets$protocol, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_websockets$protocol, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_websockets$protocol = MAKE_MODULE_FRAME(code_objects_bef4b16a31fcfb3f380d09db6951d079, module_websockets$protocol);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$protocol);
assert(Py_REFCNT(frame_frame_websockets$protocol) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_websockets$protocol$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_websockets$protocol$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_websockets$protocol, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_enum;
tmp_globals_arg_value_1 = (PyObject *)moduledict_websockets$protocol;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_websockets$protocol->m_frame.f_lineno = 3;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_enum, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_logging;
tmp_globals_arg_value_2 = (PyObject *)moduledict_websockets$protocol;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_websockets$protocol->m_frame.f_lineno = 4;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_logging, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_uuid;
tmp_globals_arg_value_3 = (PyObject *)moduledict_websockets$protocol;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_websockets$protocol->m_frame.f_lineno = 5;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_uuid, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
tmp_globals_arg_value_4 = (PyObject *)moduledict_websockets$protocol;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_Generator_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_websockets$protocol->m_frame.f_lineno = 6;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_websockets$protocol,
        mod_consts.const_str_plain_Generator,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Generator);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_Generator, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_exceptions;
tmp_globals_arg_value_5 = (PyObject *)moduledict_websockets$protocol;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_3520041fb0e264576a2b71f8b5943791_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_websockets$protocol->m_frame.f_lineno = 8;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
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
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_websockets$protocol,
        mod_consts.const_str_plain_ConnectionClosed,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_ConnectionClosed);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionClosed, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_websockets$protocol,
        mod_consts.const_str_plain_ConnectionClosedError,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_ConnectionClosedError);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionClosedError, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_websockets$protocol,
        mod_consts.const_str_plain_ConnectionClosedOK,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_ConnectionClosedOK);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionClosedOK, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_websockets$protocol,
        mod_consts.const_str_plain_InvalidState,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_InvalidState);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidState, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_6 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_websockets$protocol,
        mod_consts.const_str_plain_PayloadTooBig,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_PayloadTooBig);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_PayloadTooBig, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_7 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_websockets$protocol,
        mod_consts.const_str_plain_ProtocolError,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_ProtocolError);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_ProtocolError, tmp_assign_source_15);
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
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_extensions;
tmp_globals_arg_value_6 = (PyObject *)moduledict_websockets$protocol;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_Extension_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_websockets$protocol->m_frame.f_lineno = 16;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_websockets$protocol,
        mod_consts.const_str_plain_Extension,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_Extension);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_Extension, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain_frames;
tmp_globals_arg_value_7 = (PyObject *)moduledict_websockets$protocol;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_eed96743e6a2c6597e4aa97ac0c2ae4b_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_websockets$protocol->m_frame.f_lineno = 17;
tmp_assign_source_17 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_17;
}
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_9 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_websockets$protocol,
        mod_consts.const_str_plain_OK_CLOSE_CODES,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_OK_CLOSE_CODES);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_OK_CLOSE_CODES, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_10 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_websockets$protocol,
        mod_consts.const_str_plain_OP_BINARY,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_OP_BINARY);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_BINARY, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_11 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_websockets$protocol,
        mod_consts.const_str_plain_OP_CLOSE,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_OP_CLOSE);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_CLOSE, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_12 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_websockets$protocol,
        mod_consts.const_str_plain_OP_CONT,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_OP_CONT);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_CONT, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_13 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_websockets$protocol,
        mod_consts.const_str_plain_OP_PING,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_OP_PING);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_PING, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_14 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_websockets$protocol,
        mod_consts.const_str_plain_OP_PONG,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_OP_PONG);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_PONG, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_15 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_websockets$protocol,
        mod_consts.const_str_plain_OP_TEXT,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_OP_TEXT);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_TEXT, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_16;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_16 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_websockets$protocol,
        mod_consts.const_str_plain_Close,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_Close);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_Close, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_17;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_17 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_websockets$protocol,
        mod_consts.const_str_plain_CloseCode,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_CloseCode);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_CloseCode, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_18;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_18 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_websockets$protocol,
        mod_consts.const_str_plain_Frame,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_Frame);
}

if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_Frame, tmp_assign_source_27);
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
PyObject *tmp_assign_source_28;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain_http11;
tmp_globals_arg_value_8 = (PyObject *)moduledict_websockets$protocol;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_Request_str_plain_Response_tuple;
tmp_level_value_8 = const_int_pos_1;
frame_frame_websockets$protocol->m_frame.f_lineno = 29;
tmp_assign_source_28 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_28;
}
// Tried code:
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_19;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_19 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_websockets$protocol,
        mod_consts.const_str_plain_Request,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_Request);
}

if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_Request, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_20;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_20 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_websockets$protocol,
        mod_consts.const_str_plain_Response,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_Response);
}

if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_Response, tmp_assign_source_30);
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
PyObject *tmp_assign_source_31;
PyObject *tmp_import_name_from_21;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain_streams;
tmp_globals_arg_value_9 = (PyObject *)moduledict_websockets$protocol;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_StreamReader_tuple;
tmp_level_value_9 = const_int_pos_1;
frame_frame_websockets$protocol->m_frame.f_lineno = 30;
tmp_import_name_from_21 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_websockets$protocol,
        mod_consts.const_str_plain_StreamReader,
        const_int_0
    );
} else {
    tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain_StreamReader);
}

CHECK_OBJECT(tmp_import_name_from_21);
Py_DECREF(tmp_import_name_from_21);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_StreamReader, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_plain_typing;
tmp_globals_arg_value_10 = (PyObject *)moduledict_websockets$protocol;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_a7d1027478eeb662f2180c7a8d510dfa_tuple;
tmp_level_value_10 = const_int_pos_1;
frame_frame_websockets$protocol->m_frame.f_lineno = 31;
tmp_assign_source_32 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_32;
}
// Tried code:
{
PyObject *tmp_assign_source_33;
PyObject *tmp_import_name_from_22;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_22 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_websockets$protocol,
        mod_consts.const_str_plain_BytesLike,
        const_int_0
    );
} else {
    tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain_BytesLike);
}

if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_BytesLike, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_import_name_from_23;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_23 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_23)) {
    tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_23,
        (PyObject *)moduledict_websockets$protocol,
        mod_consts.const_str_plain_LoggerLike,
        const_int_0
    );
} else {
    tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts.const_str_plain_LoggerLike);
}

if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_LoggerLike, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_import_name_from_24;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_24 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_24)) {
    tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_24,
        (PyObject *)moduledict_websockets$protocol,
        mod_consts.const_str_plain_Origin,
        const_int_0
    );
} else {
    tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts.const_str_plain_Origin);
}

if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_Origin, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_import_name_from_25;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_25 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_25)) {
    tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_25,
        (PyObject *)moduledict_websockets$protocol,
        mod_consts.const_str_plain_Subprotocol,
        const_int_0
    );
} else {
    tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts.const_str_plain_Subprotocol);
}

if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_Subprotocol, tmp_assign_source_36);
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
PyObject *tmp_assign_source_37;
tmp_assign_source_37 = MAKE_LIST4(tstate, mod_consts.const_list_49aea8477c302808c50cc9def784047a_list);
UPDATE_STRING_DICT1(moduledict_websockets$protocol, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_bitor_expr_left_1;
PyObject *tmp_bitor_expr_right_1;
PyObject *tmp_bitor_expr_left_2;
PyObject *tmp_bitor_expr_right_2;
tmp_bitor_expr_left_2 = module_var_accessor_websockets$protocol$Request(tstate);
if (unlikely(tmp_bitor_expr_left_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Request);
}

if (tmp_bitor_expr_left_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 41;

    goto frame_exception_exit_1;
}
tmp_bitor_expr_right_2 = module_var_accessor_websockets$protocol$Response(tstate);
if (unlikely(tmp_bitor_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Response);
}

if (tmp_bitor_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 41;

    goto frame_exception_exit_1;
}
tmp_bitor_expr_left_1 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_2, tmp_bitor_expr_right_2);
if (tmp_bitor_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
tmp_bitor_expr_right_1 = module_var_accessor_websockets$protocol$Frame(tstate);
if (unlikely(tmp_bitor_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Frame);
}

if (tmp_bitor_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_bitor_expr_left_1);

exception_lineno = 41;

    goto frame_exception_exit_1;
}
tmp_assign_source_38 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
CHECK_OBJECT(tmp_bitor_expr_left_1);
Py_DECREF(tmp_bitor_expr_left_1);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_Event, tmp_assign_source_38);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_39;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_websockets$protocol$enum(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enum);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 45;

    goto try_except_handler_5;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_IntEnum);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_5;
}
tmp_assign_source_39 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_39, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_39;
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_40 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_40;
}
{
PyObject *tmp_assign_source_41;
tmp_assign_source_41 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_41;
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_5;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_expression_value_2 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_5;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_5;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_42 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_42;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_5;
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
PyObject *tmp_assign_source_43;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_4 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_5;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_Side;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_websockets$protocol->m_frame.f_lineno = 45;
tmp_assign_source_43 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_43;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_5 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_5;
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
PyObject *tmp_expression_value_6;
PyObject *tmp_name_value_11;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_11 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_11, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_5;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_7;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_7 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_7 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_5;
}
frame_frame_websockets$protocol->m_frame.f_lineno = 45;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 45;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_5;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_44;
tmp_assign_source_44 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_44;
}
branch_end_1:;
{
PyObject *tmp_assign_source_45;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_websockets$protocol$$$class__1_Side_45 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_3cd6ac1bd1cb919941d493834e2ad6f0;
tmp_res = PyObject_SetItem(locals_websockets$protocol$$$class__1_Side_45, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_digest_5eac742e0b1285e3eb657a6984114ce7;
tmp_res = PyObject_SetItem(locals_websockets$protocol$$$class__1_Side_45, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_plain_Side;
tmp_res = PyObject_SetItem(locals_websockets$protocol$$$class__1_Side_45, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_int_pos_45;
tmp_res = PyObject_SetItem(locals_websockets$protocol$$$class__1_Side_45, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_7;
}
frame_frame_websockets$protocol$$$class__1_Side_2 = MAKE_CLASS_FRAME(tstate, code_objects_333e4926fc0acb9ac824c1f2d17cffb7, module_websockets$protocol, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$protocol$$$class__1_Side_2);
assert(Py_REFCNT(frame_frame_websockets$protocol$$$class__1_Side_2) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_46;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_2;
tmp_called_value_2 = PyObject_GetItem(locals_websockets$protocol$$$class__1_Side_45, const_str_plain_range);

if (tmp_called_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_2 = (PyObject *)&PyRange_Type;
        Py_INCREF(tmp_called_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto try_except_handler_8;
    }
}

frame_frame_websockets$protocol$$$class__1_Side_2->m_frame.f_lineno = 48;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_int_pos_2_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_2 = "o";
    goto try_except_handler_8;
}
tmp_assign_source_46 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_2 = "o";
    goto try_except_handler_8;
}
assert(tmp_Side$tuple_unpack_1__source_iter == NULL);
tmp_Side$tuple_unpack_1__source_iter = tmp_assign_source_46;
}
// Tried code:
{
PyObject *tmp_assign_source_47;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_Side$tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_Side$tuple_unpack_1__source_iter;
tmp_assign_source_47 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;
type_description_2 = "o";
    goto try_except_handler_9;
}
assert(tmp_Side$tuple_unpack_1__element_1 == NULL);
tmp_Side$tuple_unpack_1__element_1 = tmp_assign_source_47;
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_Side$tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_Side$tuple_unpack_1__source_iter;
tmp_assign_source_48 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;
type_description_2 = "o";
    goto try_except_handler_9;
}
assert(tmp_Side$tuple_unpack_1__element_2 == NULL);
tmp_Side$tuple_unpack_1__element_2 = tmp_assign_source_48;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_Side$tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_Side$tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;
type_description_2 = "o";
    goto try_except_handler_9;
}
}
goto try_end_5;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_Side$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_Side$tuple_unpack_1__source_iter);
Py_DECREF(tmp_Side$tuple_unpack_1__source_iter);
tmp_Side$tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_8;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_Side$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_Side$tuple_unpack_1__source_iter);
Py_DECREF(tmp_Side$tuple_unpack_1__source_iter);
tmp_Side$tuple_unpack_1__source_iter = NULL;
CHECK_OBJECT(tmp_Side$tuple_unpack_1__element_1);
tmp_dictset_value = tmp_Side$tuple_unpack_1__element_1;
tmp_res = PyObject_SetItem(locals_websockets$protocol$$$class__1_Side_45, mod_consts.const_str_plain_SERVER, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_2 = "o";
    goto try_except_handler_8;
}
Py_XDECREF(tmp_Side$tuple_unpack_1__element_1);
tmp_Side$tuple_unpack_1__element_1 = NULL;

CHECK_OBJECT(tmp_Side$tuple_unpack_1__element_2);
tmp_dictset_value = tmp_Side$tuple_unpack_1__element_2;
tmp_res = PyObject_SetItem(locals_websockets$protocol$$$class__1_Side_45, mod_consts.const_str_plain_CLIENT, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_2 = "o";
    goto try_except_handler_8;
}
goto try_end_6;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_Side$tuple_unpack_1__element_1);
tmp_Side$tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_Side$tuple_unpack_1__element_2);
tmp_Side$tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_2;
// End of try:
try_end_6:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$protocol$$$class__1_Side_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$protocol$$$class__1_Side_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$protocol$$$class__1_Side_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$protocol$$$class__1_Side_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_websockets$protocol$$$class__1_Side_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_7;
skip_nested_handling_1:;
Py_XDECREF(tmp_Side$tuple_unpack_1__element_2);
tmp_Side$tuple_unpack_1__element_2 = NULL;

tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_websockets$protocol$$$class__1_Side_45, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_7;
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


exception_lineno = 45;

    goto try_except_handler_7;
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
tmp_res = PyObject_SetItem(locals_websockets$protocol$$$class__1_Side_45, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_7;
}
branch_no_3:;
{
PyObject *tmp_assign_source_49;
PyObject *tmp_called_value_3;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_Side;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_websockets$protocol$$$class__1_Side_45;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_websockets$protocol->m_frame.f_lineno = 45;
tmp_assign_source_49 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_7;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_49;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_45 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_45);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_DECREF(locals_websockets$protocol$$$class__1_Side_45);
locals_websockets$protocol$$$class__1_Side_45 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_websockets$protocol$$$class__1_Side_45);
locals_websockets$protocol$$$class__1_Side_45 = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_6;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 45;
goto try_except_handler_5;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_Side, tmp_assign_source_45);
}
goto try_end_7;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
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
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
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
PyObject *tmp_assign_source_50;
PyObject *tmp_expression_value_8;
tmp_expression_value_8 = module_var_accessor_websockets$protocol$Side(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Side);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 51;

    goto frame_exception_exit_1;
}
tmp_assign_source_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_SERVER);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_SERVER, tmp_assign_source_50);
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_expression_value_9;
tmp_expression_value_9 = module_var_accessor_websockets$protocol$Side(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Side);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;

    goto frame_exception_exit_1;
}
tmp_assign_source_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_CLIENT);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_CLIENT, tmp_assign_source_51);
}
{
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_52;
PyObject *tmp_tuple_element_5;
PyObject *tmp_expression_value_10;
tmp_expression_value_10 = module_var_accessor_websockets$protocol$enum(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enum);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 55;

    goto try_except_handler_10;
}
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_IntEnum);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_10;
}
tmp_assign_source_52 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_52, 0, tmp_tuple_element_5);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_52;
}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_53 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_53;
}
{
PyObject *tmp_assign_source_54;
tmp_assign_source_54 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_54;
}
{
PyObject *tmp_assign_source_55;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_10;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_11 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_11, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_10;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_10;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_55 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_55;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_12 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_12, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_10;
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
PyObject *tmp_assign_source_56;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_13 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_10;
}
tmp_tuple_element_6 = mod_consts.const_str_plain_State;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_websockets$protocol->m_frame.f_lineno = 55;
tmp_assign_source_56 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_56;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_14 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_14, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_10;
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
PyObject *tmp_expression_value_15;
PyObject *tmp_name_value_12;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_15 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_12 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_15, tmp_name_value_12, tmp_default_value_2);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_10;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_16;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_16 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_16 == NULL));
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
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
goto try_except_handler_10;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_10;
}
frame_frame_websockets$protocol->m_frame.f_lineno = 55;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 55;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_10;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_57;
tmp_assign_source_57 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_57;
}
branch_end_4:;
{
PyObject *tmp_assign_source_58;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_websockets$protocol$$$class__2_State_55 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_3cd6ac1bd1cb919941d493834e2ad6f0;
tmp_res = PyObject_SetItem(locals_websockets$protocol$$$class__2_State_55, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_str_digest_f3232ebaf2e03f8d55a1299d263b5a90;
tmp_res = PyObject_SetItem(locals_websockets$protocol$$$class__2_State_55, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_str_plain_State;
tmp_res = PyObject_SetItem(locals_websockets$protocol$$$class__2_State_55, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_int_pos_55;
tmp_res = PyObject_SetItem(locals_websockets$protocol$$$class__2_State_55, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_12;
}
frame_frame_websockets$protocol$$$class__2_State_3 = MAKE_CLASS_FRAME(tstate, code_objects_d8f3eb2de76ac2412a47837052a93ee3, module_websockets$protocol, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$protocol$$$class__2_State_3);
assert(Py_REFCNT(frame_frame_websockets$protocol$$$class__2_State_3) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_59;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_5;
tmp_called_value_5 = PyObject_GetItem(locals_websockets$protocol$$$class__2_State_55, const_str_plain_range);

if (tmp_called_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_5 = (PyObject *)&PyRange_Type;
        Py_INCREF(tmp_called_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto try_except_handler_13;
    }
}

frame_frame_websockets$protocol$$$class__2_State_3->m_frame.f_lineno = 58;
tmp_iter_arg_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_int_pos_4_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_2 = "o";
    goto try_except_handler_13;
}
tmp_assign_source_59 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_2 = "o";
    goto try_except_handler_13;
}
assert(tmp_State$tuple_unpack_1__source_iter == NULL);
tmp_State$tuple_unpack_1__source_iter = tmp_assign_source_59;
}
// Tried code:
{
PyObject *tmp_assign_source_60;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_State$tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_State$tuple_unpack_1__source_iter;
tmp_assign_source_60 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 4);
if (tmp_assign_source_60 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;
type_description_2 = "o";
    goto try_except_handler_14;
}
assert(tmp_State$tuple_unpack_1__element_1 == NULL);
tmp_State$tuple_unpack_1__element_1 = tmp_assign_source_60;
}
{
PyObject *tmp_assign_source_61;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_State$tuple_unpack_1__source_iter);
tmp_unpack_4 = tmp_State$tuple_unpack_1__source_iter;
tmp_assign_source_61 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 4);
if (tmp_assign_source_61 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;
type_description_2 = "o";
    goto try_except_handler_14;
}
assert(tmp_State$tuple_unpack_1__element_2 == NULL);
tmp_State$tuple_unpack_1__element_2 = tmp_assign_source_61;
}
{
PyObject *tmp_assign_source_62;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_State$tuple_unpack_1__source_iter);
tmp_unpack_5 = tmp_State$tuple_unpack_1__source_iter;
tmp_assign_source_62 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 2, 4);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;
type_description_2 = "o";
    goto try_except_handler_14;
}
assert(tmp_State$tuple_unpack_1__element_3 == NULL);
tmp_State$tuple_unpack_1__element_3 = tmp_assign_source_62;
}
{
PyObject *tmp_assign_source_63;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_State$tuple_unpack_1__source_iter);
tmp_unpack_6 = tmp_State$tuple_unpack_1__source_iter;
tmp_assign_source_63 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 3, 4);
if (tmp_assign_source_63 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;
type_description_2 = "o";
    goto try_except_handler_14;
}
assert(tmp_State$tuple_unpack_1__element_4 == NULL);
tmp_State$tuple_unpack_1__element_4 = tmp_assign_source_63;
}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_State$tuple_unpack_1__source_iter);
tmp_iterator_name_2 = tmp_State$tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 4);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;
type_description_2 = "o";
    goto try_except_handler_14;
}
}
goto try_end_8;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_State$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_State$tuple_unpack_1__source_iter);
Py_DECREF(tmp_State$tuple_unpack_1__source_iter);
tmp_State$tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_13;
// End of try:
try_end_8:;
CHECK_OBJECT(tmp_State$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_State$tuple_unpack_1__source_iter);
Py_DECREF(tmp_State$tuple_unpack_1__source_iter);
tmp_State$tuple_unpack_1__source_iter = NULL;
CHECK_OBJECT(tmp_State$tuple_unpack_1__element_1);
tmp_dictset_value = tmp_State$tuple_unpack_1__element_1;
tmp_res = PyObject_SetItem(locals_websockets$protocol$$$class__2_State_55, mod_consts.const_str_plain_CONNECTING, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_2 = "o";
    goto try_except_handler_13;
}
Py_XDECREF(tmp_State$tuple_unpack_1__element_1);
tmp_State$tuple_unpack_1__element_1 = NULL;

CHECK_OBJECT(tmp_State$tuple_unpack_1__element_2);
tmp_dictset_value = tmp_State$tuple_unpack_1__element_2;
tmp_res = PyObject_SetItem(locals_websockets$protocol$$$class__2_State_55, mod_consts.const_str_plain_OPEN, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_2 = "o";
    goto try_except_handler_13;
}
Py_XDECREF(tmp_State$tuple_unpack_1__element_2);
tmp_State$tuple_unpack_1__element_2 = NULL;

CHECK_OBJECT(tmp_State$tuple_unpack_1__element_3);
tmp_dictset_value = tmp_State$tuple_unpack_1__element_3;
tmp_res = PyObject_SetItem(locals_websockets$protocol$$$class__2_State_55, mod_consts.const_str_plain_CLOSING, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_2 = "o";
    goto try_except_handler_13;
}
Py_XDECREF(tmp_State$tuple_unpack_1__element_3);
tmp_State$tuple_unpack_1__element_3 = NULL;

CHECK_OBJECT(tmp_State$tuple_unpack_1__element_4);
tmp_dictset_value = tmp_State$tuple_unpack_1__element_4;
tmp_res = PyObject_SetItem(locals_websockets$protocol$$$class__2_State_55, mod_consts.const_str_plain_CLOSED, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_2 = "o";
    goto try_except_handler_13;
}
goto try_end_9;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_State$tuple_unpack_1__element_1);
tmp_State$tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_State$tuple_unpack_1__element_2);
tmp_State$tuple_unpack_1__element_2 = NULL;
Py_XDECREF(tmp_State$tuple_unpack_1__element_3);
tmp_State$tuple_unpack_1__element_3 = NULL;
Py_XDECREF(tmp_State$tuple_unpack_1__element_4);
tmp_State$tuple_unpack_1__element_4 = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto frame_exception_exit_3;
// End of try:
try_end_9:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_3:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$protocol$$$class__2_State_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$protocol$$$class__2_State_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$protocol$$$class__2_State_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$protocol$$$class__2_State_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_websockets$protocol$$$class__2_State_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_12;
skip_nested_handling_2:;
Py_XDECREF(tmp_State$tuple_unpack_1__element_4);
tmp_State$tuple_unpack_1__element_4 = NULL;

tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_websockets$protocol$$$class__2_State_55, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_12;
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


exception_lineno = 55;

    goto try_except_handler_12;
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
tmp_res = PyObject_SetItem(locals_websockets$protocol$$$class__2_State_55, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_12;
}
branch_no_6:;
{
PyObject *tmp_assign_source_64;
PyObject *tmp_called_value_6;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_6 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_8 = mod_consts.const_str_plain_State;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = locals_websockets$protocol$$$class__2_State_55;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_websockets$protocol->m_frame.f_lineno = 55;
tmp_assign_source_64 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_12;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_64;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_58 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_58);
goto try_return_handler_12;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
Py_DECREF(locals_websockets$protocol$$$class__2_State_55);
locals_websockets$protocol$$$class__2_State_55 = NULL;
goto try_return_handler_11;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_websockets$protocol$$$class__2_State_55);
locals_websockets$protocol$$$class__2_State_55 = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto try_except_handler_11;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 55;
goto try_except_handler_10;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_State, tmp_assign_source_58);
}
goto try_end_10;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
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
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
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
PyObject *tmp_assign_source_65;
PyObject *tmp_expression_value_17;
tmp_expression_value_17 = module_var_accessor_websockets$protocol$State(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_State);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 61;

    goto frame_exception_exit_1;
}
tmp_assign_source_65 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_CONNECTING);
if (tmp_assign_source_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_CONNECTING, tmp_assign_source_65);
}
{
PyObject *tmp_assign_source_66;
PyObject *tmp_expression_value_18;
tmp_expression_value_18 = module_var_accessor_websockets$protocol$State(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_State);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 62;

    goto frame_exception_exit_1;
}
tmp_assign_source_66 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_OPEN);
if (tmp_assign_source_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_OPEN, tmp_assign_source_66);
}
{
PyObject *tmp_assign_source_67;
PyObject *tmp_expression_value_19;
tmp_expression_value_19 = module_var_accessor_websockets$protocol$State(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_State);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 63;

    goto frame_exception_exit_1;
}
tmp_assign_source_67 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_CLOSING);
if (tmp_assign_source_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_CLOSING, tmp_assign_source_67);
}
{
PyObject *tmp_assign_source_68;
PyObject *tmp_expression_value_20;
tmp_expression_value_20 = module_var_accessor_websockets$protocol$State(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_State);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 64;

    goto frame_exception_exit_1;
}
tmp_assign_source_68 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_CLOSED);
if (tmp_assign_source_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_CLOSED, tmp_assign_source_68);
}
{
PyObject *tmp_assign_source_69;
tmp_assign_source_69 = const_bytes_empty;
UPDATE_STRING_DICT0(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_SEND_EOF, tmp_assign_source_69);
}
{
PyObject *tmp_outline_return_value_3;
{
PyObject *tmp_assign_source_70;
tmp_assign_source_70 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_70;
}
{
PyObject *tmp_assign_source_71;
tmp_assign_source_71 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_71;
}
// Tried code:
{
PyObject *tmp_assign_source_72;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_websockets$protocol$$$class__3_Protocol_71 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
tmp_dictset_value = mod_consts.const_str_digest_3cd6ac1bd1cb919941d493834e2ad6f0;
tmp_result = DICT_SET_ITEM(locals_websockets$protocol$$$class__3_Protocol_71, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_cb80e1e685f9070e7392b65779f535a3;
tmp_result = DICT_SET_ITEM(locals_websockets$protocol$$$class__3_Protocol_71, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_Protocol;
tmp_result = DICT_SET_ITEM(locals_websockets$protocol$$$class__3_Protocol_71, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_71;
tmp_result = DICT_SET_ITEM(locals_websockets$protocol$$$class__3_Protocol_71, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_websockets$protocol$$$class__3_Protocol_4 = MAKE_CLASS_FRAME(tstate, code_objects_5343cd7c87e8007cb344e92281b78979, module_websockets$protocol, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$protocol$$$class__3_Protocol_4);
assert(Py_REFCNT(frame_frame_websockets$protocol$$$class__3_Protocol_4) == 2);

// Framed code:
{
PyObject *tmp_kw_defaults_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_annotations_1;
tmp_dict_key_1 = mod_consts.const_str_plain_state;
tmp_dict_value_1 = module_var_accessor_websockets$protocol$OPEN(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OPEN);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 93;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_kw_defaults_1 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_max_size;
tmp_dict_value_1 = mod_consts.const_int_pos_1048576;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_logger;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_724f86ab616c907a6b9df68c7077f64f);

tmp_dictset_value = MAKE_FUNCTION_websockets$protocol$$$function__1___init__(tstate, tmp_kw_defaults_1, tmp_annotations_1);

tmp_result = DICT_SET_ITEM(locals_websockets$protocol$$$class__3_Protocol_71, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_2;
tmp_called_value_7 = (PyObject *)&PyProperty_Type;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_872c1239b13eee6130c05d2e988489c5);

tmp_args_element_value_1 = MAKE_FUNCTION_websockets$protocol$$$function__2_state(tstate, tmp_annotations_2);

frame_frame_websockets$protocol$$$class__3_Protocol_4->m_frame.f_lineno = 160;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_result = DICT_SET_ITEM(locals_websockets$protocol$$$class__3_Protocol_71, mod_consts.const_str_plain_state, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_3;
tmp_called_instance_1 = DICT_GET_ITEM0(tstate, locals_websockets$protocol$$$class__3_Protocol_71, mod_consts.const_str_plain_state);

if (unlikely(tmp_called_instance_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);

exception_lineno = 175;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_2749590df7593f480ccc68138d274ac5);

tmp_args_element_value_2 = MAKE_FUNCTION_websockets$protocol$$$function__3_state(tstate, tmp_annotations_3);

frame_frame_websockets$protocol$$$class__3_Protocol_4->m_frame.f_lineno = 175;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_setter, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_result = DICT_SET_ITEM(locals_websockets$protocol$$$class__3_Protocol_71, mod_consts.const_str_plain_state, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_3;
PyObject *tmp_annotations_4;
tmp_called_value_8 = (PyObject *)&PyProperty_Type;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_4ceb13db20db0a5d6b10c13b92db4345);

tmp_args_element_value_3 = MAKE_FUNCTION_websockets$protocol$$$function__4_close_code(tstate, tmp_annotations_4);

frame_frame_websockets$protocol$$$class__3_Protocol_4->m_frame.f_lineno = 181;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_result = DICT_SET_ITEM(locals_websockets$protocol$$$class__3_Protocol_71, mod_consts.const_str_plain_close_code, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_4;
PyObject *tmp_annotations_5;
tmp_called_value_9 = (PyObject *)&PyProperty_Type;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071);

tmp_args_element_value_4 = MAKE_FUNCTION_websockets$protocol$$$function__5_close_reason(tstate, tmp_annotations_5);

frame_frame_websockets$protocol$$$class__3_Protocol_4->m_frame.f_lineno = 200;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_result = DICT_SET_ITEM(locals_websockets$protocol$$$class__3_Protocol_71, mod_consts.const_str_plain_close_reason, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_5;
PyObject *tmp_annotations_6;
tmp_called_value_10 = (PyObject *)&PyProperty_Type;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_23fba3063950d2e9ec90a2a5552d0410);

tmp_args_element_value_5 = MAKE_FUNCTION_websockets$protocol$$$function__6_close_exc(tstate, tmp_annotations_6);

frame_frame_websockets$protocol$$$class__3_Protocol_4->m_frame.f_lineno = 219;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_result = DICT_SET_ITEM(locals_websockets$protocol$$$class__3_Protocol_71, mod_consts.const_str_plain_close_exc, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$protocol$$$class__3_Protocol_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$protocol$$$class__3_Protocol_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$protocol$$$class__3_Protocol_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$protocol$$$class__3_Protocol_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_websockets$protocol$$$class__3_Protocol_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_17;
skip_nested_handling_3:;
{
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_d97434bec4d8753174e1f5e59bdf6c3a);

tmp_dictset_value = MAKE_FUNCTION_websockets$protocol$$$function__7_receive_data(tstate, tmp_annotations_7);

tmp_result = DICT_SET_ITEM(locals_websockets$protocol$$$class__3_Protocol_71, mod_consts.const_str_plain_receive_data, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_websockets$protocol$$$function__8_receive_eof(tstate, tmp_annotations_8);

tmp_result = DICT_SET_ITEM(locals_websockets$protocol$$$class__3_Protocol_71, mod_consts.const_str_plain_receive_eof, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_9;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_f65636fbb25e9a2cc50bdf4372172db0);

tmp_dictset_value = MAKE_FUNCTION_websockets$protocol$$$function__9_send_continuation(tstate, tmp_annotations_9);

tmp_result = DICT_SET_ITEM(locals_websockets$protocol$$$class__3_Protocol_71, mod_consts.const_str_plain_send_continuation, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_10;
tmp_defaults_1 = mod_consts.const_tuple_true_tuple;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_f65636fbb25e9a2cc50bdf4372172db0);
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_websockets$protocol$$$function__10_send_text(tstate, tmp_defaults_1, tmp_annotations_10);

tmp_result = DICT_SET_ITEM(locals_websockets$protocol$$$class__3_Protocol_71, mod_consts.const_str_plain_send_text, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_11;
tmp_defaults_2 = mod_consts.const_tuple_true_tuple;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_f65636fbb25e9a2cc50bdf4372172db0);
Py_INCREF(tmp_defaults_2);

tmp_dictset_value = MAKE_FUNCTION_websockets$protocol$$$function__11_send_binary(tstate, tmp_defaults_2, tmp_annotations_11);

tmp_result = DICT_SET_ITEM(locals_websockets$protocol$$$class__3_Protocol_71, mod_consts.const_str_plain_send_binary, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_defaults_3;
PyObject *tmp_annotations_12;
tmp_defaults_3 = mod_consts.const_tuple_none_str_empty_tuple;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_a568723f5fd31797777e30eff7cc899b);
Py_INCREF(tmp_defaults_3);

tmp_dictset_value = MAKE_FUNCTION_websockets$protocol$$$function__12_send_close(tstate, tmp_defaults_3, tmp_annotations_12);

tmp_result = DICT_SET_ITEM(locals_websockets$protocol$$$class__3_Protocol_71, mod_consts.const_str_plain_send_close, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_13;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_3b552aeabeb6f8a78aa6f219823650a4);

tmp_dictset_value = MAKE_FUNCTION_websockets$protocol$$$function__13_send_ping(tstate, tmp_annotations_13);

tmp_result = DICT_SET_ITEM(locals_websockets$protocol$$$class__3_Protocol_71, mod_consts.const_str_plain_send_ping, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_14;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_3b552aeabeb6f8a78aa6f219823650a4);

tmp_dictset_value = MAKE_FUNCTION_websockets$protocol$$$function__14_send_pong(tstate, tmp_annotations_14);

tmp_result = DICT_SET_ITEM(locals_websockets$protocol$$$class__3_Protocol_71, mod_consts.const_str_plain_send_pong, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_defaults_4;
PyObject *tmp_annotations_15;
tmp_defaults_4 = mod_consts.const_tuple_str_empty_tuple;
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_87a3f0b3d0a040552dc0c998c42cb021);
Py_INCREF(tmp_defaults_4);

tmp_dictset_value = MAKE_FUNCTION_websockets$protocol$$$function__15_fail(tstate, tmp_defaults_4, tmp_annotations_15);

tmp_result = DICT_SET_ITEM(locals_websockets$protocol$$$class__3_Protocol_71, mod_consts.const_str_plain_fail, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_16;
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_3c152de3bdbbfdc26015c4bc5b58b19d);

tmp_dictset_value = MAKE_FUNCTION_websockets$protocol$$$function__16_events_received(tstate, tmp_annotations_16);

tmp_result = DICT_SET_ITEM(locals_websockets$protocol$$$class__3_Protocol_71, mod_consts.const_str_plain_events_received, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_17;
tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_8bac5993459d60a1f3d5d83c33b91c50);

tmp_dictset_value = MAKE_FUNCTION_websockets$protocol$$$function__17_data_to_send(tstate, tmp_annotations_17);

tmp_result = DICT_SET_ITEM(locals_websockets$protocol$$$class__3_Protocol_71, mod_consts.const_str_plain_data_to_send, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_18;
tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_dictset_value = MAKE_FUNCTION_websockets$protocol$$$function__18_close_expected(tstate, tmp_annotations_18);

tmp_result = DICT_SET_ITEM(locals_websockets$protocol$$$class__3_Protocol_71, mod_consts.const_str_plain_close_expected, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_19;
tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_a34d90b90400a0d4208eb8f23ecaf5f5);

tmp_dictset_value = MAKE_FUNCTION_websockets$protocol$$$function__19_parse(tstate, tmp_annotations_19);

tmp_result = DICT_SET_ITEM(locals_websockets$protocol$$$class__3_Protocol_71, mod_consts.const_str_plain_parse, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_20;
tmp_annotations_20 = DICT_COPY(tstate, mod_consts.const_dict_a34d90b90400a0d4208eb8f23ecaf5f5);

tmp_dictset_value = MAKE_FUNCTION_websockets$protocol$$$function__20_discard(tstate, tmp_annotations_20);

tmp_result = DICT_SET_ITEM(locals_websockets$protocol$$$class__3_Protocol_71, mod_consts.const_str_plain_discard, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_21;
tmp_annotations_21 = DICT_COPY(tstate, mod_consts.const_dict_17fcd30e4eb497b13d2db75bb020fd9c);

tmp_dictset_value = MAKE_FUNCTION_websockets$protocol$$$function__21_recv_frame(tstate, tmp_annotations_21);

tmp_result = DICT_SET_ITEM(locals_websockets$protocol$$$class__3_Protocol_71, mod_consts.const_str_plain_recv_frame, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_22;
tmp_annotations_22 = DICT_COPY(tstate, mod_consts.const_dict_17fcd30e4eb497b13d2db75bb020fd9c);

tmp_dictset_value = MAKE_FUNCTION_websockets$protocol$$$function__22_send_frame(tstate, tmp_annotations_22);

tmp_result = DICT_SET_ITEM(locals_websockets$protocol$$$class__3_Protocol_71, mod_consts.const_str_plain_send_frame, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_23;
tmp_annotations_23 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_websockets$protocol$$$function__23_send_eof(tstate, tmp_annotations_23);

tmp_result = DICT_SET_ITEM(locals_websockets$protocol$$$class__3_Protocol_71, mod_consts.const_str_plain_send_eof, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_26db5d65ef245a6de67cc4c0ec89f517_tuple;
tmp_result = DICT_SET_ITEM(locals_websockets$protocol$$$class__3_Protocol_71, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_73;
PyObject *tmp_called_value_11;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_9;
PyObject *tmp_kwargs_value_5;
tmp_called_value_11 = (PyObject *)&PyType_Type;
tmp_tuple_element_9 = mod_consts.const_str_plain_Protocol;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_9);
tmp_tuple_element_9 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_9);
tmp_tuple_element_9 = locals_websockets$protocol$$$class__3_Protocol_71;
PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_websockets$protocol->m_frame.f_lineno = 71;
tmp_assign_source_73 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_73 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_17;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_73;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_72 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_72);
goto try_return_handler_17;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_17:;
Py_DECREF(locals_websockets$protocol$$$class__3_Protocol_71);
locals_websockets$protocol$$$class__3_Protocol_71 = NULL;
goto try_return_handler_16;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_websockets$protocol$$$class__3_Protocol_71);
locals_websockets$protocol$$$class__3_Protocol_71 = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto try_except_handler_16;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_16:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 71;
goto try_except_handler_15;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_websockets$protocol, (Nuitka_StringObject *)mod_consts.const_str_plain_Protocol, tmp_assign_source_72);
}
goto try_end_11;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
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
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto frame_exception_exit_1;
// End of try:
try_end_11:;
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

goto frame_no_exception_4;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$protocol, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$protocol->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$protocol, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_websockets$protocol);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_4:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("websockets$protocol", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "websockets.protocol" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_websockets$protocol);
    return module_websockets$protocol;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websockets$protocol, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("websockets$protocol", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

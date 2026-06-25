/* Generated code for Python module 'websockets$frames'
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



/* The "module_websockets$frames" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_websockets$frames;
PyDictObject *moduledict_websockets$frames;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_data;
PyObject *const_str_digest_ae8f381b082ee98b99d808681024266b;
PyObject *const_str_plain_s;
PyObject *const_str_plain_fin;
PyObject *const_str_plain_continued;
PyObject *const_str_plain_opcode;
PyObject *const_str_plain_OP_TEXT;
PyObject *const_str_plain_decode;
PyObject *const_str_plain_OP_BINARY;
PyObject *const_str_plain_MAX_LOG_SIZE;
PyObject *const_int_pos_3;
PyObject *const_int_pos_2;
PyObject *const_bytes_digest_317e20b8cdcdece61abeb1b4f12bddb4;
PyObject *const_str_space;
PyObject *const_str_plain_binary;
PyObject *const_str_plain_OP_CLOSE;
PyObject *const_str_plain_Close;
PyObject *const_str_plain_parse;
PyObject *const_str_plain_text;
PyObject *const_tuple_type_UnicodeDecodeError_type_AttributeError_tuple;
PyObject *const_str_digest_3f8b984275c38c3bda625b33f1771959;
PyObject *const_str_digest_3501979af1b70861f5e9d6a0f04129bf;
PyObject *const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
PyObject *const_str_digest_ae1bf19510647fb9d159b650e3dcc9f7;
PyObject *const_str_chr_93;
PyObject *const_str_digest_5c0d46f373f009ab60845143e419ab79;
PyObject *const_str_plain_02x;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_e1207ec09de14b8c2c7e46e53cd4119d;
PyObject *const_str_digest_3826837d849501cfbe1fb2603ba682ba;
PyObject *const_str_plain_read_exact;
PyObject *const_tuple_int_pos_2_tuple;
PyObject *const_str_plain_struct;
PyObject *const_str_plain_unpack;
PyObject *const_str_digest_cbf97bd694cf3a87c92e197f762a0e8d;
PyObject *const_int_pos_128;
PyObject *const_int_pos_64;
PyObject *const_int_pos_32;
PyObject *const_int_pos_16;
PyObject *const_str_plain_Opcode;
PyObject *const_int_pos_15;
PyObject *const_str_plain_ProtocolError;
PyObject *const_tuple_str_digest_dbbb0a98382f84bdf3ec53d04914063e_tuple;
PyObject *const_str_plain_mask;
PyObject *const_tuple_str_digest_5a84008d1c2b46b80ccdd952650aa8ca_tuple;
PyObject *const_int_pos_127;
PyObject *const_int_pos_126;
PyObject *const_str_digest_423ab65cfd2fd6194b8a1938ade23cb9;
PyObject *const_tuple_int_pos_8_tuple;
PyObject *const_str_digest_22eba019e51aabb161e25f6d83c991e6;
PyObject *const_str_plain_max_size;
PyObject *const_str_plain_PayloadTooBig;
PyObject *const_tuple_int_pos_4_tuple;
PyObject *const_str_plain_apply_mask;
PyObject *const_str_plain_mask_bytes;
PyObject *const_str_plain_cls;
PyObject *const_str_plain_extensions;
PyObject *const_str_plain_frame;
PyObject *const_tuple_str_plain_max_size_tuple;
PyObject *const_str_plain_check;
PyObject *const_str_digest_c3be48984278e8e85464067862d030ef;
PyObject *const_str_plain_encode;
PyObject *const_str_plain_self;
PyObject *const_str_plain_BytesIO;
PyObject *const_str_plain_rsv1;
PyObject *const_str_plain_rsv2;
PyObject *const_str_plain_rsv3;
PyObject *const_str_plain_write;
PyObject *const_str_plain_pack;
PyObject *const_str_digest_43c39bbd6c1d53eedb0309ae1303f4c7;
PyObject *const_str_digest_c8434a8dfa2b76d56b61fa1631919450;
PyObject *const_str_plain_secrets;
PyObject *const_str_plain_token_bytes;
PyObject *const_str_plain_getvalue;
PyObject *const_str_digest_ddd66991bc7f0c4dc75f93e551eb267d;
PyObject *const_tuple_str_digest_065097b935ef942c7961f7f84bb301e5_tuple;
PyObject *const_str_plain_CTRL_OPCODES;
PyObject *const_tuple_str_digest_32b001fd755c5cfaa178beca82f32ce3_tuple;
PyObject *const_tuple_str_digest_da750b4119c83825d88f0c0956a97550_tuple;
PyObject *const_str_digest_4de591a64cbbf2f91970eabae01aabff;
PyObject *const_str_plain_code;
PyObject *const_int_pos_3000;
PyObject *const_int_pos_4000;
PyObject *const_str_plain_registered;
PyObject *const_int_pos_5000;
PyObject *const_str_digest_a18cedd7be63b90ba7713ae0c6ec9806;
PyObject *const_str_plain_CLOSE_CODE_EXPLANATIONS;
PyObject *const_str_plain_unknown;
PyObject *const_str_digest_b0a73c883a655937e1ff2aa8bb687e6a;
PyObject *const_str_chr_41;
PyObject *const_str_plain_reason;
PyObject *const_str_digest_4b6728facce4a8bc2de8aa3ea5088d06;
PyObject *const_str_digest_c843b16d6afc3ff1cbb8d2dc6fe3acdd;
PyObject *const_slice_none_int_pos_2_none;
PyObject *const_slice_int_pos_2_none_none;
PyObject *const_str_plain_CloseCode;
PyObject *const_str_plain_NO_STATUS_RCVD;
PyObject *const_tuple_str_digest_1416866767ae42f2803ad626f8e64690_tuple;
PyObject *const_str_digest_c49e9ed491aa71cf9582d3de91ac5ad1;
PyObject *const_str_digest_336abc59b7fc6206b582fb7af713862c;
PyObject *const_str_plain_EXTERNAL_CLOSE_CODES;
PyObject *const_tuple_str_digest_8dcbe018c30a41b8efae5dc2013cbddf_tuple;
PyObject *const_str_digest_fa64e85632b48e47e20f74d4f2039879;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_dataclasses;
PyObject *const_str_plain_enum;
PyObject *const_str_plain_io;
PyObject *const_str_plain_os;
PyObject *const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
PyObject *const_tuple_str_plain_Generator_str_plain_Sequence_tuple;
PyObject *const_str_plain_Generator;
PyObject *const_str_plain_Sequence;
PyObject *const_str_plain_Callable;
PyObject *const_str_plain_exceptions;
PyObject *const_tuple_str_plain_PayloadTooBig_str_plain_ProtocolError_tuple;
PyObject *const_str_plain_typing;
PyObject *const_tuple_str_plain_BytesLike_tuple;
PyObject *const_str_plain_BytesLike;
PyObject *const_str_plain_speedups;
PyObject *const_tuple_str_plain_apply_mask_tuple;
PyObject *const_str_plain_utils;
PyObject *const_list_d5f8b5f4eb6ae12d4cdd4b3da24156f7_list;
PyObject *const_str_plain_IntEnum;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_82533edc83fe47d73aaabae67403b14e;
PyObject *const_str_digest_3aa24fcc89d511dc19ad61cbee9e29f6;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_38;
PyObject *const_str_plain___firstlineno__;
PyObject *const_tuple_int_0_int_pos_1_int_pos_2_tuple;
PyObject *const_str_plain_CONT;
PyObject *const_str_plain_TEXT;
PyObject *const_str_plain_BINARY;
PyObject *const_tuple_int_pos_8_int_pos_9_int_pos_10_tuple;
PyObject *const_str_plain_CLOSE;
PyObject *const_str_plain_PING;
PyObject *const_str_plain_PONG;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_OP_CONT;
PyObject *const_str_plain_OP_PING;
PyObject *const_str_plain_OP_PONG;
PyObject *const_str_plain_DATA_OPCODES;
PyObject *const_str_digest_651d01ec202ccf56fcd7f654b0514d28;
PyObject *const_int_pos_56;
PyObject *const_int_pos_1000;
PyObject *const_str_plain_NORMAL_CLOSURE;
PyObject *const_int_pos_1001;
PyObject *const_str_plain_GOING_AWAY;
PyObject *const_int_pos_1002;
PyObject *const_str_plain_PROTOCOL_ERROR;
PyObject *const_int_pos_1003;
PyObject *const_str_plain_UNSUPPORTED_DATA;
PyObject *const_int_pos_1005;
PyObject *const_int_pos_1006;
PyObject *const_str_plain_ABNORMAL_CLOSURE;
PyObject *const_int_pos_1007;
PyObject *const_str_plain_INVALID_DATA;
PyObject *const_int_pos_1008;
PyObject *const_str_plain_POLICY_VIOLATION;
PyObject *const_int_pos_1009;
PyObject *const_str_plain_MESSAGE_TOO_BIG;
PyObject *const_int_pos_1010;
PyObject *const_str_plain_MANDATORY_EXTENSION;
PyObject *const_int_pos_1011;
PyObject *const_str_plain_INTERNAL_ERROR;
PyObject *const_int_pos_1012;
PyObject *const_str_plain_SERVICE_RESTART;
PyObject *const_int_pos_1013;
PyObject *const_str_plain_TRY_AGAIN_LATER;
PyObject *const_int_pos_1014;
PyObject *const_str_plain_BAD_GATEWAY;
PyObject *const_int_pos_1015;
PyObject *const_str_plain_TLS_HANDSHAKE;
PyObject *const_str_plain_OK;
PyObject *const_str_digest_c22a5960dd8bedcf8d8b4f1b700513e9;
PyObject *const_str_digest_4dc191a76fe522fb8846d9de5cae163e;
PyObject *const_str_digest_7dd95752229fdbc6a268ced04919a9e0;
PyObject *const_str_digest_8b8364064027ec50e9b132dc57e7d380;
PyObject *const_str_digest_e347279ba84ee232c42ac93b18c4e6e7;
PyObject *const_str_digest_c2c1450289162313da6325a881aa9b82;
PyObject *const_str_digest_5b64366b48f23317a0ac47dd17ff6da9;
PyObject *const_str_digest_ed118a9e3698e55f04b13d3d487f5dd3;
PyObject *const_str_digest_9c67103661d26d1741f26421dd7c8c2b;
PyObject *const_str_digest_9947053d0c63bc81f08a8b20d9d4c742;
PyObject *const_str_digest_b503a093d91f3551ac590e5b8747cc00;
PyObject *const_str_digest_c71dd541bda41d5ec56796d480e4bfc1;
PyObject *const_str_digest_0955437a16a82f78642fad62033e6f27;
PyObject *const_str_digest_8235248e83fa1c9f12f917bd005bf89b;
PyObject *const_str_digest_49d3c3fc3ee96ead1ca58f86d1afd301;
PyObject *const_str_plain_OK_CLOSE_CODES;
PyObject *const_str_plain_dataclass;
PyObject *const_str_digest_fe786aca15421ba586a8c2ac64e81b5a;
PyObject *const_str_plain_Frame;
PyObject *const_int_pos_123;
PyObject *const_str_plain_bool;
PyObject *const_str_plain_environ;
PyObject *const_tuple_str_plain_WEBSOCKETS_MAX_LOG_SIZE_str_plain_75_tuple;
PyObject *const_dict_e8d16ece775461636da8aedac2f07d6b;
PyObject *const_str_plain___str__;
PyObject *const_str_digest_dd11a11d1f16a60f190be1dc925be925;
PyObject *const_dict_64884931710373c23cc1ebcee5c19ad1;
PyObject *const_dict_e43cd9be53cc5aba964941ffe45ba13c;
PyObject *const_dict_d038daaa704c3cb9427d8350f36497b7;
PyObject *const_dict_e9ca1994a1f81877060f3905441f44a2;
PyObject *const_str_plain_serialize;
PyObject *const_str_digest_2e2485d937ed9d13b3d9f6830acb647e;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_digest_9736ba04a7cd65d686c7349dda1c15ba;
PyObject *const_str_digest_e84271dbdf81a9de5f8debbad5f985c2;
PyObject *const_int_pos_353;
PyObject *const_str_digest_f44d0b180a5111dd8af2567160eaf50f;
PyObject *const_str_plain_str;
PyObject *const_str_digest_32a4d177d629a9a4476a997cb509f55b;
PyObject *const_dict_3929f444c769e7f99db53c6292d37cff;
PyObject *const_str_digest_b71598ad2e9a445575b789460cf787a9;
PyObject *const_dict_2366cb3246e451cebe4ed21878030053;
PyObject *const_str_digest_4de4a808bb21d20de50e36ed8f743120;
PyObject *const_str_digest_675d4c3e65e242af9182d74a86690ee7;
PyObject *const_tuple_str_plain_extensions_tuple;
PyObject *const_str_digest_79800adecb750a52fe48246ea8919314;
PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_byte_tuple;
PyObject *const_str_digest_fba175f4fa96bc1ad5e500f0160e4d96;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_explanation_str_plain_result_tuple;
PyObject *const_tuple_b90015e4bcdc966d8a477b33a1afe869_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_9468991920d340e344be69b405824dd0_tuple;
PyObject *const_tuple_20bf31985942696fb0f05d6684ec7c89_tuple;
PyObject *const_tuple_95328a12fe471e60c5a478dfb230c429_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[235];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("websockets.frames"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_data);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_digest_ae8f381b082ee98b99d808681024266b);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_s);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_fin);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_continued);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_opcode);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_OP_TEXT);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_OP_BINARY);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_MAX_LOG_SIZE);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_317e20b8cdcdece61abeb1b4f12bddb4);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_space);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_binary);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_OP_CLOSE);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_Close);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_text);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_tuple_type_UnicodeDecodeError_type_AttributeError_tuple);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_3f8b984275c38c3bda625b33f1771959);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_3501979af1b70861f5e9d6a0f04129bf);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_ae1bf19510647fb9d159b650e3dcc9f7);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_chr_93);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_5c0d46f373f009ab60845143e419ab79);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_02x);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_e1207ec09de14b8c2c7e46e53cd4119d);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_3826837d849501cfbe1fb2603ba682ba);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_read_exact);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_2_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_struct);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_unpack);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_cbf97bd694cf3a87c92e197f762a0e8d);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_int_pos_128);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_int_pos_64);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_int_pos_32);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_int_pos_16);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_Opcode);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_int_pos_15);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_ProtocolError);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_dbbb0a98382f84bdf3ec53d04914063e_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_mask);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_5a84008d1c2b46b80ccdd952650aa8ca_tuple);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_int_pos_127);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_int_pos_126);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_423ab65cfd2fd6194b8a1938ade23cb9);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_8_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_22eba019e51aabb161e25f6d83c991e6);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_max_size);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_PayloadTooBig);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_4_tuple);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_apply_mask);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_mask_bytes);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_cls);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_extensions);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_frame);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_max_size_tuple);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_check);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_c3be48984278e8e85464067862d030ef);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_BytesIO);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_rsv1);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_rsv2);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_rsv3);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_write);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_pack);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_43c39bbd6c1d53eedb0309ae1303f4c7);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_c8434a8dfa2b76d56b61fa1631919450);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_secrets);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_token_bytes);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_getvalue);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_ddd66991bc7f0c4dc75f93e551eb267d);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_065097b935ef942c7961f7f84bb301e5_tuple);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_CTRL_OPCODES);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_32b001fd755c5cfaa178beca82f32ce3_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_da750b4119c83825d88f0c0956a97550_tuple);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_4de591a64cbbf2f91970eabae01aabff);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_code);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_int_pos_3000);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_int_pos_4000);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_registered);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_int_pos_5000);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_a18cedd7be63b90ba7713ae0c6ec9806);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_CLOSE_CODE_EXPLANATIONS);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_unknown);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_digest_b0a73c883a655937e1ff2aa8bb687e6a);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_chr_41);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_reason);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_digest_4b6728facce4a8bc2de8aa3ea5088d06);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_digest_c843b16d6afc3ff1cbb8d2dc6fe3acdd);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_2_none);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_2_none_none);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_CloseCode);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_NO_STATUS_RCVD);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_1416866767ae42f2803ad626f8e64690_tuple);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_digest_c49e9ed491aa71cf9582d3de91ac5ad1);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_336abc59b7fc6206b582fb7af713862c);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_EXTERNAL_CLOSE_CODES);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_8dcbe018c30a41b8efae5dc2013cbddf_tuple);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_digest_fa64e85632b48e47e20f74d4f2039879);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_dataclasses);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_enum);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_io);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Generator_str_plain_Sequence_tuple);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_Generator);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_Callable);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PayloadTooBig_str_plain_ProtocolError_tuple);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BytesLike_tuple);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_BytesLike);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_speedups);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_apply_mask_tuple);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_utils);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_list_d5f8b5f4eb6ae12d4cdd4b3da24156f7_list);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_IntEnum);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_digest_82533edc83fe47d73aaabae67403b14e);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_digest_3aa24fcc89d511dc19ad61cbee9e29f6);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_int_pos_38);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_pos_1_int_pos_2_tuple);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_CONT);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_TEXT);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_BINARY);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_8_int_pos_9_int_pos_10_tuple);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_CLOSE);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_PING);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_PONG);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_OP_CONT);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_OP_PING);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_OP_PONG);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain_DATA_OPCODES);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_digest_651d01ec202ccf56fcd7f654b0514d28);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_int_pos_56);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_int_pos_1000);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_NORMAL_CLOSURE);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_int_pos_1001);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain_GOING_AWAY);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_int_pos_1002);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain_PROTOCOL_ERROR);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_int_pos_1003);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_UNSUPPORTED_DATA);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_int_pos_1005);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_int_pos_1006);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain_ABNORMAL_CLOSURE);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_int_pos_1007);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain_INVALID_DATA);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_int_pos_1008);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain_POLICY_VIOLATION);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_int_pos_1009);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain_MESSAGE_TOO_BIG);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_int_pos_1010);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_plain_MANDATORY_EXTENSION);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_int_pos_1011);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain_INTERNAL_ERROR);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_int_pos_1012);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_plain_SERVICE_RESTART);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_int_pos_1013);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_plain_TRY_AGAIN_LATER);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_int_pos_1014);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_plain_BAD_GATEWAY);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_int_pos_1015);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_plain_TLS_HANDSHAKE);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_plain_OK);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_digest_c22a5960dd8bedcf8d8b4f1b700513e9);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_digest_4dc191a76fe522fb8846d9de5cae163e);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_digest_7dd95752229fdbc6a268ced04919a9e0);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_digest_8b8364064027ec50e9b132dc57e7d380);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_digest_e347279ba84ee232c42ac93b18c4e6e7);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_digest_c2c1450289162313da6325a881aa9b82);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_digest_5b64366b48f23317a0ac47dd17ff6da9);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_digest_ed118a9e3698e55f04b13d3d487f5dd3);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_digest_9c67103661d26d1741f26421dd7c8c2b);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_digest_9947053d0c63bc81f08a8b20d9d4c742);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_digest_b503a093d91f3551ac590e5b8747cc00);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_digest_c71dd541bda41d5ec56796d480e4bfc1);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_digest_0955437a16a82f78642fad62033e6f27);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_digest_8235248e83fa1c9f12f917bd005bf89b);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_str_digest_49d3c3fc3ee96ead1ca58f86d1afd301);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_plain_OK_CLOSE_CODES);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_plain_dataclass);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_str_digest_fe786aca15421ba586a8c2ac64e81b5a);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_str_plain_Frame);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_int_pos_123);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_str_plain_bool);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_WEBSOCKETS_MAX_LOG_SIZE_str_plain_75_tuple);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_plain___str__);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_digest_dd11a11d1f16a60f190be1dc925be925);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_dict_64884931710373c23cc1ebcee5c19ad1);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_dict_e43cd9be53cc5aba964941ffe45ba13c);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_dict_d038daaa704c3cb9427d8350f36497b7);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_dict_e9ca1994a1f81877060f3905441f44a2);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_str_plain_serialize);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_str_digest_2e2485d937ed9d13b3d9f6830acb647e);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_str_digest_9736ba04a7cd65d686c7349dda1c15ba);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_str_digest_e84271dbdf81a9de5f8debbad5f985c2);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_int_pos_353);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_str_digest_f44d0b180a5111dd8af2567160eaf50f);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_str_plain_str);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_str_digest_32a4d177d629a9a4476a997cb509f55b);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_dict_3929f444c769e7f99db53c6292d37cff);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_str_digest_b71598ad2e9a445575b789460cf787a9);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_dict_2366cb3246e451cebe4ed21878030053);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_str_digest_4de4a808bb21d20de50e36ed8f743120);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_str_digest_675d4c3e65e242af9182d74a86690ee7);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_extensions_tuple);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_str_digest_79800adecb750a52fe48246ea8919314);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_byte_tuple);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_str_digest_fba175f4fa96bc1ad5e500f0160e4d96);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[229] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_explanation_str_plain_result_tuple);
mod_consts_hash[230] = DEEP_HASH(tstate, mod_consts.const_tuple_b90015e4bcdc966d8a477b33a1afe869_tuple);
mod_consts_hash[231] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[232] = DEEP_HASH(tstate, mod_consts.const_tuple_9468991920d340e344be69b405824dd0_tuple);
mod_consts_hash[233] = DEEP_HASH(tstate, mod_consts.const_tuple_20bf31985942696fb0f05d6684ec7c89_tuple);
mod_consts_hash[234] = DEEP_HASH(tstate, mod_consts.const_tuple_95328a12fe471e60c5a478dfb230c429_tuple);
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
void checkModuleConstants_websockets$frames(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_data);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_digest_ae8f381b082ee98b99d808681024266b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ae8f381b082ee98b99d808681024266b);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_s));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_s);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_fin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fin);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_continued));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_continued);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_opcode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_opcode);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_OP_TEXT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OP_TEXT);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decode);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_OP_BINARY));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OP_BINARY);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_MAX_LOG_SIZE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MAX_LOG_SIZE);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_int_pos_3));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_3);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_317e20b8cdcdece61abeb1b4f12bddb4));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_digest_317e20b8cdcdece61abeb1b4f12bddb4);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_space));
CHECK_OBJECT_DEEP(mod_consts.const_str_space);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_binary));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_binary);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_OP_CLOSE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OP_CLOSE);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_Close));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Close);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_text));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_text);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_tuple_type_UnicodeDecodeError_type_AttributeError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_UnicodeDecodeError_type_AttributeError_tuple);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_3f8b984275c38c3bda625b33f1771959));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3f8b984275c38c3bda625b33f1771959);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_3501979af1b70861f5e9d6a0f04129bf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3501979af1b70861f5e9d6a0f04129bf);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_ae1bf19510647fb9d159b650e3dcc9f7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ae1bf19510647fb9d159b650e3dcc9f7);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_chr_93));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_93);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_5c0d46f373f009ab60845143e419ab79));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5c0d46f373f009ab60845143e419ab79);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_02x));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_02x);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_e1207ec09de14b8c2c7e46e53cd4119d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e1207ec09de14b8c2c7e46e53cd4119d);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_3826837d849501cfbe1fb2603ba682ba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3826837d849501cfbe1fb2603ba682ba);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_read_exact));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_read_exact);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_2_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_struct));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_struct);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_unpack));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unpack);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_cbf97bd694cf3a87c92e197f762a0e8d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cbf97bd694cf3a87c92e197f762a0e8d);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_int_pos_128));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_128);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_int_pos_64));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_64);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_int_pos_32));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_32);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_int_pos_16));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_16);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_Opcode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Opcode);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_int_pos_15));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_15);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_ProtocolError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ProtocolError);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_dbbb0a98382f84bdf3ec53d04914063e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_dbbb0a98382f84bdf3ec53d04914063e_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_mask));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mask);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_5a84008d1c2b46b80ccdd952650aa8ca_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_5a84008d1c2b46b80ccdd952650aa8ca_tuple);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_int_pos_127));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_127);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_int_pos_126));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_126);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_423ab65cfd2fd6194b8a1938ade23cb9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_423ab65cfd2fd6194b8a1938ade23cb9);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_8_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_22eba019e51aabb161e25f6d83c991e6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_22eba019e51aabb161e25f6d83c991e6);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_max_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max_size);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_PayloadTooBig));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PayloadTooBig);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_4_tuple);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_apply_mask));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_apply_mask);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_mask_bytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mask_bytes);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_cls));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cls);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extensions);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_frame));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_frame);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_max_size_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_max_size_tuple);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_check));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_check);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_c3be48984278e8e85464067862d030ef));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c3be48984278e8e85464067862d030ef);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encode);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_BytesIO));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BytesIO);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_rsv1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rsv1);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_rsv2));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rsv2);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_rsv3));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rsv3);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_write));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_write);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_pack));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pack);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_43c39bbd6c1d53eedb0309ae1303f4c7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_43c39bbd6c1d53eedb0309ae1303f4c7);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_c8434a8dfa2b76d56b61fa1631919450));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c8434a8dfa2b76d56b61fa1631919450);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_secrets));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_secrets);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_token_bytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_token_bytes);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_getvalue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getvalue);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_ddd66991bc7f0c4dc75f93e551eb267d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ddd66991bc7f0c4dc75f93e551eb267d);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_065097b935ef942c7961f7f84bb301e5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_065097b935ef942c7961f7f84bb301e5_tuple);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_CTRL_OPCODES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CTRL_OPCODES);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_32b001fd755c5cfaa178beca82f32ce3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_32b001fd755c5cfaa178beca82f32ce3_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_da750b4119c83825d88f0c0956a97550_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_da750b4119c83825d88f0c0956a97550_tuple);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_4de591a64cbbf2f91970eabae01aabff));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4de591a64cbbf2f91970eabae01aabff);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_code));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_code);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_int_pos_3000));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_3000);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_int_pos_4000));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_4000);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_registered));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_registered);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_int_pos_5000));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_5000);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_a18cedd7be63b90ba7713ae0c6ec9806));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a18cedd7be63b90ba7713ae0c6ec9806);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_CLOSE_CODE_EXPLANATIONS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CLOSE_CODE_EXPLANATIONS);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_unknown));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unknown);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_digest_b0a73c883a655937e1ff2aa8bb687e6a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b0a73c883a655937e1ff2aa8bb687e6a);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_chr_41));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_41);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_reason));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reason);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_digest_4b6728facce4a8bc2de8aa3ea5088d06));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4b6728facce4a8bc2de8aa3ea5088d06);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_digest_c843b16d6afc3ff1cbb8d2dc6fe3acdd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c843b16d6afc3ff1cbb8d2dc6fe3acdd);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_2_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_int_pos_2_none);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_2_none_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_int_pos_2_none_none);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_CloseCode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CloseCode);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_NO_STATUS_RCVD));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NO_STATUS_RCVD);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_1416866767ae42f2803ad626f8e64690_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_1416866767ae42f2803ad626f8e64690_tuple);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_digest_c49e9ed491aa71cf9582d3de91ac5ad1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c49e9ed491aa71cf9582d3de91ac5ad1);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_336abc59b7fc6206b582fb7af713862c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_336abc59b7fc6206b582fb7af713862c);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_EXTERNAL_CLOSE_CODES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EXTERNAL_CLOSE_CODES);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_8dcbe018c30a41b8efae5dc2013cbddf_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_8dcbe018c30a41b8efae5dc2013cbddf_tuple);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_digest_fa64e85632b48e47e20f74d4f2039879));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fa64e85632b48e47e20f74d4f2039879);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_dataclasses));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dataclasses);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_enum));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_enum);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_io));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_io);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_os));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_os);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Generator_str_plain_Sequence_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Generator_str_plain_Sequence_tuple);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_Generator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Generator);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Sequence);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_Callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Callable);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PayloadTooBig_str_plain_ProtocolError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_PayloadTooBig_str_plain_ProtocolError_tuple);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BytesLike_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BytesLike_tuple);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_BytesLike));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BytesLike);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_speedups));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_speedups);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_apply_mask_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_apply_mask_tuple);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_utils);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_list_d5f8b5f4eb6ae12d4cdd4b3da24156f7_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_d5f8b5f4eb6ae12d4cdd4b3da24156f7_list);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_IntEnum));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IntEnum);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_digest_82533edc83fe47d73aaabae67403b14e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_82533edc83fe47d73aaabae67403b14e);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_digest_3aa24fcc89d511dc19ad61cbee9e29f6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3aa24fcc89d511dc19ad61cbee9e29f6);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_int_pos_38));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_38);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_pos_1_int_pos_2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_int_pos_1_int_pos_2_tuple);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_CONT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CONT);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_TEXT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TEXT);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_BINARY));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BINARY);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_8_int_pos_9_int_pos_10_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_8_int_pos_9_int_pos_10_tuple);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_CLOSE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CLOSE);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_PING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PING);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_PONG));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PONG);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_OP_CONT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OP_CONT);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_OP_PING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OP_PING);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_OP_PONG));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OP_PONG);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain_DATA_OPCODES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DATA_OPCODES);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_digest_651d01ec202ccf56fcd7f654b0514d28));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_651d01ec202ccf56fcd7f654b0514d28);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_int_pos_56));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_56);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_int_pos_1000));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_1000);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_NORMAL_CLOSURE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NORMAL_CLOSURE);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_int_pos_1001));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_1001);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain_GOING_AWAY));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GOING_AWAY);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_int_pos_1002));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_1002);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain_PROTOCOL_ERROR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PROTOCOL_ERROR);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_int_pos_1003));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_1003);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_UNSUPPORTED_DATA));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UNSUPPORTED_DATA);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_int_pos_1005));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_1005);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_int_pos_1006));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_1006);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain_ABNORMAL_CLOSURE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ABNORMAL_CLOSURE);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_int_pos_1007));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_1007);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain_INVALID_DATA));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_INVALID_DATA);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_int_pos_1008));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_1008);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain_POLICY_VIOLATION));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_POLICY_VIOLATION);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_int_pos_1009));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_1009);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain_MESSAGE_TOO_BIG));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MESSAGE_TOO_BIG);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_int_pos_1010));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_1010);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_plain_MANDATORY_EXTENSION));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MANDATORY_EXTENSION);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_int_pos_1011));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_1011);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain_INTERNAL_ERROR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_INTERNAL_ERROR);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_int_pos_1012));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_1012);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_plain_SERVICE_RESTART));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SERVICE_RESTART);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_int_pos_1013));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_1013);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_plain_TRY_AGAIN_LATER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TRY_AGAIN_LATER);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_int_pos_1014));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_1014);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_plain_BAD_GATEWAY));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BAD_GATEWAY);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_int_pos_1015));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_1015);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_plain_TLS_HANDSHAKE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TLS_HANDSHAKE);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_plain_OK));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OK);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_digest_c22a5960dd8bedcf8d8b4f1b700513e9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c22a5960dd8bedcf8d8b4f1b700513e9);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_digest_4dc191a76fe522fb8846d9de5cae163e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4dc191a76fe522fb8846d9de5cae163e);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_digest_7dd95752229fdbc6a268ced04919a9e0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7dd95752229fdbc6a268ced04919a9e0);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_digest_8b8364064027ec50e9b132dc57e7d380));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8b8364064027ec50e9b132dc57e7d380);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_digest_e347279ba84ee232c42ac93b18c4e6e7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e347279ba84ee232c42ac93b18c4e6e7);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_digest_c2c1450289162313da6325a881aa9b82));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c2c1450289162313da6325a881aa9b82);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_digest_5b64366b48f23317a0ac47dd17ff6da9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5b64366b48f23317a0ac47dd17ff6da9);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_digest_ed118a9e3698e55f04b13d3d487f5dd3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ed118a9e3698e55f04b13d3d487f5dd3);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_digest_9c67103661d26d1741f26421dd7c8c2b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9c67103661d26d1741f26421dd7c8c2b);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_digest_9947053d0c63bc81f08a8b20d9d4c742));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9947053d0c63bc81f08a8b20d9d4c742);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_digest_b503a093d91f3551ac590e5b8747cc00));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b503a093d91f3551ac590e5b8747cc00);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_digest_c71dd541bda41d5ec56796d480e4bfc1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c71dd541bda41d5ec56796d480e4bfc1);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_digest_0955437a16a82f78642fad62033e6f27));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0955437a16a82f78642fad62033e6f27);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_digest_8235248e83fa1c9f12f917bd005bf89b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8235248e83fa1c9f12f917bd005bf89b);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_str_digest_49d3c3fc3ee96ead1ca58f86d1afd301));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_49d3c3fc3ee96ead1ca58f86d1afd301);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_plain_OK_CLOSE_CODES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OK_CLOSE_CODES);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_plain_dataclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dataclass);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_str_digest_fe786aca15421ba586a8c2ac64e81b5a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fe786aca15421ba586a8c2ac64e81b5a);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_str_plain_Frame));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Frame);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_int_pos_123));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_123);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_str_plain_bool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bool);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environ);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_WEBSOCKETS_MAX_LOG_SIZE_str_plain_75_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_WEBSOCKETS_MAX_LOG_SIZE_str_plain_75_tuple);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_plain___str__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___str__);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_digest_dd11a11d1f16a60f190be1dc925be925));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dd11a11d1f16a60f190be1dc925be925);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_dict_64884931710373c23cc1ebcee5c19ad1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_64884931710373c23cc1ebcee5c19ad1);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_dict_e43cd9be53cc5aba964941ffe45ba13c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e43cd9be53cc5aba964941ffe45ba13c);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_dict_d038daaa704c3cb9427d8350f36497b7));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d038daaa704c3cb9427d8350f36497b7);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_dict_e9ca1994a1f81877060f3905441f44a2));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e9ca1994a1f81877060f3905441f44a2);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_str_plain_serialize));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_serialize);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_str_digest_2e2485d937ed9d13b3d9f6830acb647e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2e2485d937ed9d13b3d9f6830acb647e);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_str_digest_9736ba04a7cd65d686c7349dda1c15ba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9736ba04a7cd65d686c7349dda1c15ba);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_str_digest_e84271dbdf81a9de5f8debbad5f985c2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e84271dbdf81a9de5f8debbad5f985c2);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_int_pos_353));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_353);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_str_digest_f44d0b180a5111dd8af2567160eaf50f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f44d0b180a5111dd8af2567160eaf50f);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_str_plain_str));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_str);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_str_digest_32a4d177d629a9a4476a997cb509f55b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_32a4d177d629a9a4476a997cb509f55b);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_dict_3929f444c769e7f99db53c6292d37cff));
CHECK_OBJECT_DEEP(mod_consts.const_dict_3929f444c769e7f99db53c6292d37cff);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_str_digest_b71598ad2e9a445575b789460cf787a9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b71598ad2e9a445575b789460cf787a9);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_dict_2366cb3246e451cebe4ed21878030053));
CHECK_OBJECT_DEEP(mod_consts.const_dict_2366cb3246e451cebe4ed21878030053);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_str_digest_4de4a808bb21d20de50e36ed8f743120));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4de4a808bb21d20de50e36ed8f743120);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_str_digest_675d4c3e65e242af9182d74a86690ee7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_675d4c3e65e242af9182d74a86690ee7);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_extensions_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_extensions_tuple);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_str_digest_79800adecb750a52fe48246ea8919314));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_79800adecb750a52fe48246ea8919314);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_byte_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_byte_tuple);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_str_digest_fba175f4fa96bc1ad5e500f0160e4d96));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fba175f4fa96bc1ad5e500f0160e4d96);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[229] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_explanation_str_plain_result_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_explanation_str_plain_result_tuple);
assert(mod_consts_hash[230] == DEEP_HASH(tstate, mod_consts.const_tuple_b90015e4bcdc966d8a477b33a1afe869_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b90015e4bcdc966d8a477b33a1afe869_tuple);
assert(mod_consts_hash[231] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[232] == DEEP_HASH(tstate, mod_consts.const_tuple_9468991920d340e344be69b405824dd0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9468991920d340e344be69b405824dd0_tuple);
assert(mod_consts_hash[233] == DEEP_HASH(tstate, mod_consts.const_tuple_20bf31985942696fb0f05d6684ec7c89_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_20bf31985942696fb0f05d6684ec7c89_tuple);
assert(mod_consts_hash[234] == DEEP_HASH(tstate, mod_consts.const_tuple_95328a12fe471e60c5a478dfb230c429_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_95328a12fe471e60c5a478dfb230c429_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 21
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
static PyObject *module_var_accessor_websockets$frames$CLOSE_CODE_EXPLANATIONS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$frames->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$frames->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_CLOSE_CODE_EXPLANATIONS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$frames->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CLOSE_CODE_EXPLANATIONS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CLOSE_CODE_EXPLANATIONS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CLOSE_CODE_EXPLANATIONS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CLOSE_CODE_EXPLANATIONS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_CLOSE_CODE_EXPLANATIONS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_CLOSE_CODE_EXPLANATIONS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CLOSE_CODE_EXPLANATIONS);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$frames$CTRL_OPCODES(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$frames->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$frames->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_CTRL_OPCODES);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$frames->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CTRL_OPCODES);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CTRL_OPCODES, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CTRL_OPCODES);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CTRL_OPCODES, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_CTRL_OPCODES);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_CTRL_OPCODES);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CTRL_OPCODES);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$frames$Close(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$frames->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$frames->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_Close);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$frames->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_Close);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_Close);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Close);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$frames$CloseCode(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$frames->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$frames->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_CloseCode);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$frames->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_CloseCode);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_CloseCode);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CloseCode);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$frames$EXTERNAL_CLOSE_CODES(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$frames->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$frames->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_EXTERNAL_CLOSE_CODES);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$frames->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EXTERNAL_CLOSE_CODES);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EXTERNAL_CLOSE_CODES, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EXTERNAL_CLOSE_CODES);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EXTERNAL_CLOSE_CODES, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_EXTERNAL_CLOSE_CODES);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_EXTERNAL_CLOSE_CODES);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_EXTERNAL_CLOSE_CODES);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$frames$OP_BINARY(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$frames->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$frames->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_BINARY);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$frames->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_BINARY);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_BINARY);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_BINARY);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$frames$OP_CLOSE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$frames->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$frames->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_CLOSE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$frames->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_CLOSE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_CLOSE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_CLOSE);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$frames$OP_CONT(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$frames->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$frames->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_CONT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$frames->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_CONT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_CONT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_CONT);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$frames$OP_PING(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$frames->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$frames->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_PING);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$frames->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_PING);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_PING);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_PING);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$frames$OP_PONG(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$frames->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$frames->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_PONG);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$frames->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_PONG);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_PONG);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_PONG);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$frames$OP_TEXT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$frames->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$frames->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_TEXT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$frames->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_TEXT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_TEXT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_TEXT);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$frames$Opcode(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$frames->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$frames->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_Opcode);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$frames->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Opcode);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Opcode, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Opcode);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Opcode, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_Opcode);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_Opcode);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Opcode);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$frames$PayloadTooBig(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$frames->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$frames->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_PayloadTooBig);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$frames->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_PayloadTooBig);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_PayloadTooBig);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PayloadTooBig);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$frames$ProtocolError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$frames->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$frames->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_ProtocolError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$frames->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_ProtocolError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_ProtocolError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ProtocolError);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$frames$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$frames->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$frames->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$frames->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___annotations__);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___annotations__, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___annotations__);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___annotations__, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$frames$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$frames->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$frames->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$frames->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$frames$apply_mask(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$frames->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$frames->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_apply_mask);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$frames->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_apply_mask);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_apply_mask, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_apply_mask);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_apply_mask, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_apply_mask);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_apply_mask);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_apply_mask);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$frames$dataclasses(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$frames->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$frames->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclasses);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$frames->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_dataclasses);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_dataclasses, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_dataclasses);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_dataclasses, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclasses);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclasses);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclasses);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$frames$enum(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$frames->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$frames->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_enum);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$frames->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_enum);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_enum);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_enum);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$frames$secrets(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$frames->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$frames->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_secrets);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$frames->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_secrets);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_secrets, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_secrets);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_secrets, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_secrets);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_secrets);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_secrets);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$frames$struct(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$frames->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$frames->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_struct);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$frames->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_struct);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_struct, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_struct);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_struct, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_struct);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_struct);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_struct);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_7bdd20d67971b9cdaedbc0271eb04e14;
static PyCodeObject *code_objects_4c9b09a20de1b289531d6aa534e99641;
static PyCodeObject *code_objects_f2919c047c34a358cde9bec2b6d6fa98;
static PyCodeObject *code_objects_6f7346223fa282f970310913da43ca5b;
static PyCodeObject *code_objects_1f6d060de3fdd9adc7e345065865fff3;
static PyCodeObject *code_objects_c2d00e0b6c6a4d0d3d1df5a397bcd5e5;
static PyCodeObject *code_objects_c1af74141763a46b0d56ae4bd24c4a9e;
static PyCodeObject *code_objects_290c09decaf892f41e127bf46fcdede9;
static PyCodeObject *code_objects_83c1ac794b18dbdf9057796e42e0dfb0;
static PyCodeObject *code_objects_41c0dad6d77954cf0179fcd944f8167a;
static PyCodeObject *code_objects_c5437f9610fbe46c3a72f4778c6ceb83;
static PyCodeObject *code_objects_da8b741ed695f875fe41be23adcc653a;
static PyCodeObject *code_objects_bcb7e51e07fa75be6aa364d01cbf245b;
static PyCodeObject *code_objects_8f7c12e0ad3e3c8c4260fa6b891146ba;
static PyCodeObject *code_objects_28a542cf0cc737562266dea823848349;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_79800adecb750a52fe48246ea8919314); CHECK_OBJECT(module_filename_obj);
code_objects_7bdd20d67971b9cdaedbc0271eb04e14 = MAKE_CODE_OBJECT(module_filename_obj, 170, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_e1207ec09de14b8c2c7e46e53cd4119d, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_byte_tuple, NULL, 1, 0, 0);
code_objects_4c9b09a20de1b289531d6aa534e99641 = MAKE_CODE_OBJECT(module_filename_obj, 187, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_e1207ec09de14b8c2c7e46e53cd4119d, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_byte_tuple, NULL, 1, 0, 0);
code_objects_f2919c047c34a358cde9bec2b6d6fa98 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_fba175f4fa96bc1ad5e500f0160e4d96, mod_consts.const_str_digest_fba175f4fa96bc1ad5e500f0160e4d96, NULL, NULL, 0, 0, 0);
code_objects_6f7346223fa282f970310913da43ca5b = MAKE_CODE_OBJECT(module_filename_obj, 353, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Close, mod_consts.const_str_plain_Close, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_1f6d060de3fdd9adc7e345065865fff3 = MAKE_CODE_OBJECT(module_filename_obj, 56, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_CloseCode, mod_consts.const_str_plain_CloseCode, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_c2d00e0b6c6a4d0d3d1df5a397bcd5e5 = MAKE_CODE_OBJECT(module_filename_obj, 123, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Frame, mod_consts.const_str_plain_Frame, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_c1af74141763a46b0d56ae4bd24c4a9e = MAKE_CODE_OBJECT(module_filename_obj, 38, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Opcode, mod_consts.const_str_plain_Opcode, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_290c09decaf892f41e127bf46fcdede9 = MAKE_CODE_OBJECT(module_filename_obj, 366, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___str__, mod_consts.const_str_digest_32a4d177d629a9a4476a997cb509f55b, mod_consts.const_tuple_str_plain_self_str_plain_explanation_str_plain_result_tuple, NULL, 1, 0, 0);
code_objects_83c1ac794b18dbdf9057796e42e0dfb0 = MAKE_CODE_OBJECT(module_filename_obj, 150, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___str__, mod_consts.const_str_digest_dd11a11d1f16a60f190be1dc925be925, mod_consts.const_tuple_b90015e4bcdc966d8a477b33a1afe869_tuple, NULL, 1, 0, 0);
code_objects_41c0dad6d77954cf0179fcd944f8167a = MAKE_CODE_OBJECT(module_filename_obj, 418, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_check, mod_consts.const_str_digest_675d4c3e65e242af9182d74a86690ee7, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_c5437f9610fbe46c3a72f4778c6ceb83 = MAKE_CODE_OBJECT(module_filename_obj, 334, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_check, mod_consts.const_str_digest_9736ba04a7cd65d686c7349dda1c15ba, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_da8b741ed695f875fe41be23adcc653a = MAKE_CODE_OBJECT(module_filename_obj, 385, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_parse, mod_consts.const_str_digest_b71598ad2e9a445575b789460cf787a9, mod_consts.const_tuple_9468991920d340e344be69b405824dd0_tuple, NULL, 2, 0, 0);
code_objects_bcb7e51e07fa75be6aa364d01cbf245b = MAKE_CODE_OBJECT(module_filename_obj, 201, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_parse, mod_consts.const_str_digest_c3be48984278e8e85464067862d030ef, mod_consts.const_tuple_20bf31985942696fb0f05d6684ec7c89_tuple, NULL, 2, 3, 0);
code_objects_8f7c12e0ad3e3c8c4260fa6b891146ba = MAKE_CODE_OBJECT(module_filename_obj, 410, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_serialize, mod_consts.const_str_digest_4de4a808bb21d20de50e36ed8f743120, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_28a542cf0cc737562266dea823848349 = MAKE_CODE_OBJECT(module_filename_obj, 274, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_serialize, mod_consts.const_str_digest_2e2485d937ed9d13b3d9f6830acb647e, mod_consts.const_tuple_95328a12fe471e60c5a478dfb230c429_tuple, NULL, 1, 2, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_websockets$frames$$$function__1___str__$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_websockets$frames$$$function__1___str__$$$genexpr__2_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_websockets$frames$$$function__2_parse$$$genobj__1_parse(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_websockets$frames$$$function__1___str__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$frames$$$function__2_parse(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$frames$$$function__3_serialize(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$frames$$$function__4_check(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$frames$$$function__5___str__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$frames$$$function__6_parse(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$frames$$$function__7_serialize(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$frames$$$function__8_check(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_websockets$frames$$$function__1___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_coding = NULL;
PyObject *var_length = NULL;
PyObject *var_non_final = NULL;
PyObject *var_data = NULL;
PyObject *var_binary = NULL;
PyObject *var_cut = NULL;
PyObject *var_metadata = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
PyObject *tmp_genexpr_2__$0 = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$frames$$$function__1___str__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$frames$$$function__1___str__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
assert(var_coding == NULL);
Py_INCREF(tmp_assign_source_1);
var_coding = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_websockets$frames$$$function__1___str__)) {
    Py_XDECREF(cache_frame_frame_websockets$frames$$$function__1___str__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$frames$$$function__1___str__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$frames$$$function__1___str__ = MAKE_FUNCTION_FRAME(tstate, code_objects_83c1ac794b18dbdf9057796e42e0dfb0, module_websockets$frames, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$frames$$$function__1___str__->m_type_description == NULL);
frame_frame_websockets$frames$$$function__1___str__ = cache_frame_frame_websockets$frames$$$function__1___str__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$frames$$$function__1___str__);
assert(Py_REFCNT(frame_frame_websockets$frames$$$function__1___str__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_len_arg_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_format_spec_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_data);
if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_format_value_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_2;
PyObject *tmp_expression_value_2;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_ae8f381b082ee98b99d808681024266b;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_len_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_data);
if (tmp_len_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "oooooooo";
    goto tuple_build_exception_1;
}
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_2);
CHECK_OBJECT(tmp_len_arg_2);
Py_DECREF(tmp_len_arg_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "oooooooo";
    goto tuple_build_exception_1;
}
tmp_cmp_expr_right_1 = 1;
tmp_condition_result_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_tuple_element_1 = const_str_empty;
goto condexpr_end_1;
condexpr_false_1:;
tmp_tuple_element_1 = mod_consts.const_str_plain_s;
condexpr_end_1:;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_2 == NULL));
assert(var_length == NULL);
var_length = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
nuitka_bool tmp_condition_result_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_fin);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 157;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
tmp_assign_source_3 = const_str_empty;
goto condexpr_end_2;
condexpr_false_2:;
tmp_assign_source_3 = mod_consts.const_str_plain_continued;
condexpr_end_2:;
assert(var_non_final == NULL);
Py_INCREF(tmp_assign_source_3);
var_non_final = tmp_assign_source_3;
}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_opcode);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = module_var_accessor_websockets$frames$OP_TEXT(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OP_TEXT);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 159;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_3 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_bytes_arg_1;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_bytes_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_data);
if (tmp_bytes_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = BUILTIN_BYTES1(tstate, tmp_bytes_arg_1);
CHECK_OBJECT(tmp_bytes_arg_1);
Py_DECREF(tmp_bytes_arg_1);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$frames$$$function__1___str__->m_frame.f_lineno = 162;
tmp_operand_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_data == NULL);
var_data = tmp_assign_source_4;
}
goto branch_end_1;
branch_no_1:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_opcode);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = module_var_accessor_websockets$frames$OP_BINARY(tstate);
if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OP_BINARY);
}

if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 163;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_4 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_data);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_binary == NULL);
var_binary = tmp_assign_source_5;
}
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_len_arg_3;
PyObject *tmp_floordiv_expr_left_1;
PyObject *tmp_floordiv_expr_right_1;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(var_binary);
tmp_len_arg_3 = var_binary;
tmp_cmp_expr_left_4 = BUILTIN_LEN(tstate, tmp_len_arg_3);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_floordiv_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_MAX_LOG_SIZE);
if (tmp_floordiv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_4);

exception_lineno = 167;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_floordiv_expr_right_1 = mod_consts.const_int_pos_3;
tmp_cmp_expr_right_4 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
CHECK_OBJECT(tmp_floordiv_expr_left_1);
Py_DECREF(tmp_floordiv_expr_left_1);
if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_4);

exception_lineno = 167;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = RICH_COMPARE_GT_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
CHECK_OBJECT(tmp_cmp_expr_right_4);
Py_DECREF(tmp_cmp_expr_right_4);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_floordiv_expr_left_2;
PyObject *tmp_floordiv_expr_right_2;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_floordiv_expr_left_3;
PyObject *tmp_floordiv_expr_right_3;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_floordiv_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_MAX_LOG_SIZE);
if (tmp_floordiv_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_floordiv_expr_right_3 = mod_consts.const_int_pos_3;
tmp_sub_expr_left_1 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_3, tmp_floordiv_expr_right_3);
CHECK_OBJECT(tmp_floordiv_expr_left_3);
Py_DECREF(tmp_floordiv_expr_left_3);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_floordiv_expr_left_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
if (tmp_floordiv_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_floordiv_expr_right_2 = mod_consts.const_int_pos_3;
tmp_assign_source_6 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_2, tmp_floordiv_expr_right_2);
CHECK_OBJECT(tmp_floordiv_expr_left_2);
Py_DECREF(tmp_floordiv_expr_left_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_cut == NULL);
var_cut = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_bytes_arg_value_1;
PyObject *tmp_iterable_value_1;
PyObject *tmp_list_element_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_1;
PyObject *tmp_stop_value_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
tmp_bytes_arg_value_1 = const_bytes_empty;
CHECK_OBJECT(var_binary);
tmp_expression_value_11 = var_binary;
tmp_mult_expr_left_1 = mod_consts.const_int_pos_2;
CHECK_OBJECT(var_cut);
tmp_mult_expr_right_1 = var_cut;
tmp_stop_value_1 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
if (tmp_stop_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_1);
CHECK_OBJECT(tmp_stop_value_1);
Py_DECREF(tmp_stop_value_1);
assert(!(tmp_subscript_value_1 == NULL));
tmp_list_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_iterable_value_1 = MAKE_LIST_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_2;
PyObject *tmp_start_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_stop_value_2;
PyList_SET_ITEM(tmp_iterable_value_1, 0, tmp_list_element_1);
tmp_list_element_1 = mod_consts.const_bytes_digest_317e20b8cdcdece61abeb1b4f12bddb4;
PyList_SET_ITEM0(tmp_iterable_value_1, 1, tmp_list_element_1);
CHECK_OBJECT(var_binary);
tmp_expression_value_12 = var_binary;
CHECK_OBJECT(var_cut);
tmp_operand_value_2 = var_cut;
tmp_start_value_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_2);
if (tmp_start_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "oooooooo";
    goto list_build_exception_1;
}
tmp_stop_value_2 = Py_None;
tmp_subscript_value_2 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_2);
CHECK_OBJECT(tmp_start_value_1);
Py_DECREF(tmp_start_value_1);
assert(!(tmp_subscript_value_2 == NULL));
tmp_list_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "oooooooo";
    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_iterable_value_1, 2, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_iterable_value_1);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
tmp_assign_source_7 = BYTES_JOIN(tstate, tmp_bytes_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_binary;
    assert(old != NULL);
    var_binary = tmp_assign_source_7;
    Py_DECREF(old);
}

}
branch_no_3:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_2;
tmp_str_arg_value_1 = mod_consts.const_str_space;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_iter_arg_1;
if (var_binary == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_binary);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 170;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_iter_arg_1 = var_binary;
tmp_assign_source_9 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_9;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_iterable_value_2 = MAKE_GENERATOR_websockets$frames$$$function__1___str__$$$genexpr__1_genexpr(tstate, tmp_closure_1);

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
tmp_assign_source_8 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_2);
CHECK_OBJECT(tmp_iterable_value_2);
Py_DECREF(tmp_iterable_value_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_data == NULL);
var_data = tmp_assign_source_8;
}
goto branch_end_2;
branch_no_2:;
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(par_self);
tmp_expression_value_13 = par_self;
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_opcode);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = module_var_accessor_websockets$frames$OP_CLOSE(tstate);
if (unlikely(tmp_cmp_expr_right_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OP_CLOSE);
}

if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_5);

exception_lineno = 171;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_condition_result_6 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_unicode_arg_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_15;
tmp_expression_value_14 = module_var_accessor_websockets$frames$Close(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Close);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 172;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_parse);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_15 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_data);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 172;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$frames$$$function__1___str__->m_frame.f_lineno = 172;
tmp_unicode_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_unicode_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_10 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
CHECK_OBJECT(tmp_unicode_arg_1);
Py_DECREF(tmp_unicode_arg_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_data == NULL);
var_data = tmp_assign_source_10;
}
goto branch_end_4;
branch_no_4:;
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_expression_value_16;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_self);
tmp_expression_value_16 = par_self;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_data);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 173;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_17;
PyObject *tmp_bytes_arg_2;
PyObject *tmp_expression_value_18;
CHECK_OBJECT(par_self);
tmp_expression_value_18 = par_self;
tmp_bytes_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_data);
if (tmp_bytes_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
tmp_expression_value_17 = BUILTIN_BYTES1(tstate, tmp_bytes_arg_2);
CHECK_OBJECT(tmp_bytes_arg_2);
Py_DECREF(tmp_bytes_arg_2);
if (tmp_expression_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
frame_frame_websockets$frames$$$function__1___str__->m_frame.f_lineno = 180;
tmp_operand_value_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
tmp_assign_source_11 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
assert(var_data == NULL);
var_data = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = mod_consts.const_str_plain_text;
{
    PyObject *old = var_coding;
    assert(old != NULL);
    var_coding = tmp_assign_source_12;
    Py_INCREF(var_coding);
    Py_DECREF(old);
}

}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$frames$$$function__1___str__, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$frames$$$function__1___str__, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
tmp_cmp_expr_left_6 = EXC_TYPE(tstate);
tmp_cmp_expr_right_6 = mod_consts.const_tuple_type_UnicodeDecodeError_type_AttributeError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_8 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_expression_value_19;
CHECK_OBJECT(par_self);
tmp_expression_value_19 = par_self;
tmp_assign_source_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_data);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
assert(var_binary == NULL);
var_binary = tmp_assign_source_13;
}
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_len_arg_4;
PyObject *tmp_floordiv_expr_left_4;
PyObject *tmp_floordiv_expr_right_4;
PyObject *tmp_expression_value_20;
CHECK_OBJECT(var_binary);
tmp_len_arg_4 = var_binary;
tmp_cmp_expr_left_7 = BUILTIN_LEN(tstate, tmp_len_arg_4);
if (tmp_cmp_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_self);
tmp_expression_value_20 = par_self;
tmp_floordiv_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_MAX_LOG_SIZE);
if (tmp_floordiv_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_7);

exception_lineno = 184;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
tmp_floordiv_expr_right_4 = mod_consts.const_int_pos_3;
tmp_cmp_expr_right_7 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_4, tmp_floordiv_expr_right_4);
CHECK_OBJECT(tmp_floordiv_expr_left_4);
Py_DECREF(tmp_floordiv_expr_left_4);
if (tmp_cmp_expr_right_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_7);

exception_lineno = 184;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_9 = RICH_COMPARE_GT_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
CHECK_OBJECT(tmp_cmp_expr_right_7);
Py_DECREF(tmp_cmp_expr_right_7);
if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_floordiv_expr_left_5;
PyObject *tmp_floordiv_expr_right_5;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_floordiv_expr_left_6;
PyObject *tmp_floordiv_expr_right_6;
PyObject *tmp_expression_value_21;
CHECK_OBJECT(par_self);
tmp_expression_value_21 = par_self;
tmp_floordiv_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_MAX_LOG_SIZE);
if (tmp_floordiv_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
tmp_floordiv_expr_right_6 = mod_consts.const_int_pos_3;
tmp_sub_expr_left_2 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_6, tmp_floordiv_expr_right_6);
CHECK_OBJECT(tmp_floordiv_expr_left_6);
Py_DECREF(tmp_floordiv_expr_left_6);
if (tmp_sub_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
tmp_sub_expr_right_2 = const_int_pos_1;
tmp_floordiv_expr_left_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
CHECK_OBJECT(tmp_sub_expr_left_2);
Py_DECREF(tmp_sub_expr_left_2);
if (tmp_floordiv_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
tmp_floordiv_expr_right_5 = mod_consts.const_int_pos_3;
tmp_assign_source_14 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_5, tmp_floordiv_expr_right_5);
CHECK_OBJECT(tmp_floordiv_expr_left_5);
Py_DECREF(tmp_floordiv_expr_left_5);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
assert(var_cut == NULL);
var_cut = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_bytes_arg_value_2;
PyObject *tmp_iterable_value_3;
PyObject *tmp_list_element_2;
PyObject *tmp_expression_value_22;
PyObject *tmp_subscript_value_3;
PyObject *tmp_stop_value_3;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
tmp_bytes_arg_value_2 = const_bytes_empty;
CHECK_OBJECT(var_binary);
tmp_expression_value_22 = var_binary;
tmp_mult_expr_left_2 = mod_consts.const_int_pos_2;
CHECK_OBJECT(var_cut);
tmp_mult_expr_right_2 = var_cut;
tmp_stop_value_3 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
if (tmp_stop_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
tmp_subscript_value_3 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_3);
CHECK_OBJECT(tmp_stop_value_3);
Py_DECREF(tmp_stop_value_3);
assert(!(tmp_subscript_value_3 == NULL));
tmp_list_element_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_3);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_list_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
tmp_iterable_value_3 = MAKE_LIST_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_23;
PyObject *tmp_subscript_value_4;
PyObject *tmp_start_value_2;
PyObject *tmp_operand_value_4;
PyObject *tmp_stop_value_4;
PyList_SET_ITEM(tmp_iterable_value_3, 0, tmp_list_element_2);
tmp_list_element_2 = mod_consts.const_bytes_digest_317e20b8cdcdece61abeb1b4f12bddb4;
PyList_SET_ITEM0(tmp_iterable_value_3, 1, tmp_list_element_2);
CHECK_OBJECT(var_binary);
tmp_expression_value_23 = var_binary;
CHECK_OBJECT(var_cut);
tmp_operand_value_4 = var_cut;
tmp_start_value_2 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_4);
if (tmp_start_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "oooooooo";
    goto list_build_exception_2;
}
tmp_stop_value_4 = Py_None;
tmp_subscript_value_4 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_2, tmp_stop_value_4);
CHECK_OBJECT(tmp_start_value_2);
Py_DECREF(tmp_start_value_2);
assert(!(tmp_subscript_value_4 == NULL));
tmp_list_element_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_4);
CHECK_OBJECT(tmp_subscript_value_4);
Py_DECREF(tmp_subscript_value_4);
if (tmp_list_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "oooooooo";
    goto list_build_exception_2;
}
PyList_SET_ITEM(tmp_iterable_value_3, 2, tmp_list_element_2);
}
goto list_build_no_exception_2;
// Exception handling pass through code for list_build:
list_build_exception_2:;
Py_DECREF(tmp_iterable_value_3);
goto try_except_handler_4;
// Finished with no exception for list_build:
list_build_no_exception_2:;
tmp_assign_source_15 = BYTES_JOIN(tstate, tmp_bytes_arg_value_2, tmp_iterable_value_3);
CHECK_OBJECT(tmp_iterable_value_3);
Py_DECREF(tmp_iterable_value_3);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_binary;
    assert(old != NULL);
    var_binary = tmp_assign_source_15;
    Py_DECREF(old);
}

}
branch_no_7:;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_str_arg_value_2;
PyObject *tmp_iterable_value_4;
tmp_str_arg_value_2 = mod_consts.const_str_space;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_iter_arg_2;
if (var_binary == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_binary);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 187;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}

tmp_iter_arg_2 = var_binary;
tmp_assign_source_17 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
assert(tmp_genexpr_2__$0 == NULL);
tmp_genexpr_2__$0 = tmp_assign_source_17;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_2[1];
tmp_closure_2[0] = Nuitka_Cell_New0(tmp_genexpr_2__$0);
tmp_iterable_value_4 = MAKE_GENERATOR_websockets$frames$$$function__1___str__$$$genexpr__2_genexpr(tstate, tmp_closure_2);

goto try_return_handler_5;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(tmp_genexpr_2__$0);
CHECK_OBJECT(tmp_genexpr_2__$0);
Py_DECREF(tmp_genexpr_2__$0);
tmp_genexpr_2__$0 = NULL;
goto outline_result_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_2:;
tmp_assign_source_16 = UNICODE_JOIN(tstate, tmp_str_arg_value_2, tmp_iterable_value_4);
CHECK_OBJECT(tmp_iterable_value_4);
Py_DECREF(tmp_iterable_value_4);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
assert(var_data == NULL);
var_data = tmp_assign_source_16;
}
{
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = mod_consts.const_str_plain_binary;
{
    PyObject *old = var_coding;
    assert(old != NULL);
    var_coding = tmp_assign_source_18;
    Py_INCREF(var_coding);
    Py_DECREF(old);
}

}
goto branch_end_6;
branch_no_6:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 179;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_websockets$frames$$$function__1___str__->m_frame)) {
        frame_frame_websockets$frames$$$function__1___str__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooo";
goto try_except_handler_4;
branch_end_6:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
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
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = mod_consts.const_str_digest_3f8b984275c38c3bda625b33f1771959;
assert(var_data == NULL);
Py_INCREF(tmp_assign_source_19);
var_data = tmp_assign_source_19;
}
branch_end_5:;
branch_end_4:;
branch_end_2:;
branch_end_1:;
{
nuitka_bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_len_arg_5;
PyObject *tmp_expression_value_24;
CHECK_OBJECT(var_data);
tmp_len_arg_5 = var_data;
tmp_cmp_expr_left_8 = BUILTIN_LEN(tstate, tmp_len_arg_5);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_24 = par_self;
tmp_cmp_expr_right_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_MAX_LOG_SIZE);
if (tmp_cmp_expr_right_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_8);

exception_lineno = 192;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_10 = RICH_COMPARE_GT_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
CHECK_OBJECT(tmp_cmp_expr_right_8);
Py_DECREF(tmp_cmp_expr_right_8);
if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_20;
PyObject *tmp_sub_expr_left_3;
PyObject *tmp_sub_expr_right_3;
PyObject *tmp_floordiv_expr_left_7;
PyObject *tmp_floordiv_expr_right_7;
PyObject *tmp_expression_value_25;
CHECK_OBJECT(par_self);
tmp_expression_value_25 = par_self;
tmp_floordiv_expr_left_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_MAX_LOG_SIZE);
if (tmp_floordiv_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_floordiv_expr_right_7 = mod_consts.const_int_pos_3;
tmp_sub_expr_left_3 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_7, tmp_floordiv_expr_right_7);
CHECK_OBJECT(tmp_floordiv_expr_left_7);
Py_DECREF(tmp_floordiv_expr_left_7);
if (tmp_sub_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_3 = const_int_pos_1;
tmp_assign_source_20 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
CHECK_OBJECT(tmp_sub_expr_left_3);
Py_DECREF(tmp_sub_expr_left_3);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_cut;
    var_cut = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_expression_value_26;
PyObject *tmp_subscript_value_5;
PyObject *tmp_stop_value_5;
PyObject *tmp_mult_expr_left_3;
PyObject *tmp_mult_expr_right_3;
PyObject *tmp_expression_value_27;
PyObject *tmp_subscript_value_6;
PyObject *tmp_start_value_3;
PyObject *tmp_operand_value_5;
PyObject *tmp_stop_value_6;
CHECK_OBJECT(var_data);
tmp_expression_value_26 = var_data;
tmp_mult_expr_left_3 = mod_consts.const_int_pos_2;
CHECK_OBJECT(var_cut);
tmp_mult_expr_right_3 = var_cut;
tmp_stop_value_5 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
if (tmp_stop_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_5 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_5);
CHECK_OBJECT(tmp_stop_value_5);
Py_DECREF(tmp_stop_value_5);
assert(!(tmp_subscript_value_5 == NULL));
tmp_add_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_26, tmp_subscript_value_5);
CHECK_OBJECT(tmp_subscript_value_5);
Py_DECREF(tmp_subscript_value_5);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_2 = mod_consts.const_str_digest_3501979af1b70861f5e9d6a0f04129bf;
tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_data);
tmp_expression_value_27 = var_data;
CHECK_OBJECT(var_cut);
tmp_operand_value_5 = var_cut;
tmp_start_value_3 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_5);
if (tmp_start_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 194;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_stop_value_6 = Py_None;
tmp_subscript_value_6 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_3, tmp_stop_value_6);
CHECK_OBJECT(tmp_start_value_3);
Py_DECREF(tmp_start_value_3);
assert(!(tmp_subscript_value_6 == NULL));
tmp_add_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_27, tmp_subscript_value_6);
CHECK_OBJECT(tmp_subscript_value_6);
Py_DECREF(tmp_subscript_value_6);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 194;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_21 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_data;
    assert(old != NULL);
    var_data = tmp_assign_source_21;
    Py_DECREF(old);
}

}
branch_no_8:;
{
PyObject *tmp_assign_source_22;
PyObject *tmp_str_arg_value_3;
PyObject *tmp_iterable_value_5;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_list_element_3;
tmp_str_arg_value_3 = mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
tmp_called_value_4 = (PyObject *)&PyFilter_Type;
tmp_args_element_value_2 = Py_None;
CHECK_OBJECT(var_coding);
tmp_list_element_3 = var_coding;
tmp_args_element_value_3 = MAKE_LIST_EMPTY(tstate, 3);
PyList_SET_ITEM0(tmp_args_element_value_3, 0, tmp_list_element_3);
CHECK_OBJECT(var_length);
tmp_list_element_3 = var_length;
PyList_SET_ITEM0(tmp_args_element_value_3, 1, tmp_list_element_3);
CHECK_OBJECT(var_non_final);
tmp_list_element_3 = var_non_final;
PyList_SET_ITEM0(tmp_args_element_value_3, 2, tmp_list_element_3);
frame_frame_websockets$frames$$$function__1___str__->m_frame.f_lineno = 196;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_iterable_value_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_iterable_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_22 = UNICODE_JOIN(tstate, tmp_str_arg_value_3, tmp_iterable_value_5);
CHECK_OBJECT(tmp_iterable_value_5);
Py_DECREF(tmp_iterable_value_5);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_metadata == NULL);
var_metadata = tmp_assign_source_22;
}
{
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_28;
PyObject *tmp_expression_value_29;
PyObject *tmp_format_spec_2;
CHECK_OBJECT(par_self);
tmp_expression_value_29 = par_self;
tmp_expression_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_opcode);
if (tmp_expression_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, const_str_plain_name);
CHECK_OBJECT(tmp_expression_value_28);
Py_DECREF(tmp_expression_value_28);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 6);
{
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_space;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
if (var_data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 198;
type_description_1 = "oooooooo";
    goto tuple_build_exception_2;
}

tmp_format_value_3 = var_data;
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_ae1bf19510647fb9d159b650e3dcc9f7;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 3, tmp_tuple_element_2);
CHECK_OBJECT(var_metadata);
tmp_tuple_element_2 = var_metadata;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 4, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_chr_93;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 5, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_return_value == NULL));
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$frames$$$function__1___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$frames$$$function__1___str__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$frames$$$function__1___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$frames$$$function__1___str__,
    type_description_1,
    par_self,
    var_coding,
    var_length,
    var_non_final,
    var_data,
    var_binary,
    var_cut,
    var_metadata
);


// Release cached frame if used for exception.
if (frame_frame_websockets$frames$$$function__1___str__ == cache_frame_frame_websockets$frames$$$function__1___str__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$frames$$$function__1___str__);
    cache_frame_frame_websockets$frames$$$function__1___str__ = NULL;
}

assertFrameObject(frame_frame_websockets$frames$$$function__1___str__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_coding);
CHECK_OBJECT(var_coding);
Py_DECREF(var_coding);
var_coding = NULL;
CHECK_OBJECT(var_length);
CHECK_OBJECT(var_length);
Py_DECREF(var_length);
var_length = NULL;
CHECK_OBJECT(var_non_final);
CHECK_OBJECT(var_non_final);
Py_DECREF(var_non_final);
var_non_final = NULL;
Py_XDECREF(var_data);
var_data = NULL;
Py_XDECREF(var_binary);
var_binary = NULL;
Py_XDECREF(var_cut);
var_cut = NULL;
CHECK_OBJECT(var_metadata);
CHECK_OBJECT(var_metadata);
Py_DECREF(var_metadata);
var_metadata = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_coding);
CHECK_OBJECT(var_coding);
Py_DECREF(var_coding);
var_coding = NULL;
Py_XDECREF(var_length);
var_length = NULL;
Py_XDECREF(var_non_final);
var_non_final = NULL;
Py_XDECREF(var_data);
var_data = NULL;
Py_XDECREF(var_binary);
var_binary = NULL;
Py_XDECREF(var_cut);
var_cut = NULL;
Py_XDECREF(var_metadata);
var_metadata = NULL;
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



#if 1
struct websockets$frames$$$function__1___str__$$$genexpr__1_genexpr_locals {
PyObject *var_byte;
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

static PyObject *websockets$frames$$$function__1___str__$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct websockets$frames$$$function__1___str__$$$genexpr__1_genexpr_locals *generator_heap = (struct websockets$frames$$$function__1___str__$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_byte = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_7bdd20d67971b9cdaedbc0271eb04e14, module_websockets$frames, sizeof(void *)+sizeof(void *));
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
generator_heap->exception_lineno = 170;
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
    PyObject *old = generator_heap->var_byte;
    generator_heap->var_byte = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_byte);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_byte);
tmp_format_value_1 = generator_heap->var_byte;
tmp_format_spec_1 = mod_consts.const_str_plain_02x;
tmp_expression_value_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 170;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_format_value_1, sizeof(PyObject *), &tmp_format_spec_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_format_value_1, sizeof(PyObject *), &tmp_format_spec_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 170;
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


generator_heap->exception_lineno = 170;
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
    generator_heap->var_byte
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

Py_XDECREF(generator_heap->var_byte);
generator_heap->var_byte = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_byte);
generator_heap->var_byte = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_websockets$frames$$$function__1___str__$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        websockets$frames$$$function__1___str__$$$genexpr__1_genexpr_context,
        module_websockets$frames,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_e1207ec09de14b8c2c7e46e53cd4119d,
#endif
        code_objects_7bdd20d67971b9cdaedbc0271eb04e14,
        closure,
        1,
#if 1
        sizeof(struct websockets$frames$$$function__1___str__$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}



#if 1
struct websockets$frames$$$function__1___str__$$$genexpr__2_genexpr_locals {
PyObject *var_byte;
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

static PyObject *websockets$frames$$$function__1___str__$$$genexpr__2_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct websockets$frames$$$function__1___str__$$$genexpr__2_genexpr_locals *generator_heap = (struct websockets$frames$$$function__1___str__$$$genexpr__2_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_byte = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_4c9b09a20de1b289531d6aa534e99641, module_websockets$frames, sizeof(void *)+sizeof(void *));
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
generator_heap->exception_lineno = 187;
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
    PyObject *old = generator_heap->var_byte;
    generator_heap->var_byte = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_byte);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_byte);
tmp_format_value_1 = generator_heap->var_byte;
tmp_format_spec_1 = mod_consts.const_str_plain_02x;
tmp_expression_value_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 187;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_format_value_1, sizeof(PyObject *), &tmp_format_spec_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_format_value_1, sizeof(PyObject *), &tmp_format_spec_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 187;
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


generator_heap->exception_lineno = 187;
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
    generator_heap->var_byte
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

Py_XDECREF(generator_heap->var_byte);
generator_heap->var_byte = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_byte);
generator_heap->var_byte = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_websockets$frames$$$function__1___str__$$$genexpr__2_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        websockets$frames$$$function__1___str__$$$genexpr__2_genexpr_context,
        module_websockets$frames,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_e1207ec09de14b8c2c7e46e53cd4119d,
#endif
        code_objects_4c9b09a20de1b289531d6aa534e99641,
        closure,
        1,
#if 1
        sizeof(struct websockets$frames$$$function__1___str__$$$genexpr__2_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_websockets$frames$$$function__2_parse(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_cls = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_read_exact = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_mask = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_max_size = Nuitka_Cell_New1(python_pars[3]);
struct Nuitka_CellObject *par_extensions = Nuitka_Cell_New1(python_pars[4]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[5];
tmp_closure_1[0] = par_cls;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_extensions;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_mask;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_max_size;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_read_exact;
Py_INCREF(tmp_closure_1[4]);
tmp_return_value = MAKE_GENERATOR_websockets$frames$$$function__2_parse$$$genobj__1_parse(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_cls);
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
par_cls = NULL;
CHECK_OBJECT(par_read_exact);
CHECK_OBJECT(par_read_exact);
Py_DECREF(par_read_exact);
par_read_exact = NULL;
CHECK_OBJECT(par_mask);
CHECK_OBJECT(par_mask);
Py_DECREF(par_mask);
par_mask = NULL;
CHECK_OBJECT(par_max_size);
CHECK_OBJECT(par_max_size);
Py_DECREF(par_max_size);
par_max_size = NULL;
CHECK_OBJECT(par_extensions);
CHECK_OBJECT(par_extensions);
Py_DECREF(par_extensions);
par_extensions = NULL;
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
struct websockets$frames$$$function__2_parse$$$genobj__1_parse_locals {
PyObject *var_data;
PyObject *var_head1;
PyObject *var_head2;
PyObject *var_fin;
PyObject *var_rsv1;
PyObject *var_rsv2;
PyObject *var_rsv3;
PyObject *var_opcode;
PyObject *var_exc;
PyObject *var_length;
PyObject *var_mask_bytes;
PyObject *var_frame;
PyObject *var_extension;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
PyObject *tmp_tuple_unpack_1__element_1;
PyObject *tmp_tuple_unpack_1__element_2;
PyObject *tmp_tuple_unpack_1__source_iter;
PyObject *tmp_tuple_unpack_2__element_1;
PyObject *tmp_tuple_unpack_2__source_iter;
PyObject *tmp_tuple_unpack_3__element_1;
PyObject *tmp_tuple_unpack_3__source_iter;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
int exception_keeper_lineno_10;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
int exception_keeper_lineno_11;
};
#endif

static PyObject *websockets$frames$$$function__2_parse$$$genobj__1_parse_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct websockets$frames$$$function__2_parse$$$genobj__1_parse_locals *generator_heap = (struct websockets$frames$$$function__2_parse$$$genobj__1_parse_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 5: goto yield_return_5;
case 4: goto yield_return_4;
case 3: goto yield_return_3;
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_data = NULL;
generator_heap->var_head1 = NULL;
generator_heap->var_head2 = NULL;
generator_heap->var_fin = NULL;
generator_heap->var_rsv1 = NULL;
generator_heap->var_rsv2 = NULL;
generator_heap->var_rsv3 = NULL;
generator_heap->var_opcode = NULL;
generator_heap->var_exc = NULL;
generator_heap->var_length = NULL;
generator_heap->var_mask_bytes = NULL;
generator_heap->var_frame = NULL;
generator_heap->var_extension = NULL;
generator_heap->tmp_for_loop_1__for_iterator = NULL;
generator_heap->tmp_for_loop_1__iter_value = NULL;
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
generator_heap->tmp_tuple_unpack_2__element_1 = NULL;
generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
generator_heap->tmp_tuple_unpack_3__element_1 = NULL;
generator_heap->tmp_tuple_unpack_3__source_iter = NULL;
generator_heap->type_description_1 = NULL;
generator_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
generator_heap->exception_lineno = 0;
generator_heap->tmp_return_value = NULL;

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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_bcb7e51e07fa75be6aa364d01cbf245b, module_websockets$frames, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
if (Nuitka_Cell_GET(generator->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_read_exact);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 229;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_1 = Nuitka_Cell_GET(generator->m_closure[4]);
generator->m_frame->m_frame.f_lineno = 229;
tmp_expression_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_int_pos_2_tuple);

if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 229;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
generator->m_yield_from = tmp_expression_value_1;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 229;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = yield_return_value;
assert(generator_heap->var_data == NULL);
generator_heap->var_data = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_websockets$frames$struct(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_struct);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 230;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_cbf97bd694cf3a87c92e197f762a0e8d;
CHECK_OBJECT(generator_heap->var_data);
tmp_args_element_value_2 = generator_heap->var_data;
generator->m_frame->m_frame.f_lineno = 230;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_unpack,
        call_args
    );
}

if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 230;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 230;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto try_except_handler_2;
}
assert(generator_heap->tmp_tuple_unpack_1__source_iter == NULL);
generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_1;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 230;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto try_except_handler_3;
}
assert(generator_heap->tmp_tuple_unpack_1__element_1 == NULL);
generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_2;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 230;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto try_except_handler_3;
}
assert(generator_heap->tmp_tuple_unpack_1__element_2 == NULL);
generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
generator_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &generator_heap->exception_state, tmp_iterator_name_1, 2);
if (generator_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 230;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto try_except_handler_3;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
tmp_assign_source_5 = generator_heap->tmp_tuple_unpack_1__element_1;
assert(generator_heap->var_head1 == NULL);
Py_INCREF(tmp_assign_source_5);
generator_heap->var_head1 = tmp_assign_source_5;
}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
tmp_assign_source_6 = generator_heap->tmp_tuple_unpack_1__element_2;
assert(generator_heap->var_head2 == NULL);
Py_INCREF(tmp_assign_source_6);
generator_heap->var_head2 = tmp_assign_source_6;
}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_7;
nuitka_bool tmp_condition_result_1;
PyObject *tmp_bitand_expr_left_1;
PyObject *tmp_bitand_expr_right_1;
CHECK_OBJECT(generator_heap->var_head1);
tmp_bitand_expr_left_1 = generator_heap->var_head1;
tmp_bitand_expr_right_1 = mod_consts.const_int_pos_128;
tmp_condition_result_1 = BINARY_OPERATION_BITAND_NBOOL_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 233;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_assign_source_7 = Py_True;
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_7 = Py_False;
condexpr_end_1:;
assert(generator_heap->var_fin == NULL);
Py_INCREF(tmp_assign_source_7);
generator_heap->var_fin = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
nuitka_bool tmp_condition_result_2;
PyObject *tmp_bitand_expr_left_2;
PyObject *tmp_bitand_expr_right_2;
CHECK_OBJECT(generator_heap->var_head1);
tmp_bitand_expr_left_2 = generator_heap->var_head1;
tmp_bitand_expr_right_2 = mod_consts.const_int_pos_64;
tmp_condition_result_2 = BINARY_OPERATION_BITAND_NBOOL_OBJECT_LONG(tmp_bitand_expr_left_2, tmp_bitand_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 234;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
tmp_assign_source_8 = Py_True;
goto condexpr_end_2;
condexpr_false_2:;
tmp_assign_source_8 = Py_False;
condexpr_end_2:;
assert(generator_heap->var_rsv1 == NULL);
Py_INCREF(tmp_assign_source_8);
generator_heap->var_rsv1 = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
nuitka_bool tmp_condition_result_3;
PyObject *tmp_bitand_expr_left_3;
PyObject *tmp_bitand_expr_right_3;
CHECK_OBJECT(generator_heap->var_head1);
tmp_bitand_expr_left_3 = generator_heap->var_head1;
tmp_bitand_expr_right_3 = mod_consts.const_int_pos_32;
tmp_condition_result_3 = BINARY_OPERATION_BITAND_NBOOL_OBJECT_LONG(tmp_bitand_expr_left_3, tmp_bitand_expr_right_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 235;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
tmp_assign_source_9 = Py_True;
goto condexpr_end_3;
condexpr_false_3:;
tmp_assign_source_9 = Py_False;
condexpr_end_3:;
assert(generator_heap->var_rsv2 == NULL);
Py_INCREF(tmp_assign_source_9);
generator_heap->var_rsv2 = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
nuitka_bool tmp_condition_result_4;
PyObject *tmp_bitand_expr_left_4;
PyObject *tmp_bitand_expr_right_4;
CHECK_OBJECT(generator_heap->var_head1);
tmp_bitand_expr_left_4 = generator_heap->var_head1;
tmp_bitand_expr_right_4 = mod_consts.const_int_pos_16;
tmp_condition_result_4 = BINARY_OPERATION_BITAND_NBOOL_OBJECT_LONG(tmp_bitand_expr_left_4, tmp_bitand_expr_right_4);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 236;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
tmp_assign_source_10 = Py_True;
goto condexpr_end_4;
condexpr_false_4:;
tmp_assign_source_10 = Py_False;
condexpr_end_4:;
assert(generator_heap->var_rsv3 == NULL);
Py_INCREF(tmp_assign_source_10);
generator_heap->var_rsv3 = tmp_assign_source_10;
}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_bitand_expr_left_5;
PyObject *tmp_bitand_expr_right_5;
tmp_called_value_2 = module_var_accessor_websockets$frames$Opcode(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Opcode);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 239;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(generator_heap->var_head1);
tmp_bitand_expr_left_5 = generator_heap->var_head1;
tmp_bitand_expr_right_5 = mod_consts.const_int_pos_15;
tmp_args_element_value_3 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_5, tmp_bitand_expr_right_5);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 239;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto try_except_handler_4;
}
generator->m_frame->m_frame.f_lineno = 239;
tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 239;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto try_except_handler_4;
}
assert(generator_heap->var_opcode == NULL);
generator_heap->var_opcode = tmp_assign_source_11;
}
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Preserve existing published exception id 1.
generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_3, exception_tb);
    } else if (generator_heap->exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_ValueError;
generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(generator_heap->tmp_res == -1));
tmp_condition_result_5 = (generator_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_12); 
assert(generator_heap->var_exc == NULL);
Py_INCREF(tmp_assign_source_12);
generator_heap->var_exc = tmp_assign_source_12;
}
// Tried code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_3;
PyObject *tmp_raise_cause_1;
tmp_called_value_3 = module_var_accessor_websockets$frames$ProtocolError(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_ProtocolError);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 241;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto try_except_handler_6;
}
generator->m_frame->m_frame.f_lineno = 241;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_digest_dbbb0a98382f84bdf3ec53d04914063e_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 241;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto try_except_handler_6;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 241;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(generator_heap->var_exc);
tmp_raise_cause_1 = generator_heap->var_exc;
generator_heap->exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
generator_heap->exception_lineno = 241;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &generator_heap->exception_state, tmp_raise_cause_1);
generator_heap->type_description_1 = "cccccooooooooooooo";
goto try_except_handler_6;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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

goto try_except_handler_5;
// End of try:
goto branch_end_1;
branch_no_1:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 238;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "cccccooooooooooooo";
goto try_except_handler_5;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_5:;
generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_5 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_5;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_3:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
nuitka_bool tmp_condition_result_7;
PyObject *tmp_bitand_expr_left_6;
PyObject *tmp_bitand_expr_right_6;
CHECK_OBJECT(generator_heap->var_head2);
tmp_bitand_expr_left_6 = generator_heap->var_head2;
tmp_bitand_expr_right_6 = mod_consts.const_int_pos_128;
tmp_condition_result_7 = BINARY_OPERATION_BITAND_NBOOL_OBJECT_LONG(tmp_bitand_expr_left_6, tmp_bitand_expr_right_6);
if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 243;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_5;
} else {
    goto condexpr_false_5;
}
condexpr_true_5:;
tmp_cmp_expr_left_2 = Py_True;
goto condexpr_end_5;
condexpr_false_5:;
tmp_cmp_expr_left_2 = Py_False;
condexpr_end_5:;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_mask);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 243;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_right_2 = Nuitka_Cell_GET(generator->m_closure[2]);
tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 243;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_4;
tmp_called_value_4 = module_var_accessor_websockets$frames$ProtocolError(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_ProtocolError);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 244;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 244;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_digest_5a84008d1c2b46b80ccdd952650aa8ca_tuple);

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 244;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 244;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}
generator_heap->exception_state.exception_value = tmp_raise_type_2;
generator_heap->exception_lineno = 244;
RAISE_EXCEPTION_WITH_VALUE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "cccccooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_bitand_expr_left_7;
PyObject *tmp_bitand_expr_right_7;
CHECK_OBJECT(generator_heap->var_head2);
tmp_bitand_expr_left_7 = generator_heap->var_head2;
tmp_bitand_expr_right_7 = mod_consts.const_int_pos_127;
tmp_assign_source_13 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_7, tmp_bitand_expr_right_7);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 246;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_length == NULL);
generator_heap->var_length = tmp_assign_source_13;
}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(generator_heap->var_length);
tmp_cmp_expr_left_3 = generator_heap->var_length;
tmp_cmp_expr_right_3 = mod_consts.const_int_pos_126;
tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 247;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_5;
if (Nuitka_Cell_GET(generator->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_read_exact);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 248;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_5 = Nuitka_Cell_GET(generator->m_closure[4]);
generator->m_frame->m_frame.f_lineno = 248;
tmp_expression_value_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_int_pos_2_tuple);

if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 248;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_5, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 2;
generator->m_yield_from = tmp_expression_value_2;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_5, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 248;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_14 = yield_return_value;
{
    PyObject *old = generator_heap->var_data;
    assert(old != NULL);
    generator_heap->var_data = tmp_assign_source_14;
    Py_DECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_instance_2 = module_var_accessor_websockets$frames$struct(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_struct);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 249;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto try_except_handler_7;
}
tmp_args_element_value_4 = mod_consts.const_str_digest_423ab65cfd2fd6194b8a1938ade23cb9;
CHECK_OBJECT(generator_heap->var_data);
tmp_args_element_value_5 = generator_heap->var_data;
generator->m_frame->m_frame.f_lineno = 249;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_iter_arg_2 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_unpack,
        call_args
    );
}

if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 249;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto try_except_handler_7;
}
tmp_assign_source_15 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 249;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto try_except_handler_7;
}
assert(generator_heap->tmp_tuple_unpack_2__source_iter == NULL);
generator_heap->tmp_tuple_unpack_2__source_iter = tmp_assign_source_15;
}
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_unpack_3;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = generator_heap->tmp_tuple_unpack_2__source_iter;
tmp_assign_source_16 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_3, 0, 1);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 249;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto try_except_handler_8;
}
assert(generator_heap->tmp_tuple_unpack_2__element_1 == NULL);
generator_heap->tmp_tuple_unpack_2__element_1 = tmp_assign_source_16;
}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = generator_heap->tmp_tuple_unpack_2__source_iter;
generator_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &generator_heap->exception_state, tmp_iterator_name_2, 1);
if (generator_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 249;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto try_except_handler_8;
}
}
goto try_end_4;
// Exception handler code:
try_except_handler_8:;
generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_6 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_2__source_iter);
generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_6;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_6;

goto try_except_handler_7;
// End of try:
try_end_4:;
goto try_end_5;
// Exception handler code:
try_except_handler_7:;
generator_heap->exception_keeper_lineno_7 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_7 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_1);
generator_heap->tmp_tuple_unpack_2__element_1 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_7;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_2__source_iter);
generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_17;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__element_1);
tmp_assign_source_17 = generator_heap->tmp_tuple_unpack_2__element_1;
{
    PyObject *old = generator_heap->var_length;
    assert(old != NULL);
    generator_heap->var_length = tmp_assign_source_17;
    Py_INCREF(generator_heap->var_length);
    Py_DECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_1);
generator_heap->tmp_tuple_unpack_2__element_1 = NULL;

goto branch_end_3;
branch_no_3:;
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(generator_heap->var_length);
tmp_cmp_expr_left_4 = generator_heap->var_length;
tmp_cmp_expr_right_4 = mod_consts.const_int_pos_127;
tmp_condition_result_9 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 250;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_18;
PyObject *tmp_expression_value_3;
PyObject *tmp_called_value_6;
if (Nuitka_Cell_GET(generator->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_read_exact);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 251;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_6 = Nuitka_Cell_GET(generator->m_closure[4]);
generator->m_frame->m_frame.f_lineno = 251;
tmp_expression_value_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts.const_tuple_int_pos_8_tuple);

if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 251;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_6, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 3;
generator->m_yield_from = tmp_expression_value_3;
return NULL;

yield_return_3:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_6, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 251;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_18 = yield_return_value;
{
    PyObject *old = generator_heap->var_data;
    assert(old != NULL);
    generator_heap->var_data = tmp_assign_source_18;
    Py_DECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_iter_arg_3;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_instance_3 = module_var_accessor_websockets$frames$struct(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_struct);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 252;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto try_except_handler_9;
}
tmp_args_element_value_6 = mod_consts.const_str_digest_22eba019e51aabb161e25f6d83c991e6;
CHECK_OBJECT(generator_heap->var_data);
tmp_args_element_value_7 = generator_heap->var_data;
generator->m_frame->m_frame.f_lineno = 252;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_iter_arg_3 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain_unpack,
        call_args
    );
}

if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 252;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto try_except_handler_9;
}
tmp_assign_source_19 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 252;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto try_except_handler_9;
}
assert(generator_heap->tmp_tuple_unpack_3__source_iter == NULL);
generator_heap->tmp_tuple_unpack_3__source_iter = tmp_assign_source_19;
}
// Tried code:
{
PyObject *tmp_assign_source_20;
PyObject *tmp_unpack_4;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__source_iter);
tmp_unpack_4 = generator_heap->tmp_tuple_unpack_3__source_iter;
tmp_assign_source_20 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_4, 0, 1);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 252;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto try_except_handler_10;
}
assert(generator_heap->tmp_tuple_unpack_3__element_1 == NULL);
generator_heap->tmp_tuple_unpack_3__element_1 = tmp_assign_source_20;
}
{
PyObject *tmp_iterator_name_3;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__source_iter);
tmp_iterator_name_3 = generator_heap->tmp_tuple_unpack_3__source_iter;
generator_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &generator_heap->exception_state, tmp_iterator_name_3, 1);
if (generator_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 252;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto try_except_handler_10;
}
}
goto try_end_6;
// Exception handler code:
try_except_handler_10:;
generator_heap->exception_keeper_lineno_8 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_8 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_3__source_iter);
generator_heap->tmp_tuple_unpack_3__source_iter = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_8;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_8;

goto try_except_handler_9;
// End of try:
try_end_6:;
goto try_end_7;
// Exception handler code:
try_except_handler_9:;
generator_heap->exception_keeper_lineno_9 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_9 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_tuple_unpack_3__element_1);
generator_heap->tmp_tuple_unpack_3__element_1 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_9;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_3__source_iter);
generator_heap->tmp_tuple_unpack_3__source_iter = NULL;
{
PyObject *tmp_assign_source_21;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__element_1);
tmp_assign_source_21 = generator_heap->tmp_tuple_unpack_3__element_1;
{
    PyObject *old = generator_heap->var_length;
    assert(old != NULL);
    generator_heap->var_length = tmp_assign_source_21;
    Py_INCREF(generator_heap->var_length);
    Py_DECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_3__element_1);
generator_heap->tmp_tuple_unpack_3__element_1 = NULL;

branch_no_4:;
branch_end_3:;
{
nuitka_bool tmp_condition_result_10;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_max_size);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 253;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_5 = Nuitka_Cell_GET(generator->m_closure[3]);
tmp_cmp_expr_right_5 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(generator_heap->var_length);
tmp_cmp_expr_left_6 = generator_heap->var_length;
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_max_size);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 253;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_right_6 = Nuitka_Cell_GET(generator->m_closure[3]);
tmp_and_right_value_1 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 253;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_10 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_10 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_raise_type_input_3;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_called_value_7 = module_var_accessor_websockets$frames$PayloadTooBig(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_PayloadTooBig);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 254;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_length);
tmp_args_element_value_8 = generator_heap->var_length;
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_max_size);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 254;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_9 = Nuitka_Cell_GET(generator->m_closure[3]);
generator->m_frame->m_frame.f_lineno = 254;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_raise_type_input_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 254;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
CHECK_OBJECT(tmp_raise_type_input_3);
Py_DECREF(tmp_raise_type_input_3);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 254;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}
generator_heap->exception_state.exception_value = tmp_raise_type_3;
generator_heap->exception_lineno = 254;
RAISE_EXCEPTION_WITH_VALUE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "cccccooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_5:;
{
nuitka_bool tmp_condition_result_11;
int tmp_truth_name_1;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_mask);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 255;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(generator->m_closure[2]));
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 255;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_11 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_22;
PyObject *tmp_expression_value_4;
PyObject *tmp_called_value_8;
if (Nuitka_Cell_GET(generator->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_read_exact);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 256;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_8 = Nuitka_Cell_GET(generator->m_closure[4]);
generator->m_frame->m_frame.f_lineno = 256;
tmp_expression_value_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_8, mod_consts.const_tuple_int_pos_4_tuple);

if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 256;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_8, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 4;
generator->m_yield_from = tmp_expression_value_4;
return NULL;

yield_return_4:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_8, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 256;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_22 = yield_return_value;
assert(generator_heap->var_mask_bytes == NULL);
generator_heap->var_mask_bytes = tmp_assign_source_22;
}
branch_no_6:;
{
PyObject *tmp_assign_source_23;
PyObject *tmp_expression_value_5;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_10;
if (Nuitka_Cell_GET(generator->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_read_exact);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 259;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_9 = Nuitka_Cell_GET(generator->m_closure[4]);
CHECK_OBJECT(generator_heap->var_length);
tmp_args_element_value_10 = generator_heap->var_length;
generator->m_frame->m_frame.f_lineno = 259;
tmp_expression_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_10);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 259;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_9, sizeof(PyObject *), &tmp_args_element_value_10, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 5;
generator->m_yield_from = tmp_expression_value_5;
return NULL;

yield_return_5:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_9, sizeof(PyObject *), &tmp_args_element_value_10, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 259;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_23 = yield_return_value;
{
    PyObject *old = generator_heap->var_data;
    generator_heap->var_data = tmp_assign_source_23;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_12;
int tmp_truth_name_2;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_mask);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 260;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_2 = CHECK_IF_TRUE(Nuitka_Cell_GET(generator->m_closure[2]));
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 260;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_12 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_24;
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
tmp_called_value_10 = module_var_accessor_websockets$frames$apply_mask(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_apply_mask);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 261;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_data);
tmp_args_element_value_11 = generator_heap->var_data;
if (generator_heap->var_mask_bytes == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_mask_bytes);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 261;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_12 = generator_heap->var_mask_bytes;
generator->m_frame->m_frame.f_lineno = 261;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 261;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_data;
    assert(old != NULL);
    generator_heap->var_data = tmp_assign_source_24;
    Py_DECREF(old);
}

}
branch_no_7:;
{
PyObject *tmp_assign_source_25;
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_cls);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 263;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_11 = Nuitka_Cell_GET(generator->m_closure[0]);
CHECK_OBJECT(generator_heap->var_opcode);
tmp_args_element_value_13 = generator_heap->var_opcode;
CHECK_OBJECT(generator_heap->var_data);
tmp_args_element_value_14 = generator_heap->var_data;
CHECK_OBJECT(generator_heap->var_fin);
tmp_args_element_value_15 = generator_heap->var_fin;
CHECK_OBJECT(generator_heap->var_rsv1);
tmp_args_element_value_16 = generator_heap->var_rsv1;
CHECK_OBJECT(generator_heap->var_rsv2);
tmp_args_element_value_17 = generator_heap->var_rsv2;
CHECK_OBJECT(generator_heap->var_rsv3);
tmp_args_element_value_18 = generator_heap->var_rsv3;
generator->m_frame->m_frame.f_lineno = 263;
{
    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18};
    tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_11, call_args);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 263;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_frame == NULL);
generator_heap->var_frame = tmp_assign_source_25;
}
{
bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_extensions);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 265;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_7 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_cmp_expr_right_7 = Py_None;
tmp_condition_result_13 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_13 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = Nuitka_Cell_GET(generator->m_closure[1]);
    Nuitka_Cell_SET(generator->m_closure[1], tmp_assign_source_26);
    Py_XDECREF(old);
}

}
branch_no_8:;
{
PyObject *tmp_assign_source_27;
PyObject *tmp_iter_arg_4;
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_19;
tmp_called_value_12 = (PyObject *)&PyReversed_Type;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_extensions);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 267;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_19 = Nuitka_Cell_GET(generator->m_closure[1]);
generator->m_frame->m_frame.f_lineno = 267;
tmp_iter_arg_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_19);
if (tmp_iter_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 267;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_27 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
CHECK_OBJECT(tmp_iter_arg_4);
Py_DECREF(tmp_iter_arg_4);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 267;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_27;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_28;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
tmp_assign_source_28 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_28 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "cccccooooooooooooo";
generator_heap->exception_lineno = 267;
        goto try_except_handler_11;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
    generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_28;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_29;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
tmp_assign_source_29 = generator_heap->tmp_for_loop_1__iter_value;
{
    PyObject *old = generator_heap->var_extension;
    generator_heap->var_extension = tmp_assign_source_29;
    Py_INCREF(generator_heap->var_extension);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_6;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
CHECK_OBJECT(generator_heap->var_extension);
tmp_expression_value_6 = generator_heap->var_extension;
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_decode);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 268;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto try_except_handler_11;
}
if (generator_heap->var_frame == NULL) {
Py_DECREF(tmp_called_value_13);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_frame);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 268;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto try_except_handler_11;
}

tmp_kw_call_arg_value_0_1 = generator_heap->var_frame;
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_13);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_max_size);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 268;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto try_except_handler_11;
}

tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(generator->m_closure[3]);
generator->m_frame->m_frame.f_lineno = 268;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_13, args, kw_values, mod_consts.const_tuple_str_plain_max_size_tuple);
}

CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 268;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto try_except_handler_11;
}
{
    PyObject *old = generator_heap->var_frame;
    generator_heap->var_frame = tmp_assign_source_30;
    Py_XDECREF(old);
}

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 267;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto try_except_handler_11;
}
goto loop_start_1;
loop_end_1:;
goto try_end_8;
// Exception handler code:
try_except_handler_11:;
generator_heap->exception_keeper_lineno_10 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_10 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_10;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_1;
if (generator_heap->var_frame == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_frame);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 270;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_4 = generator_heap->var_frame;
generator->m_frame->m_frame.f_lineno = 270;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_check);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 270;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
if (generator_heap->var_frame == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_frame);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 272;
generator_heap->type_description_1 = "cccccooooooooooooo";
    goto frame_exception_exit_1;
}

generator_heap->tmp_return_value = generator_heap->var_frame;
Py_INCREF(generator_heap->tmp_return_value);
goto frame_return_exit_1;

// Release exception attached to the frame
DROP_GENERATOR_EXCEPTION(generator);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(generator));
#endif
Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

goto try_return_handler_1;

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
    generator->m_closure[4],
    generator->m_closure[2],
    generator->m_closure[3],
    generator->m_closure[1],
    generator_heap->var_data,
    generator_heap->var_head1,
    generator_heap->var_head2,
    generator_heap->var_fin,
    generator_heap->var_rsv1,
    generator_heap->var_rsv2,
    generator_heap->var_rsv3,
    generator_heap->var_opcode,
    generator_heap->var_exc,
    generator_heap->var_length,
    generator_heap->var_mask_bytes,
    generator_heap->var_frame,
    generator_heap->var_extension
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
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(generator_heap->var_data);
CHECK_OBJECT(generator_heap->var_data);
Py_DECREF(generator_heap->var_data);
generator_heap->var_data = NULL;
CHECK_OBJECT(generator_heap->var_head1);
CHECK_OBJECT(generator_heap->var_head1);
Py_DECREF(generator_heap->var_head1);
generator_heap->var_head1 = NULL;
CHECK_OBJECT(generator_heap->var_head2);
CHECK_OBJECT(generator_heap->var_head2);
Py_DECREF(generator_heap->var_head2);
generator_heap->var_head2 = NULL;
CHECK_OBJECT(generator_heap->var_fin);
CHECK_OBJECT(generator_heap->var_fin);
Py_DECREF(generator_heap->var_fin);
generator_heap->var_fin = NULL;
CHECK_OBJECT(generator_heap->var_rsv1);
CHECK_OBJECT(generator_heap->var_rsv1);
Py_DECREF(generator_heap->var_rsv1);
generator_heap->var_rsv1 = NULL;
CHECK_OBJECT(generator_heap->var_rsv2);
CHECK_OBJECT(generator_heap->var_rsv2);
Py_DECREF(generator_heap->var_rsv2);
generator_heap->var_rsv2 = NULL;
CHECK_OBJECT(generator_heap->var_rsv3);
CHECK_OBJECT(generator_heap->var_rsv3);
Py_DECREF(generator_heap->var_rsv3);
generator_heap->var_rsv3 = NULL;
CHECK_OBJECT(generator_heap->var_opcode);
CHECK_OBJECT(generator_heap->var_opcode);
Py_DECREF(generator_heap->var_opcode);
generator_heap->var_opcode = NULL;
CHECK_OBJECT(generator_heap->var_length);
CHECK_OBJECT(generator_heap->var_length);
Py_DECREF(generator_heap->var_length);
generator_heap->var_length = NULL;
Py_XDECREF(generator_heap->var_mask_bytes);
generator_heap->var_mask_bytes = NULL;
Py_XDECREF(generator_heap->var_frame);
generator_heap->var_frame = NULL;
Py_XDECREF(generator_heap->var_extension);
generator_heap->var_extension = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_11 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_11 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_data);
generator_heap->var_data = NULL;
Py_XDECREF(generator_heap->var_head1);
generator_heap->var_head1 = NULL;
Py_XDECREF(generator_heap->var_head2);
generator_heap->var_head2 = NULL;
Py_XDECREF(generator_heap->var_fin);
generator_heap->var_fin = NULL;
Py_XDECREF(generator_heap->var_rsv1);
generator_heap->var_rsv1 = NULL;
Py_XDECREF(generator_heap->var_rsv2);
generator_heap->var_rsv2 = NULL;
Py_XDECREF(generator_heap->var_rsv3);
generator_heap->var_rsv3 = NULL;
Py_XDECREF(generator_heap->var_opcode);
generator_heap->var_opcode = NULL;
Py_XDECREF(generator_heap->var_length);
generator_heap->var_length = NULL;
Py_XDECREF(generator_heap->var_mask_bytes);
generator_heap->var_mask_bytes = NULL;
Py_XDECREF(generator_heap->var_frame);
generator_heap->var_frame = NULL;
Py_XDECREF(generator_heap->var_extension);
generator_heap->var_extension = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_11;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_11;

goto function_exception_exit;
// End of try:


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;
    NUITKA_CANNOT_GET_HERE("Generator must have exited already.");
    return NULL;

    function_return_exit:
#if PYTHON_VERSION >= 0x300
    generator->m_returned = generator_heap->tmp_return_value;
#endif


    return NULL;

}

static PyObject *MAKE_GENERATOR_websockets$frames$$$function__2_parse$$$genobj__1_parse(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        websockets$frames$$$function__2_parse$$$genobj__1_parse_context,
        module_websockets$frames,
        mod_consts.const_str_plain_parse,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_c3be48984278e8e85464067862d030ef,
#endif
        code_objects_bcb7e51e07fa75be6aa364d01cbf245b,
        closure,
        5,
#if 1
        sizeof(struct websockets$frames$$$function__2_parse$$$genobj__1_parse_locals)
#else
        0
#endif
    );
}


static PyObject *impl_websockets$frames$$$function__3_serialize(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_mask = python_pars[1];
PyObject *par_extensions = python_pars[2];
PyObject *var_data = NULL;
PyObject *var_extension = NULL;
PyObject *var_output = NULL;
PyObject *var_head1 = NULL;
PyObject *var_head2 = NULL;
PyObject *var_length = NULL;
PyObject *var_mask_bytes = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$frames$$$function__3_serialize;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$frames$$$function__3_serialize = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_websockets$frames$$$function__3_serialize)) {
    Py_XDECREF(cache_frame_frame_websockets$frames$$$function__3_serialize);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$frames$$$function__3_serialize == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$frames$$$function__3_serialize = MAKE_FUNCTION_FRAME(tstate, code_objects_28a542cf0cc737562266dea823848349, module_websockets$frames, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$frames$$$function__3_serialize->m_type_description == NULL);
frame_frame_websockets$frames$$$function__3_serialize = cache_frame_frame_websockets$frames$$$function__3_serialize;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$frames$$$function__3_serialize);
assert(Py_REFCNT(frame_frame_websockets$frames$$$function__3_serialize) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_websockets$frames$$$function__3_serialize->m_frame.f_lineno = 292;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_check);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_extensions);
tmp_cmp_expr_left_1 = par_extensions;
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
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = par_extensions;
    assert(old != NULL);
    par_extensions = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_extensions);
tmp_iter_arg_1 = par_extensions;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_2;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooo";
exception_lineno = 296;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_4 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_extension;
    var_extension = tmp_assign_source_4;
    Py_INCREF(var_extension);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var_extension);
tmp_expression_value_1 = var_extension;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_encode);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
if (par_self == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 297;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_1 = par_self;
frame_frame_websockets$frames$$$function__3_serialize->m_frame.f_lineno = 297;
tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = par_self;
    par_self = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_2;
{
    PyObject *hard_module = IMPORT_HARD_IO();
    tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_BytesIO);
}
assert(!(tmp_called_value_2 == NULL));
frame_frame_websockets$frames$$$function__3_serialize->m_frame.f_lineno = 299;
tmp_assign_source_6 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_output == NULL);
var_output = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_bitor_expr_left_1;
PyObject *tmp_bitor_expr_right_1;
PyObject *tmp_bitor_expr_left_2;
PyObject *tmp_bitor_expr_right_2;
PyObject *tmp_bitor_expr_left_3;
PyObject *tmp_bitor_expr_right_3;
PyObject *tmp_bitor_expr_left_4;
PyObject *tmp_bitor_expr_right_4;
nuitka_bool tmp_condition_result_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
nuitka_bool tmp_condition_result_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_2;
nuitka_bool tmp_condition_result_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_attribute_value_3;
int tmp_truth_name_3;
nuitka_bool tmp_condition_result_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_attribute_value_4;
int tmp_truth_name_4;
PyObject *tmp_expression_value_6;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 303;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_fin);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 303;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_bitor_expr_left_4 = mod_consts.const_int_pos_128;
goto condexpr_end_1;
condexpr_false_1:;
tmp_bitor_expr_left_4 = const_int_0;
condexpr_end_1:;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 304;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = par_self;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_rsv1);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 304;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
tmp_bitor_expr_right_4 = mod_consts.const_int_pos_64;
goto condexpr_end_2;
condexpr_false_2:;
tmp_bitor_expr_right_4 = const_int_0;
condexpr_end_2:;
tmp_bitor_expr_left_3 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_bitor_expr_left_4, tmp_bitor_expr_right_4);
assert(!(tmp_bitor_expr_left_3 == NULL));
if (par_self == NULL) {
Py_DECREF(tmp_bitor_expr_left_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 305;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = par_self;
tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_rsv2);
if (tmp_attribute_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_bitor_expr_left_3);

exception_lineno = 305;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_3);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_bitor_expr_left_3);
Py_DECREF(tmp_attribute_value_3);

exception_lineno = 305;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_3);
Py_DECREF(tmp_attribute_value_3);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
tmp_bitor_expr_right_3 = mod_consts.const_int_pos_32;
goto condexpr_end_3;
condexpr_false_3:;
tmp_bitor_expr_right_3 = const_int_0;
condexpr_end_3:;
tmp_bitor_expr_left_2 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_bitor_expr_left_3, tmp_bitor_expr_right_3);
CHECK_OBJECT(tmp_bitor_expr_left_3);
Py_DECREF(tmp_bitor_expr_left_3);
assert(!(tmp_bitor_expr_left_2 == NULL));
if (par_self == NULL) {
Py_DECREF(tmp_bitor_expr_left_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 306;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_5 = par_self;
tmp_attribute_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_rsv3);
if (tmp_attribute_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_bitor_expr_left_2);

exception_lineno = 306;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_attribute_value_4);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_bitor_expr_left_2);
Py_DECREF(tmp_attribute_value_4);

exception_lineno = 306;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_4);
Py_DECREF(tmp_attribute_value_4);
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
tmp_bitor_expr_right_2 = mod_consts.const_int_pos_16;
goto condexpr_end_4;
condexpr_false_4:;
tmp_bitor_expr_right_2 = const_int_0;
condexpr_end_4:;
tmp_bitor_expr_left_1 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_bitor_expr_left_2, tmp_bitor_expr_right_2);
CHECK_OBJECT(tmp_bitor_expr_left_2);
Py_DECREF(tmp_bitor_expr_left_2);
assert(!(tmp_bitor_expr_left_1 == NULL));
if (par_self == NULL) {
Py_DECREF(tmp_bitor_expr_left_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 307;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_6 = par_self;
tmp_bitor_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_opcode);
if (tmp_bitor_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_bitor_expr_left_1);

exception_lineno = 307;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_7 = BINARY_OPERATION_BITOR_OBJECT_LONG_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
CHECK_OBJECT(tmp_bitor_expr_left_1);
Py_DECREF(tmp_bitor_expr_left_1);
CHECK_OBJECT(tmp_bitor_expr_right_1);
Py_DECREF(tmp_bitor_expr_right_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_head1 == NULL);
var_head1 = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
nuitka_bool tmp_condition_result_6;
int tmp_truth_name_5;
CHECK_OBJECT(par_mask);
tmp_truth_name_5 = CHECK_IF_TRUE(par_mask);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_5;
} else {
    goto condexpr_false_5;
}
condexpr_true_5:;
tmp_assign_source_8 = mod_consts.const_int_pos_128;
goto condexpr_end_5;
condexpr_false_5:;
tmp_assign_source_8 = const_int_0;
condexpr_end_5:;
assert(var_head2 == NULL);
Py_INCREF(tmp_assign_source_8);
var_head2 = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_len_arg_1;
PyObject *tmp_expression_value_7;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 312;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_7 = par_self;
tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_data);
if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_9 = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_length == NULL);
var_length = tmp_assign_source_9;
}
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_2;
nuitka_digit tmp_cmp_expr_right_2;
CHECK_OBJECT(var_length);
tmp_cmp_expr_left_2 = var_length;
tmp_cmp_expr_right_2 = 126;
tmp_condition_result_7 = RICH_COMPARE_LT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_7 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_bitor_expr_left_5;
PyObject *tmp_bitor_expr_right_5;
CHECK_OBJECT(var_output);
tmp_expression_value_8 = var_output;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_write);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_9 = module_var_accessor_websockets$frames$struct(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_struct);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 314;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_pack);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 314;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = mod_consts.const_str_digest_cbf97bd694cf3a87c92e197f762a0e8d;
CHECK_OBJECT(var_head1);
tmp_args_element_value_4 = var_head1;
CHECK_OBJECT(var_head2);
tmp_bitor_expr_left_5 = var_head2;
CHECK_OBJECT(var_length);
tmp_bitor_expr_right_5 = var_length;
tmp_args_element_value_5 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_bitor_expr_left_5, tmp_bitor_expr_right_5);
assert(!(tmp_args_element_value_5 == NULL));
frame_frame_websockets$frames$$$function__3_serialize->m_frame.f_lineno = 314;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 314;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$frames$$$function__3_serialize->m_frame.f_lineno = 314;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
goto branch_end_2;
branch_no_2:;
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_3;
nuitka_digit tmp_cmp_expr_right_3;
CHECK_OBJECT(var_length);
tmp_cmp_expr_left_3 = var_length;
tmp_cmp_expr_right_3 = 65536;
tmp_condition_result_8 = RICH_COMPARE_LT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_8 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_10;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_bitor_expr_left_6;
PyObject *tmp_bitor_expr_right_6;
PyObject *tmp_args_element_value_10;
CHECK_OBJECT(var_output);
tmp_expression_value_10 = var_output;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_write);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_11 = module_var_accessor_websockets$frames$struct(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_struct);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 316;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_pack);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 316;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_7 = mod_consts.const_str_digest_43c39bbd6c1d53eedb0309ae1303f4c7;
CHECK_OBJECT(var_head1);
tmp_args_element_value_8 = var_head1;
CHECK_OBJECT(var_head2);
tmp_bitor_expr_left_6 = var_head2;
tmp_bitor_expr_right_6 = mod_consts.const_int_pos_126;
tmp_args_element_value_9 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_6, tmp_bitor_expr_right_6);
assert(!(tmp_args_element_value_9 == NULL));
CHECK_OBJECT(var_length);
tmp_args_element_value_10 = var_length;
frame_frame_websockets$frames$$$function__3_serialize->m_frame.f_lineno = 316;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_args_element_value_6 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 316;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$frames$$$function__3_serialize->m_frame.f_lineno = 316;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_12;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_11;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_bitor_expr_left_7;
PyObject *tmp_bitor_expr_right_7;
PyObject *tmp_args_element_value_15;
CHECK_OBJECT(var_output);
tmp_expression_value_12 = var_output;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_write);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_13 = module_var_accessor_websockets$frames$struct(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_struct);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_7);

exception_lineno = 318;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_pack);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 318;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_12 = mod_consts.const_str_digest_c8434a8dfa2b76d56b61fa1631919450;
CHECK_OBJECT(var_head1);
tmp_args_element_value_13 = var_head1;
CHECK_OBJECT(var_head2);
tmp_bitor_expr_left_7 = var_head2;
tmp_bitor_expr_right_7 = mod_consts.const_int_pos_127;
tmp_args_element_value_14 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_7, tmp_bitor_expr_right_7);
assert(!(tmp_args_element_value_14 == NULL));
CHECK_OBJECT(var_length);
tmp_args_element_value_15 = var_length;
frame_frame_websockets$frames$$$function__3_serialize->m_frame.f_lineno = 318;
{
    PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15};
    tmp_args_element_value_11 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 318;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$frames$$$function__3_serialize->m_frame.f_lineno = 318;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_end_3:;
branch_end_2:;
{
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_6;
CHECK_OBJECT(par_mask);
tmp_truth_name_6 = CHECK_IF_TRUE(par_mask);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = module_var_accessor_websockets$frames$secrets(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_secrets);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 321;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$frames$$$function__3_serialize->m_frame.f_lineno = 321;
tmp_assign_source_10 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_token_bytes,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_4_tuple, 0)
);

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_mask_bytes == NULL);
var_mask_bytes = tmp_assign_source_10;
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_16;
CHECK_OBJECT(var_output);
tmp_called_instance_3 = var_output;
CHECK_OBJECT(var_mask_bytes);
tmp_args_element_value_16 = var_mask_bytes;
frame_frame_websockets$frames$$$function__3_serialize->m_frame.f_lineno = 322;
tmp_call_result_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_write, tmp_args_element_value_16);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
branch_no_4:;
{
nuitka_bool tmp_condition_result_10;
int tmp_truth_name_7;
CHECK_OBJECT(par_mask);
tmp_truth_name_7 = CHECK_IF_TRUE(par_mask);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_10 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_17;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_element_value_18;
tmp_called_value_9 = module_var_accessor_websockets$frames$apply_mask(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_apply_mask);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 327;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 327;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_14 = par_self;
tmp_args_element_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_data);
if (tmp_args_element_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (var_mask_bytes == NULL) {
Py_DECREF(tmp_args_element_value_17);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mask_bytes);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 327;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_18 = var_mask_bytes;
frame_frame_websockets$frames$$$function__3_serialize->m_frame.f_lineno = 327;
{
    PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
}

CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_data == NULL);
var_data = tmp_assign_source_11;
}
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_expression_value_15;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 329;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_15 = par_self;
tmp_assign_source_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_data);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_data == NULL);
var_data = tmp_assign_source_12;
}
branch_end_5:;
{
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_19;
CHECK_OBJECT(var_output);
tmp_called_instance_4 = var_output;
CHECK_OBJECT(var_data);
tmp_args_element_value_19 = var_data;
frame_frame_websockets$frames$$$function__3_serialize->m_frame.f_lineno = 330;
tmp_call_result_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_write, tmp_args_element_value_19);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
{
PyObject *tmp_called_instance_5;
CHECK_OBJECT(var_output);
tmp_called_instance_5 = var_output;
frame_frame_websockets$frames$$$function__3_serialize->m_frame.f_lineno = 332;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts.const_str_plain_getvalue);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "oooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$frames$$$function__3_serialize, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$frames$$$function__3_serialize->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$frames$$$function__3_serialize, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$frames$$$function__3_serialize,
    type_description_1,
    par_self,
    par_mask,
    par_extensions,
    var_data,
    var_extension,
    var_output,
    var_head1,
    var_head2,
    var_length,
    var_mask_bytes
);


// Release cached frame if used for exception.
if (frame_frame_websockets$frames$$$function__3_serialize == cache_frame_frame_websockets$frames$$$function__3_serialize) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$frames$$$function__3_serialize);
    cache_frame_frame_websockets$frames$$$function__3_serialize = NULL;
}

assertFrameObject(frame_frame_websockets$frames$$$function__3_serialize);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_self);
par_self = NULL;
CHECK_OBJECT(par_extensions);
CHECK_OBJECT(par_extensions);
Py_DECREF(par_extensions);
par_extensions = NULL;
CHECK_OBJECT(var_data);
CHECK_OBJECT(var_data);
Py_DECREF(var_data);
var_data = NULL;
Py_XDECREF(var_extension);
var_extension = NULL;
CHECK_OBJECT(var_output);
CHECK_OBJECT(var_output);
Py_DECREF(var_output);
var_output = NULL;
CHECK_OBJECT(var_head1);
CHECK_OBJECT(var_head1);
Py_DECREF(var_head1);
var_head1 = NULL;
CHECK_OBJECT(var_head2);
CHECK_OBJECT(var_head2);
Py_DECREF(var_head2);
var_head2 = NULL;
CHECK_OBJECT(var_length);
CHECK_OBJECT(var_length);
Py_DECREF(var_length);
var_length = NULL;
Py_XDECREF(var_mask_bytes);
var_mask_bytes = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_self);
par_self = NULL;
Py_XDECREF(par_extensions);
par_extensions = NULL;
Py_XDECREF(var_data);
var_data = NULL;
Py_XDECREF(var_extension);
var_extension = NULL;
Py_XDECREF(var_output);
var_output = NULL;
Py_XDECREF(var_head1);
var_head1 = NULL;
Py_XDECREF(var_head2);
var_head2 = NULL;
Py_XDECREF(var_length);
var_length = NULL;
Py_XDECREF(var_mask_bytes);
var_mask_bytes = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_mask);
Py_DECREF(par_mask);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_mask);
Py_DECREF(par_mask);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_websockets$frames$$$function__4_check(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_websockets$frames$$$function__4_check;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$frames$$$function__4_check = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$frames$$$function__4_check)) {
    Py_XDECREF(cache_frame_frame_websockets$frames$$$function__4_check);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$frames$$$function__4_check == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$frames$$$function__4_check = MAKE_FUNCTION_FRAME(tstate, code_objects_c5437f9610fbe46c3a72f4778c6ceb83, module_websockets$frames, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$frames$$$function__4_check->m_type_description == NULL);
frame_frame_websockets$frames$$$function__4_check = cache_frame_frame_websockets$frames$$$function__4_check;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$frames$$$function__4_check);
assert(Py_REFCNT(frame_frame_websockets$frames$$$function__4_check) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_attribute_value_3;
int tmp_truth_name_3;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_rsv1);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 342;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_rsv2);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 342;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_or_left_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_rsv3);
if (tmp_attribute_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_3);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_3);

exception_lineno = 342;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_or_right_value_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_3);
Py_DECREF(tmp_attribute_value_3);
tmp_or_right_value_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_or_right_value_1 = tmp_or_left_value_2;
or_end_2:;
tmp_condition_result_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_1 = tmp_or_left_value_1;
or_end_1:;
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
tmp_called_value_1 = module_var_accessor_websockets$frames$ProtocolError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ProtocolError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 343;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_websockets$frames$$$function__4_check->m_frame.f_lineno = 343;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_065097b935ef942c7961f7f84bb301e5_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 343;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_opcode);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = module_var_accessor_websockets$frames$CTRL_OPCODES(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CTRL_OPCODES);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 345;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
nuitka_digit tmp_cmp_expr_right_2;
PyObject *tmp_len_arg_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_data);
if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = 125;
tmp_condition_result_3 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_websockets$frames$ProtocolError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ProtocolError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 347;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_websockets$frames$$$function__4_check->m_frame.f_lineno = 347;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_32b001fd755c5cfaa178beca82f32ce3_tuple);

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 347;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_fin);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_raise_type_input_3;
PyObject *tmp_called_value_3;
tmp_called_value_3 = module_var_accessor_websockets$frames$ProtocolError(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ProtocolError);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 349;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_websockets$frames$$$function__4_check->m_frame.f_lineno = 349;
tmp_raise_type_input_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_digest_da750b4119c83825d88f0c0956a97550_tuple);

if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
CHECK_OBJECT(tmp_raise_type_input_3);
Py_DECREF(tmp_raise_type_input_3);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 349;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}
branch_no_4:;
branch_no_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$frames$$$function__4_check, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$frames$$$function__4_check->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$frames$$$function__4_check, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$frames$$$function__4_check,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_websockets$frames$$$function__4_check == cache_frame_frame_websockets$frames$$$function__4_check) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$frames$$$function__4_check);
    cache_frame_frame_websockets$frames$$$function__4_check = NULL;
}

assertFrameObject(frame_frame_websockets$frames$$$function__4_check);

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


static PyObject *impl_websockets$frames$$$function__5___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_explanation = NULL;
PyObject *var_result = NULL;
PyObject *tmp_comparison_chain_1__comparison_result = NULL;
PyObject *tmp_comparison_chain_1__operand_2 = NULL;
PyObject *tmp_comparison_chain_2__comparison_result = NULL;
PyObject *tmp_comparison_chain_2__operand_2 = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$frames$$$function__5___str__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$frames$$$function__5___str__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_websockets$frames$$$function__5___str__)) {
    Py_XDECREF(cache_frame_frame_websockets$frames$$$function__5___str__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$frames$$$function__5___str__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$frames$$$function__5___str__ = MAKE_FUNCTION_FRAME(tstate, code_objects_290c09decaf892f41e127bf46fcdede9, module_websockets$frames, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$frames$$$function__5___str__->m_type_description == NULL);
frame_frame_websockets$frames$$$function__5___str__ = cache_frame_frame_websockets$frames$$$function__5___str__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$frames$$$function__5___str__);
assert(Py_REFCNT(frame_frame_websockets$frames$$$function__5___str__) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_outline_return_value_1;
int tmp_truth_name_1;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_code);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
assert(tmp_comparison_chain_1__operand_2 == NULL);
tmp_comparison_chain_1__operand_2 = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = mod_consts.const_int_pos_3000;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_right_1 = tmp_comparison_chain_1__operand_2;
tmp_assign_source_2 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
assert(tmp_comparison_chain_1__comparison_result == NULL);
tmp_comparison_chain_1__comparison_result = tmp_assign_source_2;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_1 = tmp_comparison_chain_1__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
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
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_outline_return_value_1 = tmp_comparison_chain_1__comparison_result;
Py_INCREF(tmp_outline_return_value_1);
goto try_return_handler_2;
branch_no_2:;
{
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_left_2 = tmp_comparison_chain_1__operand_2;
tmp_cmp_expr_right_2 = mod_consts.const_int_pos_4000;
tmp_outline_return_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_outline_return_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
type_description_1 = "ooo";
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

exception_lineno = 371;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_1);
Py_DECREF(tmp_outline_return_value_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = mod_consts.const_str_plain_registered;
assert(var_explanation == NULL);
Py_INCREF(tmp_assign_source_3);
var_explanation = tmp_assign_source_3;
}
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_outline_return_value_2;
int tmp_truth_name_2;
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_code);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 373;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
assert(tmp_comparison_chain_2__operand_2 == NULL);
tmp_comparison_chain_2__operand_2 = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = mod_consts.const_int_pos_4000;
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
tmp_cmp_expr_right_3 = tmp_comparison_chain_2__operand_2;
tmp_assign_source_5 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 373;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
assert(tmp_comparison_chain_2__comparison_result == NULL);
tmp_comparison_chain_2__comparison_result = tmp_assign_source_5;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
tmp_operand_value_2 = tmp_comparison_chain_2__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 373;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
tmp_outline_return_value_2 = tmp_comparison_chain_2__comparison_result;
Py_INCREF(tmp_outline_return_value_2);
goto try_return_handler_3;
branch_no_4:;
{
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
tmp_cmp_expr_left_4 = tmp_comparison_chain_2__operand_2;
tmp_cmp_expr_right_4 = mod_consts.const_int_pos_5000;
tmp_outline_return_value_2 = RICH_COMPARE_LT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_outline_return_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 373;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
goto try_return_handler_3;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
Py_DECREF(tmp_comparison_chain_2__operand_2);
tmp_comparison_chain_2__operand_2 = NULL;
CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
Py_DECREF(tmp_comparison_chain_2__comparison_result);
tmp_comparison_chain_2__comparison_result = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_comparison_chain_2__operand_2);
tmp_comparison_chain_2__operand_2 = NULL;
Py_XDECREF(tmp_comparison_chain_2__comparison_result);
tmp_comparison_chain_2__comparison_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_2:;
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_outline_return_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_outline_return_value_2);

exception_lineno = 373;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_2);
Py_DECREF(tmp_outline_return_value_2);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = mod_consts.const_str_digest_a18cedd7be63b90ba7713ae0c6ec9806;
assert(var_explanation == NULL);
Py_INCREF(tmp_assign_source_6);
var_explanation = tmp_assign_source_6;
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
tmp_expression_value_3 = module_var_accessor_websockets$frames$CLOSE_CODE_EXPLANATIONS(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CLOSE_CODE_EXPLANATIONS);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 376;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 376;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_code);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 376;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = mod_consts.const_str_plain_unknown;
frame_frame_websockets$frames$$$function__5___str__->m_frame.f_lineno = 376;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 376;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_explanation == NULL);
var_explanation = tmp_assign_source_7;
}
branch_end_3:;
branch_end_1:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_format_spec_1;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_code);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_b0a73c883a655937e1ff2aa8bb687e6a;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(var_explanation);
tmp_format_value_2 = var_explanation;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_41;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_8 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_8 == NULL));
assert(var_result == NULL);
var_result = tmp_assign_source_8;
}
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_3;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_reason);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 379;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
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
PyObject *tmp_assign_source_9;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(var_result);
tmp_tuple_element_2 = var_result;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_space;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_reason);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;
type_description_1 = "ooo";
    goto tuple_build_exception_2;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;
type_description_1 = "ooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_assign_source_9 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_assign_source_9 == NULL));
{
    PyObject *old = var_result;
    assert(old != NULL);
    var_result = tmp_assign_source_9;
    Py_DECREF(old);
}

}
branch_no_5:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$frames$$$function__5___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$frames$$$function__5___str__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$frames$$$function__5___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$frames$$$function__5___str__,
    type_description_1,
    par_self,
    var_explanation,
    var_result
);


// Release cached frame if used for exception.
if (frame_frame_websockets$frames$$$function__5___str__ == cache_frame_frame_websockets$frames$$$function__5___str__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$frames$$$function__5___str__);
    cache_frame_frame_websockets$frames$$$function__5___str__ = NULL;
}

assertFrameObject(frame_frame_websockets$frames$$$function__5___str__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_result);
tmp_return_value = var_result;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_explanation);
CHECK_OBJECT(var_explanation);
Py_DECREF(var_explanation);
var_explanation = NULL;
CHECK_OBJECT(var_result);
CHECK_OBJECT(var_result);
Py_DECREF(var_result);
var_result = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_explanation);
var_explanation = NULL;
Py_XDECREF(var_result);
var_result = NULL;
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


static PyObject *impl_websockets$frames$$$function__6_parse(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_data = python_pars[1];
PyObject *var_code = NULL;
PyObject *var_reason = NULL;
PyObject *var_close = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$frames$$$function__6_parse;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$frames$$$function__6_parse = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_websockets$frames$$$function__6_parse)) {
    Py_XDECREF(cache_frame_frame_websockets$frames$$$function__6_parse);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$frames$$$function__6_parse == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$frames$$$function__6_parse = MAKE_FUNCTION_FRAME(tstate, code_objects_da8b741ed695f875fe41be23adcc653a, module_websockets$frames, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$frames$$$function__6_parse->m_type_description == NULL);
frame_frame_websockets$frames$$$function__6_parse = cache_frame_frame_websockets$frames$$$function__6_parse;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$frames$$$function__6_parse);
assert(Py_REFCNT(frame_frame_websockets$frames$$$function__6_parse) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_data);
tmp_isinstance_inst_1 = par_data;
tmp_isinstance_cls_1 = (PyObject *)&PyMemoryView_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 397;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_c843b16d6afc3ff1cbb8d2dc6fe3acdd;
frame_frame_websockets$frames$$$function__6_parse->m_frame.f_lineno = 398;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_AssertionError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 398;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_data);
tmp_len_arg_1 = par_data;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 399;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = 2;
tmp_condition_result_2 = RICH_COMPARE_GE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
tmp_expression_value_1 = module_var_accessor_websockets$frames$struct(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_struct);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 400;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_unpack);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_423ab65cfd2fd6194b8a1938ade23cb9;
CHECK_OBJECT(par_data);
tmp_expression_value_2 = par_data;
tmp_subscript_value_1 = mod_consts.const_slice_none_int_pos_2_none;
tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 400;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
frame_frame_websockets$frames$$$function__6_parse->m_frame.f_lineno = 400;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 400;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 1);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 400;
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
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;
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
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_3 = tmp_tuple_unpack_1__element_1;
assert(var_code == NULL);
Py_INCREF(tmp_assign_source_3);
var_code = tmp_assign_source_3;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_data);
tmp_expression_value_4 = par_data;
tmp_subscript_value_2 = mod_consts.const_slice_int_pos_2_none_none;
tmp_expression_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 401;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 401;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$frames$$$function__6_parse->m_frame.f_lineno = 401;
tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 401;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_reason == NULL);
var_reason = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(par_cls);
tmp_called_value_3 = par_cls;
CHECK_OBJECT(var_code);
tmp_args_element_value_3 = var_code;
CHECK_OBJECT(var_reason);
tmp_args_element_value_4 = var_reason;
frame_frame_websockets$frames$$$function__6_parse->m_frame.f_lineno = 402;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 402;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_close == NULL);
var_close = tmp_assign_source_5;
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(var_close);
tmp_called_instance_1 = var_close;
frame_frame_websockets$frames$$$function__6_parse->m_frame.f_lineno = 403;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_check);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 403;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
CHECK_OBJECT(var_close);
tmp_return_value = var_close;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_2;
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
nuitka_digit tmp_cmp_expr_right_2;
PyObject *tmp_len_arg_2;
CHECK_OBJECT(par_data);
tmp_len_arg_2 = par_data;
tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 405;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = 0;
tmp_condition_result_3 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_6;
CHECK_OBJECT(par_cls);
tmp_called_value_4 = par_cls;
tmp_expression_value_5 = module_var_accessor_websockets$frames$CloseCode(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CloseCode);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 406;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_NO_STATUS_RCVD);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = const_str_empty;
frame_frame_websockets$frames$$$function__6_parse->m_frame.f_lineno = 406;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_5;
tmp_called_value_5 = module_var_accessor_websockets$frames$ProtocolError(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ProtocolError);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 408;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$frames$$$function__6_parse->m_frame.f_lineno = 408;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_digest_1416866767ae42f2803ad626f8e64690_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 408;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 408;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 408;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto frame_exception_exit_1;
}
branch_end_3:;
branch_end_2:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$frames$$$function__6_parse, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$frames$$$function__6_parse->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$frames$$$function__6_parse, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$frames$$$function__6_parse,
    type_description_1,
    par_cls,
    par_data,
    var_code,
    var_reason,
    var_close
);


// Release cached frame if used for exception.
if (frame_frame_websockets$frames$$$function__6_parse == cache_frame_frame_websockets$frames$$$function__6_parse) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$frames$$$function__6_parse);
    cache_frame_frame_websockets$frames$$$function__6_parse = NULL;
}

assertFrameObject(frame_frame_websockets$frames$$$function__6_parse);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_code);
var_code = NULL;
Py_XDECREF(var_reason);
var_reason = NULL;
Py_XDECREF(var_close);
var_close = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_code);
var_code = NULL;
Py_XDECREF(var_reason);
var_reason = NULL;
Py_XDECREF(var_close);
var_close = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_websockets$frames$$$function__7_serialize(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_websockets$frames$$$function__7_serialize;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$frames$$$function__7_serialize = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$frames$$$function__7_serialize)) {
    Py_XDECREF(cache_frame_frame_websockets$frames$$$function__7_serialize);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$frames$$$function__7_serialize == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$frames$$$function__7_serialize = MAKE_FUNCTION_FRAME(tstate, code_objects_8f7c12e0ad3e3c8c4260fa6b891146ba, module_websockets$frames, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$frames$$$function__7_serialize->m_type_description == NULL);
frame_frame_websockets$frames$$$function__7_serialize = cache_frame_frame_websockets$frames$$$function__7_serialize;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$frames$$$function__7_serialize);
assert(Py_REFCNT(frame_frame_websockets$frames$$$function__7_serialize) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_websockets$frames$$$function__7_serialize->m_frame.f_lineno = 415;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_check);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 415;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
tmp_expression_value_1 = module_var_accessor_websockets$frames$struct(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_struct);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 416;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_pack);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_423ab65cfd2fd6194b8a1938ade23cb9;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_code);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 416;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_websockets$frames$$$function__7_serialize->m_frame.f_lineno = 416;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_add_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_reason);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 416;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_encode);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 416;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_websockets$frames$$$function__7_serialize->m_frame.f_lineno = 416;
tmp_add_expr_right_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 416;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$frames$$$function__7_serialize, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$frames$$$function__7_serialize->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$frames$$$function__7_serialize, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$frames$$$function__7_serialize,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_websockets$frames$$$function__7_serialize == cache_frame_frame_websockets$frames$$$function__7_serialize) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$frames$$$function__7_serialize);
    cache_frame_frame_websockets$frames$$$function__7_serialize = NULL;
}

assertFrameObject(frame_frame_websockets$frames$$$function__7_serialize);

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


static PyObject *impl_websockets$frames$$$function__8_check(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *tmp_comparison_chain_1__comparison_result = NULL;
PyObject *tmp_comparison_chain_1__operand_2 = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$frames$$$function__8_check;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$frames$$$function__8_check = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$frames$$$function__8_check)) {
    Py_XDECREF(cache_frame_frame_websockets$frames$$$function__8_check);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$frames$$$function__8_check == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$frames$$$function__8_check = MAKE_FUNCTION_FRAME(tstate, code_objects_41c0dad6d77954cf0179fcd944f8167a, module_websockets$frames, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$frames$$$function__8_check->m_type_description == NULL);
frame_frame_websockets$frames$$$function__8_check = cache_frame_frame_websockets$frames$$$function__8_check;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$frames$$$function__8_check);
assert(Py_REFCNT(frame_frame_websockets$frames$$$function__8_check) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_code);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = module_var_accessor_websockets$frames$EXTERNAL_CLOSE_CODES(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EXTERNAL_CLOSE_CODES);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 426;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = (tmp_res == 1) ? Py_True : Py_False;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_code);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;
type_description_1 = "o";
    goto try_except_handler_1;
}
assert(tmp_comparison_chain_1__operand_2 == NULL);
tmp_comparison_chain_1__operand_2 = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = mod_consts.const_int_pos_3000;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_right_2 = tmp_comparison_chain_1__operand_2;
tmp_assign_source_2 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;
type_description_1 = "o";
    goto try_except_handler_1;
}
assert(tmp_comparison_chain_1__comparison_result == NULL);
tmp_comparison_chain_1__comparison_result = tmp_assign_source_2;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_2 = tmp_comparison_chain_1__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;
type_description_1 = "o";
    goto try_except_handler_1;
}
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_or_right_value_1 = tmp_comparison_chain_1__comparison_result;
Py_INCREF(tmp_or_right_value_1);
goto try_return_handler_1;
branch_no_2:;
{
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_left_3 = tmp_comparison_chain_1__operand_2;
tmp_cmp_expr_right_3 = mod_consts.const_int_pos_5000;
tmp_or_right_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;
type_description_1 = "o";
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
tmp_operand_value_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_operand_value_1 = tmp_or_left_value_1;
or_end_1:;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;
type_description_1 = "o";
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
tmp_called_value_1 = module_var_accessor_websockets$frames$ProtocolError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ProtocolError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 427;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_websockets$frames$$$function__8_check->m_frame.f_lineno = 427;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_8dcbe018c30a41b8efae5dc2013cbddf_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 427;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 427;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 427;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$frames$$$function__8_check, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$frames$$$function__8_check->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$frames$$$function__8_check, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$frames$$$function__8_check,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_websockets$frames$$$function__8_check == cache_frame_frame_websockets$frames$$$function__8_check) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$frames$$$function__8_check);
    cache_frame_frame_websockets$frames$$$function__8_check = NULL;
}

assertFrameObject(frame_frame_websockets$frames$$$function__8_check);

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



static PyObject *MAKE_FUNCTION_websockets$frames$$$function__1___str__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$frames$$$function__1___str__,
        mod_consts.const_str_plain___str__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_dd11a11d1f16a60f190be1dc925be925,
#endif
        code_objects_83c1ac794b18dbdf9057796e42e0dfb0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$frames,
        mod_consts.const_str_digest_5c0d46f373f009ab60845143e419ab79,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$frames$$$function__2_parse(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$frames$$$function__2_parse,
        mod_consts.const_str_plain_parse,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c3be48984278e8e85464067862d030ef,
#endif
        code_objects_bcb7e51e07fa75be6aa364d01cbf245b,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_websockets$frames,
        mod_consts.const_str_digest_3826837d849501cfbe1fb2603ba682ba,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$frames$$$function__3_serialize(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$frames$$$function__3_serialize,
        mod_consts.const_str_plain_serialize,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2e2485d937ed9d13b3d9f6830acb647e,
#endif
        code_objects_28a542cf0cc737562266dea823848349,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_websockets$frames,
        mod_consts.const_str_digest_ddd66991bc7f0c4dc75f93e551eb267d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$frames$$$function__4_check(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$frames$$$function__4_check,
        mod_consts.const_str_plain_check,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9736ba04a7cd65d686c7349dda1c15ba,
#endif
        code_objects_c5437f9610fbe46c3a72f4778c6ceb83,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$frames,
        mod_consts.const_str_digest_4de591a64cbbf2f91970eabae01aabff,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$frames$$$function__5___str__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$frames$$$function__5___str__,
        mod_consts.const_str_plain___str__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_32a4d177d629a9a4476a997cb509f55b,
#endif
        code_objects_290c09decaf892f41e127bf46fcdede9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$frames,
        mod_consts.const_str_digest_4b6728facce4a8bc2de8aa3ea5088d06,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$frames$$$function__6_parse(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$frames$$$function__6_parse,
        mod_consts.const_str_plain_parse,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b71598ad2e9a445575b789460cf787a9,
#endif
        code_objects_da8b741ed695f875fe41be23adcc653a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$frames,
        mod_consts.const_str_digest_c49e9ed491aa71cf9582d3de91ac5ad1,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$frames$$$function__7_serialize(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$frames$$$function__7_serialize,
        mod_consts.const_str_plain_serialize,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4de4a808bb21d20de50e36ed8f743120,
#endif
        code_objects_8f7c12e0ad3e3c8c4260fa6b891146ba,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$frames,
        mod_consts.const_str_digest_336abc59b7fc6206b582fb7af713862c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$frames$$$function__8_check(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$frames$$$function__8_check,
        mod_consts.const_str_plain_check,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_675d4c3e65e242af9182d74a86690ee7,
#endif
        code_objects_41c0dad6d77954cf0179fcd944f8167a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$frames,
        mod_consts.const_str_digest_fa64e85632b48e47e20f74d4f2039879,
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

static function_impl_code const function_table_websockets$frames[] = {
impl_websockets$frames$$$function__1___str__,
impl_websockets$frames$$$function__2_parse,
impl_websockets$frames$$$function__3_serialize,
impl_websockets$frames$$$function__4_check,
impl_websockets$frames$$$function__5___str__,
impl_websockets$frames$$$function__6_parse,
impl_websockets$frames$$$function__7_serialize,
impl_websockets$frames$$$function__8_check,
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

    return Nuitka_Function_GetFunctionState(function, function_table_websockets$frames);
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
        module_websockets$frames,
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
        function_table_websockets$frames,
        sizeof(function_table_websockets$frames) / sizeof(function_impl_code)
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
static char const *module_full_name = "websockets.frames";
#endif

// Internal entry point for module code.
PyObject *module_code_websockets$frames(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("websockets$frames");

    // Store the module for future use.
    module_websockets$frames = module;

    moduledict_websockets$frames = MODULE_DICT(module_websockets$frames);

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
        PRINT_STRING("websockets$frames: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("websockets$frames: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("websockets$frames: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "websockets.frames" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initwebsockets$frames\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_websockets$frames,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_websockets$frames,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_websockets$frames,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_websockets$frames,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_websockets$frames,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_websockets$frames);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_websockets$frames, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_websockets$frames, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_websockets$frames, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_websockets$frames);
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

        UPDATE_STRING_DICT1(moduledict_websockets$frames, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *outline_3_var___class__ = NULL;
PyObject *tmp_Opcode$tuple_unpack_1__element_1 = NULL;
PyObject *tmp_Opcode$tuple_unpack_1__element_2 = NULL;
PyObject *tmp_Opcode$tuple_unpack_1__element_3 = NULL;
PyObject *tmp_Opcode$tuple_unpack_1__source_iter = NULL;
PyObject *tmp_Opcode$tuple_unpack_2__element_1 = NULL;
PyObject *tmp_Opcode$tuple_unpack_2__element_2 = NULL;
PyObject *tmp_Opcode$tuple_unpack_2__element_3 = NULL;
PyObject *tmp_Opcode$tuple_unpack_2__source_iter = NULL;
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
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$frames;
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
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_websockets$frames$$$class__1_Opcode_38 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_websockets$frames$$$class__1_Opcode_2;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
PyObject *locals_websockets$frames$$$class__2_CloseCode_56 = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$frames$$$class__2_CloseCode_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
PyObject *locals_websockets$frames$$$class__3_Frame_123 = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$frames$$$class__3_Frame_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
PyObject *locals_websockets$frames$$$class__4_Close_353 = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$frames$$$class__4_Close_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_websockets$frames, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_websockets$frames, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_websockets$frames = MAKE_MODULE_FRAME(code_objects_f2919c047c34a358cde9bec2b6d6fa98, module_websockets$frames);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$frames);
assert(Py_REFCNT(frame_frame_websockets$frames) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_websockets$frames$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_websockets$frames$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_websockets$frames, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_websockets$frames, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_dataclasses;
tmp_globals_arg_value_1 = (PyObject *)moduledict_websockets$frames;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_websockets$frames->m_frame.f_lineno = 3;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclasses, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_enum;
tmp_globals_arg_value_2 = (PyObject *)moduledict_websockets$frames;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_websockets$frames->m_frame.f_lineno = 4;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_enum, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = IMPORT_HARD_IO();
assert(!(tmp_assign_source_8 == NULL));
UPDATE_STRING_DICT0(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_io, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_9 == NULL));
UPDATE_STRING_DICT0(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_secrets;
tmp_globals_arg_value_3 = (PyObject *)moduledict_websockets$frames;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_websockets$frames->m_frame.f_lineno = 7;
tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_secrets, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_struct;
tmp_globals_arg_value_4 = (PyObject *)moduledict_websockets$frames;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = Py_None;
tmp_level_value_4 = const_int_0;
frame_frame_websockets$frames->m_frame.f_lineno = 8;
tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_struct, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
tmp_globals_arg_value_5 = (PyObject *)moduledict_websockets$frames;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_Generator_str_plain_Sequence_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_websockets$frames->m_frame.f_lineno = 9;
tmp_assign_source_12 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_12;
}
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_websockets$frames,
        mod_consts.const_str_plain_Generator,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Generator);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_Generator, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_websockets$frames,
        mod_consts.const_str_plain_Sequence,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Sequence);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_Sequence, tmp_assign_source_14);
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
PyObject *tmp_import_name_from_3;
tmp_import_name_from_3 = IMPORT_HARD_TYPING();
assert(!(tmp_import_name_from_3 == NULL));
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_websockets$frames,
        mod_consts.const_str_plain_Callable,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Callable);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_exceptions;
tmp_globals_arg_value_6 = (PyObject *)moduledict_websockets$frames;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_PayloadTooBig_str_plain_ProtocolError_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_websockets$frames->m_frame.f_lineno = 12;
tmp_assign_source_16 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_16;
}
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_4 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_websockets$frames,
        mod_consts.const_str_plain_PayloadTooBig,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_PayloadTooBig);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_PayloadTooBig, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_websockets$frames,
        mod_consts.const_str_plain_ProtocolError,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_ProtocolError);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_ProtocolError, tmp_assign_source_18);
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
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain_typing;
tmp_globals_arg_value_7 = (PyObject *)moduledict_websockets$frames;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_BytesLike_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_websockets$frames->m_frame.f_lineno = 13;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_websockets$frames,
        mod_consts.const_str_plain_BytesLike,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_BytesLike);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_BytesLike, tmp_assign_source_19);
}
// Tried code:
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain_speedups;
tmp_globals_arg_value_8 = (PyObject *)moduledict_websockets$frames;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_apply_mask_tuple;
tmp_level_value_8 = const_int_pos_1;
frame_frame_websockets$frames->m_frame.f_lineno = 17;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_3;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_websockets$frames,
        mod_consts.const_str_plain_apply_mask,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_apply_mask);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_apply_mask, tmp_assign_source_20);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$frames, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$frames, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_ImportError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_res == -1));
tmp_condition_result_1 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain_utils;
tmp_globals_arg_value_9 = (PyObject *)moduledict_websockets$frames;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_apply_mask_tuple;
tmp_level_value_9 = const_int_pos_1;
frame_frame_websockets$frames->m_frame.f_lineno = 19;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_4;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_websockets$frames,
        mod_consts.const_str_plain_apply_mask,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_apply_mask);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_apply_mask, tmp_assign_source_21);
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 16;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_websockets$frames->m_frame)) {
        frame_frame_websockets$frames->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_4;
branch_end_1:;
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_3;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_3:;
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = MAKE_LIST12(tstate, mod_consts.const_list_d5f8b5f4eb6ae12d4cdd4b3da24156f7_list);
UPDATE_STRING_DICT1(moduledict_websockets$frames, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_22);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_23;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_websockets$frames$enum(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enum);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;

    goto try_except_handler_5;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_IntEnum);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_5;
}
tmp_assign_source_23 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_23, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_23;
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_24 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_24;
}
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_25;
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_2;
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


exception_lineno = 38;

    goto try_except_handler_5;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
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


exception_lineno = 38;

    goto try_except_handler_5;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_5;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_26 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_26;
}
{
bool tmp_condition_result_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_5;
}
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_27;
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


exception_lineno = 38;

    goto try_except_handler_5;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_Opcode;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_websockets$frames->m_frame.f_lineno = 38;
tmp_assign_source_27 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_27;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_5 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_5;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
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
PyObject *tmp_expression_value_6;
PyObject *tmp_name_value_10;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_10 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_10, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

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


exception_lineno = 38;

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


exception_lineno = 38;

    goto try_except_handler_5;
}
frame_frame_websockets$frames->m_frame.f_lineno = 38;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 38;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_5;
}
branch_no_3:;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_28;
}
branch_end_2:;
{
PyObject *tmp_assign_source_29;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_websockets$frames$$$class__1_Opcode_38 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_82533edc83fe47d73aaabae67403b14e;
tmp_res = PyObject_SetItem(locals_websockets$frames$$$class__1_Opcode_38, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_digest_3aa24fcc89d511dc19ad61cbee9e29f6;
tmp_res = PyObject_SetItem(locals_websockets$frames$$$class__1_Opcode_38, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_plain_Opcode;
tmp_res = PyObject_SetItem(locals_websockets$frames$$$class__1_Opcode_38, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_int_pos_38;
tmp_res = PyObject_SetItem(locals_websockets$frames$$$class__1_Opcode_38, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_7;
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_iter_arg_1;
tmp_iter_arg_1 = mod_consts.const_tuple_int_0_int_pos_1_int_pos_2_tuple;
tmp_assign_source_30 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
assert(!(tmp_assign_source_30 == NULL));
assert(tmp_Opcode$tuple_unpack_1__source_iter == NULL);
tmp_Opcode$tuple_unpack_1__source_iter = tmp_assign_source_30;
}
frame_frame_websockets$frames$$$class__1_Opcode_2 = MAKE_CLASS_FRAME(tstate, code_objects_c1af74141763a46b0d56ae4bd24c4a9e, module_websockets$frames, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$frames$$$class__1_Opcode_2);
assert(Py_REFCNT(frame_frame_websockets$frames$$$class__1_Opcode_2) == 2);

// Framed code:
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_31;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_Opcode$tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_Opcode$tuple_unpack_1__source_iter;
tmp_assign_source_31 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 3);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 41;
type_description_2 = "o";
    goto try_except_handler_9;
}
assert(tmp_Opcode$tuple_unpack_1__element_1 == NULL);
tmp_Opcode$tuple_unpack_1__element_1 = tmp_assign_source_31;
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_Opcode$tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_Opcode$tuple_unpack_1__source_iter;
tmp_assign_source_32 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 3);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 41;
type_description_2 = "o";
    goto try_except_handler_9;
}
assert(tmp_Opcode$tuple_unpack_1__element_2 == NULL);
tmp_Opcode$tuple_unpack_1__element_2 = tmp_assign_source_32;
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_Opcode$tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_Opcode$tuple_unpack_1__source_iter;
tmp_assign_source_33 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 3);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 41;
type_description_2 = "o";
    goto try_except_handler_9;
}
assert(tmp_Opcode$tuple_unpack_1__element_3 == NULL);
tmp_Opcode$tuple_unpack_1__element_3 = tmp_assign_source_33;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_Opcode$tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_Opcode$tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 41;
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

CHECK_OBJECT(tmp_Opcode$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_Opcode$tuple_unpack_1__source_iter);
Py_DECREF(tmp_Opcode$tuple_unpack_1__source_iter);
tmp_Opcode$tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_8;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_Opcode$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_Opcode$tuple_unpack_1__source_iter);
Py_DECREF(tmp_Opcode$tuple_unpack_1__source_iter);
tmp_Opcode$tuple_unpack_1__source_iter = NULL;
CHECK_OBJECT(tmp_Opcode$tuple_unpack_1__element_1);
tmp_dictset_value = tmp_Opcode$tuple_unpack_1__element_1;
tmp_res = PyObject_SetItem(locals_websockets$frames$$$class__1_Opcode_38, mod_consts.const_str_plain_CONT, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_2 = "o";
    goto try_except_handler_8;
}
Py_XDECREF(tmp_Opcode$tuple_unpack_1__element_1);
tmp_Opcode$tuple_unpack_1__element_1 = NULL;

CHECK_OBJECT(tmp_Opcode$tuple_unpack_1__element_2);
tmp_dictset_value = tmp_Opcode$tuple_unpack_1__element_2;
tmp_res = PyObject_SetItem(locals_websockets$frames$$$class__1_Opcode_38, mod_consts.const_str_plain_TEXT, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_2 = "o";
    goto try_except_handler_8;
}
Py_XDECREF(tmp_Opcode$tuple_unpack_1__element_2);
tmp_Opcode$tuple_unpack_1__element_2 = NULL;

CHECK_OBJECT(tmp_Opcode$tuple_unpack_1__element_3);
tmp_dictset_value = tmp_Opcode$tuple_unpack_1__element_3;
tmp_res = PyObject_SetItem(locals_websockets$frames$$$class__1_Opcode_38, mod_consts.const_str_plain_BINARY, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
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

Py_XDECREF(tmp_Opcode$tuple_unpack_1__element_1);
tmp_Opcode$tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_Opcode$tuple_unpack_1__element_2);
tmp_Opcode$tuple_unpack_1__element_2 = NULL;
Py_XDECREF(tmp_Opcode$tuple_unpack_1__element_3);
tmp_Opcode$tuple_unpack_1__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_2;
// End of try:
try_end_6:;
Py_XDECREF(tmp_Opcode$tuple_unpack_1__element_3);
tmp_Opcode$tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_assign_source_34;
PyObject *tmp_iter_arg_2;
tmp_iter_arg_2 = mod_consts.const_tuple_int_pos_8_int_pos_9_int_pos_10_tuple;
tmp_assign_source_34 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_2);
assert(!(tmp_assign_source_34 == NULL));
assert(tmp_Opcode$tuple_unpack_2__source_iter == NULL);
tmp_Opcode$tuple_unpack_2__source_iter = tmp_assign_source_34;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_35;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_Opcode$tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_Opcode$tuple_unpack_2__source_iter;
tmp_assign_source_35 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 0, 3);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 42;
type_description_2 = "o";
    goto try_except_handler_11;
}
assert(tmp_Opcode$tuple_unpack_2__element_1 == NULL);
tmp_Opcode$tuple_unpack_2__element_1 = tmp_assign_source_35;
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_Opcode$tuple_unpack_2__source_iter);
tmp_unpack_5 = tmp_Opcode$tuple_unpack_2__source_iter;
tmp_assign_source_36 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 1, 3);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 42;
type_description_2 = "o";
    goto try_except_handler_11;
}
assert(tmp_Opcode$tuple_unpack_2__element_2 == NULL);
tmp_Opcode$tuple_unpack_2__element_2 = tmp_assign_source_36;
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_Opcode$tuple_unpack_2__source_iter);
tmp_unpack_6 = tmp_Opcode$tuple_unpack_2__source_iter;
tmp_assign_source_37 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 2, 3);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 42;
type_description_2 = "o";
    goto try_except_handler_11;
}
assert(tmp_Opcode$tuple_unpack_2__element_3 == NULL);
tmp_Opcode$tuple_unpack_2__element_3 = tmp_assign_source_37;
}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_Opcode$tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_Opcode$tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 42;
type_description_2 = "o";
    goto try_except_handler_11;
}
}
goto try_end_7;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_Opcode$tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_Opcode$tuple_unpack_2__source_iter);
Py_DECREF(tmp_Opcode$tuple_unpack_2__source_iter);
tmp_Opcode$tuple_unpack_2__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_10;
// End of try:
try_end_7:;
CHECK_OBJECT(tmp_Opcode$tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_Opcode$tuple_unpack_2__source_iter);
Py_DECREF(tmp_Opcode$tuple_unpack_2__source_iter);
tmp_Opcode$tuple_unpack_2__source_iter = NULL;
CHECK_OBJECT(tmp_Opcode$tuple_unpack_2__element_1);
tmp_dictset_value = tmp_Opcode$tuple_unpack_2__element_1;
tmp_res = PyObject_SetItem(locals_websockets$frames$$$class__1_Opcode_38, mod_consts.const_str_plain_CLOSE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_2 = "o";
    goto try_except_handler_10;
}
Py_XDECREF(tmp_Opcode$tuple_unpack_2__element_1);
tmp_Opcode$tuple_unpack_2__element_1 = NULL;

CHECK_OBJECT(tmp_Opcode$tuple_unpack_2__element_2);
tmp_dictset_value = tmp_Opcode$tuple_unpack_2__element_2;
tmp_res = PyObject_SetItem(locals_websockets$frames$$$class__1_Opcode_38, mod_consts.const_str_plain_PING, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_2 = "o";
    goto try_except_handler_10;
}
Py_XDECREF(tmp_Opcode$tuple_unpack_2__element_2);
tmp_Opcode$tuple_unpack_2__element_2 = NULL;

CHECK_OBJECT(tmp_Opcode$tuple_unpack_2__element_3);
tmp_dictset_value = tmp_Opcode$tuple_unpack_2__element_3;
tmp_res = PyObject_SetItem(locals_websockets$frames$$$class__1_Opcode_38, mod_consts.const_str_plain_PONG, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_2 = "o";
    goto try_except_handler_10;
}
goto try_end_8;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_Opcode$tuple_unpack_2__element_1);
tmp_Opcode$tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_Opcode$tuple_unpack_2__element_2);
tmp_Opcode$tuple_unpack_2__element_2 = NULL;
Py_XDECREF(tmp_Opcode$tuple_unpack_2__element_3);
tmp_Opcode$tuple_unpack_2__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_2;
// End of try:
try_end_8:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$frames$$$class__1_Opcode_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$frames$$$class__1_Opcode_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$frames$$$class__1_Opcode_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$frames$$$class__1_Opcode_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_websockets$frames$$$class__1_Opcode_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_7;
skip_nested_handling_1:;
Py_XDECREF(tmp_Opcode$tuple_unpack_2__element_3);
tmp_Opcode$tuple_unpack_2__element_3 = NULL;

tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_websockets$frames$$$class__1_Opcode_38, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_7;
}
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_2 = tmp_class_container$class_creation_1__bases_orig;
tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_7;
}
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_1__bases_orig;
tmp_res = PyObject_SetItem(locals_websockets$frames$$$class__1_Opcode_38, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_7;
}
branch_no_4:;
{
PyObject *tmp_assign_source_38;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_Opcode;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_websockets$frames$$$class__1_Opcode_38;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_websockets$frames->m_frame.f_lineno = 38;
tmp_assign_source_38 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_7;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_38;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_29 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_29);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_DECREF(locals_websockets$frames$$$class__1_Opcode_38);
locals_websockets$frames$$$class__1_Opcode_38 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_websockets$frames$$$class__1_Opcode_38);
locals_websockets$frames$$$class__1_Opcode_38 = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

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
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 38;
goto try_except_handler_5;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_Opcode, tmp_assign_source_29);
}
goto try_end_9;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
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
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto frame_exception_exit_1;
// End of try:
try_end_9:;
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
PyObject *tmp_assign_source_39;
PyObject *tmp_expression_value_8;
tmp_expression_value_8 = module_var_accessor_websockets$frames$Opcode(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Opcode);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 45;

    goto frame_exception_exit_1;
}
tmp_assign_source_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_CONT);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_CONT, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_expression_value_9;
tmp_expression_value_9 = module_var_accessor_websockets$frames$Opcode(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Opcode);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 46;

    goto frame_exception_exit_1;
}
tmp_assign_source_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_TEXT);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_TEXT, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_expression_value_10;
tmp_expression_value_10 = module_var_accessor_websockets$frames$Opcode(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Opcode);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 47;

    goto frame_exception_exit_1;
}
tmp_assign_source_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_BINARY);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_BINARY, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_expression_value_11;
tmp_expression_value_11 = module_var_accessor_websockets$frames$Opcode(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Opcode);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;

    goto frame_exception_exit_1;
}
tmp_assign_source_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_CLOSE);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_CLOSE, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_expression_value_12;
tmp_expression_value_12 = module_var_accessor_websockets$frames$Opcode(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Opcode);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 49;

    goto frame_exception_exit_1;
}
tmp_assign_source_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_PING);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_PING, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_expression_value_13;
tmp_expression_value_13 = module_var_accessor_websockets$frames$Opcode(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Opcode);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 50;

    goto frame_exception_exit_1;
}
tmp_assign_source_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_PONG);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_PONG, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_tuple_element_5;
tmp_tuple_element_5 = module_var_accessor_websockets$frames$OP_CONT(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OP_CONT);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;

    goto frame_exception_exit_1;
}
tmp_assign_source_45 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_assign_source_45, 0, tmp_tuple_element_5);
tmp_tuple_element_5 = module_var_accessor_websockets$frames$OP_TEXT(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OP_TEXT);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_assign_source_45, 1, tmp_tuple_element_5);
tmp_tuple_element_5 = module_var_accessor_websockets$frames$OP_BINARY(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OP_BINARY);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_assign_source_45, 2, tmp_tuple_element_5);
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_assign_source_45);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
UPDATE_STRING_DICT1(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_DATA_OPCODES, tmp_assign_source_45);
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_tuple_element_6;
tmp_tuple_element_6 = module_var_accessor_websockets$frames$OP_CLOSE(tstate);
if (unlikely(tmp_tuple_element_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OP_CLOSE);
}

if (tmp_tuple_element_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 53;

    goto frame_exception_exit_1;
}
tmp_assign_source_46 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_assign_source_46, 0, tmp_tuple_element_6);
tmp_tuple_element_6 = module_var_accessor_websockets$frames$OP_PING(tstate);
if (unlikely(tmp_tuple_element_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OP_PING);
}

if (tmp_tuple_element_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 53;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM0(tmp_assign_source_46, 1, tmp_tuple_element_6);
tmp_tuple_element_6 = module_var_accessor_websockets$frames$OP_PONG(tstate);
assert(!(tmp_tuple_element_6 == NULL));
PyTuple_SET_ITEM0(tmp_assign_source_46, 2, tmp_tuple_element_6);
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_assign_source_46);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
UPDATE_STRING_DICT1(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_CTRL_OPCODES, tmp_assign_source_46);
}
{
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_47;
PyObject *tmp_tuple_element_7;
PyObject *tmp_expression_value_14;
tmp_expression_value_14 = module_var_accessor_websockets$frames$enum(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enum);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 56;

    goto try_except_handler_12;
}
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_IntEnum);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_12;
}
tmp_assign_source_47 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_47, 0, tmp_tuple_element_7);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_47;
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_48 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_48;
}
{
PyObject *tmp_assign_source_49;
tmp_assign_source_49 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_49;
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_6;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_12;
}
tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_15 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_15, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_12;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_12;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_50 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_50;
}
{
bool tmp_condition_result_7;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_16 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_16, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_12;
}
tmp_condition_result_7 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_51;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_17;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_17 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_12;
}
tmp_tuple_element_8 = mod_consts.const_str_plain_CloseCode;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_websockets$frames->m_frame.f_lineno = 56;
tmp_assign_source_51 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_51;
}
{
bool tmp_condition_result_8;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_18;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_18 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_18, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_12;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
assert(!(tmp_res == -1));
tmp_condition_result_8 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_9;
PyObject *tmp_expression_value_19;
PyObject *tmp_name_value_11;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_19 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_11 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_9 = BUILTIN_GETATTR(tstate, tmp_expression_value_19, tmp_name_value_11, tmp_default_value_2);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_12;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_20;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_20 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_20 == NULL));
tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_20);
Py_DECREF(tmp_expression_value_20);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_9);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_12;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_12;
}
frame_frame_websockets$frames->m_frame.f_lineno = 56;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 56;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_12;
}
branch_no_6:;
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_assign_source_52;
tmp_assign_source_52 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_52;
}
branch_end_5:;
{
PyObject *tmp_assign_source_53;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_websockets$frames$$$class__2_CloseCode_56 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_82533edc83fe47d73aaabae67403b14e;
tmp_res = PyObject_SetItem(locals_websockets$frames$$$class__2_CloseCode_56, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_str_digest_651d01ec202ccf56fcd7f654b0514d28;
tmp_res = PyObject_SetItem(locals_websockets$frames$$$class__2_CloseCode_56, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_str_plain_CloseCode;
tmp_res = PyObject_SetItem(locals_websockets$frames$$$class__2_CloseCode_56, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_int_pos_56;
tmp_res = PyObject_SetItem(locals_websockets$frames$$$class__2_CloseCode_56, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_14;
}
frame_frame_websockets$frames$$$class__2_CloseCode_3 = MAKE_CLASS_FRAME(tstate, code_objects_1f6d060de3fdd9adc7e345065865fff3, module_websockets$frames, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$frames$$$class__2_CloseCode_3);
assert(Py_REFCNT(frame_frame_websockets$frames$$$class__2_CloseCode_3) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_int_pos_1000;
tmp_res = PyObject_SetItem(locals_websockets$frames$$$class__2_CloseCode_56, mod_consts.const_str_plain_NORMAL_CLOSURE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_1001;
tmp_res = PyObject_SetItem(locals_websockets$frames$$$class__2_CloseCode_56, mod_consts.const_str_plain_GOING_AWAY, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_1002;
tmp_res = PyObject_SetItem(locals_websockets$frames$$$class__2_CloseCode_56, mod_consts.const_str_plain_PROTOCOL_ERROR, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_1003;
tmp_res = PyObject_SetItem(locals_websockets$frames$$$class__2_CloseCode_56, mod_consts.const_str_plain_UNSUPPORTED_DATA, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_1005;
tmp_res = PyObject_SetItem(locals_websockets$frames$$$class__2_CloseCode_56, mod_consts.const_str_plain_NO_STATUS_RCVD, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_1006;
tmp_res = PyObject_SetItem(locals_websockets$frames$$$class__2_CloseCode_56, mod_consts.const_str_plain_ABNORMAL_CLOSURE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_1007;
tmp_res = PyObject_SetItem(locals_websockets$frames$$$class__2_CloseCode_56, mod_consts.const_str_plain_INVALID_DATA, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_1008;
tmp_res = PyObject_SetItem(locals_websockets$frames$$$class__2_CloseCode_56, mod_consts.const_str_plain_POLICY_VIOLATION, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_1009;
tmp_res = PyObject_SetItem(locals_websockets$frames$$$class__2_CloseCode_56, mod_consts.const_str_plain_MESSAGE_TOO_BIG, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_1010;
tmp_res = PyObject_SetItem(locals_websockets$frames$$$class__2_CloseCode_56, mod_consts.const_str_plain_MANDATORY_EXTENSION, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_1011;
tmp_res = PyObject_SetItem(locals_websockets$frames$$$class__2_CloseCode_56, mod_consts.const_str_plain_INTERNAL_ERROR, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_1012;
tmp_res = PyObject_SetItem(locals_websockets$frames$$$class__2_CloseCode_56, mod_consts.const_str_plain_SERVICE_RESTART, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_1013;
tmp_res = PyObject_SetItem(locals_websockets$frames$$$class__2_CloseCode_56, mod_consts.const_str_plain_TRY_AGAIN_LATER, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_1014;
tmp_res = PyObject_SetItem(locals_websockets$frames$$$class__2_CloseCode_56, mod_consts.const_str_plain_BAD_GATEWAY, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_1015;
tmp_res = PyObject_SetItem(locals_websockets$frames$$$class__2_CloseCode_56, mod_consts.const_str_plain_TLS_HANDSHAKE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_2 = "o";
    goto frame_exception_exit_3;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_3:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$frames$$$class__2_CloseCode_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$frames$$$class__2_CloseCode_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$frames$$$class__2_CloseCode_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$frames$$$class__2_CloseCode_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_websockets$frames$$$class__2_CloseCode_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_14;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_websockets$frames$$$class__2_CloseCode_56, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_14;
}
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_3 = tmp_class_container$class_creation_2__bases;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_cmp_expr_right_3 = tmp_class_container$class_creation_2__bases_orig;
tmp_condition_result_9 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_14;
}
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_2__bases_orig;
tmp_res = PyObject_SetItem(locals_websockets$frames$$$class__2_CloseCode_56, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_14;
}
branch_no_7:;
{
PyObject *tmp_assign_source_54;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_10;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_4 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_10 = mod_consts.const_str_plain_CloseCode;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_10 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_10);
tmp_tuple_element_10 = locals_websockets$frames$$$class__2_CloseCode_56;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_websockets$frames->m_frame.f_lineno = 56;
tmp_assign_source_54 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_14;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_54;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_53 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_53);
goto try_return_handler_14;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
Py_DECREF(locals_websockets$frames$$$class__2_CloseCode_56);
locals_websockets$frames$$$class__2_CloseCode_56 = NULL;
goto try_return_handler_13;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_websockets$frames$$$class__2_CloseCode_56);
locals_websockets$frames$$$class__2_CloseCode_56 = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto try_except_handler_13;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_13:;
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
exception_lineno = 56;
goto try_except_handler_12;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_CloseCode, tmp_assign_source_53);
}
goto try_end_10;
// Exception handler code:
try_except_handler_12:;
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
PyObject *tmp_assign_source_55;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_21;
tmp_expression_value_21 = module_var_accessor_websockets$frames$CloseCode(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CloseCode);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 79;

    goto frame_exception_exit_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_NORMAL_CLOSURE);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto frame_exception_exit_1;
}
tmp_dict_value_1 = mod_consts.const_str_plain_OK;
tmp_assign_source_55 = _PyDict_NewPresized( 15 );
{
PyObject *tmp_expression_value_22;
PyObject *tmp_expression_value_23;
PyObject *tmp_expression_value_24;
PyObject *tmp_expression_value_25;
PyObject *tmp_expression_value_26;
PyObject *tmp_expression_value_27;
PyObject *tmp_expression_value_28;
PyObject *tmp_expression_value_29;
PyObject *tmp_expression_value_30;
PyObject *tmp_expression_value_31;
PyObject *tmp_expression_value_32;
PyObject *tmp_expression_value_33;
PyObject *tmp_expression_value_34;
PyObject *tmp_expression_value_35;
tmp_res = PyDict_SetItem(tmp_assign_source_55, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto dict_build_exception_1;
}
tmp_expression_value_22 = module_var_accessor_websockets$frames$CloseCode(tstate);
if (unlikely(tmp_expression_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CloseCode);
}

if (tmp_expression_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 80;

    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_GOING_AWAY);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_digest_c22a5960dd8bedcf8d8b4f1b700513e9;
tmp_res = PyDict_SetItem(tmp_assign_source_55, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;

    goto dict_build_exception_1;
}
tmp_expression_value_23 = module_var_accessor_websockets$frames$CloseCode(tstate);
if (unlikely(tmp_expression_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CloseCode);
}

if (tmp_expression_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 81;

    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_PROTOCOL_ERROR);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_digest_4dc191a76fe522fb8846d9de5cae163e;
tmp_res = PyDict_SetItem(tmp_assign_source_55, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto dict_build_exception_1;
}
tmp_expression_value_24 = module_var_accessor_websockets$frames$CloseCode(tstate);
if (unlikely(tmp_expression_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CloseCode);
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 82;

    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_UNSUPPORTED_DATA);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_digest_7dd95752229fdbc6a268ced04919a9e0;
tmp_res = PyDict_SetItem(tmp_assign_source_55, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto dict_build_exception_1;
}
tmp_expression_value_25 = module_var_accessor_websockets$frames$CloseCode(tstate);
if (unlikely(tmp_expression_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CloseCode);
}

if (tmp_expression_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 83;

    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_NO_STATUS_RCVD);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_digest_8b8364064027ec50e9b132dc57e7d380;
tmp_res = PyDict_SetItem(tmp_assign_source_55, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto dict_build_exception_1;
}
tmp_expression_value_26 = module_var_accessor_websockets$frames$CloseCode(tstate);
if (unlikely(tmp_expression_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CloseCode);
}

if (tmp_expression_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 84;

    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_ABNORMAL_CLOSURE);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_digest_e347279ba84ee232c42ac93b18c4e6e7;
tmp_res = PyDict_SetItem(tmp_assign_source_55, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto dict_build_exception_1;
}
tmp_expression_value_27 = module_var_accessor_websockets$frames$CloseCode(tstate);
if (unlikely(tmp_expression_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CloseCode);
}

if (tmp_expression_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 85;

    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_INVALID_DATA);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_digest_c2c1450289162313da6325a881aa9b82;
tmp_res = PyDict_SetItem(tmp_assign_source_55, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto dict_build_exception_1;
}
tmp_expression_value_28 = module_var_accessor_websockets$frames$CloseCode(tstate);
if (unlikely(tmp_expression_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CloseCode);
}

if (tmp_expression_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 86;

    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_POLICY_VIOLATION);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_digest_5b64366b48f23317a0ac47dd17ff6da9;
tmp_res = PyDict_SetItem(tmp_assign_source_55, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto dict_build_exception_1;
}
tmp_expression_value_29 = module_var_accessor_websockets$frames$CloseCode(tstate);
if (unlikely(tmp_expression_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CloseCode);
}

if (tmp_expression_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;

    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_MESSAGE_TOO_BIG);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_digest_ed118a9e3698e55f04b13d3d487f5dd3;
tmp_res = PyDict_SetItem(tmp_assign_source_55, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto dict_build_exception_1;
}
tmp_expression_value_30 = module_var_accessor_websockets$frames$CloseCode(tstate);
if (unlikely(tmp_expression_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CloseCode);
}

if (tmp_expression_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 88;

    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_MANDATORY_EXTENSION);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_digest_9c67103661d26d1741f26421dd7c8c2b;
tmp_res = PyDict_SetItem(tmp_assign_source_55, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto dict_build_exception_1;
}
tmp_expression_value_31 = module_var_accessor_websockets$frames$CloseCode(tstate);
if (unlikely(tmp_expression_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CloseCode);
}

if (tmp_expression_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 89;

    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_INTERNAL_ERROR);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_digest_9947053d0c63bc81f08a8b20d9d4c742;
tmp_res = PyDict_SetItem(tmp_assign_source_55, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto dict_build_exception_1;
}
tmp_expression_value_32 = module_var_accessor_websockets$frames$CloseCode(tstate);
if (unlikely(tmp_expression_value_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CloseCode);
}

if (tmp_expression_value_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 90;

    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_SERVICE_RESTART);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_digest_b503a093d91f3551ac590e5b8747cc00;
tmp_res = PyDict_SetItem(tmp_assign_source_55, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto dict_build_exception_1;
}
tmp_expression_value_33 = module_var_accessor_websockets$frames$CloseCode(tstate);
if (unlikely(tmp_expression_value_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CloseCode);
}

if (tmp_expression_value_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 91;

    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_TRY_AGAIN_LATER);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_digest_c71dd541bda41d5ec56796d480e4bfc1;
tmp_res = PyDict_SetItem(tmp_assign_source_55, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto dict_build_exception_1;
}
tmp_expression_value_34 = module_var_accessor_websockets$frames$CloseCode(tstate);
if (unlikely(tmp_expression_value_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CloseCode);
}

if (tmp_expression_value_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 92;

    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_BAD_GATEWAY);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_digest_0955437a16a82f78642fad62033e6f27;
tmp_res = PyDict_SetItem(tmp_assign_source_55, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto dict_build_exception_1;
}
tmp_expression_value_35 = module_var_accessor_websockets$frames$CloseCode(tstate);
if (unlikely(tmp_expression_value_35 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CloseCode);
}

if (tmp_expression_value_35 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 93;

    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_TLS_HANDSHAKE);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_digest_8235248e83fa1c9f12f917bd005bf89b;
tmp_res = PyDict_SetItem(tmp_assign_source_55, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;

    goto dict_build_exception_1;
}
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_55);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
UPDATE_STRING_DICT1(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_CLOSE_CODE_EXPLANATIONS, tmp_assign_source_55);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_49d3c3fc3ee96ead1ca58f86d1afd301;
tmp_ass_subscribed_1 = module_var_accessor_websockets$frames$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 78;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_CLOSE_CODE_EXPLANATIONS;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_set_element_1;
PyObject *tmp_expression_value_36;
PyObject *tmp_expression_value_37;
PyObject *tmp_expression_value_38;
PyObject *tmp_expression_value_39;
PyObject *tmp_expression_value_40;
PyObject *tmp_expression_value_41;
PyObject *tmp_expression_value_42;
PyObject *tmp_expression_value_43;
PyObject *tmp_expression_value_44;
PyObject *tmp_expression_value_45;
PyObject *tmp_expression_value_46;
PyObject *tmp_expression_value_47;
tmp_expression_value_36 = module_var_accessor_websockets$frames$CloseCode(tstate);
if (unlikely(tmp_expression_value_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CloseCode);
}

if (tmp_expression_value_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 100;

    goto frame_exception_exit_1;
}
tmp_set_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain_NORMAL_CLOSURE);
if (tmp_set_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;

    goto frame_exception_exit_1;
}
tmp_assign_source_56 = PySet_New(NULL);
assert(tmp_assign_source_56);
tmp_res = PySet_Add(tmp_assign_source_56, tmp_set_element_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_set_element_1);
Py_DECREF(tmp_assign_source_56);

exception_lineno = 100;

    goto frame_exception_exit_1;
}
Py_DECREF(tmp_set_element_1);
tmp_expression_value_37 = module_var_accessor_websockets$frames$CloseCode(tstate);
if (unlikely(tmp_expression_value_37 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CloseCode);
}

if (tmp_expression_value_37 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_assign_source_56);

exception_lineno = 101;

    goto frame_exception_exit_1;
}
tmp_set_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain_GOING_AWAY);
if (tmp_set_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assign_source_56);

exception_lineno = 101;

    goto frame_exception_exit_1;
}
tmp_res = PySet_Add(tmp_assign_source_56, tmp_set_element_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assign_source_56);
Py_DECREF(tmp_set_element_1);

exception_lineno = 101;

    goto frame_exception_exit_1;
}
Py_DECREF(tmp_set_element_1);
tmp_expression_value_38 = module_var_accessor_websockets$frames$CloseCode(tstate);
if (unlikely(tmp_expression_value_38 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CloseCode);
}

if (tmp_expression_value_38 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_assign_source_56);

exception_lineno = 102;

    goto frame_exception_exit_1;
}
tmp_set_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts.const_str_plain_PROTOCOL_ERROR);
if (tmp_set_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assign_source_56);

exception_lineno = 102;

    goto frame_exception_exit_1;
}
tmp_res = PySet_Add(tmp_assign_source_56, tmp_set_element_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assign_source_56);
Py_DECREF(tmp_set_element_1);

exception_lineno = 102;

    goto frame_exception_exit_1;
}
Py_DECREF(tmp_set_element_1);
tmp_expression_value_39 = module_var_accessor_websockets$frames$CloseCode(tstate);
if (unlikely(tmp_expression_value_39 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CloseCode);
}

if (tmp_expression_value_39 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_assign_source_56);

exception_lineno = 103;

    goto frame_exception_exit_1;
}
tmp_set_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain_UNSUPPORTED_DATA);
if (tmp_set_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assign_source_56);

exception_lineno = 103;

    goto frame_exception_exit_1;
}
tmp_res = PySet_Add(tmp_assign_source_56, tmp_set_element_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assign_source_56);
Py_DECREF(tmp_set_element_1);

exception_lineno = 103;

    goto frame_exception_exit_1;
}
Py_DECREF(tmp_set_element_1);
tmp_expression_value_40 = module_var_accessor_websockets$frames$CloseCode(tstate);
if (unlikely(tmp_expression_value_40 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CloseCode);
}

if (tmp_expression_value_40 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_assign_source_56);

exception_lineno = 104;

    goto frame_exception_exit_1;
}
tmp_set_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts.const_str_plain_INVALID_DATA);
if (tmp_set_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assign_source_56);

exception_lineno = 104;

    goto frame_exception_exit_1;
}
tmp_res = PySet_Add(tmp_assign_source_56, tmp_set_element_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assign_source_56);
Py_DECREF(tmp_set_element_1);

exception_lineno = 104;

    goto frame_exception_exit_1;
}
Py_DECREF(tmp_set_element_1);
tmp_expression_value_41 = module_var_accessor_websockets$frames$CloseCode(tstate);
if (unlikely(tmp_expression_value_41 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CloseCode);
}

if (tmp_expression_value_41 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_assign_source_56);

exception_lineno = 105;

    goto frame_exception_exit_1;
}
tmp_set_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts.const_str_plain_POLICY_VIOLATION);
if (tmp_set_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assign_source_56);

exception_lineno = 105;

    goto frame_exception_exit_1;
}
tmp_res = PySet_Add(tmp_assign_source_56, tmp_set_element_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assign_source_56);
Py_DECREF(tmp_set_element_1);

exception_lineno = 105;

    goto frame_exception_exit_1;
}
Py_DECREF(tmp_set_element_1);
tmp_expression_value_42 = module_var_accessor_websockets$frames$CloseCode(tstate);
if (unlikely(tmp_expression_value_42 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CloseCode);
}

if (tmp_expression_value_42 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_assign_source_56);

exception_lineno = 106;

    goto frame_exception_exit_1;
}
tmp_set_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts.const_str_plain_MESSAGE_TOO_BIG);
if (tmp_set_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assign_source_56);

exception_lineno = 106;

    goto frame_exception_exit_1;
}
tmp_res = PySet_Add(tmp_assign_source_56, tmp_set_element_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assign_source_56);
Py_DECREF(tmp_set_element_1);

exception_lineno = 106;

    goto frame_exception_exit_1;
}
Py_DECREF(tmp_set_element_1);
tmp_expression_value_43 = module_var_accessor_websockets$frames$CloseCode(tstate);
if (unlikely(tmp_expression_value_43 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CloseCode);
}

if (tmp_expression_value_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_assign_source_56);

exception_lineno = 107;

    goto frame_exception_exit_1;
}
tmp_set_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts.const_str_plain_MANDATORY_EXTENSION);
if (tmp_set_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assign_source_56);

exception_lineno = 107;

    goto frame_exception_exit_1;
}
tmp_res = PySet_Add(tmp_assign_source_56, tmp_set_element_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assign_source_56);
Py_DECREF(tmp_set_element_1);

exception_lineno = 107;

    goto frame_exception_exit_1;
}
Py_DECREF(tmp_set_element_1);
tmp_expression_value_44 = module_var_accessor_websockets$frames$CloseCode(tstate);
if (unlikely(tmp_expression_value_44 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CloseCode);
}

if (tmp_expression_value_44 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_assign_source_56);

exception_lineno = 108;

    goto frame_exception_exit_1;
}
tmp_set_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts.const_str_plain_INTERNAL_ERROR);
if (tmp_set_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assign_source_56);

exception_lineno = 108;

    goto frame_exception_exit_1;
}
tmp_res = PySet_Add(tmp_assign_source_56, tmp_set_element_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assign_source_56);
Py_DECREF(tmp_set_element_1);

exception_lineno = 108;

    goto frame_exception_exit_1;
}
Py_DECREF(tmp_set_element_1);
tmp_expression_value_45 = module_var_accessor_websockets$frames$CloseCode(tstate);
if (unlikely(tmp_expression_value_45 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CloseCode);
}

if (tmp_expression_value_45 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_assign_source_56);

exception_lineno = 109;

    goto frame_exception_exit_1;
}
tmp_set_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts.const_str_plain_SERVICE_RESTART);
if (tmp_set_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assign_source_56);

exception_lineno = 109;

    goto frame_exception_exit_1;
}
tmp_res = PySet_Add(tmp_assign_source_56, tmp_set_element_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assign_source_56);
Py_DECREF(tmp_set_element_1);

exception_lineno = 109;

    goto frame_exception_exit_1;
}
Py_DECREF(tmp_set_element_1);
tmp_expression_value_46 = module_var_accessor_websockets$frames$CloseCode(tstate);
if (unlikely(tmp_expression_value_46 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CloseCode);
}

if (tmp_expression_value_46 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_assign_source_56);

exception_lineno = 110;

    goto frame_exception_exit_1;
}
tmp_set_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts.const_str_plain_TRY_AGAIN_LATER);
if (tmp_set_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assign_source_56);

exception_lineno = 110;

    goto frame_exception_exit_1;
}
tmp_res = PySet_Add(tmp_assign_source_56, tmp_set_element_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assign_source_56);
Py_DECREF(tmp_set_element_1);

exception_lineno = 110;

    goto frame_exception_exit_1;
}
Py_DECREF(tmp_set_element_1);
tmp_expression_value_47 = module_var_accessor_websockets$frames$CloseCode(tstate);
if (unlikely(tmp_expression_value_47 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CloseCode);
}

if (tmp_expression_value_47 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_assign_source_56);

exception_lineno = 111;

    goto frame_exception_exit_1;
}
tmp_set_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts.const_str_plain_BAD_GATEWAY);
if (tmp_set_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assign_source_56);

exception_lineno = 111;

    goto frame_exception_exit_1;
}
tmp_res = PySet_Add(tmp_assign_source_56, tmp_set_element_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assign_source_56);
Py_DECREF(tmp_set_element_1);

exception_lineno = 111;

    goto frame_exception_exit_1;
}
Py_DECREF(tmp_set_element_1);
UPDATE_STRING_DICT1(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_EXTERNAL_CLOSE_CODES, tmp_assign_source_56);
}
{
PyObject *tmp_assign_source_57;
PyObject *tmp_set_element_2;
PyObject *tmp_expression_value_48;
PyObject *tmp_expression_value_49;
PyObject *tmp_expression_value_50;
tmp_expression_value_48 = module_var_accessor_websockets$frames$CloseCode(tstate);
if (unlikely(tmp_expression_value_48 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CloseCode);
}

if (tmp_expression_value_48 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 116;

    goto frame_exception_exit_1;
}
tmp_set_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts.const_str_plain_NORMAL_CLOSURE);
if (tmp_set_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto frame_exception_exit_1;
}
tmp_assign_source_57 = PySet_New(NULL);
assert(tmp_assign_source_57);
tmp_res = PySet_Add(tmp_assign_source_57, tmp_set_element_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_set_element_2);
Py_DECREF(tmp_assign_source_57);

exception_lineno = 116;

    goto frame_exception_exit_1;
}
Py_DECREF(tmp_set_element_2);
tmp_expression_value_49 = module_var_accessor_websockets$frames$CloseCode(tstate);
if (unlikely(tmp_expression_value_49 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CloseCode);
}

if (tmp_expression_value_49 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_assign_source_57);

exception_lineno = 117;

    goto frame_exception_exit_1;
}
tmp_set_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts.const_str_plain_GOING_AWAY);
if (tmp_set_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assign_source_57);

exception_lineno = 117;

    goto frame_exception_exit_1;
}
tmp_res = PySet_Add(tmp_assign_source_57, tmp_set_element_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assign_source_57);
Py_DECREF(tmp_set_element_2);

exception_lineno = 117;

    goto frame_exception_exit_1;
}
Py_DECREF(tmp_set_element_2);
tmp_expression_value_50 = module_var_accessor_websockets$frames$CloseCode(tstate);
if (unlikely(tmp_expression_value_50 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CloseCode);
}

if (tmp_expression_value_50 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_assign_source_57);

exception_lineno = 118;

    goto frame_exception_exit_1;
}
tmp_set_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts.const_str_plain_NO_STATUS_RCVD);
if (tmp_set_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assign_source_57);

exception_lineno = 118;

    goto frame_exception_exit_1;
}
tmp_res = PySet_Add(tmp_assign_source_57, tmp_set_element_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assign_source_57);
Py_DECREF(tmp_set_element_2);

exception_lineno = 118;

    goto frame_exception_exit_1;
}
Py_DECREF(tmp_set_element_2);
UPDATE_STRING_DICT1(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_OK_CLOSE_CODES, tmp_assign_source_57);
}
{
PyObject *tmp_outline_return_value_3;
{
PyObject *tmp_assign_source_58;
tmp_assign_source_58 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_58;
}
{
PyObject *tmp_assign_source_59;
tmp_assign_source_59 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_59;
}
// Tried code:
{
PyObject *tmp_assign_source_60;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_websockets$frames$dataclasses(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclasses);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 122;

    goto try_except_handler_15;
}
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_websockets$frames$$$class__3_Frame_123 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
tmp_dictset_value = mod_consts.const_str_digest_82533edc83fe47d73aaabae67403b14e;
tmp_result = DICT_SET_ITEM(locals_websockets$frames$$$class__3_Frame_123, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_fe786aca15421ba586a8c2ac64e81b5a;
tmp_result = DICT_SET_ITEM(locals_websockets$frames$$$class__3_Frame_123, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_Frame;
tmp_result = DICT_SET_ITEM(locals_websockets$frames$$$class__3_Frame_123, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_123;
tmp_result = DICT_SET_ITEM(locals_websockets$frames$$$class__3_Frame_123, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_result = DICT_SET_ITEM(locals_websockets$frames$$$class__3_Frame_123, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_websockets$frames$$$class__3_Frame_4 = MAKE_CLASS_FRAME(tstate, code_objects_c2d00e0b6c6a4d0d3d1df5a397bcd5e5, module_websockets$frames, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$frames$$$class__3_Frame_4);
assert(Py_REFCNT(frame_frame_websockets$frames$$$class__3_Frame_4) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_str_plain_Opcode;
tmp_ass_subscribed_2 = DICT_GET_ITEM0(tstate, locals_websockets$frames$$$class__3_Frame_123, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 140;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_opcode;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_ass_subvalue_3 = mod_consts.const_str_plain_BytesLike;
tmp_ass_subscribed_3 = DICT_GET_ITEM0(tstate, locals_websockets$frames$$$class__3_Frame_123, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 141;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_ass_subscript_3 = mod_consts.const_str_plain_data;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
tmp_dictset_value = Py_True;
tmp_result = DICT_SET_ITEM(locals_websockets$frames$$$class__3_Frame_123, mod_consts.const_str_plain_fin, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
tmp_ass_subvalue_4 = mod_consts.const_str_plain_bool;
tmp_ass_subscribed_4 = DICT_GET_ITEM0(tstate, locals_websockets$frames$$$class__3_Frame_123, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 142;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_ass_subscript_4 = mod_consts.const_str_plain_fin;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
tmp_dictset_value = Py_False;
tmp_result = DICT_SET_ITEM(locals_websockets$frames$$$class__3_Frame_123, mod_consts.const_str_plain_rsv1, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_ass_subscript_5;
tmp_ass_subvalue_5 = mod_consts.const_str_plain_bool;
tmp_ass_subscribed_5 = DICT_GET_ITEM0(tstate, locals_websockets$frames$$$class__3_Frame_123, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 143;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

if (tmp_ass_subscribed_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_ass_subscript_5 = mod_consts.const_str_plain_rsv1;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
tmp_dictset_value = Py_False;
tmp_result = DICT_SET_ITEM(locals_websockets$frames$$$class__3_Frame_123, mod_consts.const_str_plain_rsv2, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_ass_subvalue_6;
PyObject *tmp_ass_subscribed_6;
PyObject *tmp_ass_subscript_6;
tmp_ass_subvalue_6 = mod_consts.const_str_plain_bool;
tmp_ass_subscribed_6 = DICT_GET_ITEM0(tstate, locals_websockets$frames$$$class__3_Frame_123, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 144;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

if (tmp_ass_subscribed_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_ass_subscript_6 = mod_consts.const_str_plain_rsv2;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
tmp_dictset_value = Py_False;
tmp_result = DICT_SET_ITEM(locals_websockets$frames$$$class__3_Frame_123, mod_consts.const_str_plain_rsv3, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_ass_subvalue_7;
PyObject *tmp_ass_subscribed_7;
PyObject *tmp_ass_subscript_7;
tmp_ass_subvalue_7 = mod_consts.const_str_plain_bool;
tmp_ass_subscribed_7 = DICT_GET_ITEM0(tstate, locals_websockets$frames$$$class__3_Frame_123, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 145;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

if (tmp_ass_subscribed_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_ass_subscript_7 = mod_consts.const_str_plain_rsv3;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_int_arg_1;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_51;
PyObject *tmp_expression_value_52;
tmp_expression_value_52 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_52 == NULL));
tmp_expression_value_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts.const_str_plain_environ);
if (tmp_expression_value_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_51);
Py_DECREF(tmp_expression_value_51);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
frame_frame_websockets$frames$$$class__3_Frame_4->m_frame.f_lineno = 148;
tmp_int_arg_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_5, mod_consts.const_tuple_str_plain_WEBSOCKETS_MAX_LOG_SIZE_str_plain_75_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_result = DICT_SET_ITEM(locals_websockets$frames$$$class__3_Frame_123, mod_consts.const_str_plain_MAX_LOG_SIZE, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$frames$$$class__3_Frame_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$frames$$$class__3_Frame_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$frames$$$class__3_Frame_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$frames$$$class__3_Frame_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_websockets$frames$$$class__3_Frame_4);

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
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_websockets$frames$$$function__1___str__(tstate, tmp_annotations_1);

tmp_result = DICT_SET_ITEM(locals_websockets$frames$$$class__3_Frame_123, mod_consts.const_str_plain___str__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_classmethod_arg_1;
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_2;
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_64884931710373c23cc1ebcee5c19ad1);
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_e43cd9be53cc5aba964941ffe45ba13c);

tmp_classmethod_arg_1 = MAKE_FUNCTION_websockets$frames$$$function__2_parse(tstate, tmp_kw_defaults_1, tmp_annotations_2);

tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_1);
CHECK_OBJECT(tmp_classmethod_arg_1);
Py_DECREF(tmp_classmethod_arg_1);
assert(!(tmp_dictset_value == NULL));
tmp_result = DICT_SET_ITEM(locals_websockets$frames$$$class__3_Frame_123, mod_consts.const_str_plain_parse, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_kw_defaults_2;
PyObject *tmp_annotations_3;
tmp_kw_defaults_2 = DICT_COPY(tstate, mod_consts.const_dict_d038daaa704c3cb9427d8350f36497b7);
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_e9ca1994a1f81877060f3905441f44a2);

tmp_dictset_value = MAKE_FUNCTION_websockets$frames$$$function__3_serialize(tstate, tmp_kw_defaults_2, tmp_annotations_3);

tmp_result = DICT_SET_ITEM(locals_websockets$frames$$$class__3_Frame_123, mod_consts.const_str_plain_serialize, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_websockets$frames$$$function__4_check(tstate, tmp_annotations_4);

tmp_result = DICT_SET_ITEM(locals_websockets$frames$$$class__3_Frame_123, mod_consts.const_str_plain_check, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = const_tuple_empty;
tmp_result = DICT_SET_ITEM(locals_websockets$frames$$$class__3_Frame_123, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_61;
PyObject *tmp_called_value_6;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_11;
PyObject *tmp_kwargs_value_5;
tmp_called_value_6 = (PyObject *)&PyType_Type;
tmp_tuple_element_11 = mod_consts.const_str_plain_Frame;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_11);
tmp_tuple_element_11 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_11);
tmp_tuple_element_11 = locals_websockets$frames$$$class__3_Frame_123;
PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_websockets$frames->m_frame.f_lineno = 123;
tmp_assign_source_61 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto try_except_handler_17;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_61;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_args_element_value_1 = outline_2_var___class__;
Py_INCREF(tmp_args_element_value_1);
goto try_return_handler_17;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_17:;
Py_DECREF(locals_websockets$frames$$$class__3_Frame_123);
locals_websockets$frames$$$class__3_Frame_123 = NULL;
goto try_return_handler_16;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_websockets$frames$$$class__3_Frame_123);
locals_websockets$frames$$$class__3_Frame_123 = NULL;
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
exception_lineno = 123;
goto try_except_handler_15;
outline_result_6:;
frame_frame_websockets$frames->m_frame.f_lineno = 122;
tmp_assign_source_60 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_dataclass, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_15;
}
UPDATE_STRING_DICT1(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_Frame, tmp_assign_source_60);
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
{
PyObject *tmp_outline_return_value_4;
{
PyObject *tmp_assign_source_62;
tmp_assign_source_62 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_62;
}
{
PyObject *tmp_assign_source_63;
tmp_assign_source_63 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_63;
}
// Tried code:
{
PyObject *tmp_assign_source_64;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
tmp_called_instance_2 = module_var_accessor_websockets$frames$dataclasses(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclasses);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 352;

    goto try_except_handler_18;
}
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_websockets$frames$$$class__4_Close_353 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
tmp_dictset_value = mod_consts.const_str_digest_82533edc83fe47d73aaabae67403b14e;
tmp_result = DICT_SET_ITEM(locals_websockets$frames$$$class__4_Close_353, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_e84271dbdf81a9de5f8debbad5f985c2;
tmp_result = DICT_SET_ITEM(locals_websockets$frames$$$class__4_Close_353, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_Close;
tmp_result = DICT_SET_ITEM(locals_websockets$frames$$$class__4_Close_353, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_353;
tmp_result = DICT_SET_ITEM(locals_websockets$frames$$$class__4_Close_353, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_result = DICT_SET_ITEM(locals_websockets$frames$$$class__4_Close_353, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_websockets$frames$$$class__4_Close_5 = MAKE_CLASS_FRAME(tstate, code_objects_6f7346223fa282f970310913da43ca5b, module_websockets$frames, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$frames$$$class__4_Close_5);
assert(Py_REFCNT(frame_frame_websockets$frames$$$class__4_Close_5) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_8;
PyObject *tmp_ass_subscribed_8;
PyObject *tmp_ass_subscript_8;
tmp_ass_subvalue_8 = mod_consts.const_str_digest_f44d0b180a5111dd8af2567160eaf50f;
tmp_ass_subscribed_8 = DICT_GET_ITEM0(tstate, locals_websockets$frames$$$class__4_Close_353, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 363;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_ass_subscribed_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscript_8 = mod_consts.const_str_plain_code;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_ass_subvalue_9;
PyObject *tmp_ass_subscribed_9;
PyObject *tmp_ass_subscript_9;
tmp_ass_subvalue_9 = mod_consts.const_str_plain_str;
tmp_ass_subscribed_9 = DICT_GET_ITEM0(tstate, locals_websockets$frames$$$class__4_Close_353, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 364;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_ass_subscribed_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscript_9 = mod_consts.const_str_plain_reason;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$frames$$$class__4_Close_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$frames$$$class__4_Close_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$frames$$$class__4_Close_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$frames$$$class__4_Close_5,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_websockets$frames$$$class__4_Close_5);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_20;
skip_nested_handling_4:;
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_websockets$frames$$$function__5___str__(tstate, tmp_annotations_5);

tmp_result = DICT_SET_ITEM(locals_websockets$frames$$$class__4_Close_353, mod_consts.const_str_plain___str__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_classmethod_arg_2;
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_3929f444c769e7f99db53c6292d37cff);

tmp_classmethod_arg_2 = MAKE_FUNCTION_websockets$frames$$$function__6_parse(tstate, tmp_annotations_6);

tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_2);
CHECK_OBJECT(tmp_classmethod_arg_2);
Py_DECREF(tmp_classmethod_arg_2);
assert(!(tmp_dictset_value == NULL));
tmp_result = DICT_SET_ITEM(locals_websockets$frames$$$class__4_Close_353, mod_consts.const_str_plain_parse, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_2366cb3246e451cebe4ed21878030053);

tmp_dictset_value = MAKE_FUNCTION_websockets$frames$$$function__7_serialize(tstate, tmp_annotations_7);

tmp_result = DICT_SET_ITEM(locals_websockets$frames$$$class__4_Close_353, mod_consts.const_str_plain_serialize, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_websockets$frames$$$function__8_check(tstate, tmp_annotations_8);

tmp_result = DICT_SET_ITEM(locals_websockets$frames$$$class__4_Close_353, mod_consts.const_str_plain_check, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = const_tuple_empty;
tmp_result = DICT_SET_ITEM(locals_websockets$frames$$$class__4_Close_353, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_65;
PyObject *tmp_called_value_7;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_12;
PyObject *tmp_kwargs_value_6;
tmp_called_value_7 = (PyObject *)&PyType_Type;
tmp_tuple_element_12 = mod_consts.const_str_plain_Close;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_12);
tmp_tuple_element_12 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_12);
tmp_tuple_element_12 = locals_websockets$frames$$$class__4_Close_353;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_websockets$frames->m_frame.f_lineno = 353;
tmp_assign_source_65 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;

    goto try_except_handler_20;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_65;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_args_element_value_2 = outline_3_var___class__;
Py_INCREF(tmp_args_element_value_2);
goto try_return_handler_20;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_20:;
Py_DECREF(locals_websockets$frames$$$class__4_Close_353);
locals_websockets$frames$$$class__4_Close_353 = NULL;
goto try_return_handler_19;
// Exception handler code:
try_except_handler_20:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_websockets$frames$$$class__4_Close_353);
locals_websockets$frames$$$class__4_Close_353 = NULL;
// Re-raise.
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto try_except_handler_19;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_19:;
CHECK_OBJECT(outline_3_var___class__);
CHECK_OBJECT(outline_3_var___class__);
Py_DECREF(outline_3_var___class__);
outline_3_var___class__ = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_19;
exception_lineno = exception_keeper_lineno_19;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 353;
goto try_except_handler_18;
outline_result_8:;
frame_frame_websockets$frames->m_frame.f_lineno = 352;
tmp_assign_source_64 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_dataclass, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;

    goto try_except_handler_18;
}
UPDATE_STRING_DICT1(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_Close, tmp_assign_source_64);
}
goto try_end_12;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_20 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_20 = exception_state;
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
exception_state = exception_keeper_name_20;
exception_lineno = exception_keeper_lineno_20;

goto frame_exception_exit_1;
// End of try:
try_end_12:;
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
PyObject *tmp_assign_source_66;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_12 = const_str_empty;
tmp_globals_arg_value_10 = (PyObject *)moduledict_websockets$frames;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_extensions_tuple;
tmp_level_value_10 = const_int_pos_1;
frame_frame_websockets$frames->m_frame.f_lineno = 431;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_66 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_websockets$frames,
        mod_consts.const_str_plain_extensions,
        const_int_0
    );
} else {
    tmp_assign_source_66 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_extensions);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$frames, (Nuitka_StringObject *)mod_consts.const_str_plain_extensions, tmp_assign_source_66);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_5;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$frames, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$frames->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$frames, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_websockets$frames);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_5:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("websockets$frames", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "websockets.frames" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_websockets$frames);
    return module_websockets$frames;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websockets$frames, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("websockets$frames", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

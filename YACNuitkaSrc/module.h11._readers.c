/* Generated code for Python module 'h11$_readers'
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



/* The "module_h11$_readers" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_h11$_readers;
PyDictObject *moduledict_h11$_readers;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_lines;
PyObject *const_str_plain_obs_fold_re;
PyObject *const_str_plain_match;
PyObject *const_str_plain_last;
PyObject *const_str_plain_LocalProtocolError;
PyObject *const_tuple_str_digest_3a746acbac227ce3ffc78c4e9823d56f_tuple;
PyObject *const_bytes_chr_32;
PyObject *const_str_plain__obsolete_line_fold;
PyObject *const_str_plain_validate;
PyObject *const_str_plain_header_field_re;
PyObject *const_str_digest_a8608b2a1090743b4c2b055e427bba45;
PyObject *const_str_plain_field_name;
PyObject *const_str_plain_field_value;
PyObject *const_str_plain__decode_header_lines;
PyObject *const_str_plain_maybe_extract_lines;
PyObject *const_str_digest_8b7f83ed1dc443aced977410d0e1f002;
PyObject *const_tuple_str_digest_af289ab8c3108755f7adbca84f029e8b_tuple;
PyObject *const_tuple_str_digest_ee5bdb9d82a7848fcee7e5f0ffb8d1ea_tuple;
PyObject *const_str_plain_request_line_re;
PyObject *const_str_digest_1092fe897d7dc8896df3316eb4ebe07f;
PyObject *const_str_plain_Request;
PyObject *const_str_plain_headers;
PyObject *const_slice_int_pos_1_none_none;
PyObject *const_str_plain__parsed;
PyObject *const_tuple_str_digest_b94af194e0639e009ad01d6e57f0708a_tuple;
PyObject *const_str_plain_status_line_re;
PyObject *const_str_digest_4f5e3f8cda3539b2f6bf07c847e8471b;
PyObject *const_str_plain_http_version;
PyObject *const_bytes_digest_f5f844450bde69e5c8b575fa76761105;
PyObject *const_str_plain_reason;
PyObject *const_str_plain_status_code;
PyObject *const_int_pos_200;
PyObject *const_str_plain_InformationalResponse;
PyObject *const_str_plain_Response;
PyObject *const_tuple_27894a958718bb7723aac338a9ee8984_tuple;
PyObject *const_str_plain__length;
PyObject *const_str_plain__remaining;
PyObject *const_str_plain_EndOfMessage;
PyObject *const_str_plain_maybe_extract_at_most;
PyObject *const_str_plain_Data;
PyObject *const_tuple_str_plain_data_tuple;
PyObject *const_str_plain_RemoteProtocolError;
PyObject *const_str_digest_d8e60c8a81e9616a8daf4cc4f9130394;
PyObject *const_str_plain__bytes_in_chunk;
PyObject *const_str_plain__bytes_to_discard;
PyObject *const_str_plain__reading_trailer;
PyObject *const_tuple_str_plain_headers_tuple;
PyObject *const_str_digest_ca3c72539870b895e39c47d423c2b56f;
PyObject *const_str_digest_c68960f33a42c0c922ccf0e2d9baeb28;
PyObject *const_str_chr_41;
PyObject *const_str_plain_maybe_extract_next_line;
PyObject *const_str_plain_chunk_header_re;
PyObject *const_str_digest_a48e8dbbdcfbbf16e1c987a7fb67cad9;
PyObject *const_str_plain_chunk_size;
PyObject *const_int_pos_16;
PyObject *const_bytes_digest_e22048e4de62b4d2ac355aed7a0f9014;
PyObject *const_tuple_str_plain_data_str_plain_chunk_start_str_plain_chunk_end_tuple;
PyObject *const_tuple_str_digest_72de81baa04d79000bd53ad0426bdb3d_tuple;
PyObject *const_tuple_int_hex_3b9ac9ff_tuple;
PyObject *const_tuple_str_digest_f3f4fc87c4cacebf171b0bd637d35eeb_tuple;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_re;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_Callable;
PyObject *const_str_plain_Dict;
PyObject *const_str_plain_Iterable;
PyObject *const_str_plain_NoReturn;
PyObject *const_str_plain_Optional;
PyObject *const_str_plain_Tuple;
PyObject *const_str_plain_Type;
PyObject *const_str_plain_Union;
PyObject *const_str_plain__abnf;
PyObject *const_tuple_fe7e4192cb3dfe1f18607098411d3e6b_tuple;
PyObject *const_str_plain_chunk_header;
PyObject *const_str_plain_header_field;
PyObject *const_str_plain_request_line;
PyObject *const_str_plain_status_line;
PyObject *const_str_plain__events;
PyObject *const_tuple_efbdd6c134a960a78e12065e5a1cb432_tuple;
PyObject *const_str_plain__receivebuffer;
PyObject *const_tuple_str_plain_ReceiveBuffer_tuple;
PyObject *const_str_plain_ReceiveBuffer;
PyObject *const_str_plain__state;
PyObject *const_tuple_043237ef64c4a45c268a8188784fdf63_tuple;
PyObject *const_str_plain_CLIENT;
PyObject *const_str_plain_CLOSED;
PyObject *const_str_plain_DONE;
PyObject *const_str_plain_IDLE;
PyObject *const_str_plain_MUST_CLOSE;
PyObject *const_str_plain_SEND_BODY;
PyObject *const_str_plain_SEND_RESPONSE;
PyObject *const_str_plain_SERVER;
PyObject *const_str_plain__util;
PyObject *const_tuple_dd4a4d0f8e8b510647911d4aa7c07939_tuple;
PyObject *const_str_plain_Sentinel;
PyObject *const_str_plain_READERS;
PyObject *const_str_plain_encode;
PyObject *const_tuple_str_plain_ascii_tuple;
PyObject *const_tuple_bytes_digest_6326e2c3089fa659735b785efc488f71_tuple;
PyObject *const_str_plain_return;
PyObject *const_tuple_type_bytes_type_bytes_tuple;
PyObject *const_str_plain_buf;
PyObject *const_str_plain_maybe_read_from_IDLE_client;
PyObject *const_str_plain_maybe_read_from_SEND_RESPONSE_server;
PyObject *const_str_digest_dc420b80dc24d6ab2695938931bd015b;
PyObject *const_str_plain_ContentLengthReader;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_122;
PyObject *const_str_plain___firstlineno__;
PyObject *const_dict_040d82125f13242863458fa14c92a38c;
PyObject *const_str_digest_d8c7a8e9f1a95d58a3d570c955651503;
PyObject *const_str_plain___call__;
PyObject *const_str_digest_ee6ac8876a20c1ef358ddc5e37ae02a9;
PyObject *const_str_plain_read_eof;
PyObject *const_str_digest_fca632450d4364a02744720e7751fa83;
PyObject *const_tuple_str_plain__length_str_plain__remaining_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain_ChunkedReader;
PyObject *const_int_pos_148;
PyObject *const_dict_056a293e2058d56276328e53ff09a8b9;
PyObject *const_str_digest_9ddd460e6f620c6553e7cb8c59642c6f;
PyObject *const_str_digest_705b601857c83a0449d283722be982c8;
PyObject *const_str_digest_51b61565b3e7dc66346d99eb934aff4f;
PyObject *const_tuple_3a4a1cb4d5160943baec2af7a988e62f_tuple;
PyObject *const_str_plain_Http10Reader;
PyObject *const_int_pos_213;
PyObject *const_str_digest_63fb1ef7d2f572386e91d727302beb71;
PyObject *const_str_digest_1197ca4af03bfca107b5561eefdf0e26;
PyObject *const_str_plain_expect_nothing;
PyObject *const_str_plain_ReadersType;
PyObject *const_str_plain_chunked;
PyObject *const_str_digest_db51a9f73f100ec22d319265c4417c10;
PyObject *const_str_digest_a7fb7ceaaf12d8190808c4881583e156;
PyObject *const_str_digest_2c784a9eb46dde930239004f745822c1;
PyObject *const_str_digest_cf1e81a9c197057eb54f46410a437e59;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_c971179a369a163e473dc572f471113a_tuple;
PyObject *const_tuple_str_plain_self_str_plain_buf_str_plain_data_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_length_tuple;
PyObject *const_tuple_str_plain_lines_str_plain_line_str_plain_matches_tuple;
PyObject *const_tuple_8b9580fd10a06b9d9f6e0efb6c51260c_tuple;
PyObject *const_tuple_str_plain_buf_tuple;
PyObject *const_tuple_str_plain_buf_str_plain_lines_str_plain_matches_tuple;
PyObject *const_tuple_1ba2482366c0c3df0f18387d31e0c391_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[146];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("h11._readers"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_lines);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_obs_fold_re);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_match);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_last);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_LocalProtocolError);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_3a746acbac227ce3ffc78c4e9823d56f_tuple);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_bytes_chr_32);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain__obsolete_line_fold);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_validate);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_header_field_re);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_digest_a8608b2a1090743b4c2b055e427bba45);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_field_name);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_field_value);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain__decode_header_lines);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_maybe_extract_lines);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_digest_8b7f83ed1dc443aced977410d0e1f002);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_af289ab8c3108755f7adbca84f029e8b_tuple);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ee5bdb9d82a7848fcee7e5f0ffb8d1ea_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_request_line_re);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_1092fe897d7dc8896df3316eb4ebe07f);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_Request);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_headers);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_none_none);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain__parsed);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b94af194e0639e009ad01d6e57f0708a_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_status_line_re);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_4f5e3f8cda3539b2f6bf07c847e8471b);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_http_version);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_f5f844450bde69e5c8b575fa76761105);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_reason);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_status_code);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_int_pos_200);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_InformationalResponse);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_Response);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_tuple_27894a958718bb7723aac338a9ee8984_tuple);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain__length);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain__remaining);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_EndOfMessage);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_maybe_extract_at_most);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_Data);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_data_tuple);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_RemoteProtocolError);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_d8e60c8a81e9616a8daf4cc4f9130394);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain__bytes_in_chunk);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain__bytes_to_discard);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain__reading_trailer);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_headers_tuple);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_ca3c72539870b895e39c47d423c2b56f);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_c68960f33a42c0c922ccf0e2d9baeb28);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_chr_41);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_maybe_extract_next_line);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_chunk_header_re);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_a48e8dbbdcfbbf16e1c987a7fb67cad9);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_chunk_size);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_int_pos_16);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_e22048e4de62b4d2ac355aed7a0f9014);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_data_str_plain_chunk_start_str_plain_chunk_end_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_72de81baa04d79000bd53ad0426bdb3d_tuple);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_tuple_int_hex_3b9ac9ff_tuple);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_f3f4fc87c4cacebf171b0bd637d35eeb_tuple);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_re);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_Callable);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_Dict);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_NoReturn);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_Optional);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_Tuple);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_Type);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain__abnf);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_fe7e4192cb3dfe1f18607098411d3e6b_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_chunk_header);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_header_field);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_request_line);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_status_line);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain__events);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_tuple_efbdd6c134a960a78e12065e5a1cb432_tuple);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain__receivebuffer);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ReceiveBuffer_tuple);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReceiveBuffer);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain__state);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_043237ef64c4a45c268a8188784fdf63_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_CLIENT);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_CLOSED);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_DONE);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_IDLE);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_MUST_CLOSE);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_SEND_BODY);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_SEND_RESPONSE);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_SERVER);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain__util);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_tuple_dd4a4d0f8e8b510647911d4aa7c07939_tuple);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_Sentinel);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_READERS);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ascii_tuple);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_tuple_bytes_digest_6326e2c3089fa659735b785efc488f71_tuple);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_tuple_type_bytes_type_bytes_tuple);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_buf);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_maybe_read_from_IDLE_client);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_maybe_read_from_SEND_RESPONSE_server);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc420b80dc24d6ab2695938931bd015b);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_ContentLengthReader);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_int_pos_122);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_dict_040d82125f13242863458fa14c92a38c);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_digest_d8c7a8e9f1a95d58a3d570c955651503);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain___call__);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_digest_ee6ac8876a20c1ef358ddc5e37ae02a9);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_read_eof);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_fca632450d4364a02744720e7751fa83);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__length_str_plain__remaining_tuple);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChunkedReader);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_int_pos_148);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_digest_9ddd460e6f620c6553e7cb8c59642c6f);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_digest_705b601857c83a0449d283722be982c8);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_digest_51b61565b3e7dc66346d99eb934aff4f);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_tuple_3a4a1cb4d5160943baec2af7a988e62f_tuple);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_Http10Reader);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_int_pos_213);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_63fb1ef7d2f572386e91d727302beb71);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_digest_1197ca4af03bfca107b5561eefdf0e26);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_expect_nothing);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReadersType);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_chunked);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_digest_db51a9f73f100ec22d319265c4417c10);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_digest_a7fb7ceaaf12d8190808c4881583e156);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_digest_2c784a9eb46dde930239004f745822c1);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_digest_cf1e81a9c197057eb54f46410a437e59);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_tuple_c971179a369a163e473dc572f471113a_tuple);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_buf_str_plain_data_tuple);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_length_tuple);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_lines_str_plain_line_str_plain_matches_tuple);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_tuple_8b9580fd10a06b9d9f6e0efb6c51260c_tuple);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_buf_tuple);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_buf_str_plain_lines_str_plain_matches_tuple);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_tuple_1ba2482366c0c3df0f18387d31e0c391_tuple);
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
void checkModuleConstants_h11$_readers(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_lines));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lines);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_obs_fold_re));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_obs_fold_re);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_match));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_match);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_last));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_last);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_LocalProtocolError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LocalProtocolError);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_3a746acbac227ce3ffc78c4e9823d56f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_3a746acbac227ce3ffc78c4e9823d56f_tuple);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_bytes_chr_32));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_chr_32);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain__obsolete_line_fold));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__obsolete_line_fold);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_validate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_validate);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_header_field_re));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_header_field_re);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_digest_a8608b2a1090743b4c2b055e427bba45));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a8608b2a1090743b4c2b055e427bba45);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_field_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_field_name);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_field_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_field_value);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain__decode_header_lines));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__decode_header_lines);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_maybe_extract_lines));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_maybe_extract_lines);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_digest_8b7f83ed1dc443aced977410d0e1f002));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8b7f83ed1dc443aced977410d0e1f002);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_af289ab8c3108755f7adbca84f029e8b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_af289ab8c3108755f7adbca84f029e8b_tuple);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ee5bdb9d82a7848fcee7e5f0ffb8d1ea_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_ee5bdb9d82a7848fcee7e5f0ffb8d1ea_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_request_line_re));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_request_line_re);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_1092fe897d7dc8896df3316eb4ebe07f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1092fe897d7dc8896df3316eb4ebe07f);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_Request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Request);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_headers);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_none_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_int_pos_1_none_none);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain__parsed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__parsed);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b94af194e0639e009ad01d6e57f0708a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_b94af194e0639e009ad01d6e57f0708a_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_status_line_re));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_status_line_re);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_4f5e3f8cda3539b2f6bf07c847e8471b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4f5e3f8cda3539b2f6bf07c847e8471b);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_http_version));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_http_version);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_f5f844450bde69e5c8b575fa76761105));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_digest_f5f844450bde69e5c8b575fa76761105);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_reason));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reason);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_status_code));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_status_code);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_int_pos_200));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_200);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_InformationalResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InformationalResponse);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_Response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Response);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_tuple_27894a958718bb7723aac338a9ee8984_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_27894a958718bb7723aac338a9ee8984_tuple);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain__length));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__length);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain__remaining));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__remaining);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_EndOfMessage));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EndOfMessage);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_maybe_extract_at_most));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_maybe_extract_at_most);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_Data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Data);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_data_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_data_tuple);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_RemoteProtocolError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RemoteProtocolError);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_d8e60c8a81e9616a8daf4cc4f9130394));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d8e60c8a81e9616a8daf4cc4f9130394);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain__bytes_in_chunk));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__bytes_in_chunk);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain__bytes_to_discard));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__bytes_to_discard);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain__reading_trailer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__reading_trailer);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_headers_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_headers_tuple);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_ca3c72539870b895e39c47d423c2b56f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ca3c72539870b895e39c47d423c2b56f);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_c68960f33a42c0c922ccf0e2d9baeb28));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c68960f33a42c0c922ccf0e2d9baeb28);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_chr_41));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_41);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_maybe_extract_next_line));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_maybe_extract_next_line);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_chunk_header_re));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chunk_header_re);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_a48e8dbbdcfbbf16e1c987a7fb67cad9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a48e8dbbdcfbbf16e1c987a7fb67cad9);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_chunk_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chunk_size);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_int_pos_16));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_16);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_e22048e4de62b4d2ac355aed7a0f9014));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_digest_e22048e4de62b4d2ac355aed7a0f9014);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_data_str_plain_chunk_start_str_plain_chunk_end_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_data_str_plain_chunk_start_str_plain_chunk_end_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_72de81baa04d79000bd53ad0426bdb3d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_72de81baa04d79000bd53ad0426bdb3d_tuple);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_tuple_int_hex_3b9ac9ff_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_hex_3b9ac9ff_tuple);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_f3f4fc87c4cacebf171b0bd637d35eeb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_f3f4fc87c4cacebf171b0bd637d35eeb_tuple);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_re));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_re);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_Callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Callable);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_Dict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Dict);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Iterable);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_NoReturn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NoReturn);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_Optional));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Optional);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_Tuple));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Tuple);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_Type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Type);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain__abnf));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__abnf);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_fe7e4192cb3dfe1f18607098411d3e6b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_fe7e4192cb3dfe1f18607098411d3e6b_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_chunk_header));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chunk_header);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_header_field));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_header_field);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_request_line));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_request_line);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_status_line));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_status_line);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain__events));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__events);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_tuple_efbdd6c134a960a78e12065e5a1cb432_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_efbdd6c134a960a78e12065e5a1cb432_tuple);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain__receivebuffer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__receivebuffer);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ReceiveBuffer_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ReceiveBuffer_tuple);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReceiveBuffer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ReceiveBuffer);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain__state));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__state);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_043237ef64c4a45c268a8188784fdf63_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_043237ef64c4a45c268a8188784fdf63_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_CLIENT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CLIENT);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_CLOSED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CLOSED);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_DONE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DONE);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_IDLE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IDLE);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_MUST_CLOSE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MUST_CLOSE);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_SEND_BODY));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SEND_BODY);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_SEND_RESPONSE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SEND_RESPONSE);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_SERVER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SERVER);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain__util));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__util);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_tuple_dd4a4d0f8e8b510647911d4aa7c07939_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_dd4a4d0f8e8b510647911d4aa7c07939_tuple);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_Sentinel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Sentinel);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_READERS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_READERS);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encode);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ascii_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ascii_tuple);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_tuple_bytes_digest_6326e2c3089fa659735b785efc488f71_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bytes_digest_6326e2c3089fa659735b785efc488f71_tuple);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_tuple_type_bytes_type_bytes_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_bytes_type_bytes_tuple);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_buf));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_buf);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_maybe_read_from_IDLE_client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_maybe_read_from_IDLE_client);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_maybe_read_from_SEND_RESPONSE_server));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_maybe_read_from_SEND_RESPONSE_server);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc420b80dc24d6ab2695938931bd015b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc420b80dc24d6ab2695938931bd015b);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_ContentLengthReader));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ContentLengthReader);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_int_pos_122));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_122);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_dict_040d82125f13242863458fa14c92a38c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_040d82125f13242863458fa14c92a38c);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_digest_d8c7a8e9f1a95d58a3d570c955651503));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d8c7a8e9f1a95d58a3d570c955651503);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain___call__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___call__);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_digest_ee6ac8876a20c1ef358ddc5e37ae02a9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ee6ac8876a20c1ef358ddc5e37ae02a9);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_read_eof));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_read_eof);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_fca632450d4364a02744720e7751fa83));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fca632450d4364a02744720e7751fa83);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__length_str_plain__remaining_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__length_str_plain__remaining_tuple);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChunkedReader));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChunkedReader);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_int_pos_148));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_148);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_digest_9ddd460e6f620c6553e7cb8c59642c6f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9ddd460e6f620c6553e7cb8c59642c6f);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_digest_705b601857c83a0449d283722be982c8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_705b601857c83a0449d283722be982c8);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_digest_51b61565b3e7dc66346d99eb934aff4f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_51b61565b3e7dc66346d99eb934aff4f);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_tuple_3a4a1cb4d5160943baec2af7a988e62f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_3a4a1cb4d5160943baec2af7a988e62f_tuple);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_Http10Reader));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Http10Reader);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_int_pos_213));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_213);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_63fb1ef7d2f572386e91d727302beb71));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_63fb1ef7d2f572386e91d727302beb71);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_digest_1197ca4af03bfca107b5561eefdf0e26));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1197ca4af03bfca107b5561eefdf0e26);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_expect_nothing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_expect_nothing);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReadersType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ReadersType);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_chunked));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chunked);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_digest_db51a9f73f100ec22d319265c4417c10));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_db51a9f73f100ec22d319265c4417c10);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_digest_a7fb7ceaaf12d8190808c4881583e156));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a7fb7ceaaf12d8190808c4881583e156);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_digest_2c784a9eb46dde930239004f745822c1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2c784a9eb46dde930239004f745822c1);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_digest_cf1e81a9c197057eb54f46410a437e59));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cf1e81a9c197057eb54f46410a437e59);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_tuple_c971179a369a163e473dc572f471113a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c971179a369a163e473dc572f471113a_tuple);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_buf_str_plain_data_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_buf_str_plain_data_tuple);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_length_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_length_tuple);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_lines_str_plain_line_str_plain_matches_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_lines_str_plain_line_str_plain_matches_tuple);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_tuple_8b9580fd10a06b9d9f6e0efb6c51260c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8b9580fd10a06b9d9f6e0efb6c51260c_tuple);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_buf_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_buf_tuple);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_buf_str_plain_lines_str_plain_matches_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_buf_str_plain_lines_str_plain_matches_tuple);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_tuple_1ba2482366c0c3df0f18387d31e0c391_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1ba2482366c0c3df0f18387d31e0c391_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 48
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
static PyObject *module_var_accessor_h11$_readers$Any(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$CLIENT(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_CLIENT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_CLIENT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_CLIENT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CLIENT);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$CLOSED(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_CLOSED);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_CLOSED);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_CLOSED);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CLOSED);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$Callable(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$ChunkedReader(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_ChunkedReader);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ChunkedReader);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ChunkedReader, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ChunkedReader);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ChunkedReader, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_ChunkedReader);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_ChunkedReader);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ChunkedReader);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$ContentLengthReader(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_ContentLengthReader);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ContentLengthReader);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ContentLengthReader, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ContentLengthReader);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ContentLengthReader, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_ContentLengthReader);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_ContentLengthReader);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ContentLengthReader);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$DONE(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_DONE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_DONE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_DONE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DONE);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$Data(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Data);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Data);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Data);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Data);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$Dict(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Dict);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Dict);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Dict);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Dict);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$EndOfMessage(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_EndOfMessage);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_EndOfMessage);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_EndOfMessage);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_EndOfMessage);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$Http10Reader(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Http10Reader);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Http10Reader);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Http10Reader, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Http10Reader);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Http10Reader, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Http10Reader);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Http10Reader);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Http10Reader);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$IDLE(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_IDLE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IDLE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IDLE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IDLE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IDLE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_IDLE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_IDLE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_IDLE);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$InformationalResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_InformationalResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_InformationalResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_InformationalResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_InformationalResponse);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$Iterable(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Iterable);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Iterable, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Iterable);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Iterable, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$LocalProtocolError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_LocalProtocolError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_LocalProtocolError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_LocalProtocolError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_LocalProtocolError);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$MUST_CLOSE(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_MUST_CLOSE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MUST_CLOSE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MUST_CLOSE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MUST_CLOSE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MUST_CLOSE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_MUST_CLOSE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_MUST_CLOSE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MUST_CLOSE);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$NoReturn(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_NoReturn);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NoReturn);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NoReturn, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NoReturn);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NoReturn, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_NoReturn);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_NoReturn);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_NoReturn);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$Optional(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$ReadersType(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadersType);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadersType);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadersType);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadersType);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$ReceiveBuffer(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_ReceiveBuffer);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_ReceiveBuffer);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_ReceiveBuffer);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ReceiveBuffer);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$RemoteProtocolError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_RemoteProtocolError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_RemoteProtocolError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_RemoteProtocolError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RemoteProtocolError);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$Request(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Request);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Request);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Request);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Request);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$Response(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Response);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Response);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Response);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Response);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$SEND_BODY(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_SEND_BODY);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_SEND_BODY);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_SEND_BODY);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SEND_BODY);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$SEND_RESPONSE(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_SEND_RESPONSE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SEND_RESPONSE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SEND_RESPONSE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SEND_RESPONSE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SEND_RESPONSE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_SEND_RESPONSE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_SEND_RESPONSE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SEND_RESPONSE);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$SERVER(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_SERVER);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_SERVER);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_SERVER);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SERVER);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$Sentinel(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Sentinel);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Sentinel);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Sentinel);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Sentinel);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$Tuple(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Tuple);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Tuple);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Tuple);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Tuple);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$Type(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Type);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Type);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Type);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Type);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$Union(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$_decode_header_lines(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain__decode_header_lines);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__decode_header_lines);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__decode_header_lines, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__decode_header_lines);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__decode_header_lines, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain__decode_header_lines);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain__decode_header_lines);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__decode_header_lines);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$_obsolete_line_fold(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain__obsolete_line_fold);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__obsolete_line_fold);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__obsolete_line_fold, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__obsolete_line_fold);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__obsolete_line_fold, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain__obsolete_line_fold);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain__obsolete_line_fold);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__obsolete_line_fold);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$chunk_header(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_chunk_header);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_chunk_header);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_chunk_header, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_chunk_header);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_chunk_header, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_chunk_header);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_chunk_header);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_chunk_header);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$chunk_header_re(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_chunk_header_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_chunk_header_re);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_chunk_header_re, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_chunk_header_re);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_chunk_header_re, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_chunk_header_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_chunk_header_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_chunk_header_re);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$expect_nothing(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_nothing);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_expect_nothing);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_expect_nothing, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_expect_nothing);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_expect_nothing, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_nothing);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_nothing);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_nothing);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$header_field(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_header_field);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_header_field);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_header_field, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_header_field);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_header_field, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_header_field);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_header_field);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_header_field);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$header_field_re(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_header_field_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_header_field_re);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_header_field_re, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_header_field_re);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_header_field_re, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_header_field_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_header_field_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_header_field_re);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$maybe_read_from_IDLE_client(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_maybe_read_from_IDLE_client);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_maybe_read_from_IDLE_client);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_maybe_read_from_IDLE_client, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_maybe_read_from_IDLE_client);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_maybe_read_from_IDLE_client, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_maybe_read_from_IDLE_client);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_maybe_read_from_IDLE_client);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_maybe_read_from_IDLE_client);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$maybe_read_from_SEND_RESPONSE_server(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_maybe_read_from_SEND_RESPONSE_server);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_maybe_read_from_SEND_RESPONSE_server);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_maybe_read_from_SEND_RESPONSE_server, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_maybe_read_from_SEND_RESPONSE_server);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_maybe_read_from_SEND_RESPONSE_server, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_maybe_read_from_SEND_RESPONSE_server);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_maybe_read_from_SEND_RESPONSE_server);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_maybe_read_from_SEND_RESPONSE_server);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$obs_fold_re(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_obs_fold_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_obs_fold_re);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_obs_fold_re, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_obs_fold_re);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_obs_fold_re, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_obs_fold_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_obs_fold_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_obs_fold_re);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$re(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_re);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_re, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_re);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_re, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$request_line(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_request_line);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_request_line);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_request_line, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_request_line);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_request_line, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_request_line);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_request_line);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_request_line);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$request_line_re(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_request_line_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_request_line_re);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_request_line_re, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_request_line_re);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_request_line_re, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_request_line_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_request_line_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_request_line_re);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$status_line(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_status_line);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_status_line);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_status_line, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_status_line);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_status_line, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_status_line);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_status_line);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_status_line);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$status_line_re(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_status_line_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_status_line_re);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_status_line_re, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_status_line_re);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_status_line_re, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_status_line_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_status_line_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_status_line_re);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_readers$validate(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_readers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_readers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_validate);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_readers->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_validate);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_validate, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_validate);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_validate, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_validate);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_validate);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_validate);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_26f6f61b5224032fbff02c0f8435328e;
static PyCodeObject *code_objects_e10f6264c53cc719c694f8f062342757;
static PyCodeObject *code_objects_debf120ac39347ce0966d75eeec0e4ec;
static PyCodeObject *code_objects_29c4a4d5ea1e2ed27de148b6c41ab4ce;
static PyCodeObject *code_objects_c98008b4d3990d0549fbb1393c2dfdbe;
static PyCodeObject *code_objects_f6457716f2d11dbd15de28c2edd930e0;
static PyCodeObject *code_objects_e7baad14cf9683c97b861435f303a328;
static PyCodeObject *code_objects_12de1bd254484339d91961cb202d41be;
static PyCodeObject *code_objects_c7ae940876eca5b6cbe5a8d6400c8ba2;
static PyCodeObject *code_objects_48a5abbd869d14c561d0da678f2daf3e;
static PyCodeObject *code_objects_25f879cd381be32102a41b836a1fbcc4;
static PyCodeObject *code_objects_907a3bebe79bdbc8feaf3f284b1ee3f8;
static PyCodeObject *code_objects_0308563bd4a9e3322f2a3e8903ca96b8;
static PyCodeObject *code_objects_6dcc3ae9e7afd6cdce578a44a6151c05;
static PyCodeObject *code_objects_f5af2b1bc6d427bc87f0fdd2cfb62238;
static PyCodeObject *code_objects_6762d52e491c437c195f5124568c5131;
static PyCodeObject *code_objects_83ebe0a33bbfc4d9d1f402f0bc69ab49;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_2c784a9eb46dde930239004f745822c1); CHECK_OBJECT(module_filename_obj);
code_objects_26f6f61b5224032fbff02c0f8435328e = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_cf1e81a9c197057eb54f46410a437e59, mod_consts.const_str_digest_cf1e81a9c197057eb54f46410a437e59, NULL, NULL, 0, 0, 0);
code_objects_e10f6264c53cc719c694f8f062342757 = MAKE_CODE_OBJECT(module_filename_obj, 148, 0, mod_consts.const_str_plain_ChunkedReader, mod_consts.const_str_plain_ChunkedReader, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_debf120ac39347ce0966d75eeec0e4ec = MAKE_CODE_OBJECT(module_filename_obj, 122, 0, mod_consts.const_str_plain_ContentLengthReader, mod_consts.const_str_plain_ContentLengthReader, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_29c4a4d5ea1e2ed27de148b6c41ab4ce = MAKE_CODE_OBJECT(module_filename_obj, 213, 0, mod_consts.const_str_plain_Http10Reader, mod_consts.const_str_plain_Http10Reader, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_c98008b4d3990d0549fbb1393c2dfdbe = MAKE_CODE_OBJECT(module_filename_obj, 156, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___call__, mod_consts.const_str_digest_705b601857c83a0449d283722be982c8, mod_consts.const_tuple_c971179a369a163e473dc572f471113a_tuple, NULL, 2, 0, 0);
code_objects_f6457716f2d11dbd15de28c2edd930e0 = MAKE_CODE_OBJECT(module_filename_obj, 127, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___call__, mod_consts.const_str_digest_ee6ac8876a20c1ef358ddc5e37ae02a9, mod_consts.const_tuple_str_plain_self_str_plain_buf_str_plain_data_tuple, NULL, 2, 0, 0);
code_objects_e7baad14cf9683c97b861435f303a328 = MAKE_CODE_OBJECT(module_filename_obj, 214, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___call__, mod_consts.const_str_digest_63fb1ef7d2f572386e91d727302beb71, mod_consts.const_tuple_str_plain_self_str_plain_buf_str_plain_data_tuple, NULL, 2, 0, 0);
code_objects_12de1bd254484339d91961cb202d41be = MAKE_CODE_OBJECT(module_filename_obj, 149, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_9ddd460e6f620c6553e7cb8c59642c6f, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_c7ae940876eca5b6cbe5a8d6400c8ba2 = MAKE_CODE_OBJECT(module_filename_obj, 123, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_d8c7a8e9f1a95d58a3d570c955651503, mod_consts.const_tuple_str_plain_self_str_plain_length_tuple, NULL, 2, 0, 0);
code_objects_48a5abbd869d14c561d0da678f2daf3e = MAKE_CODE_OBJECT(module_filename_obj, 64, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__decode_header_lines, mod_consts.const_str_plain__decode_header_lines, mod_consts.const_tuple_str_plain_lines_str_plain_line_str_plain_matches_tuple, NULL, 1, 0, 0);
code_objects_25f879cd381be32102a41b836a1fbcc4 = MAKE_CODE_OBJECT(module_filename_obj, 43, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__obsolete_line_fold, mod_consts.const_str_plain__obsolete_line_fold, mod_consts.const_tuple_8b9580fd10a06b9d9f6e0efb6c51260c_tuple, NULL, 1, 0, 0);
code_objects_907a3bebe79bdbc8feaf3f284b1ee3f8 = MAKE_CODE_OBJECT(module_filename_obj, 224, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_expect_nothing, mod_consts.const_str_plain_expect_nothing, mod_consts.const_tuple_str_plain_buf_tuple, NULL, 1, 0, 0);
code_objects_0308563bd4a9e3322f2a3e8903ca96b8 = MAKE_CODE_OBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_maybe_read_from_IDLE_client, mod_consts.const_str_plain_maybe_read_from_IDLE_client, mod_consts.const_tuple_str_plain_buf_str_plain_lines_str_plain_matches_tuple, NULL, 1, 0, 0);
code_objects_6dcc3ae9e7afd6cdce578a44a6151c05 = MAKE_CODE_OBJECT(module_filename_obj, 94, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_maybe_read_from_SEND_RESPONSE_server, mod_consts.const_str_plain_maybe_read_from_SEND_RESPONSE_server, mod_consts.const_tuple_1ba2482366c0c3df0f18387d31e0c391_tuple, NULL, 1, 0, 0);
code_objects_f5af2b1bc6d427bc87f0fdd2cfb62238 = MAKE_CODE_OBJECT(module_filename_obj, 206, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_read_eof, mod_consts.const_str_digest_51b61565b3e7dc66346d99eb934aff4f, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_6762d52e491c437c195f5124568c5131 = MAKE_CODE_OBJECT(module_filename_obj, 136, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_read_eof, mod_consts.const_str_digest_fca632450d4364a02744720e7751fa83, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_83ebe0a33bbfc4d9d1f402f0bc69ab49 = MAKE_CODE_OBJECT(module_filename_obj, 220, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_read_eof, mod_consts.const_str_digest_1197ca4af03bfca107b5561eefdf0e26, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_h11$_readers$$$function__1__obsolete_line_fold$$$genobj__1__obsolete_line_fold(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_h11$_readers$$$function__2__decode_header_lines$$$genobj__1__decode_header_lines(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_keywords_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_h11$_readers$$$function__10_read_eof(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_readers$$$function__11___call__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_readers$$$function__12_read_eof(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_readers$$$function__13_expect_nothing(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_readers$$$function__1__obsolete_line_fold(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_readers$$$function__2__decode_header_lines(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_readers$$$function__3_maybe_read_from_IDLE_client(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_readers$$$function__4_maybe_read_from_SEND_RESPONSE_server(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_readers$$$function__5___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_readers$$$function__6___call__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_readers$$$function__7_read_eof(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_readers$$$function__8___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_readers$$$function__9___call__(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_h11$_readers$$$function__1__obsolete_line_fold(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_lines = Nuitka_Cell_New1(python_pars[0]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_lines;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_GENERATOR_h11$_readers$$$function__1__obsolete_line_fold$$$genobj__1__obsolete_line_fold(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_lines);
CHECK_OBJECT(par_lines);
Py_DECREF(par_lines);
par_lines = NULL;
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
struct h11$_readers$$$function__1__obsolete_line_fold$$$genobj__1__obsolete_line_fold_locals {
PyObject *var_last;
PyObject *var_it;
PyObject *var_line;
PyObject *var_match;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
};
#endif

static PyObject *h11$_readers$$$function__1__obsolete_line_fold$$$genobj__1__obsolete_line_fold_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct h11$_readers$$$function__1__obsolete_line_fold$$$genobj__1__obsolete_line_fold_locals *generator_heap = (struct h11$_readers$$$function__1__obsolete_line_fold$$$genobj__1__obsolete_line_fold_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_last = NULL;
generator_heap->var_it = NULL;
generator_heap->var_line = NULL;
generator_heap->var_match = NULL;
generator_heap->tmp_for_loop_1__for_iterator = NULL;
generator_heap->tmp_for_loop_1__iter_value = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_25f879cd381be32102a41b836a1fbcc4, module_h11$_readers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_iter_arg_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_lines);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 44;
generator_heap->type_description_1 = "coooo";
    goto frame_exception_exit_1;
}

tmp_iter_arg_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 44;
generator_heap->type_description_1 = "coooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_it == NULL);
generator_heap->var_it = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = Py_None;
assert(generator_heap->var_last == NULL);
Py_INCREF(tmp_assign_source_2);
generator_heap->var_last = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(generator_heap->var_it);
tmp_iter_arg_2 = generator_heap->var_it;
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 46;
generator_heap->type_description_1 = "coooo";
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
generator_heap->type_description_1 = "coooo";
generator_heap->exception_lineno = 46;
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
    PyObject *old = generator_heap->var_line;
    generator_heap->var_line = tmp_assign_source_5;
    Py_INCREF(generator_heap->var_line);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_h11$_readers$obs_fold_re(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_obs_fold_re);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 47;
generator_heap->type_description_1 = "coooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(generator_heap->var_line);
tmp_args_element_value_1 = generator_heap->var_line;
generator->m_frame->m_frame.f_lineno = 47;
tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_match, tmp_args_element_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 47;
generator_heap->type_description_1 = "coooo";
    goto try_except_handler_2;
}
{
    PyObject *old = generator_heap->var_match;
    generator_heap->var_match = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(generator_heap->var_match);
tmp_truth_name_1 = CHECK_IF_TRUE(generator_heap->var_match);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 48;
generator_heap->type_description_1 = "coooo";
    goto try_except_handler_2;
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
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
if (generator_heap->var_last == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_last);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 49;
generator_heap->type_description_1 = "coooo";
    goto try_except_handler_2;
}

tmp_cmp_expr_left_1 = generator_heap->var_last;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
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
tmp_called_value_1 = module_var_accessor_h11$_readers$LocalProtocolError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_LocalProtocolError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 50;
generator_heap->type_description_1 = "coooo";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 50;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_3a746acbac227ce3ffc78c4e9823d56f_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 50;
generator_heap->type_description_1 = "coooo";
    goto try_except_handler_2;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 50;
generator_heap->type_description_1 = "coooo";
    goto try_except_handler_2;
}
generator_heap->exception_state.exception_value = tmp_raise_type_1;
generator_heap->exception_lineno = 50;
RAISE_EXCEPTION_WITH_VALUE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "coooo";
goto try_except_handler_2;
}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
if (generator_heap->var_last == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_last);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 51;
generator_heap->type_description_1 = "coooo";
    goto try_except_handler_2;
}

tmp_isinstance_inst_1 = generator_heap->var_last;
tmp_isinstance_cls_1 = (PyObject *)&PyByteArray_Type;
generator_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 51;
generator_heap->type_description_1 = "coooo";
    goto try_except_handler_2;
}
tmp_operand_value_1 = (generator_heap->tmp_res != 0) ? Py_True : Py_False;
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 51;
generator_heap->type_description_1 = "coooo";
    goto try_except_handler_2;
}
tmp_condition_result_3 = (generator_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_bytearray_arg_1;
if (generator_heap->var_last == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_last);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 53;
generator_heap->type_description_1 = "coooo";
    goto try_except_handler_2;
}

tmp_bytearray_arg_1 = generator_heap->var_last;
tmp_assign_source_7 = BUILTIN_BYTEARRAY1(tmp_bytearray_arg_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 53;
generator_heap->type_description_1 = "coooo";
    goto try_except_handler_2;
}
{
    PyObject *old = generator_heap->var_last;
    generator_heap->var_last = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
branch_no_3:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
if (generator_heap->var_last == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_last);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 54;
generator_heap->type_description_1 = "coooo";
    goto try_except_handler_2;
}

tmp_iadd_expr_left_1 = generator_heap->var_last;
tmp_iadd_expr_right_1 = mod_consts.const_bytes_chr_32;
generator_heap->tmp_result = INPLACE_OPERATION_ADD_OBJECT_BYTES(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (generator_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 54;
generator_heap->type_description_1 = "coooo";
    goto try_except_handler_2;
}
tmp_assign_source_8 = tmp_iadd_expr_left_1;
generator_heap->var_last = tmp_assign_source_8;

}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_start_value_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_stop_value_1;
CHECK_OBJECT(generator_heap->var_last);
tmp_iadd_expr_left_2 = generator_heap->var_last;
CHECK_OBJECT(generator_heap->var_line);
tmp_expression_value_1 = generator_heap->var_line;
CHECK_OBJECT(generator_heap->var_match);
tmp_called_instance_2 = generator_heap->var_match;
generator->m_frame->m_frame.f_lineno = 55;
tmp_start_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, const_str_plain_end);
if (tmp_start_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 55;
generator_heap->type_description_1 = "coooo";
    goto try_except_handler_2;
}
tmp_stop_value_1 = Py_None;
tmp_subscript_value_1 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
CHECK_OBJECT(tmp_start_value_1);
Py_DECREF(tmp_start_value_1);
assert(!(tmp_subscript_value_1 == NULL));
tmp_iadd_expr_right_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_iadd_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 55;
generator_heap->type_description_1 = "coooo";
    goto try_except_handler_2;
}
generator_heap->tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
CHECK_OBJECT(tmp_iadd_expr_right_2);
Py_DECREF(tmp_iadd_expr_right_2);
if (generator_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 55;
generator_heap->type_description_1 = "coooo";
    goto try_except_handler_2;
}
tmp_assign_source_9 = tmp_iadd_expr_left_2;
generator_heap->var_last = tmp_assign_source_9;

}
goto branch_end_1;
branch_no_1:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
if (generator_heap->var_last == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_last);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 57;
generator_heap->type_description_1 = "coooo";
    goto try_except_handler_2;
}

tmp_cmp_expr_left_2 = generator_heap->var_last;
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
PyObject *tmp_expression_value_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
if (generator_heap->var_last == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_last);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 58;
generator_heap->type_description_1 = "coooo";
    goto try_except_handler_2;
}

tmp_expression_value_2 = generator_heap->var_last;
Py_INCREF(tmp_expression_value_2);
generator->m_yield_return_index = 1;
return tmp_expression_value_2;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 58;
generator_heap->type_description_1 = "coooo";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
branch_no_4:;
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(generator_heap->var_line);
tmp_assign_source_10 = generator_heap->var_line;
{
    PyObject *old = generator_heap->var_last;
    generator_heap->var_last = tmp_assign_source_10;
    Py_INCREF(generator_heap->var_last);
    Py_XDECREF(old);
}

}
branch_end_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 46;
generator_heap->type_description_1 = "coooo";
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

Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
if (generator_heap->var_last == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_last);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 60;
generator_heap->type_description_1 = "coooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_3 = generator_heap->var_last;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_expression_value_3;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
if (generator_heap->var_last == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_last);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 61;
generator_heap->type_description_1 = "coooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = generator_heap->var_last;
Py_INCREF(tmp_expression_value_3);
generator->m_yield_return_index = 2;
return tmp_expression_value_3;
yield_return_2:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 61;
generator_heap->type_description_1 = "coooo";
    goto frame_exception_exit_1;
}
tmp_yield_result_2 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_2);
Py_DECREF(tmp_yield_result_2);
}
branch_no_5:;

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
    generator_heap->var_last,
    generator_heap->var_it,
    generator_heap->var_line,
    generator_heap->var_match
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

Py_XDECREF(generator_heap->var_last);
generator_heap->var_last = NULL;
Py_XDECREF(generator_heap->var_it);
generator_heap->var_it = NULL;
Py_XDECREF(generator_heap->var_line);
generator_heap->var_line = NULL;
Py_XDECREF(generator_heap->var_match);
generator_heap->var_match = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->var_last);
generator_heap->var_last = NULL;
CHECK_OBJECT(generator_heap->var_it);
CHECK_OBJECT(generator_heap->var_it);
Py_DECREF(generator_heap->var_it);
generator_heap->var_it = NULL;
Py_XDECREF(generator_heap->var_line);
generator_heap->var_line = NULL;
Py_XDECREF(generator_heap->var_match);
generator_heap->var_match = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_h11$_readers$$$function__1__obsolete_line_fold$$$genobj__1__obsolete_line_fold(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        h11$_readers$$$function__1__obsolete_line_fold$$$genobj__1__obsolete_line_fold_context,
        module_h11$_readers,
        mod_consts.const_str_plain__obsolete_line_fold,
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        code_objects_25f879cd381be32102a41b836a1fbcc4,
        closure,
        1,
#if 1
        sizeof(struct h11$_readers$$$function__1__obsolete_line_fold$$$genobj__1__obsolete_line_fold_locals)
#else
        0
#endif
    );
}


static PyObject *impl_h11$_readers$$$function__2__decode_header_lines(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_lines = Nuitka_Cell_New1(python_pars[0]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_lines;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_GENERATOR_h11$_readers$$$function__2__decode_header_lines$$$genobj__1__decode_header_lines(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_lines);
CHECK_OBJECT(par_lines);
Py_DECREF(par_lines);
par_lines = NULL;
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
struct h11$_readers$$$function__2__decode_header_lines$$$genobj__1__decode_header_lines_locals {
PyObject *var_line;
PyObject *var_matches;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
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

static PyObject *h11$_readers$$$function__2__decode_header_lines$$$genobj__1__decode_header_lines_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct h11$_readers$$$function__2__decode_header_lines$$$genobj__1__decode_header_lines_locals *generator_heap = (struct h11$_readers$$$function__2__decode_header_lines$$$genobj__1__decode_header_lines_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_line = NULL;
generator_heap->var_matches = NULL;
generator_heap->tmp_for_loop_1__for_iterator = NULL;
generator_heap->tmp_for_loop_1__iter_value = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_48a5abbd869d14c561d0da678f2daf3e, module_h11$_readers, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_h11$_readers$_obsolete_line_fold(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__obsolete_line_fold);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 67;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_lines);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 67;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
generator->m_frame->m_frame.f_lineno = 67;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 67;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 67;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_1;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_2;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_2 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "coo";
generator_heap->exception_lineno = 67;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
    generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
tmp_assign_source_3 = generator_heap->tmp_for_loop_1__iter_value;
{
    PyObject *old = generator_heap->var_line;
    generator_heap->var_line = tmp_assign_source_3;
    Py_INCREF(generator_heap->var_line);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_value_2 = module_var_accessor_h11$_readers$validate(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_validate);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 68;
generator_heap->type_description_1 = "coo";
    goto try_except_handler_2;
}
tmp_args_element_value_2 = module_var_accessor_h11$_readers$header_field_re(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_header_field_re);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 68;
generator_heap->type_description_1 = "coo";
    goto try_except_handler_2;
}
CHECK_OBJECT(generator_heap->var_line);
tmp_args_element_value_3 = generator_heap->var_line;
tmp_args_element_value_4 = mod_consts.const_str_digest_a8608b2a1090743b4c2b055e427bba45;
CHECK_OBJECT(generator_heap->var_line);
tmp_args_element_value_5 = generator_heap->var_line;
generator->m_frame->m_frame.f_lineno = 68;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_2, call_args);
}

if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 68;
generator_heap->type_description_1 = "coo";
    goto try_except_handler_2;
}
{
    PyObject *old = generator_heap->var_matches;
    generator_heap->var_matches = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_matches);
tmp_expression_value_2 = generator_heap->var_matches;
tmp_subscript_value_1 = mod_consts.const_str_plain_field_name;
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 69;
generator_heap->type_description_1 = "coo";
    goto try_except_handler_2;
}
tmp_expression_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_2;
PyTuple_SET_ITEM(tmp_expression_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(generator_heap->var_matches);
tmp_expression_value_3 = generator_heap->var_matches;
tmp_subscript_value_2 = mod_consts.const_str_plain_field_value;
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 69;
generator_heap->type_description_1 = "coo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_expression_value_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_expression_value_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_subscript_value_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_subscript_value_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 69;
generator_heap->type_description_1 = "coo";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 67;
generator_heap->type_description_1 = "coo";
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

Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
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
    generator->m_closure[0],
    generator_heap->var_line,
    generator_heap->var_matches
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

Py_XDECREF(generator_heap->var_line);
generator_heap->var_line = NULL;
Py_XDECREF(generator_heap->var_matches);
generator_heap->var_matches = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
Py_XDECREF(generator_heap->var_line);
generator_heap->var_line = NULL;
Py_XDECREF(generator_heap->var_matches);
generator_heap->var_matches = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_h11$_readers$$$function__2__decode_header_lines$$$genobj__1__decode_header_lines(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        h11$_readers$$$function__2__decode_header_lines$$$genobj__1__decode_header_lines_context,
        module_h11$_readers,
        mod_consts.const_str_plain__decode_header_lines,
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        code_objects_48a5abbd869d14c561d0da678f2daf3e,
        closure,
        1,
#if 1
        sizeof(struct h11$_readers$$$function__2__decode_header_lines$$$genobj__1__decode_header_lines_locals)
#else
        0
#endif
    );
}


static PyObject *impl_h11$_readers$$$function__3_maybe_read_from_IDLE_client(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_buf = python_pars[0];
PyObject *var_lines = NULL;
PyObject *var_matches = NULL;
struct Nuitka_FrameObject *frame_frame_h11$_readers$$$function__3_maybe_read_from_IDLE_client;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_readers$$$function__3_maybe_read_from_IDLE_client = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_h11$_readers$$$function__3_maybe_read_from_IDLE_client)) {
    Py_XDECREF(cache_frame_frame_h11$_readers$$$function__3_maybe_read_from_IDLE_client);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_readers$$$function__3_maybe_read_from_IDLE_client == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_readers$$$function__3_maybe_read_from_IDLE_client = MAKE_FUNCTION_FRAME(tstate, code_objects_0308563bd4a9e3322f2a3e8903ca96b8, module_h11$_readers, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_readers$$$function__3_maybe_read_from_IDLE_client->m_type_description == NULL);
frame_frame_h11$_readers$$$function__3_maybe_read_from_IDLE_client = cache_frame_frame_h11$_readers$$$function__3_maybe_read_from_IDLE_client;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_readers$$$function__3_maybe_read_from_IDLE_client);
assert(Py_REFCNT(frame_frame_h11$_readers$$$function__3_maybe_read_from_IDLE_client) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_buf);
tmp_called_instance_1 = par_buf;
frame_frame_h11$_readers$$$function__3_maybe_read_from_IDLE_client->m_frame.f_lineno = 76;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_maybe_extract_lines);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_lines == NULL);
var_lines = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_lines);
tmp_cmp_expr_left_1 = var_lines;
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
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_buf);
tmp_called_instance_2 = par_buf;
frame_frame_h11$_readers$$$function__3_maybe_read_from_IDLE_client->m_frame.f_lineno = 78;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_digest_8b7f83ed1dc443aced977410d0e1f002);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 78;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
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
tmp_called_value_1 = module_var_accessor_h11$_readers$LocalProtocolError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LocalProtocolError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 79;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_h11$_readers$$$function__3_maybe_read_from_IDLE_client->m_frame.f_lineno = 79;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_af289ab8c3108755f7adbca84f029e8b_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 79;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_2:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_lines);
tmp_operand_value_1 = var_lines;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
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
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_h11$_readers$LocalProtocolError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LocalProtocolError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 82;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_h11$_readers$$$function__3_maybe_read_from_IDLE_client->m_frame.f_lineno = 82;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_ee5bdb9d82a7848fcee7e5f0ffb8d1ea_tuple);

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 82;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
tmp_called_value_3 = module_var_accessor_h11$_readers$validate(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_validate);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 83;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_h11$_readers$request_line_re(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_request_line_re);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 84;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_lines);
tmp_expression_value_1 = var_lines;
tmp_subscript_value_1 = const_int_0;
tmp_args_element_value_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = mod_consts.const_str_digest_1092fe897d7dc8896df3316eb4ebe07f;
CHECK_OBJECT(var_lines);
tmp_expression_value_2 = var_lines;
tmp_subscript_value_2 = const_int_0;
tmp_args_element_value_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_2, 0);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 84;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_h11$_readers$$$function__3_maybe_read_from_IDLE_client->m_frame.f_lineno = 83;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_matches == NULL);
var_matches = tmp_assign_source_2;
}
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_list_arg_1;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_3;
PyObject *tmp_direct_call_arg3_1;
tmp_direct_call_arg1_1 = module_var_accessor_h11$_readers$Request(tstate);
if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Request);
}

if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 86;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = mod_consts.const_str_plain_headers;
tmp_called_value_4 = module_var_accessor_h11$_readers$_decode_header_lines(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__decode_header_lines);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_lines);
tmp_expression_value_3 = var_lines;
tmp_subscript_value_3 = mod_consts.const_slice_int_pos_1_none_none;
tmp_args_element_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_h11$_readers$$$function__3_maybe_read_from_IDLE_client->m_frame.f_lineno = 87;
tmp_list_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_list_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_dict_value_1 = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg2_1 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_direct_call_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain__parsed;
tmp_dict_value_1 = Py_True;
tmp_res = PyDict_SetItem(tmp_direct_call_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
CHECK_OBJECT(var_matches);
tmp_direct_call_arg3_1 = var_matches;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_readers$$$function__3_maybe_read_from_IDLE_client, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_readers$$$function__3_maybe_read_from_IDLE_client->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_readers$$$function__3_maybe_read_from_IDLE_client, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_readers$$$function__3_maybe_read_from_IDLE_client,
    type_description_1,
    par_buf,
    var_lines,
    var_matches
);


// Release cached frame if used for exception.
if (frame_frame_h11$_readers$$$function__3_maybe_read_from_IDLE_client == cache_frame_frame_h11$_readers$$$function__3_maybe_read_from_IDLE_client) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_readers$$$function__3_maybe_read_from_IDLE_client);
    cache_frame_frame_h11$_readers$$$function__3_maybe_read_from_IDLE_client = NULL;
}

assertFrameObject(frame_frame_h11$_readers$$$function__3_maybe_read_from_IDLE_client);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_lines);
CHECK_OBJECT(var_lines);
Py_DECREF(var_lines);
var_lines = NULL;
Py_XDECREF(var_matches);
var_matches = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_lines);
var_lines = NULL;
Py_XDECREF(var_matches);
var_matches = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_buf);
Py_DECREF(par_buf);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_buf);
Py_DECREF(par_buf);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_h11$_readers$$$function__4_maybe_read_from_SEND_RESPONSE_server(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_buf = python_pars[0];
PyObject *var_class_ = NULL;
PyObject *var_lines = NULL;
PyObject *var_matches = NULL;
PyObject *var_http_version = NULL;
PyObject *var_reason = NULL;
PyObject *var_status_code = NULL;
struct Nuitka_FrameObject *frame_frame_h11$_readers$$$function__4_maybe_read_from_SEND_RESPONSE_server;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_readers$$$function__4_maybe_read_from_SEND_RESPONSE_server = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_h11$_readers$$$function__4_maybe_read_from_SEND_RESPONSE_server)) {
    Py_XDECREF(cache_frame_frame_h11$_readers$$$function__4_maybe_read_from_SEND_RESPONSE_server);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_readers$$$function__4_maybe_read_from_SEND_RESPONSE_server == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_readers$$$function__4_maybe_read_from_SEND_RESPONSE_server = MAKE_FUNCTION_FRAME(tstate, code_objects_6dcc3ae9e7afd6cdce578a44a6151c05, module_h11$_readers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_readers$$$function__4_maybe_read_from_SEND_RESPONSE_server->m_type_description == NULL);
frame_frame_h11$_readers$$$function__4_maybe_read_from_SEND_RESPONSE_server = cache_frame_frame_h11$_readers$$$function__4_maybe_read_from_SEND_RESPONSE_server;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_readers$$$function__4_maybe_read_from_SEND_RESPONSE_server);
assert(Py_REFCNT(frame_frame_h11$_readers$$$function__4_maybe_read_from_SEND_RESPONSE_server) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_buf);
tmp_called_instance_1 = par_buf;
frame_frame_h11$_readers$$$function__4_maybe_read_from_SEND_RESPONSE_server->m_frame.f_lineno = 97;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_maybe_extract_lines);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_lines == NULL);
var_lines = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_lines);
tmp_cmp_expr_left_1 = var_lines;
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
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_buf);
tmp_called_instance_2 = par_buf;
frame_frame_h11$_readers$$$function__4_maybe_read_from_SEND_RESPONSE_server->m_frame.f_lineno = 99;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_digest_8b7f83ed1dc443aced977410d0e1f002);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 99;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
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
tmp_called_value_1 = module_var_accessor_h11$_readers$LocalProtocolError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LocalProtocolError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 100;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_h11$_readers$$$function__4_maybe_read_from_SEND_RESPONSE_server->m_frame.f_lineno = 100;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_af289ab8c3108755f7adbca84f029e8b_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 100;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_lines);
tmp_operand_value_1 = var_lines;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooooooo";
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
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_h11$_readers$LocalProtocolError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LocalProtocolError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 103;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_h11$_readers$$$function__4_maybe_read_from_SEND_RESPONSE_server->m_frame.f_lineno = 103;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_b94af194e0639e009ad01d6e57f0708a_tuple);

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 103;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
tmp_called_value_3 = module_var_accessor_h11$_readers$validate(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_validate);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 104;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_h11$_readers$status_line_re(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_status_line_re);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 104;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_lines);
tmp_expression_value_1 = var_lines;
tmp_subscript_value_1 = const_int_0;
tmp_args_element_value_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = mod_consts.const_str_digest_4f5e3f8cda3539b2f6bf07c847e8471b;
CHECK_OBJECT(var_lines);
tmp_expression_value_2 = var_lines;
tmp_subscript_value_2 = const_int_0;
tmp_args_element_value_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_2, 0);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 104;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_h11$_readers$$$function__4_maybe_read_from_SEND_RESPONSE_server->m_frame.f_lineno = 104;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_matches == NULL);
var_matches = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_4;
CHECK_OBJECT(var_matches);
tmp_expression_value_3 = var_matches;
tmp_subscript_value_3 = mod_consts.const_str_plain_http_version;
tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_4 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_assign_source_3 = mod_consts.const_bytes_digest_f5f844450bde69e5c8b575fa76761105;
Py_INCREF(tmp_assign_source_3);
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(var_matches);
tmp_expression_value_4 = var_matches;
tmp_subscript_value_4 = mod_consts.const_str_plain_http_version;
tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_4);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
assert(var_http_version == NULL);
var_http_version = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_6;
CHECK_OBJECT(var_matches);
tmp_expression_value_5 = var_matches;
tmp_subscript_value_5 = mod_consts.const_str_plain_reason;
tmp_cmp_expr_left_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_5);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_5 != false) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
tmp_assign_source_4 = const_bytes_empty;
Py_INCREF(tmp_assign_source_4);
goto condexpr_end_2;
condexpr_false_2:;
CHECK_OBJECT(var_matches);
tmp_expression_value_6 = var_matches;
tmp_subscript_value_6 = mod_consts.const_str_plain_reason;
tmp_assign_source_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_6);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
condexpr_end_2:;
assert(var_reason == NULL);
var_reason = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_int_arg_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_7;
CHECK_OBJECT(var_matches);
tmp_expression_value_7 = var_matches;
tmp_subscript_value_7 = mod_consts.const_str_plain_status_code;
tmp_int_arg_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_7);
if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_status_code == NULL);
var_status_code = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_status_code);
tmp_cmp_expr_left_4 = var_status_code;
tmp_cmp_expr_right_4 = mod_consts.const_int_pos_200;
tmp_condition_result_6 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
tmp_assign_source_6 = module_var_accessor_h11$_readers$InformationalResponse(tstate);
if (unlikely(tmp_assign_source_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InformationalResponse);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 111;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_assign_source_6 = module_var_accessor_h11$_readers$Response(tstate);
if (unlikely(tmp_assign_source_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Response);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 111;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
condexpr_end_3:;
assert(var_class_ == NULL);
Py_INCREF(tmp_assign_source_6);
var_class_ = tmp_assign_source_6;
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_list_arg_1;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_8;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
CHECK_OBJECT(var_class_);
tmp_called_value_4 = var_class_;
tmp_called_value_5 = module_var_accessor_h11$_readers$_decode_header_lines(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__decode_header_lines);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 114;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_lines);
tmp_expression_value_8 = var_lines;
tmp_subscript_value_8 = mod_consts.const_slice_int_pos_1_none_none;
tmp_args_element_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_8);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_h11$_readers$$$function__4_maybe_read_from_SEND_RESPONSE_server->m_frame.f_lineno = 114;
tmp_list_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_list_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_1 = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_1_1 = Py_True;
CHECK_OBJECT(var_status_code);
tmp_kw_call_value_2_1 = var_status_code;
CHECK_OBJECT(var_reason);
tmp_kw_call_value_3_1 = var_reason;
CHECK_OBJECT(var_http_version);
tmp_kw_call_value_4_1 = var_http_version;
frame_frame_h11$_readers$$$function__4_maybe_read_from_SEND_RESPONSE_server->m_frame.f_lineno = 113;
{
    PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_4, kw_values, mod_consts.const_tuple_27894a958718bb7723aac338a9ee8984_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_readers$$$function__4_maybe_read_from_SEND_RESPONSE_server, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_readers$$$function__4_maybe_read_from_SEND_RESPONSE_server->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_readers$$$function__4_maybe_read_from_SEND_RESPONSE_server, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_readers$$$function__4_maybe_read_from_SEND_RESPONSE_server,
    type_description_1,
    par_buf,
    var_class_,
    var_lines,
    var_matches,
    var_http_version,
    var_reason,
    var_status_code
);


// Release cached frame if used for exception.
if (frame_frame_h11$_readers$$$function__4_maybe_read_from_SEND_RESPONSE_server == cache_frame_frame_h11$_readers$$$function__4_maybe_read_from_SEND_RESPONSE_server) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_readers$$$function__4_maybe_read_from_SEND_RESPONSE_server);
    cache_frame_frame_h11$_readers$$$function__4_maybe_read_from_SEND_RESPONSE_server = NULL;
}

assertFrameObject(frame_frame_h11$_readers$$$function__4_maybe_read_from_SEND_RESPONSE_server);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_class_);
var_class_ = NULL;
CHECK_OBJECT(var_lines);
CHECK_OBJECT(var_lines);
Py_DECREF(var_lines);
var_lines = NULL;
Py_XDECREF(var_matches);
var_matches = NULL;
Py_XDECREF(var_http_version);
var_http_version = NULL;
Py_XDECREF(var_reason);
var_reason = NULL;
Py_XDECREF(var_status_code);
var_status_code = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_class_);
var_class_ = NULL;
Py_XDECREF(var_lines);
var_lines = NULL;
Py_XDECREF(var_matches);
var_matches = NULL;
Py_XDECREF(var_http_version);
var_http_version = NULL;
Py_XDECREF(var_reason);
var_reason = NULL;
Py_XDECREF(var_status_code);
var_status_code = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_buf);
Py_DECREF(par_buf);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_buf);
Py_DECREF(par_buf);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_h11$_readers$$$function__5___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_length = python_pars[1];
struct Nuitka_FrameObject *frame_frame_h11$_readers$$$function__5___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_readers$$$function__5___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h11$_readers$$$function__5___init__)) {
    Py_XDECREF(cache_frame_frame_h11$_readers$$$function__5___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_readers$$$function__5___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_readers$$$function__5___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_c7ae940876eca5b6cbe5a8d6400c8ba2, module_h11$_readers, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_readers$$$function__5___init__->m_type_description == NULL);
frame_frame_h11$_readers$$$function__5___init__ = cache_frame_frame_h11$_readers$$$function__5___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_readers$$$function__5___init__);
assert(Py_REFCNT(frame_frame_h11$_readers$$$function__5___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_length);
tmp_assattr_value_1 = par_length;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__length, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_length);
tmp_assattr_value_2 = par_length;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__remaining, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_readers$$$function__5___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_readers$$$function__5___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_readers$$$function__5___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_readers$$$function__5___init__,
    type_description_1,
    par_self,
    par_length
);


// Release cached frame if used for exception.
if (frame_frame_h11$_readers$$$function__5___init__ == cache_frame_frame_h11$_readers$$$function__5___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_readers$$$function__5___init__);
    cache_frame_frame_h11$_readers$$$function__5___init__ = NULL;
}

assertFrameObject(frame_frame_h11$_readers$$$function__5___init__);

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
CHECK_OBJECT(par_length);
Py_DECREF(par_length);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_length);
Py_DECREF(par_length);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_h11$_readers$$$function__6___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_buf = python_pars[1];
PyObject *var_data = NULL;
PyObject *tmp_inplace_assign_1__value = NULL;
struct Nuitka_FrameObject *frame_frame_h11$_readers$$$function__6___call__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_readers$$$function__6___call__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_h11$_readers$$$function__6___call__)) {
    Py_XDECREF(cache_frame_frame_h11$_readers$$$function__6___call__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_readers$$$function__6___call__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_readers$$$function__6___call__ = MAKE_FUNCTION_FRAME(tstate, code_objects_f6457716f2d11dbd15de28c2edd930e0, module_h11$_readers, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_readers$$$function__6___call__->m_type_description == NULL);
frame_frame_h11$_readers$$$function__6___call__ = cache_frame_frame_h11$_readers$$$function__6___call__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_readers$$$function__6___call__);
assert(Py_REFCNT(frame_frame_h11$_readers$$$function__6___call__) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__remaining);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
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
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_h11$_readers$EndOfMessage(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EndOfMessage);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 129;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_h11$_readers$$$function__6___call__->m_frame.f_lineno = 129;
tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_buf);
tmp_expression_value_2 = par_buf;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_maybe_extract_at_most);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__remaining);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 130;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_h11$_readers$$$function__6___call__->m_frame.f_lineno = 130;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_data == NULL);
var_data = tmp_assign_source_1;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_data);
tmp_cmp_expr_left_2 = var_data;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
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
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__remaining);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(tmp_inplace_assign_1__value == NULL);
tmp_inplace_assign_1__value = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_isub_expr_left_1;
PyObject *tmp_isub_expr_right_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_isub_expr_left_1 = tmp_inplace_assign_1__value;
CHECK_OBJECT(var_data);
tmp_len_arg_1 = var_data;
tmp_isub_expr_right_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_isub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_result = INPLACE_OPERATION_SUB_OBJECT_LONG(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
CHECK_OBJECT(tmp_isub_expr_right_1);
Py_DECREF(tmp_isub_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_assign_source_3 = tmp_isub_expr_left_1;
tmp_inplace_assign_1__value = tmp_assign_source_3;

}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_assattr_value_1 = tmp_inplace_assign_1__value;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__remaining, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
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
{
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_value_0_1;
tmp_called_value_3 = module_var_accessor_h11$_readers$Data(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Data);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 134;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_data);
tmp_kw_call_value_0_1 = var_data;
frame_frame_h11$_readers$$$function__6___call__->m_frame.f_lineno = 134;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_str_plain_data_tuple);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_readers$$$function__6___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_readers$$$function__6___call__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_readers$$$function__6___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_readers$$$function__6___call__,
    type_description_1,
    par_self,
    par_buf,
    var_data
);


// Release cached frame if used for exception.
if (frame_frame_h11$_readers$$$function__6___call__ == cache_frame_frame_h11$_readers$$$function__6___call__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_readers$$$function__6___call__);
    cache_frame_frame_h11$_readers$$$function__6___call__ = NULL;
}

assertFrameObject(frame_frame_h11$_readers$$$function__6___call__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_data);
var_data = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_data);
var_data = NULL;
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
CHECK_OBJECT(par_buf);
Py_DECREF(par_buf);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_buf);
Py_DECREF(par_buf);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_h11$_readers$$$function__7_read_eof(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_h11$_readers$$$function__7_read_eof;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_readers$$$function__7_read_eof = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h11$_readers$$$function__7_read_eof)) {
    Py_XDECREF(cache_frame_frame_h11$_readers$$$function__7_read_eof);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_readers$$$function__7_read_eof == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_readers$$$function__7_read_eof = MAKE_FUNCTION_FRAME(tstate, code_objects_6762d52e491c437c195f5124568c5131, module_h11$_readers, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_readers$$$function__7_read_eof->m_type_description == NULL);
frame_frame_h11$_readers$$$function__7_read_eof = cache_frame_frame_h11$_readers$$$function__7_read_eof;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_readers$$$function__7_read_eof);
assert(Py_REFCNT(frame_frame_h11$_readers$$$function__7_read_eof) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_expression_value_3;
tmp_called_value_1 = module_var_accessor_h11$_readers$RemoteProtocolError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RemoteProtocolError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 137;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_d8e60c8a81e9616a8daf4cc4f9130394;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_sub_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__length);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_sub_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__remaining);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_1);

exception_lineno = 140;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_1_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_kw_call_arg_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__length);
if (tmp_kw_call_arg_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 140;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_h11$_readers$$$function__7_read_eof->m_frame.f_lineno = 138;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
CHECK_OBJECT(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_h11$_readers$$$function__7_read_eof->m_frame.f_lineno = 137;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 137;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_readers$$$function__7_read_eof, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_readers$$$function__7_read_eof->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_readers$$$function__7_read_eof, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_readers$$$function__7_read_eof,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_h11$_readers$$$function__7_read_eof == cache_frame_frame_h11$_readers$$$function__7_read_eof) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_readers$$$function__7_read_eof);
    cache_frame_frame_h11$_readers$$$function__7_read_eof = NULL;
}

assertFrameObject(frame_frame_h11$_readers$$$function__7_read_eof);

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

}


static PyObject *impl_h11$_readers$$$function__8___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_h11$_readers$$$function__8___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_readers$$$function__8___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h11$_readers$$$function__8___init__)) {
    Py_XDECREF(cache_frame_frame_h11$_readers$$$function__8___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_readers$$$function__8___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_readers$$$function__8___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_12de1bd254484339d91961cb202d41be, module_h11$_readers, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_readers$$$function__8___init__->m_type_description == NULL);
frame_frame_h11$_readers$$$function__8___init__ = cache_frame_frame_h11$_readers$$$function__8___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_readers$$$function__8___init__);
assert(Py_REFCNT(frame_frame_h11$_readers$$$function__8___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = const_int_0;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__bytes_in_chunk, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = const_bytes_empty;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__bytes_to_discard, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__reading_trailer, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_readers$$$function__8___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_readers$$$function__8___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_readers$$$function__8___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_readers$$$function__8___init__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_h11$_readers$$$function__8___init__ == cache_frame_frame_h11$_readers$$$function__8___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_readers$$$function__8___init__);
    cache_frame_frame_h11$_readers$$$function__8___init__ = NULL;
}

assertFrameObject(frame_frame_h11$_readers$$$function__8___init__);

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


static PyObject *impl_h11$_readers$$$function__9___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_buf = python_pars[1];
PyObject *var_lines = NULL;
PyObject *var_data = NULL;
PyObject *var_chunk_header = NULL;
PyObject *var_matches = NULL;
PyObject *var_chunk_start = NULL;
PyObject *var_chunk_end = NULL;
PyObject *tmp_inplace_assign_1__value = NULL;
struct Nuitka_FrameObject *frame_frame_h11$_readers$$$function__9___call__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
bool tmp_result;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_readers$$$function__9___call__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_h11$_readers$$$function__9___call__)) {
    Py_XDECREF(cache_frame_frame_h11$_readers$$$function__9___call__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_readers$$$function__9___call__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_readers$$$function__9___call__ = MAKE_FUNCTION_FRAME(tstate, code_objects_c98008b4d3990d0549fbb1393c2dfdbe, module_h11$_readers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_readers$$$function__9___call__->m_type_description == NULL);
frame_frame_h11$_readers$$$function__9___call__ = cache_frame_frame_h11$_readers$$$function__9___call__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_readers$$$function__9___call__);
assert(Py_REFCNT(frame_frame_h11$_readers$$$function__9___call__) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__reading_trailer);
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
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_buf);
tmp_called_instance_1 = par_buf;
frame_frame_h11$_readers$$$function__9___call__->m_frame.f_lineno = 158;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_maybe_extract_lines);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_lines == NULL);
var_lines = tmp_assign_source_1;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_lines);
tmp_cmp_expr_left_1 = var_lines;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
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
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_list_arg_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_h11$_readers$EndOfMessage(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EndOfMessage);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 161;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = module_var_accessor_h11$_readers$_decode_header_lines(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__decode_header_lines);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 161;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_lines);
tmp_args_element_value_1 = var_lines;
frame_frame_h11$_readers$$$function__9___call__->m_frame.f_lineno = 161;
tmp_list_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_list_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_1 = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_h11$_readers$$$function__9___call__->m_frame.f_lineno = 161;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_headers_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__bytes_to_discard);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 162;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_len_arg_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_buf);
tmp_expression_value_3 = par_buf;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_maybe_extract_at_most);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__bytes_to_discard);
if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 163;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 163;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_h11$_readers$$$function__9___call__->m_frame.f_lineno = 163;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_data == NULL);
var_data = tmp_assign_source_2;
}
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_data);
tmp_cmp_expr_left_2 = var_data;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_1;
PyObject *tmp_stop_value_1;
PyObject *tmp_len_arg_2;
CHECK_OBJECT(var_data);
tmp_cmp_expr_left_3 = var_data;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__bytes_to_discard);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_data);
tmp_len_arg_2 = var_data;
tmp_stop_value_1 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_stop_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_5);

exception_lineno = 166;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_1);
CHECK_OBJECT(tmp_stop_value_1);
Py_DECREF(tmp_stop_value_1);
assert(!(tmp_subscript_value_1 == NULL));
tmp_cmp_expr_right_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "oooooooo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_called_value_4 = module_var_accessor_h11$_readers$LocalProtocolError(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LocalProtocolError);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 167;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_ca3c72539870b895e39c47d423c2b56f;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_data);
tmp_operand_value_1 = var_data;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
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


exception_lineno = 168;
type_description_1 = "oooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_c68960f33a42c0c922ccf0e2d9baeb28;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__bytes_to_discard);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "oooooooo";
    goto tuple_build_exception_1;
}
tmp_format_value_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "oooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "oooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_41;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_3 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_3 == NULL));
frame_frame_h11$_readers$$$function__9___call__->m_frame.f_lineno = 167;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 167;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto frame_exception_exit_1;
}
branch_no_5:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_2;
PyObject *tmp_start_value_1;
PyObject *tmp_len_arg_3;
PyObject *tmp_stop_value_2;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__bytes_to_discard);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_data);
tmp_len_arg_3 = var_data;
tmp_start_value_1 = BUILTIN_LEN(tstate, tmp_len_arg_3);
if (tmp_start_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_8);

exception_lineno = 170;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_stop_value_2 = Py_None;
tmp_subscript_value_2 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_2);
CHECK_OBJECT(tmp_start_value_1);
Py_DECREF(tmp_start_value_1);
assert(!(tmp_subscript_value_2 == NULL));
tmp_assattr_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__bytes_to_discard, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_expression_value_10;
PyObject *tmp_attribute_value_3;
int tmp_truth_name_3;
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain__bytes_to_discard);
if (tmp_attribute_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_3);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_3);

exception_lineno = 171;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_3);
Py_DECREF(tmp_attribute_value_3);
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_6:;
branch_no_3:;
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain__bytes_to_discard);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = const_bytes_empty;
tmp_operand_value_3 = RICH_COMPARE_EQ_OBJECT_OBJECT_BYTES(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "oooooooo";
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
PyObject *tmp_raise_type_2;
frame_frame_h11$_readers$$$function__9___call__->m_frame.f_lineno = 174;
tmp_raise_type_2 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 174;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto frame_exception_exit_1;
}
branch_no_7:;
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain__bytes_in_chunk);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = const_int_0;
tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(par_buf);
tmp_called_instance_2 = par_buf;
frame_frame_h11$_readers$$$function__9___call__->m_frame.f_lineno = 177;
tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_maybe_extract_next_line);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_chunk_header == NULL);
var_chunk_header = tmp_assign_source_3;
}
{
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(var_chunk_header);
tmp_cmp_expr_left_6 = var_chunk_header;
tmp_cmp_expr_right_6 = Py_None;
tmp_condition_result_9 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_9:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_value_5 = module_var_accessor_h11$_readers$validate(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_validate);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 180;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = module_var_accessor_h11$_readers$chunk_header_re(tstate);
if (unlikely(tmp_args_element_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_chunk_header_re);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 181;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_chunk_header);
tmp_args_element_value_5 = var_chunk_header;
tmp_args_element_value_6 = mod_consts.const_str_digest_a48e8dbbdcfbbf16e1c987a7fb67cad9;
CHECK_OBJECT(var_chunk_header);
tmp_args_element_value_7 = var_chunk_header;
frame_frame_h11$_readers$$$function__9___call__->m_frame.f_lineno = 180;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_5, call_args);
}

if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_matches == NULL);
var_matches = tmp_assign_source_4;
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_value_value_1;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_3;
PyObject *tmp_base_value_1;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(var_matches);
tmp_expression_value_13 = var_matches;
tmp_subscript_value_3 = mod_consts.const_str_plain_chunk_size;
tmp_value_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_3);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_base_value_1 = mod_consts.const_int_pos_16;
tmp_assattr_value_2 = BUILTIN_INT2(tstate, tmp_value_value_1, tmp_base_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__bytes_in_chunk, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(par_self);
tmp_expression_value_14 = par_self;
tmp_cmp_expr_left_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain__bytes_in_chunk);
if (tmp_cmp_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_7 = const_int_0;
tmp_condition_result_10 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = Py_True;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__reading_trailer, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_8;
CHECK_OBJECT(par_self);
tmp_called_value_6 = par_self;
CHECK_OBJECT(par_buf);
tmp_args_element_value_8 = par_buf;
frame_frame_h11$_readers$$$function__9___call__->m_frame.f_lineno = 190;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_8);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_10:;
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = Py_True;
assert(var_chunk_start == NULL);
Py_INCREF(tmp_assign_source_5);
var_chunk_start = tmp_assign_source_5;
}
goto branch_end_8;
branch_no_8:;
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = Py_False;
assert(var_chunk_start == NULL);
Py_INCREF(tmp_assign_source_6);
var_chunk_start = tmp_assign_source_6;
}
branch_end_8:;
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_4;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(par_self);
tmp_expression_value_15 = par_self;
tmp_cmp_expr_left_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain__bytes_in_chunk);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_8 = const_int_0;
tmp_operand_value_4 = RICH_COMPARE_GT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
if (tmp_operand_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
CHECK_OBJECT(tmp_operand_value_4);
Py_DECREF(tmp_operand_value_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_11 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_raise_type_3;
frame_frame_h11$_readers$$$function__9___call__->m_frame.f_lineno = 194;
tmp_raise_type_3 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 194;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto frame_exception_exit_1;
}
branch_no_11:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(par_buf);
tmp_expression_value_16 = par_buf;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_maybe_extract_at_most);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_17 = par_self;
tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain__bytes_in_chunk);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 195;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_h11$_readers$$$function__9___call__->m_frame.f_lineno = 195;
tmp_assign_source_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_data;
    var_data = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(var_data);
tmp_cmp_expr_left_9 = var_data;
tmp_cmp_expr_right_9 = Py_None;
tmp_condition_result_12 = (tmp_cmp_expr_left_9 == tmp_cmp_expr_right_9) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_12:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_18;
CHECK_OBJECT(par_self);
tmp_expression_value_18 = par_self;
tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain__bytes_in_chunk);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_inplace_assign_1__value == NULL);
tmp_inplace_assign_1__value = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_isub_expr_left_1;
PyObject *tmp_isub_expr_right_1;
PyObject *tmp_len_arg_4;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_isub_expr_left_1 = tmp_inplace_assign_1__value;
CHECK_OBJECT(var_data);
tmp_len_arg_4 = var_data;
tmp_isub_expr_right_1 = BUILTIN_LEN(tstate, tmp_len_arg_4);
if (tmp_isub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_result = INPLACE_OPERATION_SUB_OBJECT_LONG(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
CHECK_OBJECT(tmp_isub_expr_right_1);
Py_DECREF(tmp_isub_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_9 = tmp_isub_expr_left_1;
tmp_inplace_assign_1__value = tmp_assign_source_9;

}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_assattr_value_4 = tmp_inplace_assign_1__value;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__bytes_in_chunk, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oooooooo";
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
{
nuitka_bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
PyObject *tmp_expression_value_19;
CHECK_OBJECT(par_self);
tmp_expression_value_19 = par_self;
tmp_cmp_expr_left_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain__bytes_in_chunk);
if (tmp_cmp_expr_left_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_10 = const_int_0;
tmp_condition_result_13 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
CHECK_OBJECT(tmp_cmp_expr_left_10);
Py_DECREF(tmp_cmp_expr_left_10);
if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
tmp_assattr_value_5 = mod_consts.const_bytes_digest_e22048e4de62b4d2ac355aed7a0f9014;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain__bytes_to_discard, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = Py_True;
assert(var_chunk_end == NULL);
Py_INCREF(tmp_assign_source_10);
var_chunk_end = tmp_assign_source_10;
}
goto branch_end_13;
branch_no_13:;
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = Py_False;
assert(var_chunk_end == NULL);
Py_INCREF(tmp_assign_source_11);
var_chunk_end = tmp_assign_source_11;
}
branch_end_13:;
{
PyObject *tmp_called_value_8;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
tmp_called_value_8 = module_var_accessor_h11$_readers$Data(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Data);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 204;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_data);
tmp_kw_call_value_0_2 = var_data;
CHECK_OBJECT(var_chunk_start);
tmp_kw_call_value_1_1 = var_chunk_start;
CHECK_OBJECT(var_chunk_end);
tmp_kw_call_value_2_1 = var_chunk_end;
frame_frame_h11$_readers$$$function__9___call__->m_frame.f_lineno = 204;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_8, kw_values, mod_consts.const_tuple_str_plain_data_str_plain_chunk_start_str_plain_chunk_end_tuple);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_readers$$$function__9___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_readers$$$function__9___call__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_readers$$$function__9___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_readers$$$function__9___call__,
    type_description_1,
    par_self,
    par_buf,
    var_lines,
    var_data,
    var_chunk_header,
    var_matches,
    var_chunk_start,
    var_chunk_end
);


// Release cached frame if used for exception.
if (frame_frame_h11$_readers$$$function__9___call__ == cache_frame_frame_h11$_readers$$$function__9___call__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_readers$$$function__9___call__);
    cache_frame_frame_h11$_readers$$$function__9___call__ = NULL;
}

assertFrameObject(frame_frame_h11$_readers$$$function__9___call__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_lines);
var_lines = NULL;
Py_XDECREF(var_data);
var_data = NULL;
Py_XDECREF(var_chunk_header);
var_chunk_header = NULL;
Py_XDECREF(var_matches);
var_matches = NULL;
Py_XDECREF(var_chunk_start);
var_chunk_start = NULL;
Py_XDECREF(var_chunk_end);
var_chunk_end = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_lines);
var_lines = NULL;
Py_XDECREF(var_data);
var_data = NULL;
Py_XDECREF(var_chunk_header);
var_chunk_header = NULL;
Py_XDECREF(var_matches);
var_matches = NULL;
Py_XDECREF(var_chunk_start);
var_chunk_start = NULL;
Py_XDECREF(var_chunk_end);
var_chunk_end = NULL;
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
CHECK_OBJECT(par_buf);
Py_DECREF(par_buf);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_buf);
Py_DECREF(par_buf);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_h11$_readers$$$function__10_read_eof(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_h11$_readers$$$function__10_read_eof;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_readers$$$function__10_read_eof = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h11$_readers$$$function__10_read_eof)) {
    Py_XDECREF(cache_frame_frame_h11$_readers$$$function__10_read_eof);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_readers$$$function__10_read_eof == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_readers$$$function__10_read_eof = MAKE_FUNCTION_FRAME(tstate, code_objects_f5af2b1bc6d427bc87f0fdd2cfb62238, module_h11$_readers, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_readers$$$function__10_read_eof->m_type_description == NULL);
frame_frame_h11$_readers$$$function__10_read_eof = cache_frame_frame_h11$_readers$$$function__10_read_eof;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_readers$$$function__10_read_eof);
assert(Py_REFCNT(frame_frame_h11$_readers$$$function__10_read_eof) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_h11$_readers$RemoteProtocolError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RemoteProtocolError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 207;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_h11$_readers$$$function__10_read_eof->m_frame.f_lineno = 207;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_72de81baa04d79000bd53ad0426bdb3d_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 207;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_readers$$$function__10_read_eof, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_readers$$$function__10_read_eof->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_readers$$$function__10_read_eof, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_readers$$$function__10_read_eof,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_h11$_readers$$$function__10_read_eof == cache_frame_frame_h11$_readers$$$function__10_read_eof) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_readers$$$function__10_read_eof);
    cache_frame_frame_h11$_readers$$$function__10_read_eof = NULL;
}

assertFrameObject(frame_frame_h11$_readers$$$function__10_read_eof);

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

}


static PyObject *impl_h11$_readers$$$function__11___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_buf = python_pars[1];
PyObject *var_data = NULL;
struct Nuitka_FrameObject *frame_frame_h11$_readers$$$function__11___call__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_readers$$$function__11___call__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_h11$_readers$$$function__11___call__)) {
    Py_XDECREF(cache_frame_frame_h11$_readers$$$function__11___call__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_readers$$$function__11___call__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_readers$$$function__11___call__ = MAKE_FUNCTION_FRAME(tstate, code_objects_e7baad14cf9683c97b861435f303a328, module_h11$_readers, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_readers$$$function__11___call__->m_type_description == NULL);
frame_frame_h11$_readers$$$function__11___call__ = cache_frame_frame_h11$_readers$$$function__11___call__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_readers$$$function__11___call__);
assert(Py_REFCNT(frame_frame_h11$_readers$$$function__11___call__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_buf);
tmp_called_instance_1 = par_buf;
frame_frame_h11$_readers$$$function__11___call__->m_frame.f_lineno = 215;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_maybe_extract_at_most,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_hex_3b9ac9ff_tuple, 0)
);

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_data == NULL);
var_data = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_data);
tmp_cmp_expr_left_1 = var_data;
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
branch_no_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
tmp_called_value_1 = module_var_accessor_h11$_readers$Data(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Data);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 218;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_data);
tmp_kw_call_value_0_1 = var_data;
frame_frame_h11$_readers$$$function__11___call__->m_frame.f_lineno = 218;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_data_tuple);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_readers$$$function__11___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_readers$$$function__11___call__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_readers$$$function__11___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_readers$$$function__11___call__,
    type_description_1,
    par_self,
    par_buf,
    var_data
);


// Release cached frame if used for exception.
if (frame_frame_h11$_readers$$$function__11___call__ == cache_frame_frame_h11$_readers$$$function__11___call__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_readers$$$function__11___call__);
    cache_frame_frame_h11$_readers$$$function__11___call__ = NULL;
}

assertFrameObject(frame_frame_h11$_readers$$$function__11___call__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
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
CHECK_OBJECT(par_buf);
Py_DECREF(par_buf);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_buf);
Py_DECREF(par_buf);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_h11$_readers$$$function__12_read_eof(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_h11$_readers$$$function__12_read_eof;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_readers$$$function__12_read_eof = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h11$_readers$$$function__12_read_eof)) {
    Py_XDECREF(cache_frame_frame_h11$_readers$$$function__12_read_eof);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_readers$$$function__12_read_eof == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_readers$$$function__12_read_eof = MAKE_FUNCTION_FRAME(tstate, code_objects_83ebe0a33bbfc4d9d1f402f0bc69ab49, module_h11$_readers, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_readers$$$function__12_read_eof->m_type_description == NULL);
frame_frame_h11$_readers$$$function__12_read_eof = cache_frame_frame_h11$_readers$$$function__12_read_eof;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_readers$$$function__12_read_eof);
assert(Py_REFCNT(frame_frame_h11$_readers$$$function__12_read_eof) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_h11$_readers$EndOfMessage(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EndOfMessage);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 221;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_h11$_readers$$$function__12_read_eof->m_frame.f_lineno = 221;
tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_readers$$$function__12_read_eof, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_readers$$$function__12_read_eof->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_readers$$$function__12_read_eof, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_readers$$$function__12_read_eof,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_h11$_readers$$$function__12_read_eof == cache_frame_frame_h11$_readers$$$function__12_read_eof) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_readers$$$function__12_read_eof);
    cache_frame_frame_h11$_readers$$$function__12_read_eof = NULL;
}

assertFrameObject(frame_frame_h11$_readers$$$function__12_read_eof);

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


static PyObject *impl_h11$_readers$$$function__13_expect_nothing(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_buf = python_pars[0];
struct Nuitka_FrameObject *frame_frame_h11$_readers$$$function__13_expect_nothing;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_readers$$$function__13_expect_nothing = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h11$_readers$$$function__13_expect_nothing)) {
    Py_XDECREF(cache_frame_frame_h11$_readers$$$function__13_expect_nothing);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_readers$$$function__13_expect_nothing == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_readers$$$function__13_expect_nothing = MAKE_FUNCTION_FRAME(tstate, code_objects_907a3bebe79bdbc8feaf3f284b1ee3f8, module_h11$_readers, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_readers$$$function__13_expect_nothing->m_type_description == NULL);
frame_frame_h11$_readers$$$function__13_expect_nothing = cache_frame_frame_h11$_readers$$$function__13_expect_nothing;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_readers$$$function__13_expect_nothing);
assert(Py_REFCNT(frame_frame_h11$_readers$$$function__13_expect_nothing) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_buf);
tmp_truth_name_1 = CHECK_IF_TRUE(par_buf);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "o";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_h11$_readers$LocalProtocolError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LocalProtocolError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 226;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_h11$_readers$$$function__13_expect_nothing->m_frame.f_lineno = 226;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_f3f4fc87c4cacebf171b0bd637d35eeb_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 226;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_readers$$$function__13_expect_nothing, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_readers$$$function__13_expect_nothing->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_readers$$$function__13_expect_nothing, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_readers$$$function__13_expect_nothing,
    type_description_1,
    par_buf
);


// Release cached frame if used for exception.
if (frame_frame_h11$_readers$$$function__13_expect_nothing == cache_frame_frame_h11$_readers$$$function__13_expect_nothing) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_readers$$$function__13_expect_nothing);
    cache_frame_frame_h11$_readers$$$function__13_expect_nothing = NULL;
}

assertFrameObject(frame_frame_h11$_readers$$$function__13_expect_nothing);

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
CHECK_OBJECT(par_buf);
Py_DECREF(par_buf);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_buf);
Py_DECREF(par_buf);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_h11$_readers$$$function__10_read_eof(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_readers$$$function__10_read_eof,
        mod_consts.const_str_plain_read_eof,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_51b61565b3e7dc66346d99eb934aff4f,
#endif
        code_objects_f5af2b1bc6d427bc87f0fdd2cfb62238,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_readers,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_readers$$$function__11___call__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_readers$$$function__11___call__,
        mod_consts.const_str_plain___call__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_63fb1ef7d2f572386e91d727302beb71,
#endif
        code_objects_e7baad14cf9683c97b861435f303a328,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_readers,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_readers$$$function__12_read_eof(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_readers$$$function__12_read_eof,
        mod_consts.const_str_plain_read_eof,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1197ca4af03bfca107b5561eefdf0e26,
#endif
        code_objects_83ebe0a33bbfc4d9d1f402f0bc69ab49,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_readers,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_readers$$$function__13_expect_nothing(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_readers$$$function__13_expect_nothing,
        mod_consts.const_str_plain_expect_nothing,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_907a3bebe79bdbc8feaf3f284b1ee3f8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_readers,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_readers$$$function__1__obsolete_line_fold(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_readers$$$function__1__obsolete_line_fold,
        mod_consts.const_str_plain__obsolete_line_fold,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_25f879cd381be32102a41b836a1fbcc4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_readers,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_readers$$$function__2__decode_header_lines(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_readers$$$function__2__decode_header_lines,
        mod_consts.const_str_plain__decode_header_lines,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_48a5abbd869d14c561d0da678f2daf3e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_readers,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_readers$$$function__3_maybe_read_from_IDLE_client(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_readers$$$function__3_maybe_read_from_IDLE_client,
        mod_consts.const_str_plain_maybe_read_from_IDLE_client,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_0308563bd4a9e3322f2a3e8903ca96b8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_readers,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_readers$$$function__4_maybe_read_from_SEND_RESPONSE_server(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_readers$$$function__4_maybe_read_from_SEND_RESPONSE_server,
        mod_consts.const_str_plain_maybe_read_from_SEND_RESPONSE_server,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6dcc3ae9e7afd6cdce578a44a6151c05,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_readers,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_readers$$$function__5___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_readers$$$function__5___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d8c7a8e9f1a95d58a3d570c955651503,
#endif
        code_objects_c7ae940876eca5b6cbe5a8d6400c8ba2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_readers,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_readers$$$function__6___call__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_readers$$$function__6___call__,
        mod_consts.const_str_plain___call__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ee6ac8876a20c1ef358ddc5e37ae02a9,
#endif
        code_objects_f6457716f2d11dbd15de28c2edd930e0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_readers,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_readers$$$function__7_read_eof(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_readers$$$function__7_read_eof,
        mod_consts.const_str_plain_read_eof,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fca632450d4364a02744720e7751fa83,
#endif
        code_objects_6762d52e491c437c195f5124568c5131,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_readers,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_readers$$$function__8___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_readers$$$function__8___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9ddd460e6f620c6553e7cb8c59642c6f,
#endif
        code_objects_12de1bd254484339d91961cb202d41be,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_readers,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_readers$$$function__9___call__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_readers$$$function__9___call__,
        mod_consts.const_str_plain___call__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_705b601857c83a0449d283722be982c8,
#endif
        code_objects_c98008b4d3990d0549fbb1393c2dfdbe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_readers,
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

static function_impl_code const function_table_h11$_readers[] = {
impl_h11$_readers$$$function__1__obsolete_line_fold,
impl_h11$_readers$$$function__2__decode_header_lines,
impl_h11$_readers$$$function__3_maybe_read_from_IDLE_client,
impl_h11$_readers$$$function__4_maybe_read_from_SEND_RESPONSE_server,
impl_h11$_readers$$$function__5___init__,
impl_h11$_readers$$$function__6___call__,
impl_h11$_readers$$$function__7_read_eof,
impl_h11$_readers$$$function__8___init__,
impl_h11$_readers$$$function__9___call__,
impl_h11$_readers$$$function__10_read_eof,
impl_h11$_readers$$$function__11___call__,
impl_h11$_readers$$$function__12_read_eof,
impl_h11$_readers$$$function__13_expect_nothing,
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

    return Nuitka_Function_GetFunctionState(function, function_table_h11$_readers);
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
        module_h11$_readers,
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
        function_table_h11$_readers,
        sizeof(function_table_h11$_readers) / sizeof(function_impl_code)
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
static char const *module_full_name = "h11._readers";
#endif

// Internal entry point for module code.
PyObject *module_code_h11$_readers(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("h11$_readers");

    // Store the module for future use.
    module_h11$_readers = module;

    moduledict_h11$_readers = MODULE_DICT(module_h11$_readers);

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
        PRINT_STRING("h11$_readers: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("h11$_readers: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("h11$_readers: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "h11._readers" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inith11$_readers\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_h11$_readers,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_h11$_readers,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_h11$_readers,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_h11$_readers,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_h11$_readers,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_h11$_readers);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_h11$_readers, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_h11$_readers, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_h11$_readers, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_h11$_readers);
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

        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
PyObject *tmp_class_container$class_creation_3__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_3__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
PyObject *tmp_import_from_5__module = NULL;
struct Nuitka_FrameObject *frame_frame_h11$_readers;
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
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_h11$_readers$$$class__1_ContentLengthReader_122 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_h11$_readers$$$class__1_ContentLengthReader_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
PyObject *locals_h11$_readers$$$class__2_ChunkedReader_148 = NULL;
struct Nuitka_FrameObject *frame_frame_h11$_readers$$$class__2_ChunkedReader_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
PyObject *locals_h11$_readers$$$class__3_Http10Reader_213 = NULL;
struct Nuitka_FrameObject *frame_frame_h11$_readers$$$class__3_Http10Reader_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_h11$_readers, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_h11$_readers, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_h11$_readers = MAKE_MODULE_FRAME(code_objects_26f6f61b5224032fbff02c0f8435328e, module_h11$_readers);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_readers);
assert(Py_REFCNT(frame_frame_h11$_readers) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_h11$_readers$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_h11$_readers$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_h11$_readers, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_re;
tmp_globals_arg_value_1 = (PyObject *)moduledict_h11$_readers;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_h11$_readers->m_frame.f_lineno = 19;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_re, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_6 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_6);
tmp_import_from_1__module = tmp_assign_source_6;
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
        (PyObject *)moduledict_h11$_readers,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_7);
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
        (PyObject *)moduledict_h11$_readers,
        mod_consts.const_str_plain_Callable,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Callable);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable, tmp_assign_source_8);
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
        (PyObject *)moduledict_h11$_readers,
        mod_consts.const_str_plain_Dict,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Dict);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Dict, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_h11$_readers,
        mod_consts.const_str_plain_Iterable,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Iterable);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable, tmp_assign_source_10);
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
        (PyObject *)moduledict_h11$_readers,
        mod_consts.const_str_plain_NoReturn,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_NoReturn);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_NoReturn, tmp_assign_source_11);
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
        (PyObject *)moduledict_h11$_readers,
        mod_consts.const_str_plain_Optional,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_Optional);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional, tmp_assign_source_12);
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
        (PyObject *)moduledict_h11$_readers,
        mod_consts.const_str_plain_Tuple,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_Tuple);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Tuple, tmp_assign_source_13);
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
        (PyObject *)moduledict_h11$_readers,
        mod_consts.const_str_plain_Type,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_Type);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Type, tmp_assign_source_14);
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
        (PyObject *)moduledict_h11$_readers,
        mod_consts.const_str_plain_Union,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_Union);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_15);
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
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain__abnf;
tmp_globals_arg_value_2 = (PyObject *)moduledict_h11$_readers;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_fe7e4192cb3dfe1f18607098411d3e6b_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_h11$_readers->m_frame.f_lineno = 22;
tmp_assign_source_16 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

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
        (PyObject *)moduledict_h11$_readers,
        mod_consts.const_str_plain_chunk_header,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_chunk_header);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_chunk_header, tmp_assign_source_17);
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
        (PyObject *)moduledict_h11$_readers,
        mod_consts.const_str_plain_header_field,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_header_field);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_header_field, tmp_assign_source_18);
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
        (PyObject *)moduledict_h11$_readers,
        mod_consts.const_str_plain_request_line,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_request_line);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_request_line, tmp_assign_source_19);
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
        (PyObject *)moduledict_h11$_readers,
        mod_consts.const_str_plain_status_line,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_status_line);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_status_line, tmp_assign_source_20);
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
PyObject *tmp_assign_source_21;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain__events;
tmp_globals_arg_value_3 = (PyObject *)moduledict_h11$_readers;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_efbdd6c134a960a78e12065e5a1cb432_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_h11$_readers->m_frame.f_lineno = 23;
tmp_assign_source_21 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_21;
}
// Tried code:
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_14 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_h11$_readers,
        mod_consts.const_str_plain_Data,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_Data);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Data, tmp_assign_source_22);
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
        (PyObject *)moduledict_h11$_readers,
        mod_consts.const_str_plain_EndOfMessage,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_EndOfMessage);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_EndOfMessage, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_16;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_16 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_h11$_readers,
        mod_consts.const_str_plain_InformationalResponse,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_InformationalResponse);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_InformationalResponse, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_17;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_17 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_h11$_readers,
        mod_consts.const_str_plain_Request,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_Request);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Request, tmp_assign_source_25);
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
        (PyObject *)moduledict_h11$_readers,
        mod_consts.const_str_plain_Response,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_Response);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Response, tmp_assign_source_26);
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
PyObject *tmp_import_name_from_19;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain__receivebuffer;
tmp_globals_arg_value_4 = (PyObject *)moduledict_h11$_readers;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_ReceiveBuffer_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_h11$_readers->m_frame.f_lineno = 24;
tmp_import_name_from_19 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_h11$_readers,
        mod_consts.const_str_plain_ReceiveBuffer,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_ReceiveBuffer);
}

CHECK_OBJECT(tmp_import_name_from_19);
Py_DECREF(tmp_import_name_from_19);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_ReceiveBuffer, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain__state;
tmp_globals_arg_value_5 = (PyObject *)moduledict_h11$_readers;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_043237ef64c4a45c268a8188784fdf63_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_h11$_readers->m_frame.f_lineno = 25;
tmp_assign_source_28 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_28;
}
// Tried code:
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_20;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_20 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_h11$_readers,
        mod_consts.const_str_plain_CLIENT,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_CLIENT);
}

if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_CLIENT, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_21;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_21 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_h11$_readers,
        mod_consts.const_str_plain_CLOSED,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain_CLOSED);
}

if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_CLOSED, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_import_name_from_22;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_22 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_h11$_readers,
        mod_consts.const_str_plain_DONE,
        const_int_0
    );
} else {
    tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain_DONE);
}

if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_DONE, tmp_assign_source_31);
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
        (PyObject *)moduledict_h11$_readers,
        mod_consts.const_str_plain_IDLE,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts.const_str_plain_IDLE);
}

if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_IDLE, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_import_name_from_24;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_24 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_24)) {
    tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_24,
        (PyObject *)moduledict_h11$_readers,
        mod_consts.const_str_plain_MUST_CLOSE,
        const_int_0
    );
} else {
    tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts.const_str_plain_MUST_CLOSE);
}

if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_MUST_CLOSE, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_import_name_from_25;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_25 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_25)) {
    tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_25,
        (PyObject *)moduledict_h11$_readers,
        mod_consts.const_str_plain_SEND_BODY,
        const_int_0
    );
} else {
    tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts.const_str_plain_SEND_BODY);
}

if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_SEND_BODY, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_import_name_from_26;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_26 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_26)) {
    tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_26,
        (PyObject *)moduledict_h11$_readers,
        mod_consts.const_str_plain_SEND_RESPONSE,
        const_int_0
    );
} else {
    tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts.const_str_plain_SEND_RESPONSE);
}

if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_SEND_RESPONSE, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_import_name_from_27;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_27 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_27)) {
    tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_27,
        (PyObject *)moduledict_h11$_readers,
        mod_consts.const_str_plain_SERVER,
        const_int_0
    );
} else {
    tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts.const_str_plain_SERVER);
}

if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_SERVER, tmp_assign_source_36);
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
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain__util;
tmp_globals_arg_value_6 = (PyObject *)moduledict_h11$_readers;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_dd4a4d0f8e8b510647911d4aa7c07939_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_h11$_readers->m_frame.f_lineno = 35;
tmp_assign_source_37 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_5__module == NULL);
tmp_import_from_5__module = tmp_assign_source_37;
}
// Tried code:
{
PyObject *tmp_assign_source_38;
PyObject *tmp_import_name_from_28;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_28 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_28)) {
    tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_28,
        (PyObject *)moduledict_h11$_readers,
        mod_consts.const_str_plain_LocalProtocolError,
        const_int_0
    );
} else {
    tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_28, mod_consts.const_str_plain_LocalProtocolError);
}

if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_LocalProtocolError, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_import_name_from_29;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_29 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_29)) {
    tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_29,
        (PyObject *)moduledict_h11$_readers,
        mod_consts.const_str_plain_RemoteProtocolError,
        const_int_0
    );
} else {
    tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_29, mod_consts.const_str_plain_RemoteProtocolError);
}

if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_RemoteProtocolError, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_import_name_from_30;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_30 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_30)) {
    tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_30,
        (PyObject *)moduledict_h11$_readers,
        mod_consts.const_str_plain_Sentinel,
        const_int_0
    );
} else {
    tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_30, mod_consts.const_str_plain_Sentinel);
}

if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Sentinel, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_import_name_from_31;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_31 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_31)) {
    tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_31,
        (PyObject *)moduledict_h11$_readers,
        mod_consts.const_str_plain_validate,
        const_int_0
    );
} else {
    tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_31, mod_consts.const_str_plain_validate);
}

if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_validate, tmp_assign_source_41);
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
tmp_assign_source_42 = MAKE_LIST1(tstate, mod_consts.const_str_plain_READERS);
UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = module_var_accessor_h11$_readers$re(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 39;

    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_compile);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_h11$_readers$header_field(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_header_field);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 39;

    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_encode);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 39;

    goto frame_exception_exit_1;
}
frame_frame_h11$_readers->m_frame.f_lineno = 39;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_ascii_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 39;

    goto frame_exception_exit_1;
}
frame_frame_h11$_readers->m_frame.f_lineno = 39;
tmp_assign_source_43 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_header_field_re, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_h11$_readers$re(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 40;

    goto frame_exception_exit_1;
}
frame_frame_h11$_readers->m_frame.f_lineno = 40;
tmp_assign_source_44 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_bytes_digest_6326e2c3089fa659735b785efc488f71_tuple, 0)
);

if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_obs_fold_re, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_annotations_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_lines;
tmp_expression_value_3 = module_var_accessor_h11$_readers$Iterable(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Iterable);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 43;

    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = (PyObject *)&PyBytes_Type;
tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto frame_exception_exit_1;
}
tmp_annotations_1 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_return;
tmp_expression_value_4 = module_var_accessor_h11$_readers$Iterable(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Iterable);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 43;

    goto dict_build_exception_1;
}
tmp_subscript_value_2 = (PyObject *)&PyBytes_Type;
tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

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

tmp_assign_source_45 = MAKE_FUNCTION_h11$_readers$$$function__1__obsolete_line_fold(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain__obsolete_line_fold, tmp_assign_source_45);
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_annotations_2;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_3;
tmp_dict_key_2 = mod_consts.const_str_plain_lines;
tmp_expression_value_5 = module_var_accessor_h11$_readers$Iterable(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Iterable);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 65;

    goto frame_exception_exit_1;
}
tmp_subscript_value_3 = (PyObject *)&PyBytes_Type;
tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_3);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto frame_exception_exit_1;
}
tmp_annotations_2 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_5;
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_return;
tmp_expression_value_6 = module_var_accessor_h11$_readers$Iterable(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Iterable);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 66;

    goto dict_build_exception_2;
}
tmp_expression_value_7 = module_var_accessor_h11$_readers$Tuple(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Tuple);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 66;

    goto dict_build_exception_2;
}
tmp_subscript_value_5 = mod_consts.const_tuple_type_bytes_type_bytes_tuple;
tmp_subscript_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_5);
if (tmp_subscript_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto dict_build_exception_2;
}
tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_4);
CHECK_OBJECT(tmp_subscript_value_4);
Py_DECREF(tmp_subscript_value_4);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

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

tmp_assign_source_46 = MAKE_FUNCTION_h11$_readers$$$function__2__decode_header_lines(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain__decode_header_lines, tmp_assign_source_46);
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_9;
tmp_expression_value_8 = module_var_accessor_h11$_readers$re(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 72;

    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain_compile);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto frame_exception_exit_1;
}
tmp_expression_value_9 = module_var_accessor_h11$_readers$request_line(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_request_line);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 72;

    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_encode);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 72;

    goto frame_exception_exit_1;
}
frame_frame_h11$_readers->m_frame.f_lineno = 72;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_plain_ascii_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 72;

    goto frame_exception_exit_1;
}
frame_frame_h11$_readers->m_frame.f_lineno = 72;
tmp_assign_source_47 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_request_line_re, tmp_assign_source_47);
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_annotations_3;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
tmp_dict_key_3 = mod_consts.const_str_plain_buf;
tmp_dict_value_3 = module_var_accessor_h11$_readers$ReceiveBuffer(tstate);
if (unlikely(tmp_dict_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ReceiveBuffer);
}

if (tmp_dict_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 75;

    goto frame_exception_exit_1;
}
tmp_annotations_3 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_6;
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_return;
tmp_expression_value_10 = module_var_accessor_h11$_readers$Optional(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 75;

    goto dict_build_exception_3;
}
tmp_subscript_value_6 = module_var_accessor_h11$_readers$Request(tstate);
if (unlikely(tmp_subscript_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Request);
}

if (tmp_subscript_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 75;

    goto dict_build_exception_3;
}
tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_6);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

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

tmp_assign_source_48 = MAKE_FUNCTION_h11$_readers$$$function__3_maybe_read_from_IDLE_client(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_maybe_read_from_IDLE_client, tmp_assign_source_48);
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_12;
tmp_expression_value_11 = module_var_accessor_h11$_readers$re(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 91;

    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, const_str_plain_compile);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto frame_exception_exit_1;
}
tmp_expression_value_12 = module_var_accessor_h11$_readers$status_line(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_status_line);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 91;

    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_encode);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 91;

    goto frame_exception_exit_1;
}
frame_frame_h11$_readers->m_frame.f_lineno = 91;
tmp_args_element_value_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts.const_tuple_str_plain_ascii_tuple);

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 91;

    goto frame_exception_exit_1;
}
frame_frame_h11$_readers->m_frame.f_lineno = 91;
tmp_assign_source_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_status_line_re, tmp_assign_source_49);
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_annotations_4;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
tmp_dict_key_4 = mod_consts.const_str_plain_buf;
tmp_dict_value_4 = module_var_accessor_h11$_readers$ReceiveBuffer(tstate);
if (unlikely(tmp_dict_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ReceiveBuffer);
}

if (tmp_dict_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 95;

    goto frame_exception_exit_1;
}
tmp_annotations_4 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_7;
PyObject *tmp_tuple_element_1;
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_return;
tmp_expression_value_13 = module_var_accessor_h11$_readers$Union(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 96;

    goto dict_build_exception_4;
}
tmp_tuple_element_1 = module_var_accessor_h11$_readers$InformationalResponse(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InformationalResponse);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 96;

    goto dict_build_exception_4;
}
tmp_subscript_value_7 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_subscript_value_7, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_h11$_readers$Response(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Response);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 96;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_7, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = Py_None;
PyTuple_SET_ITEM0(tmp_subscript_value_7, 2, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_subscript_value_7);
goto dict_build_exception_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_7);
CHECK_OBJECT(tmp_subscript_value_7);
Py_DECREF(tmp_subscript_value_7);
if (tmp_dict_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

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

tmp_assign_source_50 = MAKE_FUNCTION_h11$_readers$$$function__4_maybe_read_from_SEND_RESPONSE_server(tstate, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_maybe_read_from_SEND_RESPONSE_server, tmp_assign_source_50);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_51;
tmp_assign_source_51 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_51;
}
{
PyObject *tmp_assign_source_52;
tmp_assign_source_52 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_52;
}
// Tried code:
{
PyObject *tmp_assign_source_53;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_h11$_readers$$$class__1_ContentLengthReader_122 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_dc420b80dc24d6ab2695938931bd015b;
tmp_result = DICT_SET_ITEM(locals_h11$_readers$$$class__1_ContentLengthReader_122, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_ContentLengthReader;
tmp_result = DICT_SET_ITEM(locals_h11$_readers$$$class__1_ContentLengthReader_122, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_122;
tmp_result = DICT_SET_ITEM(locals_h11$_readers$$$class__1_ContentLengthReader_122, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_040d82125f13242863458fa14c92a38c);

tmp_dictset_value = MAKE_FUNCTION_h11$_readers$$$function__5___init__(tstate, tmp_annotations_5);

tmp_result = DICT_SET_ITEM(locals_h11$_readers$$$class__1_ContentLengthReader_122, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
// Tried code:
// Tried code:
frame_frame_h11$_readers$$$class__1_ContentLengthReader_2 = MAKE_CLASS_FRAME(tstate, code_objects_debf120ac39347ce0966d75eeec0e4ec, module_h11$_readers, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_readers$$$class__1_ContentLengthReader_2);
assert(Py_REFCNT(frame_frame_h11$_readers$$$class__1_ContentLengthReader_2) == 2);

// Framed code:
{
PyObject *tmp_annotations_6;
PyObject *tmp_dict_key_5;
PyObject *tmp_dict_value_5;
tmp_dict_key_5 = mod_consts.const_str_plain_buf;
tmp_dict_value_5 = module_var_accessor_h11$_readers$ReceiveBuffer(tstate);
if (unlikely(tmp_dict_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ReceiveBuffer);
}

if (tmp_dict_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_6 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_8;
PyObject *tmp_tuple_element_2;
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_return;
tmp_expression_value_14 = module_var_accessor_h11$_readers$Union(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;
type_description_2 = "o";
    goto dict_build_exception_5;
}
tmp_tuple_element_2 = module_var_accessor_h11$_readers$Data(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Data);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;
type_description_2 = "o";
    goto dict_build_exception_5;
}
tmp_subscript_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_subscript_value_8, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_h11$_readers$EndOfMessage(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EndOfMessage);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;
type_description_2 = "o";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_subscript_value_8, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = Py_None;
PyTuple_SET_ITEM0(tmp_subscript_value_8, 2, tmp_tuple_element_2);
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_subscript_value_8);
goto dict_build_exception_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_8);
CHECK_OBJECT(tmp_subscript_value_8);
Py_DECREF(tmp_subscript_value_8);
if (tmp_dict_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_2 = "o";
    goto dict_build_exception_5;
}
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_5;
// Exception handling pass through code for dict_build:
dict_build_exception_5:;
Py_DECREF(tmp_annotations_6);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_5:;

tmp_dictset_value = MAKE_FUNCTION_h11$_readers$$$function__6___call__(tstate, tmp_annotations_6);

tmp_result = DICT_SET_ITEM(locals_h11$_readers$$$class__1_ContentLengthReader_122, mod_consts.const_str_plain___call__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_7;
PyObject *tmp_dict_key_6;
PyObject *tmp_dict_value_6;
tmp_dict_key_6 = mod_consts.const_str_plain_return;
tmp_dict_value_6 = module_var_accessor_h11$_readers$NoReturn(tstate);
if (unlikely(tmp_dict_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NoReturn);
}

if (tmp_dict_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 136;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_7 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_h11$_readers$$$function__7_read_eof(tstate, tmp_annotations_7);

tmp_result = DICT_SET_ITEM(locals_h11$_readers$$$class__1_ContentLengthReader_122, mod_consts.const_str_plain_read_eof, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_readers$$$class__1_ContentLengthReader_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_readers$$$class__1_ContentLengthReader_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_readers$$$class__1_ContentLengthReader_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_readers$$$class__1_ContentLengthReader_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_h11$_readers$$$class__1_ContentLengthReader_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_8;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__length_str_plain__remaining_tuple;
tmp_result = DICT_SET_ITEM(locals_h11$_readers$$$class__1_ContentLengthReader_122, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_54;
PyObject *tmp_called_value_7;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_1;
tmp_called_value_7 = (PyObject *)&PyType_Type;
tmp_tuple_element_3 = mod_consts.const_str_plain_ContentLengthReader;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_3);
tmp_tuple_element_3 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = locals_h11$_readers$$$class__1_ContentLengthReader_122;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_h11$_readers->m_frame.f_lineno = 122;
tmp_assign_source_54 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_8;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_54;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_53 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_53);
goto try_return_handler_8;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
Py_DECREF(locals_h11$_readers$$$class__1_ContentLengthReader_122);
locals_h11$_readers$$$class__1_ContentLengthReader_122 = NULL;
goto try_return_handler_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_h11$_readers$$$class__1_ContentLengthReader_122);
locals_h11$_readers$$$class__1_ContentLengthReader_122 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_7;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 122;
goto try_except_handler_6;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_ContentLengthReader, tmp_assign_source_53);
}
goto try_end_6;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
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
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
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
{
PyObject *tmp_assign_source_55;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_16;
tmp_expression_value_15 = module_var_accessor_h11$_readers$re(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 145;

    goto frame_exception_exit_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, const_str_plain_compile);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;

    goto frame_exception_exit_1;
}
tmp_expression_value_16 = module_var_accessor_h11$_readers$chunk_header(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_chunk_header);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_8);

exception_lineno = 145;

    goto frame_exception_exit_1;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_encode);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 145;

    goto frame_exception_exit_1;
}
frame_frame_h11$_readers->m_frame.f_lineno = 145;
tmp_args_element_value_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_9, mod_consts.const_tuple_str_plain_ascii_tuple);

CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 145;

    goto frame_exception_exit_1;
}
frame_frame_h11$_readers->m_frame.f_lineno = 145;
tmp_assign_source_55 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_chunk_header_re, tmp_assign_source_55);
}
{
PyObject *tmp_outline_return_value_2;
{
PyObject *tmp_assign_source_56;
tmp_assign_source_56 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_56;
}
{
PyObject *tmp_assign_source_57;
tmp_assign_source_57 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_57;
}
// Tried code:
{
PyObject *tmp_assign_source_58;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_h11$_readers$$$class__2_ChunkedReader_148 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
tmp_dictset_value = mod_consts.const_str_digest_dc420b80dc24d6ab2695938931bd015b;
tmp_result = DICT_SET_ITEM(locals_h11$_readers$$$class__2_ChunkedReader_148, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_ChunkedReader;
tmp_result = DICT_SET_ITEM(locals_h11$_readers$$$class__2_ChunkedReader_148, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_148;
tmp_result = DICT_SET_ITEM(locals_h11$_readers$$$class__2_ChunkedReader_148, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);

tmp_dictset_value = MAKE_FUNCTION_h11$_readers$$$function__8___init__(tstate, tmp_annotations_8);

tmp_result = DICT_SET_ITEM(locals_h11$_readers$$$class__2_ChunkedReader_148, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
// Tried code:
// Tried code:
frame_frame_h11$_readers$$$class__2_ChunkedReader_3 = MAKE_CLASS_FRAME(tstate, code_objects_e10f6264c53cc719c694f8f062342757, module_h11$_readers, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_readers$$$class__2_ChunkedReader_3);
assert(Py_REFCNT(frame_frame_h11$_readers$$$class__2_ChunkedReader_3) == 2);

// Framed code:
{
PyObject *tmp_annotations_9;
PyObject *tmp_dict_key_7;
PyObject *tmp_dict_value_7;
tmp_dict_key_7 = mod_consts.const_str_plain_buf;
tmp_dict_value_7 = module_var_accessor_h11$_readers$ReceiveBuffer(tstate);
if (unlikely(tmp_dict_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ReceiveBuffer);
}

if (tmp_dict_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 156;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_annotations_9 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_9;
PyObject *tmp_tuple_element_4;
tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_return;
tmp_expression_value_17 = module_var_accessor_h11$_readers$Union(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 156;
type_description_2 = "o";
    goto dict_build_exception_6;
}
tmp_tuple_element_4 = module_var_accessor_h11$_readers$Data(tstate);
if (unlikely(tmp_tuple_element_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Data);
}

if (tmp_tuple_element_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 156;
type_description_2 = "o";
    goto dict_build_exception_6;
}
tmp_subscript_value_9 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_subscript_value_9, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = module_var_accessor_h11$_readers$EndOfMessage(tstate);
if (unlikely(tmp_tuple_element_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EndOfMessage);
}

if (tmp_tuple_element_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 156;
type_description_2 = "o";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM0(tmp_subscript_value_9, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = Py_None;
PyTuple_SET_ITEM0(tmp_subscript_value_9, 2, tmp_tuple_element_4);
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_subscript_value_9);
goto dict_build_exception_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_9);
CHECK_OBJECT(tmp_subscript_value_9);
Py_DECREF(tmp_subscript_value_9);
if (tmp_dict_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_2 = "o";
    goto dict_build_exception_6;
}
tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_7, tmp_dict_value_7);
Py_DECREF(tmp_dict_value_7);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_6;
// Exception handling pass through code for dict_build:
dict_build_exception_6:;
Py_DECREF(tmp_annotations_9);
goto frame_exception_exit_3;
// Finished with no exception for dict_build:
dict_build_no_exception_6:;

tmp_dictset_value = MAKE_FUNCTION_h11$_readers$$$function__9___call__(tstate, tmp_annotations_9);

tmp_result = DICT_SET_ITEM(locals_h11$_readers$$$class__2_ChunkedReader_148, mod_consts.const_str_plain___call__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_10;
PyObject *tmp_dict_key_8;
PyObject *tmp_dict_value_8;
tmp_dict_key_8 = mod_consts.const_str_plain_return;
tmp_dict_value_8 = module_var_accessor_h11$_readers$NoReturn(tstate);
if (unlikely(tmp_dict_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NoReturn);
}

if (tmp_dict_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 206;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_annotations_10 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_8, tmp_dict_value_8);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_h11$_readers$$$function__10_read_eof(tstate, tmp_annotations_10);

tmp_result = DICT_SET_ITEM(locals_h11$_readers$$$class__2_ChunkedReader_148, mod_consts.const_str_plain_read_eof, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_readers$$$class__2_ChunkedReader_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_readers$$$class__2_ChunkedReader_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_readers$$$class__2_ChunkedReader_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_readers$$$class__2_ChunkedReader_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_h11$_readers$$$class__2_ChunkedReader_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_11;
skip_nested_handling_2:;
tmp_dictset_value = mod_consts.const_tuple_3a4a1cb4d5160943baec2af7a988e62f_tuple;
tmp_result = DICT_SET_ITEM(locals_h11$_readers$$$class__2_ChunkedReader_148, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_59;
PyObject *tmp_called_value_10;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kwargs_value_2;
tmp_called_value_10 = (PyObject *)&PyType_Type;
tmp_tuple_element_5 = mod_consts.const_str_plain_ChunkedReader;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
tmp_tuple_element_5 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
tmp_tuple_element_5 = locals_h11$_readers$$$class__2_ChunkedReader_148;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_h11$_readers->m_frame.f_lineno = 148;
tmp_assign_source_59 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto try_except_handler_11;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_59;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_58 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_58);
goto try_return_handler_11;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
Py_DECREF(locals_h11$_readers$$$class__2_ChunkedReader_148);
locals_h11$_readers$$$class__2_ChunkedReader_148 = NULL;
goto try_return_handler_10;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_h11$_readers$$$class__2_ChunkedReader_148);
locals_h11$_readers$$$class__2_ChunkedReader_148 = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_10;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 148;
goto try_except_handler_9;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_ChunkedReader, tmp_assign_source_58);
}
goto try_end_7;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
Py_DECREF(tmp_class_container$class_creation_2__prepared);
tmp_class_container$class_creation_2__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
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
PyObject *tmp_assign_source_60;
tmp_assign_source_60 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_60;
}
{
PyObject *tmp_assign_source_61;
tmp_assign_source_61 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_61;
}
// Tried code:
{
PyObject *tmp_assign_source_62;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_h11$_readers$$$class__3_Http10Reader_213 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
tmp_dictset_value = mod_consts.const_str_digest_dc420b80dc24d6ab2695938931bd015b;
tmp_result = DICT_SET_ITEM(locals_h11$_readers$$$class__3_Http10Reader_213, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_Http10Reader;
tmp_result = DICT_SET_ITEM(locals_h11$_readers$$$class__3_Http10Reader_213, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_213;
tmp_result = DICT_SET_ITEM(locals_h11$_readers$$$class__3_Http10Reader_213, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_h11$_readers$$$class__3_Http10Reader_4 = MAKE_CLASS_FRAME(tstate, code_objects_29c4a4d5ea1e2ed27de148b6c41ab4ce, module_h11$_readers, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_readers$$$class__3_Http10Reader_4);
assert(Py_REFCNT(frame_frame_h11$_readers$$$class__3_Http10Reader_4) == 2);

// Framed code:
{
PyObject *tmp_annotations_11;
PyObject *tmp_dict_key_9;
PyObject *tmp_dict_value_9;
tmp_dict_key_9 = mod_consts.const_str_plain_buf;
tmp_dict_value_9 = module_var_accessor_h11$_readers$ReceiveBuffer(tstate);
if (unlikely(tmp_dict_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ReceiveBuffer);
}

if (tmp_dict_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 214;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_annotations_11 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_18;
PyObject *tmp_subscript_value_10;
tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_9, tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_return;
tmp_expression_value_18 = module_var_accessor_h11$_readers$Optional(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 214;
type_description_2 = "o";
    goto dict_build_exception_7;
}
tmp_subscript_value_10 = module_var_accessor_h11$_readers$Data(tstate);
if (unlikely(tmp_subscript_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Data);
}

if (tmp_subscript_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 214;
type_description_2 = "o";
    goto dict_build_exception_7;
}
tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_10);
if (tmp_dict_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_2 = "o";
    goto dict_build_exception_7;
}
tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_9, tmp_dict_value_9);
Py_DECREF(tmp_dict_value_9);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_7;
// Exception handling pass through code for dict_build:
dict_build_exception_7:;
Py_DECREF(tmp_annotations_11);
goto frame_exception_exit_4;
// Finished with no exception for dict_build:
dict_build_no_exception_7:;

tmp_dictset_value = MAKE_FUNCTION_h11$_readers$$$function__11___call__(tstate, tmp_annotations_11);

tmp_result = DICT_SET_ITEM(locals_h11$_readers$$$class__3_Http10Reader_213, mod_consts.const_str_plain___call__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_12;
PyObject *tmp_dict_key_10;
PyObject *tmp_dict_value_10;
tmp_dict_key_10 = mod_consts.const_str_plain_return;
tmp_dict_value_10 = module_var_accessor_h11$_readers$EndOfMessage(tstate);
if (unlikely(tmp_dict_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EndOfMessage);
}

if (tmp_dict_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 220;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_annotations_12 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_10, tmp_dict_value_10);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_h11$_readers$$$function__12_read_eof(tstate, tmp_annotations_12);

tmp_result = DICT_SET_ITEM(locals_h11$_readers$$$class__3_Http10Reader_213, mod_consts.const_str_plain_read_eof, tmp_dictset_value);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_readers$$$class__3_Http10Reader_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_readers$$$class__3_Http10Reader_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_readers$$$class__3_Http10Reader_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_readers$$$class__3_Http10Reader_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_h11$_readers$$$class__3_Http10Reader_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_14;
skip_nested_handling_3:;
tmp_dictset_value = const_tuple_empty;
tmp_result = DICT_SET_ITEM(locals_h11$_readers$$$class__3_Http10Reader_213, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_63;
PyObject *tmp_called_value_11;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_3;
tmp_called_value_11 = (PyObject *)&PyType_Type;
tmp_tuple_element_6 = mod_consts.const_str_plain_Http10Reader;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
tmp_tuple_element_6 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
tmp_tuple_element_6 = locals_h11$_readers$$$class__3_Http10Reader_213;
PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_h11$_readers->m_frame.f_lineno = 213;
tmp_assign_source_63 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;

    goto try_except_handler_14;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_63;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_62 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_62);
goto try_return_handler_14;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
Py_DECREF(locals_h11$_readers$$$class__3_Http10Reader_213);
locals_h11$_readers$$$class__3_Http10Reader_213 = NULL;
goto try_return_handler_13;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_h11$_readers$$$class__3_Http10Reader_213);
locals_h11$_readers$$$class__3_Http10Reader_213 = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto try_except_handler_13;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 213;
goto try_except_handler_12;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_Http10Reader, tmp_assign_source_62);
}
goto try_end_8;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
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
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
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
PyObject *tmp_assign_source_64;
PyObject *tmp_annotations_13;
PyObject *tmp_dict_key_11;
PyObject *tmp_dict_value_11;
tmp_dict_key_11 = mod_consts.const_str_plain_buf;
tmp_dict_value_11 = module_var_accessor_h11$_readers$ReceiveBuffer(tstate);
if (unlikely(tmp_dict_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ReceiveBuffer);
}

if (tmp_dict_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 224;

    goto frame_exception_exit_1;
}
tmp_annotations_13 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_11, tmp_dict_value_11);
assert(!(tmp_res != 0));
tmp_dict_key_11 = mod_consts.const_str_plain_return;
tmp_dict_value_11 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_11, tmp_dict_value_11);
assert(!(tmp_res != 0));

tmp_assign_source_64 = MAKE_FUNCTION_h11$_readers$$$function__13_expect_nothing(tstate, tmp_annotations_13);

UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_nothing, tmp_assign_source_64);
}
{
PyObject *tmp_assign_source_65;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_11;
PyObject *tmp_tuple_element_7;
PyObject *tmp_expression_value_20;
PyObject *tmp_subscript_value_12;
PyObject *tmp_tuple_element_8;
PyObject *tmp_expression_value_21;
PyObject *tmp_subscript_value_13;
tmp_expression_value_19 = module_var_accessor_h11$_readers$Dict(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Dict);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 230;

    goto frame_exception_exit_1;
}
tmp_expression_value_20 = module_var_accessor_h11$_readers$Union(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 231;

    goto frame_exception_exit_1;
}
tmp_expression_value_21 = module_var_accessor_h11$_readers$Type(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 231;

    goto frame_exception_exit_1;
}
tmp_subscript_value_13 = module_var_accessor_h11$_readers$Sentinel(tstate);
if (unlikely(tmp_subscript_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sentinel);
}

if (tmp_subscript_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 231;

    goto frame_exception_exit_1;
}
tmp_tuple_element_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_13);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;

    goto frame_exception_exit_1;
}
tmp_subscript_value_12 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_22;
PyObject *tmp_subscript_value_14;
PyObject *tmp_tuple_element_9;
PyObject *tmp_expression_value_23;
PyObject *tmp_subscript_value_15;
PyTuple_SET_ITEM(tmp_subscript_value_12, 0, tmp_tuple_element_8);
tmp_expression_value_22 = module_var_accessor_h11$_readers$Tuple(tstate);
if (unlikely(tmp_expression_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Tuple);
}

if (tmp_expression_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 231;

    goto tuple_build_exception_4;
}
tmp_expression_value_23 = module_var_accessor_h11$_readers$Type(tstate);
if (unlikely(tmp_expression_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 231;

    goto tuple_build_exception_4;
}
tmp_subscript_value_15 = module_var_accessor_h11$_readers$Sentinel(tstate);
if (unlikely(tmp_subscript_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sentinel);
}

if (tmp_subscript_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 231;

    goto tuple_build_exception_4;
}
tmp_tuple_element_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_15);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;

    goto tuple_build_exception_4;
}
tmp_subscript_value_14 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_24;
PyObject *tmp_subscript_value_16;
PyTuple_SET_ITEM(tmp_subscript_value_14, 0, tmp_tuple_element_9);
tmp_expression_value_24 = module_var_accessor_h11$_readers$Type(tstate);
if (unlikely(tmp_expression_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 231;

    goto tuple_build_exception_5;
}
tmp_subscript_value_16 = module_var_accessor_h11$_readers$Sentinel(tstate);
if (unlikely(tmp_subscript_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sentinel);
}

if (tmp_subscript_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 231;

    goto tuple_build_exception_5;
}
tmp_tuple_element_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_24, tmp_subscript_value_16);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_subscript_value_14, 1, tmp_tuple_element_9);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_subscript_value_14);
goto tuple_build_exception_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_tuple_element_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_14);
CHECK_OBJECT(tmp_subscript_value_14);
Py_DECREF(tmp_subscript_value_14);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_subscript_value_12, 1, tmp_tuple_element_8);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_subscript_value_12);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_tuple_element_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_12);
CHECK_OBJECT(tmp_subscript_value_12);
Py_DECREF(tmp_subscript_value_12);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;

    goto frame_exception_exit_1;
}
tmp_subscript_value_11 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_25;
PyObject *tmp_subscript_value_17;
PyObject *tmp_tuple_element_10;
PyObject *tmp_expression_value_26;
PyObject *tmp_subscript_value_18;
PyObject *tmp_tuple_element_11;
PyTuple_SET_ITEM(tmp_subscript_value_11, 0, tmp_tuple_element_7);
tmp_expression_value_25 = module_var_accessor_h11$_readers$Union(tstate);
if (unlikely(tmp_expression_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 232;

    goto tuple_build_exception_6;
}
tmp_expression_value_26 = module_var_accessor_h11$_readers$Callable(tstate);
if (unlikely(tmp_expression_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Callable);
}

if (tmp_expression_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 232;

    goto tuple_build_exception_6;
}
tmp_tuple_element_11 = Py_Ellipsis;
tmp_subscript_value_18 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_18, 0, tmp_tuple_element_11);
tmp_tuple_element_11 = module_var_accessor_h11$_readers$Any(tstate);
if (unlikely(tmp_tuple_element_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 232;

    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM0(tmp_subscript_value_18, 1, tmp_tuple_element_11);
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_subscript_value_18);
goto tuple_build_exception_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_tuple_element_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_26, tmp_subscript_value_18);
CHECK_OBJECT(tmp_subscript_value_18);
Py_DECREF(tmp_subscript_value_18);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

    goto tuple_build_exception_6;
}
tmp_subscript_value_17 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_27;
PyObject *tmp_subscript_value_19;
PyObject *tmp_tuple_element_12;
PyTuple_SET_ITEM(tmp_subscript_value_17, 0, tmp_tuple_element_10);
tmp_expression_value_27 = module_var_accessor_h11$_readers$Dict(tstate);
if (unlikely(tmp_expression_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Dict);
}

if (tmp_expression_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 232;

    goto tuple_build_exception_8;
}
tmp_tuple_element_12 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_19 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_28;
PyObject *tmp_subscript_value_20;
PyObject *tmp_tuple_element_13;
PyTuple_SET_ITEM0(tmp_subscript_value_19, 0, tmp_tuple_element_12);
tmp_expression_value_28 = module_var_accessor_h11$_readers$Callable(tstate);
if (unlikely(tmp_expression_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Callable);
}

if (tmp_expression_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 232;

    goto tuple_build_exception_9;
}
tmp_tuple_element_13 = Py_Ellipsis;
tmp_subscript_value_20 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_20, 0, tmp_tuple_element_13);
tmp_tuple_element_13 = module_var_accessor_h11$_readers$Any(tstate);
if (unlikely(tmp_tuple_element_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 232;

    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM0(tmp_subscript_value_20, 1, tmp_tuple_element_13);
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_10:;
Py_DECREF(tmp_subscript_value_20);
goto tuple_build_exception_9;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
tmp_tuple_element_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_28, tmp_subscript_value_20);
CHECK_OBJECT(tmp_subscript_value_20);
Py_DECREF(tmp_subscript_value_20);
if (tmp_tuple_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM(tmp_subscript_value_19, 1, tmp_tuple_element_12);
}
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_subscript_value_19);
goto tuple_build_exception_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
tmp_tuple_element_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_27, tmp_subscript_value_19);
CHECK_OBJECT(tmp_subscript_value_19);
Py_DECREF(tmp_subscript_value_19);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM(tmp_subscript_value_17, 1, tmp_tuple_element_10);
}
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_subscript_value_17);
goto tuple_build_exception_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;
tmp_tuple_element_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_25, tmp_subscript_value_17);
CHECK_OBJECT(tmp_subscript_value_17);
Py_DECREF(tmp_subscript_value_17);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_subscript_value_11, 1, tmp_tuple_element_7);
}
goto tuple_build_no_exception_10;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_subscript_value_11);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_10:;
tmp_assign_source_65 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_11);
CHECK_OBJECT(tmp_subscript_value_11);
Py_DECREF(tmp_subscript_value_11);
if (tmp_assign_source_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadersType, tmp_assign_source_65);
}
{
PyObject *tmp_assign_source_66;
PyObject *tmp_dict_key_12;
PyObject *tmp_dict_value_12;
PyObject *tmp_tuple_element_14;
tmp_tuple_element_14 = module_var_accessor_h11$_readers$CLIENT(tstate);
if (unlikely(tmp_tuple_element_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CLIENT);
}

if (tmp_tuple_element_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 236;

    goto frame_exception_exit_1;
}
tmp_dict_key_12 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_dict_key_12, 0, tmp_tuple_element_14);
tmp_tuple_element_14 = module_var_accessor_h11$_readers$IDLE(tstate);
if (unlikely(tmp_tuple_element_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IDLE);
}

if (tmp_tuple_element_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 236;

    goto tuple_build_exception_11;
}
PyTuple_SET_ITEM0(tmp_dict_key_12, 1, tmp_tuple_element_14);
goto tuple_build_no_exception_11;
// Exception handling pass through code for tuple_build:
tuple_build_exception_11:;
Py_DECREF(tmp_dict_key_12);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_11:;
tmp_dict_value_12 = module_var_accessor_h11$_readers$maybe_read_from_IDLE_client(tstate);
if (unlikely(tmp_dict_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_maybe_read_from_IDLE_client);
}

if (tmp_dict_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_12);

exception_lineno = 236;

    goto frame_exception_exit_1;
}
tmp_assign_source_66 = _PyDict_NewPresized( 10 );
{
PyObject *tmp_tuple_element_15;
PyObject *tmp_tuple_element_16;
PyObject *tmp_tuple_element_17;
PyObject *tmp_tuple_element_18;
PyObject *tmp_tuple_element_19;
PyObject *tmp_tuple_element_20;
PyObject *tmp_tuple_element_21;
PyObject *tmp_tuple_element_22;
PyObject *tmp_dict_key_13;
PyObject *tmp_dict_value_13;
tmp_res = PyDict_SetItem(tmp_assign_source_66, tmp_dict_key_12, tmp_dict_value_12);
Py_DECREF(tmp_dict_key_12);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;

    goto dict_build_exception_8;
}
tmp_tuple_element_15 = module_var_accessor_h11$_readers$SERVER(tstate);
if (unlikely(tmp_tuple_element_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SERVER);
}

if (tmp_tuple_element_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 237;

    goto dict_build_exception_8;
}
tmp_dict_key_12 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_dict_key_12, 0, tmp_tuple_element_15);
tmp_tuple_element_15 = module_var_accessor_h11$_readers$IDLE(tstate);
if (unlikely(tmp_tuple_element_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IDLE);
}

if (tmp_tuple_element_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 237;

    goto tuple_build_exception_12;
}
PyTuple_SET_ITEM0(tmp_dict_key_12, 1, tmp_tuple_element_15);
goto tuple_build_no_exception_12;
// Exception handling pass through code for tuple_build:
tuple_build_exception_12:;
Py_DECREF(tmp_dict_key_12);
goto dict_build_exception_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_12:;
tmp_dict_value_12 = module_var_accessor_h11$_readers$maybe_read_from_SEND_RESPONSE_server(tstate);
if (unlikely(tmp_dict_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_maybe_read_from_SEND_RESPONSE_server);
}

if (tmp_dict_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_12);

exception_lineno = 237;

    goto dict_build_exception_8;
}
tmp_res = PyDict_SetItem(tmp_assign_source_66, tmp_dict_key_12, tmp_dict_value_12);
Py_DECREF(tmp_dict_key_12);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;

    goto dict_build_exception_8;
}
tmp_tuple_element_16 = module_var_accessor_h11$_readers$SERVER(tstate);
if (unlikely(tmp_tuple_element_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SERVER);
}

if (tmp_tuple_element_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 238;

    goto dict_build_exception_8;
}
tmp_dict_key_12 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_dict_key_12, 0, tmp_tuple_element_16);
tmp_tuple_element_16 = module_var_accessor_h11$_readers$SEND_RESPONSE(tstate);
if (unlikely(tmp_tuple_element_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SEND_RESPONSE);
}

if (tmp_tuple_element_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 238;

    goto tuple_build_exception_13;
}
PyTuple_SET_ITEM0(tmp_dict_key_12, 1, tmp_tuple_element_16);
goto tuple_build_no_exception_13;
// Exception handling pass through code for tuple_build:
tuple_build_exception_13:;
Py_DECREF(tmp_dict_key_12);
goto dict_build_exception_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_13:;
tmp_dict_value_12 = module_var_accessor_h11$_readers$maybe_read_from_SEND_RESPONSE_server(tstate);
if (unlikely(tmp_dict_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_maybe_read_from_SEND_RESPONSE_server);
}

if (tmp_dict_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_12);

exception_lineno = 238;

    goto dict_build_exception_8;
}
tmp_res = PyDict_SetItem(tmp_assign_source_66, tmp_dict_key_12, tmp_dict_value_12);
Py_DECREF(tmp_dict_key_12);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;

    goto dict_build_exception_8;
}
tmp_tuple_element_17 = module_var_accessor_h11$_readers$CLIENT(tstate);
if (unlikely(tmp_tuple_element_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CLIENT);
}

if (tmp_tuple_element_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 239;

    goto dict_build_exception_8;
}
tmp_dict_key_12 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_dict_key_12, 0, tmp_tuple_element_17);
tmp_tuple_element_17 = module_var_accessor_h11$_readers$DONE(tstate);
if (unlikely(tmp_tuple_element_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DONE);
}

if (tmp_tuple_element_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 239;

    goto tuple_build_exception_14;
}
PyTuple_SET_ITEM0(tmp_dict_key_12, 1, tmp_tuple_element_17);
goto tuple_build_no_exception_14;
// Exception handling pass through code for tuple_build:
tuple_build_exception_14:;
Py_DECREF(tmp_dict_key_12);
goto dict_build_exception_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_14:;
tmp_dict_value_12 = module_var_accessor_h11$_readers$expect_nothing(tstate);
if (unlikely(tmp_dict_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_expect_nothing);
}

if (tmp_dict_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_12);

exception_lineno = 239;

    goto dict_build_exception_8;
}
tmp_res = PyDict_SetItem(tmp_assign_source_66, tmp_dict_key_12, tmp_dict_value_12);
Py_DECREF(tmp_dict_key_12);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto dict_build_exception_8;
}
tmp_tuple_element_18 = module_var_accessor_h11$_readers$CLIENT(tstate);
if (unlikely(tmp_tuple_element_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CLIENT);
}

if (tmp_tuple_element_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 240;

    goto dict_build_exception_8;
}
tmp_dict_key_12 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_dict_key_12, 0, tmp_tuple_element_18);
tmp_tuple_element_18 = module_var_accessor_h11$_readers$MUST_CLOSE(tstate);
if (unlikely(tmp_tuple_element_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MUST_CLOSE);
}

if (tmp_tuple_element_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 240;

    goto tuple_build_exception_15;
}
PyTuple_SET_ITEM0(tmp_dict_key_12, 1, tmp_tuple_element_18);
goto tuple_build_no_exception_15;
// Exception handling pass through code for tuple_build:
tuple_build_exception_15:;
Py_DECREF(tmp_dict_key_12);
goto dict_build_exception_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_15:;
tmp_dict_value_12 = module_var_accessor_h11$_readers$expect_nothing(tstate);
if (unlikely(tmp_dict_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_expect_nothing);
}

if (tmp_dict_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_12);

exception_lineno = 240;

    goto dict_build_exception_8;
}
tmp_res = PyDict_SetItem(tmp_assign_source_66, tmp_dict_key_12, tmp_dict_value_12);
Py_DECREF(tmp_dict_key_12);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;

    goto dict_build_exception_8;
}
tmp_tuple_element_19 = module_var_accessor_h11$_readers$CLIENT(tstate);
if (unlikely(tmp_tuple_element_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CLIENT);
}

if (tmp_tuple_element_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 241;

    goto dict_build_exception_8;
}
tmp_dict_key_12 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_dict_key_12, 0, tmp_tuple_element_19);
tmp_tuple_element_19 = module_var_accessor_h11$_readers$CLOSED(tstate);
if (unlikely(tmp_tuple_element_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CLOSED);
}

if (tmp_tuple_element_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 241;

    goto tuple_build_exception_16;
}
PyTuple_SET_ITEM0(tmp_dict_key_12, 1, tmp_tuple_element_19);
goto tuple_build_no_exception_16;
// Exception handling pass through code for tuple_build:
tuple_build_exception_16:;
Py_DECREF(tmp_dict_key_12);
goto dict_build_exception_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_16:;
tmp_dict_value_12 = module_var_accessor_h11$_readers$expect_nothing(tstate);
if (unlikely(tmp_dict_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_expect_nothing);
}

if (tmp_dict_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_12);

exception_lineno = 241;

    goto dict_build_exception_8;
}
tmp_res = PyDict_SetItem(tmp_assign_source_66, tmp_dict_key_12, tmp_dict_value_12);
Py_DECREF(tmp_dict_key_12);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;

    goto dict_build_exception_8;
}
tmp_tuple_element_20 = module_var_accessor_h11$_readers$SERVER(tstate);
if (unlikely(tmp_tuple_element_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SERVER);
}

if (tmp_tuple_element_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 242;

    goto dict_build_exception_8;
}
tmp_dict_key_12 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_dict_key_12, 0, tmp_tuple_element_20);
tmp_tuple_element_20 = module_var_accessor_h11$_readers$DONE(tstate);
if (unlikely(tmp_tuple_element_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DONE);
}

if (tmp_tuple_element_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 242;

    goto tuple_build_exception_17;
}
PyTuple_SET_ITEM0(tmp_dict_key_12, 1, tmp_tuple_element_20);
goto tuple_build_no_exception_17;
// Exception handling pass through code for tuple_build:
tuple_build_exception_17:;
Py_DECREF(tmp_dict_key_12);
goto dict_build_exception_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_17:;
tmp_dict_value_12 = module_var_accessor_h11$_readers$expect_nothing(tstate);
if (unlikely(tmp_dict_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_expect_nothing);
}

if (tmp_dict_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_12);

exception_lineno = 242;

    goto dict_build_exception_8;
}
tmp_res = PyDict_SetItem(tmp_assign_source_66, tmp_dict_key_12, tmp_dict_value_12);
Py_DECREF(tmp_dict_key_12);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;

    goto dict_build_exception_8;
}
tmp_tuple_element_21 = module_var_accessor_h11$_readers$SERVER(tstate);
if (unlikely(tmp_tuple_element_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SERVER);
}

if (tmp_tuple_element_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 243;

    goto dict_build_exception_8;
}
tmp_dict_key_12 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_dict_key_12, 0, tmp_tuple_element_21);
tmp_tuple_element_21 = module_var_accessor_h11$_readers$MUST_CLOSE(tstate);
if (unlikely(tmp_tuple_element_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MUST_CLOSE);
}

if (tmp_tuple_element_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 243;

    goto tuple_build_exception_18;
}
PyTuple_SET_ITEM0(tmp_dict_key_12, 1, tmp_tuple_element_21);
goto tuple_build_no_exception_18;
// Exception handling pass through code for tuple_build:
tuple_build_exception_18:;
Py_DECREF(tmp_dict_key_12);
goto dict_build_exception_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_18:;
tmp_dict_value_12 = module_var_accessor_h11$_readers$expect_nothing(tstate);
if (unlikely(tmp_dict_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_expect_nothing);
}

if (tmp_dict_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_12);

exception_lineno = 243;

    goto dict_build_exception_8;
}
tmp_res = PyDict_SetItem(tmp_assign_source_66, tmp_dict_key_12, tmp_dict_value_12);
Py_DECREF(tmp_dict_key_12);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;

    goto dict_build_exception_8;
}
tmp_tuple_element_22 = module_var_accessor_h11$_readers$SERVER(tstate);
if (unlikely(tmp_tuple_element_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SERVER);
}

if (tmp_tuple_element_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 244;

    goto dict_build_exception_8;
}
tmp_dict_key_12 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_dict_key_12, 0, tmp_tuple_element_22);
tmp_tuple_element_22 = module_var_accessor_h11$_readers$CLOSED(tstate);
if (unlikely(tmp_tuple_element_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CLOSED);
}

if (tmp_tuple_element_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 244;

    goto tuple_build_exception_19;
}
PyTuple_SET_ITEM0(tmp_dict_key_12, 1, tmp_tuple_element_22);
goto tuple_build_no_exception_19;
// Exception handling pass through code for tuple_build:
tuple_build_exception_19:;
Py_DECREF(tmp_dict_key_12);
goto dict_build_exception_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_19:;
tmp_dict_value_12 = module_var_accessor_h11$_readers$expect_nothing(tstate);
if (unlikely(tmp_dict_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_expect_nothing);
}

if (tmp_dict_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_12);

exception_lineno = 244;

    goto dict_build_exception_8;
}
tmp_res = PyDict_SetItem(tmp_assign_source_66, tmp_dict_key_12, tmp_dict_value_12);
Py_DECREF(tmp_dict_key_12);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto dict_build_exception_8;
}
tmp_dict_key_12 = module_var_accessor_h11$_readers$SEND_BODY(tstate);
if (unlikely(tmp_dict_key_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SEND_BODY);
}

if (tmp_dict_key_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 245;

    goto dict_build_exception_8;
}
tmp_dict_key_13 = mod_consts.const_str_plain_chunked;
tmp_dict_value_13 = module_var_accessor_h11$_readers$ChunkedReader(tstate);
if (unlikely(tmp_dict_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ChunkedReader);
}

if (tmp_dict_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 246;

    goto dict_build_exception_8;
}
tmp_dict_value_12 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_dict_value_12, tmp_dict_key_13, tmp_dict_value_13);
assert(!(tmp_res != 0));
tmp_dict_key_13 = mod_consts.const_str_digest_db51a9f73f100ec22d319265c4417c10;
tmp_dict_value_13 = module_var_accessor_h11$_readers$ContentLengthReader(tstate);
if (unlikely(tmp_dict_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ContentLengthReader);
}

if (tmp_dict_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 247;

    goto dict_build_exception_9;
}
tmp_res = PyDict_SetItem(tmp_dict_value_12, tmp_dict_key_13, tmp_dict_value_13);
assert(!(tmp_res != 0));
tmp_dict_key_13 = mod_consts.const_str_digest_a7fb7ceaaf12d8190808c4881583e156;
tmp_dict_value_13 = module_var_accessor_h11$_readers$Http10Reader(tstate);
if (unlikely(tmp_dict_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Http10Reader);
}

if (tmp_dict_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 248;

    goto dict_build_exception_9;
}
tmp_res = PyDict_SetItem(tmp_dict_value_12, tmp_dict_key_13, tmp_dict_value_13);
assert(!(tmp_res != 0));
goto dict_build_no_exception_8;
// Exception handling pass through code for dict_build:
dict_build_exception_9:;
Py_DECREF(tmp_dict_value_12);
goto dict_build_exception_8;
// Finished with no exception for dict_build:
dict_build_no_exception_8:;
tmp_res = PyDict_SetItem(tmp_assign_source_66, tmp_dict_key_12, tmp_dict_value_12);
Py_DECREF(tmp_dict_value_12);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;

    goto dict_build_exception_8;
}
}
goto dict_build_no_exception_9;
// Exception handling pass through code for dict_build:
dict_build_exception_8:;
Py_DECREF(tmp_assign_source_66);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_9:;
UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts.const_str_plain_READERS, tmp_assign_source_66);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = module_var_accessor_h11$_readers$ReadersType(tstate);
assert(!(tmp_ass_subvalue_1 == NULL));
tmp_ass_subscribed_1 = module_var_accessor_h11$_readers$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 235;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_READERS;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;

    goto frame_exception_exit_1;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_4;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_readers, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_readers->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_readers, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_h11$_readers);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_4:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("h11$_readers", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "h11._readers" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_h11$_readers);
    return module_h11$_readers;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("h11$_readers", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

/* Generated code for Python module 'openai$_legacy_response'
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



/* The "module_openai$_legacy_response" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_openai$_legacy_response;
PyDictObject *moduledict_openai$_legacy_response;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain__cast_to;
PyObject *const_str_plain__client;
PyObject *const_str_plain__parsed_by_type;
PyObject *const_str_plain__stream;
PyObject *const_str_plain__stream_cls;
PyObject *const_str_plain__options;
PyObject *const_str_plain_http_response;
PyObject *const_str_plain_retries_taken;
PyObject *const_str_plain_headers;
PyObject *const_tuple_str_digest_e9c2aeeceffba066c955439d957cb058_tuple;
PyObject *const_str_plain__parse;
PyObject *const_tuple_str_plain_to_tuple;
PyObject *const_str_plain_is_given;
PyObject *const_str_plain_post_parser;
PyObject *const_str_plain_BaseModel;
PyObject *const_str_plain_add_request_id;
PyObject *const_str_plain_request_id;
PyObject *const_str_plain_cast;
PyObject *const_str_plain_R;
PyObject *const_str_digest_2f75afbdd694f98d421e5fa076317702;
PyObject *const_str_plain_request;
PyObject *const_str_plain_status_code;
PyObject *const_str_plain_url;
PyObject *const_str_plain_http_request;
PyObject *const_str_plain_method;
PyObject *const_str_plain_content;
PyObject *const_str_digest_9fc86fa1388202d8834a97f1a1c49057;
PyObject *const_str_plain_text;
PyObject *const_str_digest_eb905b5b06a82a22979d51d9f7473385;
PyObject *const_str_plain_http_version;
PyObject *const_str_plain_is_closed;
PyObject *const_str_plain_elapsed;
PyObject *const_str_digest_7f6f1ba60f52c5801303cb6bd40e8ce2;
PyObject *const_str_plain_is_type_alias_type;
PyObject *const_str_plain___value__;
PyObject *const_str_plain_cast_to;
PyObject *const_str_plain_is_annotated_type;
PyObject *const_str_plain_extract_type_arg;
PyObject *const_str_plain_get_origin;
PyObject *const_str_plain_is_stream_class_type;
PyObject *const_str_digest_ccb2279665c962b05c8f0a5fe5910208;
PyObject *const_str_plain_Stream;
PyObject *const_str_digest_9e8a5f5cfa9b1bd64faded3c0030d01e;
PyObject *const_str_plain_AsyncStream;
PyObject *const_str_plain__T;
PyObject *const_str_plain_extract_stream_chunk_type;
PyObject *const_dict_8d32f7670fe75d876f51ad2f33ade2af;
PyObject *const_str_plain_Any;
PyObject *const_tuple_str_plain_cast_to_str_plain_response_str_plain_client_tuple;
PyObject *const_str_digest_9fdf0b6ea91f7fffbe0c1d0e7cf72b50;
PyObject *const_str_plain__default_stream_cls;
PyObject *const_str_plain_MissingStreamClassError;
PyObject *const_str_plain_NoneType;
PyObject *const_str_plain_true;
PyObject *const_str_plain_isclass;
PyObject *const_str_plain_HttpxBinaryResponseContent;
PyObject *const_str_plain_LegacyAPIResponse;
PyObject *const_str_digest_21f052c60176cdcbc87ff2af58fa0efd;
PyObject *const_str_plain_httpx;
PyObject *const_str_plain_Response;
PyObject *const_str_digest_397c6d27e9b8a03cdb40a716af7338db;
PyObject *const_str_digest_bfe4d764d81ba66d1179fc365f01bcb0;
PyObject *const_str_digest_818ba1cb071c659297e389c71993f8e0;
PyObject *const_str_plain_Union;
PyObject *const_str_digest_3ca6fbd40a33cb087e163512a8ad578d;
PyObject *const_str_digest_0d9339f3b718745dfb03d69bcae8ad25;
PyObject *const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
PyObject *const_tuple_str_digest_d1c9bee04bd0a9c88e6c11d7c3b4ffd8_str_chr_42_tuple;
PyObject *const_tuple_str_chr_59_tuple;
PyObject *const_str_digest_24746f585ec81069525114d28b7a36fd;
PyObject *const_str_plain_endswith;
PyObject *const_tuple_str_plain_json_tuple;
PyObject *const_str_plain_is_basemodel;
PyObject *const_str_plain_json;
PyObject *const_str_plain_log;
PyObject *const_str_plain_debug;
PyObject *const_str_digest_bda98ec74330d6904c815f1f1072c0d1;
PyObject *const_str_plain__process_response_data;
PyObject *const_str_plain_data;
PyObject *const_tuple_str_plain_data_str_plain_cast_to_str_plain_response_tuple;
PyObject *const_str_plain__strict_response_validation;
PyObject *const_str_plain_APIResponseValidationError;
PyObject *const_str_digest_20d48a27cea801c4fd3de44f324dc4de;
PyObject *const_str_digest_ff83716bae5dd22226a4a98d62d81b7c;
PyObject *const_tuple_str_plain_response_str_plain_message_str_plain_body_tuple;
PyObject *const_str_digest_095e3a84ee36799809dc09a87cd529fa;
PyObject *const_str_space;
PyObject *const_str_plain_reason_phrase;
PyObject *const_str_digest_f36f62be05587d4977c37fd528da5bc1;
PyObject *const_str_chr_62;
PyObject *const_tuple_str_digest_96cb7fc57a31072361369315e2271c46_tuple;
PyObject *const_str_plain_wraps;
PyObject *const_dict_c3e710a26dffe1be46840d17e8199774;
PyObject *const_str_plain_wrapped;
PyObject *const_str_digest_69e8a5fbf48fd004547d2bac357739cd;
PyObject *const_str_digest_7c97f874082fd03708ea8942e706fcbb;
PyObject *const_str_plain_extra_headers;
PyObject *const_str_plain_RAW_RESPONSE_HEADER;
PyObject *const_str_plain_func;
PyObject *const_str_digest_ece4072b36db9c798f8cf693482ca28d;
PyObject *const_str_plain_kwargs;
PyObject *const_tuple_str_plain_extra_headers_tuple;
PyObject *const_str_plain_response;
PyObject *const_str_plain_charset_encoding;
PyObject *const_str_plain_iter_bytes;
PyObject *const_str_plain_iter_text;
PyObject *const_str_plain_iter_lines;
PyObject *const_str_plain_iter_raw;
PyObject *const_str_plain_wb;
PyObject *const_str_plain_f;
PyObject *const_str_plain_write;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_digest_62038b0784dfff25fd3170faff589fb7;
PyObject *const_str_plain_self;
PyObject *const_str_plain_aread;
PyObject *const_str_digest_70e1d3b21c714952c355e85f51bce1f8;
PyObject *const_str_plain_aiter_bytes;
PyObject *const_str_plain_chunk_size;
PyObject *const_str_digest_48ed87d8dd090fe0fa9fcda2c7593b4b;
PyObject *const_str_plain_aiter_text;
PyObject *const_str_digest_fe99cda0df968277a353847fa2334330;
PyObject *const_str_plain_aiter_lines;
PyObject *const_str_digest_211a226f678533b98d969a55c72331ad;
PyObject *const_str_plain_aiter_raw;
PyObject *const_str_digest_d9ddc6a693ee705ead6cc9d0efd0637a;
PyObject *const_str_plain_anyio;
PyObject *const_str_plain_Path;
PyObject *const_tuple_str_plain_wb_tuple;
PyObject *const_tuple_str_plain_mode_tuple;
PyObject *const_str_plain_astream_to_file;
PyObject *const_str_digest_42ed249506a138762fc3f37cf84a965f;
PyObject *const_str_plain_aclose;
PyObject *const_str_digest_1e6b1cb86f0508d31cf5695dfe9b0be9;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_os;
PyObject *const_str_plain_logging;
PyObject *const_str_plain_datetime;
PyObject *const_str_plain_functools;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_Generic;
PyObject *const_str_plain_TypeVar;
PyObject *const_str_plain_Callable;
PyObject *const_str_plain_Iterator;
PyObject *const_str_plain_AsyncIterator;
PyObject *const_str_plain_overload;
PyObject *const_str_plain_typing_extensions;
PyObject *const_tuple_dadbb36ffe08efc15c0c700e846cdb4d_tuple;
PyObject *const_str_plain_Awaitable;
PyObject *const_str_plain_ParamSpec;
PyObject *const_str_plain_override;
PyObject *const_str_plain_deprecated;
PyObject *const_str_plain_pydantic;
PyObject *const_str_plain__types;
PyObject *const_tuple_str_plain_NoneType_tuple;
PyObject *const_str_plain__utils;
PyObject *const_tuple_47a04d17d714233456e3078885d32343_tuple;
PyObject *const_str_plain__models;
PyObject *const_tuple_8d9cb36109f032e22ae89ba3d292bd55_tuple;
PyObject *const_str_plain__constants;
PyObject *const_tuple_str_plain_RAW_RESPONSE_HEADER_tuple;
PyObject *const_str_plain__streaming;
PyObject *const_tuple_fa2accb28bba15a2b2627fb23b86bb0b_tuple;
PyObject *const_str_plain__exceptions;
PyObject *const_tuple_str_plain_APIResponseValidationError_tuple;
PyObject *const_tuple_str_plain_P_tuple;
PyObject *const_str_plain_P;
PyObject *const_tuple_str_plain_R_tuple;
PyObject *const_tuple_str_plain__T_tuple;
PyObject *const_str_plain_getLogger;
PyObject *const_tuple_str_digest_98558e994e88a785750c83b419333be5_tuple;
PyObject *const_str_digest_3fab2fa3fadd4d4d413d0704d0eac706;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_98558e994e88a785750c83b419333be5;
PyObject *const_str_digest_2a269e7ee746c809f1dfacce896c41b6;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_45;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_digest_05160a609b8c0f74e1c566c3ce779885;
PyObject *const_str_digest_d0d478c1994c667ffb507e1b562725fe;
PyObject *const_str_digest_fbdeb9886c8565354604635da3ef5fc8;
PyObject *const_str_plain_bool;
PyObject *const_str_plain_FinalRequestOptions;
PyObject *const_str_digest_11df174efb5cc83c4ecfcd61824f025d;
PyObject *const_dict_6148aac6132080f83b2250a58d97a427;
PyObject *const_dict_480844f54f53615f4abf05683128a43a;
PyObject *const_str_digest_8638803ce0356d04d0103db3a3e9d6bb;
PyObject *const_str_plain_property;
PyObject *const_dict_fb2aef63cbe899ae3db5a90391a96071;
PyObject *const_str_digest_75da570e84f95ea4b94e6a1787e8a6cd;
PyObject *const_dict_d09c40bb9088e19c03826306b206b7f7;
PyObject *const_str_plain_parse;
PyObject *const_str_digest_516842115db5f3bd680931dcafaa02d3;
PyObject *const_dict_e6d402b5a2b1a140aaa5baccee33c088;
PyObject *const_dict_4a9c3781541e03fcd584004778b3fc93;
PyObject *const_dict_cf02cca8867f3ef637ecb9ec7dcd7824;
PyObject *const_dict_0d163f087cd2a452cbc7325cbf6c06ed;
PyObject *const_str_digest_daadefa1c5c1faf6d7f898a86e06e69a;
PyObject *const_dict_737dcc7cab6c587da407ad864dd9e576;
PyObject *const_str_digest_858b38ba4a235e1694d9c278c0ca1490;
PyObject *const_dict_85b825f4db9c19f334e726fd877a8261;
PyObject *const_str_digest_2bbd210cddc42fd633ea28e56d696a56;
PyObject *const_dict_130436027655285a7e211ba95a9db462;
PyObject *const_str_digest_e69debb7c50535710433476ceae860bb;
PyObject *const_dict_e8d16ece775461636da8aedac2f07d6b;
PyObject *const_str_digest_2af2a3d29e3e2577c4d61b6f4ece995b;
PyObject *const_dict_2366cb3246e451cebe4ed21878030053;
PyObject *const_str_digest_0c894799a7f7600e63cd5bbd73a48765;
PyObject *const_str_digest_cf9a6cd2716569d8a830513fa4cc0d73;
PyObject *const_str_digest_c37d99dc93910202f42b19ca56f4a9dc;
PyObject *const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6;
PyObject *const_str_digest_03d96647a8e7d7a2a101441806f52a3c;
PyObject *const_dict_7031ad2bd3448ae1670405c3c48db6dc;
PyObject *const_str_digest_fa6dfc1f4482ad869f974a6d09faf2fd;
PyObject *const_str_digest_50ccdad44ee42e3611328a3d080fc065;
PyObject *const_str_plain___repr__;
PyObject *const_str_digest_4658ceca6bb1042fc81752459395cca8;
PyObject *const_tuple_7a4d14c7cf827edddb63fe15bc901986_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_tuple_type_TypeError_tuple;
PyObject *const_int_pos_345;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_digest_e2478e2e2308ce0cc96707836dbcacd5;
PyObject *const_dict_843eda5a2ee5248f40108f31c9a0a3e5;
PyObject *const_str_plain_to_raw_response_wrapper;
PyObject *const_dict_8f1cd11a863ea54173c2b1f8e1f03889;
PyObject *const_str_plain_async_to_raw_response_wrapper;
PyObject *const_int_pos_386;
PyObject *const_dict_68359d61f8fd1d1275d36e51b19591c9;
PyObject *const_str_digest_039fb0760cc676df107ac5b185c14afc;
PyObject *const_str_digest_7ec112cc33728e62117faa6e661ff2e8;
PyObject *const_str_digest_5a39e66e9ce1d2aa0874832f618f4c65;
PyObject *const_str_digest_cfd37198786706495530e78479c34af2;
PyObject *const_str_digest_ea02253d2ac6b13198ecb43fde117bfe;
PyObject *const_dict_3435af114cbc37dcb1b52026f3c8880a;
PyObject *const_str_digest_d1c6d20f45c93b73c9fe302b9f81ecc7;
PyObject *const_str_digest_4b8ba7f75337ed6f39d85eafef9a368f;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_e275a014f0070bba21fed9df92c40ac0;
PyObject *const_str_digest_ec303bec879c64a38130cb1ab53ee6ba;
PyObject *const_dict_0f6eb376eaa281b332f667131a587bc9;
PyObject *const_str_digest_54fc8940cae39dfd0ff2398d14f81f1b;
PyObject *const_dict_b2f586a573796cb806fcf3b5316538bd;
PyObject *const_str_digest_de68aa625081d15347e4315bd85446a3;
PyObject *const_str_digest_2301f03e76f57662a070919138caad9a;
PyObject *const_dict_ef5f909ff65572b5e54b9a900f542c7c;
PyObject *const_str_plain_write_to_file;
PyObject *const_str_digest_a1e831b04086e67b3a35c5b50e577878;
PyObject *const_tuple_str_digest_5cdf8775c8d61e0bfabd5215802678f6_tuple;
PyObject *const_dict_f3fe0f4a62dd56b4fa5042c0b8d16b4e;
PyObject *const_dict_0c18636b79932543582c5e3337f15d57;
PyObject *const_str_plain_stream_to_file;
PyObject *const_str_digest_3530aab6952a4829b057422876525a21;
PyObject *const_str_digest_7a1242fbafaff568ce909c619ab8328c;
PyObject *const_dict_857b48a932d6c271d39ddec087469c03;
PyObject *const_dict_954cb4f3876a39f4c6440a10f0625d45;
PyObject *const_dict_d803a994da5de2709bb2cdb8a64c7893;
PyObject *const_tuple_str_plain_response_tuple;
PyObject *const_str_digest_0cea3ba0600eecad249f208542de3453;
PyObject *const_str_digest_9d9449e47e872bfad58d4a668c3558c8;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_response_tuple;
PyObject *const_tuple_74316a210a0cac625fe8fcd222ab393f_tuple;
PyObject *const_tuple_str_plain_self_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_d466a79c1191ea585773558b592fc974_tuple;
PyObject *const_tuple_str_plain_self_str_plain_chunk_size_tuple;
PyObject *const_tuple_8f0976ef6f40a9c5b08bf4c67c9ff7eb_tuple;
PyObject *const_tuple_str_plain_func_str_plain_wrapped_tuple;
PyObject *const_tuple_str_plain_self_str_plain_kwargs_tuple;
PyObject *const_tuple_str_plain_self_str_plain_to_tuple;
PyObject *const_tuple_31b880f7f2f29902ea798dc4e94a10ee_tuple;
PyObject *const_tuple_4397ebcf5c098d015451949e7db8819c_tuple;
PyObject *const_tuple_b4abe18cfb9f389878866a50d74f36df_tuple;
PyObject *const_tuple_str_plain_func_tuple;
PyObject *const_tuple_str_plain_self_str_plain_file_str_plain_f_str_plain_data_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[281];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("openai._legacy_response"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain__cast_to);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain__client);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain__parsed_by_type);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain__stream);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain__stream_cls);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain__options);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_http_response);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_retries_taken);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_headers);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e9c2aeeceffba066c955439d957cb058_tuple);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain__parse);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_to_tuple);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_given);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_post_parser);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_BaseModel);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_add_request_id);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_request_id);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_cast);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_R);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_2f75afbdd694f98d421e5fa076317702);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_request);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_status_code);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_url);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_http_request);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_method);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_content);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_9fc86fa1388202d8834a97f1a1c49057);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_text);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_eb905b5b06a82a22979d51d9f7473385);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_http_version);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_closed);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_elapsed);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_7f6f1ba60f52c5801303cb6bd40e8ce2);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_type_alias_type);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain___value__);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_cast_to);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_annotated_type);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_extract_type_arg);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_origin);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_stream_class_type);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_ccb2279665c962b05c8f0a5fe5910208);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_Stream);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_9e8a5f5cfa9b1bd64faded3c0030d01e);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncStream);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain__T);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_extract_stream_chunk_type);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_dict_8d32f7670fe75d876f51ad2f33ade2af);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cast_to_str_plain_response_str_plain_client_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_9fdf0b6ea91f7fffbe0c1d0e7cf72b50);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain__default_stream_cls);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_MissingStreamClassError);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_NoneType);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_true);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_isclass);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_HttpxBinaryResponseContent);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_LegacyAPIResponse);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_21f052c60176cdcbc87ff2af58fa0efd);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_httpx);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_Response);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_397c6d27e9b8a03cdb40a716af7338db);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_bfe4d764d81ba66d1179fc365f01bcb0);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_818ba1cb071c659297e389c71993f8e0);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_3ca6fbd40a33cb087e163512a8ad578d);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_0d9339f3b718745dfb03d69bcae8ad25);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_d1c9bee04bd0a9c88e6c11d7c3b4ffd8_str_chr_42_tuple);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_59_tuple);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_24746f585ec81069525114d28b7a36fd);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_endswith);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_json_tuple);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_basemodel);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_json);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_log);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_debug);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_bda98ec74330d6904c815f1f1072c0d1);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain__process_response_data);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_data);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_data_str_plain_cast_to_str_plain_response_tuple);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain__strict_response_validation);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_APIResponseValidationError);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_digest_20d48a27cea801c4fd3de44f324dc4de);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_digest_ff83716bae5dd22226a4a98d62d81b7c);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_response_str_plain_message_str_plain_body_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_095e3a84ee36799809dc09a87cd529fa);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_space);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_reason_phrase);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_digest_f36f62be05587d4977c37fd528da5bc1);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_chr_62);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_96cb7fc57a31072361369315e2271c46_tuple);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_wraps);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_dict_c3e710a26dffe1be46840d17e8199774);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_wrapped);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_digest_69e8a5fbf48fd004547d2bac357739cd);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_digest_7c97f874082fd03708ea8942e706fcbb);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_extra_headers);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_RAW_RESPONSE_HEADER);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_func);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_ece4072b36db9c798f8cf693482ca28d);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_kwargs);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_extra_headers_tuple);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_response);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_charset_encoding);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_iter_bytes);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_iter_text);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_iter_lines);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_iter_raw);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_wb);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_f);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_write);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_digest_62038b0784dfff25fd3170faff589fb7);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_aread);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_70e1d3b21c714952c355e85f51bce1f8);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_aiter_bytes);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_chunk_size);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_digest_48ed87d8dd090fe0fa9fcda2c7593b4b);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_aiter_text);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_digest_fe99cda0df968277a353847fa2334330);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_aiter_lines);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_digest_211a226f678533b98d969a55c72331ad);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_aiter_raw);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_digest_d9ddc6a693ee705ead6cc9d0efd0637a);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_anyio);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_Path);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_wb_tuple);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_mode_tuple);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_astream_to_file);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_digest_42ed249506a138762fc3f37cf84a965f);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_aclose);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_digest_1e6b1cb86f0508d31cf5695dfe9b0be9);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_logging);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_datetime);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_functools);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_Generic);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_Callable);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterator);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncIterator);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_overload);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_tuple_dadbb36ffe08efc15c0c700e846cdb4d_tuple);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_Awaitable);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_ParamSpec);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_override);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_deprecated);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain_pydantic);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain__types);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_NoneType_tuple);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain__utils);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_tuple_47a04d17d714233456e3078885d32343_tuple);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain__models);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_tuple_8d9cb36109f032e22ae89ba3d292bd55_tuple);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain__constants);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RAW_RESPONSE_HEADER_tuple);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain__streaming);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_tuple_fa2accb28bba15a2b2627fb23b86bb0b_tuple);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain__exceptions);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_APIResponseValidationError_tuple);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_P_tuple);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain_P);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_R_tuple);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__T_tuple);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_98558e994e88a785750c83b419333be5_tuple);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_digest_3fab2fa3fadd4d4d413d0704d0eac706);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_digest_98558e994e88a785750c83b419333be5);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_digest_2a269e7ee746c809f1dfacce896c41b6);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_int_pos_45);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_digest_05160a609b8c0f74e1c566c3ce779885);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_digest_d0d478c1994c667ffb507e1b562725fe);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_digest_fbdeb9886c8565354604635da3ef5fc8);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_plain_bool);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_plain_FinalRequestOptions);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_digest_11df174efb5cc83c4ecfcd61824f025d);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_dict_6148aac6132080f83b2250a58d97a427);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_dict_480844f54f53615f4abf05683128a43a);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_digest_8638803ce0356d04d0103db3a3e9d6bb);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_digest_75da570e84f95ea4b94e6a1787e8a6cd);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_dict_d09c40bb9088e19c03826306b206b7f7);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_digest_516842115db5f3bd680931dcafaa02d3);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_dict_e6d402b5a2b1a140aaa5baccee33c088);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_dict_4a9c3781541e03fcd584004778b3fc93);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_dict_cf02cca8867f3ef637ecb9ec7dcd7824);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_dict_0d163f087cd2a452cbc7325cbf6c06ed);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_digest_daadefa1c5c1faf6d7f898a86e06e69a);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_dict_737dcc7cab6c587da407ad864dd9e576);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_str_digest_858b38ba4a235e1694d9c278c0ca1490);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_digest_2bbd210cddc42fd633ea28e56d696a56);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_dict_130436027655285a7e211ba95a9db462);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_str_digest_e69debb7c50535710433476ceae860bb);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_str_digest_2af2a3d29e3e2577c4d61b6f4ece995b);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_dict_2366cb3246e451cebe4ed21878030053);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_str_digest_0c894799a7f7600e63cd5bbd73a48765);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_str_digest_cf9a6cd2716569d8a830513fa4cc0d73);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_str_digest_c37d99dc93910202f42b19ca56f4a9dc);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_str_digest_03d96647a8e7d7a2a101441806f52a3c);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_dict_7031ad2bd3448ae1670405c3c48db6dc);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_str_digest_fa6dfc1f4482ad869f974a6d09faf2fd);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_str_digest_50ccdad44ee42e3611328a3d080fc065);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_str_plain___repr__);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_str_digest_4658ceca6bb1042fc81752459395cca8);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_tuple_7a4d14c7cf827edddb63fe15bc901986_tuple);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_tuple_type_TypeError_tuple);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_int_pos_345);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_str_digest_e2478e2e2308ce0cc96707836dbcacd5);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_dict_843eda5a2ee5248f40108f31c9a0a3e5);
mod_consts_hash[229] = DEEP_HASH(tstate, mod_consts.const_str_plain_to_raw_response_wrapper);
mod_consts_hash[230] = DEEP_HASH(tstate, mod_consts.const_dict_8f1cd11a863ea54173c2b1f8e1f03889);
mod_consts_hash[231] = DEEP_HASH(tstate, mod_consts.const_str_plain_async_to_raw_response_wrapper);
mod_consts_hash[232] = DEEP_HASH(tstate, mod_consts.const_int_pos_386);
mod_consts_hash[233] = DEEP_HASH(tstate, mod_consts.const_dict_68359d61f8fd1d1275d36e51b19591c9);
mod_consts_hash[234] = DEEP_HASH(tstate, mod_consts.const_str_digest_039fb0760cc676df107ac5b185c14afc);
mod_consts_hash[235] = DEEP_HASH(tstate, mod_consts.const_str_digest_7ec112cc33728e62117faa6e661ff2e8);
mod_consts_hash[236] = DEEP_HASH(tstate, mod_consts.const_str_digest_5a39e66e9ce1d2aa0874832f618f4c65);
mod_consts_hash[237] = DEEP_HASH(tstate, mod_consts.const_str_digest_cfd37198786706495530e78479c34af2);
mod_consts_hash[238] = DEEP_HASH(tstate, mod_consts.const_str_digest_ea02253d2ac6b13198ecb43fde117bfe);
mod_consts_hash[239] = DEEP_HASH(tstate, mod_consts.const_dict_3435af114cbc37dcb1b52026f3c8880a);
mod_consts_hash[240] = DEEP_HASH(tstate, mod_consts.const_str_digest_d1c6d20f45c93b73c9fe302b9f81ecc7);
mod_consts_hash[241] = DEEP_HASH(tstate, mod_consts.const_str_digest_4b8ba7f75337ed6f39d85eafef9a368f);
mod_consts_hash[242] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[243] = DEEP_HASH(tstate, mod_consts.const_dict_e275a014f0070bba21fed9df92c40ac0);
mod_consts_hash[244] = DEEP_HASH(tstate, mod_consts.const_str_digest_ec303bec879c64a38130cb1ab53ee6ba);
mod_consts_hash[245] = DEEP_HASH(tstate, mod_consts.const_dict_0f6eb376eaa281b332f667131a587bc9);
mod_consts_hash[246] = DEEP_HASH(tstate, mod_consts.const_str_digest_54fc8940cae39dfd0ff2398d14f81f1b);
mod_consts_hash[247] = DEEP_HASH(tstate, mod_consts.const_dict_b2f586a573796cb806fcf3b5316538bd);
mod_consts_hash[248] = DEEP_HASH(tstate, mod_consts.const_str_digest_de68aa625081d15347e4315bd85446a3);
mod_consts_hash[249] = DEEP_HASH(tstate, mod_consts.const_str_digest_2301f03e76f57662a070919138caad9a);
mod_consts_hash[250] = DEEP_HASH(tstate, mod_consts.const_dict_ef5f909ff65572b5e54b9a900f542c7c);
mod_consts_hash[251] = DEEP_HASH(tstate, mod_consts.const_str_plain_write_to_file);
mod_consts_hash[252] = DEEP_HASH(tstate, mod_consts.const_str_digest_a1e831b04086e67b3a35c5b50e577878);
mod_consts_hash[253] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_5cdf8775c8d61e0bfabd5215802678f6_tuple);
mod_consts_hash[254] = DEEP_HASH(tstate, mod_consts.const_dict_f3fe0f4a62dd56b4fa5042c0b8d16b4e);
mod_consts_hash[255] = DEEP_HASH(tstate, mod_consts.const_dict_0c18636b79932543582c5e3337f15d57);
mod_consts_hash[256] = DEEP_HASH(tstate, mod_consts.const_str_plain_stream_to_file);
mod_consts_hash[257] = DEEP_HASH(tstate, mod_consts.const_str_digest_3530aab6952a4829b057422876525a21);
mod_consts_hash[258] = DEEP_HASH(tstate, mod_consts.const_str_digest_7a1242fbafaff568ce909c619ab8328c);
mod_consts_hash[259] = DEEP_HASH(tstate, mod_consts.const_dict_857b48a932d6c271d39ddec087469c03);
mod_consts_hash[260] = DEEP_HASH(tstate, mod_consts.const_dict_954cb4f3876a39f4c6440a10f0625d45);
mod_consts_hash[261] = DEEP_HASH(tstate, mod_consts.const_dict_d803a994da5de2709bb2cdb8a64c7893);
mod_consts_hash[262] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_response_tuple);
mod_consts_hash[263] = DEEP_HASH(tstate, mod_consts.const_str_digest_0cea3ba0600eecad249f208542de3453);
mod_consts_hash[264] = DEEP_HASH(tstate, mod_consts.const_str_digest_9d9449e47e872bfad58d4a668c3558c8);
mod_consts_hash[265] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[266] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_response_tuple);
mod_consts_hash[267] = DEEP_HASH(tstate, mod_consts.const_tuple_74316a210a0cac625fe8fcd222ab393f_tuple);
mod_consts_hash[268] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple);
mod_consts_hash[269] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[270] = DEEP_HASH(tstate, mod_consts.const_tuple_d466a79c1191ea585773558b592fc974_tuple);
mod_consts_hash[271] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_chunk_size_tuple);
mod_consts_hash[272] = DEEP_HASH(tstate, mod_consts.const_tuple_8f0976ef6f40a9c5b08bf4c67c9ff7eb_tuple);
mod_consts_hash[273] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_func_str_plain_wrapped_tuple);
mod_consts_hash[274] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_kwargs_tuple);
mod_consts_hash[275] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_to_tuple);
mod_consts_hash[276] = DEEP_HASH(tstate, mod_consts.const_tuple_31b880f7f2f29902ea798dc4e94a10ee_tuple);
mod_consts_hash[277] = DEEP_HASH(tstate, mod_consts.const_tuple_4397ebcf5c098d015451949e7db8819c_tuple);
mod_consts_hash[278] = DEEP_HASH(tstate, mod_consts.const_tuple_b4abe18cfb9f389878866a50d74f36df_tuple);
mod_consts_hash[279] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_func_tuple);
mod_consts_hash[280] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_file_str_plain_f_str_plain_data_tuple);
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
void checkModuleConstants_openai$_legacy_response(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain__cast_to));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__cast_to);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain__client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__client);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain__parsed_by_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__parsed_by_type);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain__stream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__stream);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain__stream_cls));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__stream_cls);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain__options));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__options);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_http_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_http_response);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_retries_taken));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_retries_taken);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_headers);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e9c2aeeceffba066c955439d957cb058_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_e9c2aeeceffba066c955439d957cb058_tuple);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain__parse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__parse);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_to_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_to_tuple);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_given));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_given);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_post_parser));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_post_parser);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_BaseModel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BaseModel);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_add_request_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add_request_id);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_request_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_request_id);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_cast));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cast);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_R));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_R);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_2f75afbdd694f98d421e5fa076317702));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2f75afbdd694f98d421e5fa076317702);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_request);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_status_code));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_status_code);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_url);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_http_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_http_request);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_method));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_method);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_content));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_content);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_9fc86fa1388202d8834a97f1a1c49057));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9fc86fa1388202d8834a97f1a1c49057);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_text));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_text);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_eb905b5b06a82a22979d51d9f7473385));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eb905b5b06a82a22979d51d9f7473385);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_http_version));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_http_version);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_closed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_closed);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_elapsed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_elapsed);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_7f6f1ba60f52c5801303cb6bd40e8ce2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7f6f1ba60f52c5801303cb6bd40e8ce2);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_type_alias_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_type_alias_type);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain___value__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___value__);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_cast_to));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cast_to);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_annotated_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_annotated_type);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_extract_type_arg));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extract_type_arg);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_origin);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_stream_class_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_stream_class_type);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_ccb2279665c962b05c8f0a5fe5910208));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ccb2279665c962b05c8f0a5fe5910208);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_Stream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Stream);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_9e8a5f5cfa9b1bd64faded3c0030d01e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9e8a5f5cfa9b1bd64faded3c0030d01e);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncStream);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain__T));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__T);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_extract_stream_chunk_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extract_stream_chunk_type);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_dict_8d32f7670fe75d876f51ad2f33ade2af));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8d32f7670fe75d876f51ad2f33ade2af);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cast_to_str_plain_response_str_plain_client_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cast_to_str_plain_response_str_plain_client_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_9fdf0b6ea91f7fffbe0c1d0e7cf72b50));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9fdf0b6ea91f7fffbe0c1d0e7cf72b50);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain__default_stream_cls));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__default_stream_cls);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_MissingStreamClassError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MissingStreamClassError);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_NoneType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NoneType);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_true));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_true);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_isclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isclass);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_HttpxBinaryResponseContent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HttpxBinaryResponseContent);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_LegacyAPIResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LegacyAPIResponse);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_21f052c60176cdcbc87ff2af58fa0efd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_21f052c60176cdcbc87ff2af58fa0efd);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_httpx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_httpx);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_Response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Response);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_397c6d27e9b8a03cdb40a716af7338db));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_397c6d27e9b8a03cdb40a716af7338db);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_bfe4d764d81ba66d1179fc365f01bcb0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bfe4d764d81ba66d1179fc365f01bcb0);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_818ba1cb071c659297e389c71993f8e0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_818ba1cb071c659297e389c71993f8e0);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_3ca6fbd40a33cb087e163512a8ad578d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3ca6fbd40a33cb087e163512a8ad578d);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_0d9339f3b718745dfb03d69bcae8ad25));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0d9339f3b718745dfb03d69bcae8ad25);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_d1c9bee04bd0a9c88e6c11d7c3b4ffd8_str_chr_42_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_d1c9bee04bd0a9c88e6c11d7c3b4ffd8_str_chr_42_tuple);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_59_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_59_tuple);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_24746f585ec81069525114d28b7a36fd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_24746f585ec81069525114d28b7a36fd);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_endswith));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_endswith);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_json_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_json_tuple);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_basemodel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_basemodel);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_json));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_json);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_log));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_log);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_debug));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_debug);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_bda98ec74330d6904c815f1f1072c0d1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bda98ec74330d6904c815f1f1072c0d1);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain__process_response_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__process_response_data);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_data);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_data_str_plain_cast_to_str_plain_response_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_data_str_plain_cast_to_str_plain_response_tuple);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain__strict_response_validation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__strict_response_validation);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_APIResponseValidationError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_APIResponseValidationError);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_digest_20d48a27cea801c4fd3de44f324dc4de));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_20d48a27cea801c4fd3de44f324dc4de);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_digest_ff83716bae5dd22226a4a98d62d81b7c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ff83716bae5dd22226a4a98d62d81b7c);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_response_str_plain_message_str_plain_body_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_response_str_plain_message_str_plain_body_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_095e3a84ee36799809dc09a87cd529fa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_095e3a84ee36799809dc09a87cd529fa);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_space));
CHECK_OBJECT_DEEP(mod_consts.const_str_space);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_reason_phrase));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reason_phrase);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_digest_f36f62be05587d4977c37fd528da5bc1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f36f62be05587d4977c37fd528da5bc1);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_chr_62));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_62);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_96cb7fc57a31072361369315e2271c46_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_96cb7fc57a31072361369315e2271c46_tuple);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_wraps));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wraps);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_dict_c3e710a26dffe1be46840d17e8199774));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c3e710a26dffe1be46840d17e8199774);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_wrapped));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wrapped);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_digest_69e8a5fbf48fd004547d2bac357739cd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_69e8a5fbf48fd004547d2bac357739cd);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_digest_7c97f874082fd03708ea8942e706fcbb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7c97f874082fd03708ea8942e706fcbb);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_extra_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extra_headers);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_RAW_RESPONSE_HEADER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RAW_RESPONSE_HEADER);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_func));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_func);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_ece4072b36db9c798f8cf693482ca28d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ece4072b36db9c798f8cf693482ca28d);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_kwargs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_kwargs);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_extra_headers_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_extra_headers_tuple);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_charset_encoding));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_charset_encoding);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_iter_bytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_iter_bytes);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_iter_text));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_iter_text);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_iter_lines));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_iter_lines);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_iter_raw));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_iter_raw);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_wb));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wb);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_f));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_f);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_write));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_write);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_digest_62038b0784dfff25fd3170faff589fb7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_62038b0784dfff25fd3170faff589fb7);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_aread));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_aread);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_70e1d3b21c714952c355e85f51bce1f8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_70e1d3b21c714952c355e85f51bce1f8);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_aiter_bytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_aiter_bytes);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_chunk_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chunk_size);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_digest_48ed87d8dd090fe0fa9fcda2c7593b4b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_48ed87d8dd090fe0fa9fcda2c7593b4b);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_aiter_text));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_aiter_text);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_digest_fe99cda0df968277a353847fa2334330));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fe99cda0df968277a353847fa2334330);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_aiter_lines));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_aiter_lines);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_digest_211a226f678533b98d969a55c72331ad));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_211a226f678533b98d969a55c72331ad);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_aiter_raw));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_aiter_raw);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_digest_d9ddc6a693ee705ead6cc9d0efd0637a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d9ddc6a693ee705ead6cc9d0efd0637a);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_anyio));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_anyio);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_Path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Path);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_wb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_wb_tuple);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_mode_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_mode_tuple);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_astream_to_file));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_astream_to_file);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_digest_42ed249506a138762fc3f37cf84a965f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_42ed249506a138762fc3f37cf84a965f);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_aclose));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_aclose);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_digest_1e6b1cb86f0508d31cf5695dfe9b0be9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1e6b1cb86f0508d31cf5695dfe9b0be9);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_os));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_os);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_logging));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logging);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_datetime));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_datetime);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_functools));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_functools);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_Generic));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Generic);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeVar);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_Callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Callable);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Iterator);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncIterator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncIterator);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_overload));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_overload);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_extensions);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_tuple_dadbb36ffe08efc15c0c700e846cdb4d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_dadbb36ffe08efc15c0c700e846cdb4d_tuple);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_Awaitable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Awaitable);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_ParamSpec));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ParamSpec);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_override));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_override);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_deprecated));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_deprecated);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain_pydantic));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pydantic);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain__types));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__types);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_NoneType_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_NoneType_tuple);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain__utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__utils);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_tuple_47a04d17d714233456e3078885d32343_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_47a04d17d714233456e3078885d32343_tuple);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain__models));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__models);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_tuple_8d9cb36109f032e22ae89ba3d292bd55_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8d9cb36109f032e22ae89ba3d292bd55_tuple);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain__constants));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__constants);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RAW_RESPONSE_HEADER_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_RAW_RESPONSE_HEADER_tuple);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain__streaming));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__streaming);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_tuple_fa2accb28bba15a2b2627fb23b86bb0b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_fa2accb28bba15a2b2627fb23b86bb0b_tuple);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain__exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__exceptions);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_APIResponseValidationError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_APIResponseValidationError_tuple);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_P_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_P_tuple);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain_P));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_P);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_R_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_R_tuple);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__T_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__T_tuple);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getLogger);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_98558e994e88a785750c83b419333be5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_98558e994e88a785750c83b419333be5_tuple);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_digest_3fab2fa3fadd4d4d413d0704d0eac706));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3fab2fa3fadd4d4d413d0704d0eac706);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_digest_98558e994e88a785750c83b419333be5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_98558e994e88a785750c83b419333be5);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_digest_2a269e7ee746c809f1dfacce896c41b6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2a269e7ee746c809f1dfacce896c41b6);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_int_pos_45));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_45);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_digest_05160a609b8c0f74e1c566c3ce779885));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_05160a609b8c0f74e1c566c3ce779885);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_digest_d0d478c1994c667ffb507e1b562725fe));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d0d478c1994c667ffb507e1b562725fe);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_digest_fbdeb9886c8565354604635da3ef5fc8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fbdeb9886c8565354604635da3ef5fc8);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_plain_bool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bool);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_plain_FinalRequestOptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FinalRequestOptions);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_digest_11df174efb5cc83c4ecfcd61824f025d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_11df174efb5cc83c4ecfcd61824f025d);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_dict_6148aac6132080f83b2250a58d97a427));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6148aac6132080f83b2250a58d97a427);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_dict_480844f54f53615f4abf05683128a43a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_480844f54f53615f4abf05683128a43a);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_digest_8638803ce0356d04d0103db3a3e9d6bb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8638803ce0356d04d0103db3a3e9d6bb);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_plain_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_property);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071));
CHECK_OBJECT_DEEP(mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_digest_75da570e84f95ea4b94e6a1787e8a6cd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75da570e84f95ea4b94e6a1787e8a6cd);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_dict_d09c40bb9088e19c03826306b206b7f7));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d09c40bb9088e19c03826306b206b7f7);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_digest_516842115db5f3bd680931dcafaa02d3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_516842115db5f3bd680931dcafaa02d3);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_dict_e6d402b5a2b1a140aaa5baccee33c088));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e6d402b5a2b1a140aaa5baccee33c088);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_dict_4a9c3781541e03fcd584004778b3fc93));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4a9c3781541e03fcd584004778b3fc93);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_dict_cf02cca8867f3ef637ecb9ec7dcd7824));
CHECK_OBJECT_DEEP(mod_consts.const_dict_cf02cca8867f3ef637ecb9ec7dcd7824);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_dict_0d163f087cd2a452cbc7325cbf6c06ed));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d163f087cd2a452cbc7325cbf6c06ed);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_digest_daadefa1c5c1faf6d7f898a86e06e69a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_daadefa1c5c1faf6d7f898a86e06e69a);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_dict_737dcc7cab6c587da407ad864dd9e576));
CHECK_OBJECT_DEEP(mod_consts.const_dict_737dcc7cab6c587da407ad864dd9e576);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_str_digest_858b38ba4a235e1694d9c278c0ca1490));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_858b38ba4a235e1694d9c278c0ca1490);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261));
CHECK_OBJECT_DEEP(mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_digest_2bbd210cddc42fd633ea28e56d696a56));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2bbd210cddc42fd633ea28e56d696a56);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_dict_130436027655285a7e211ba95a9db462));
CHECK_OBJECT_DEEP(mod_consts.const_dict_130436027655285a7e211ba95a9db462);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_str_digest_e69debb7c50535710433476ceae860bb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e69debb7c50535710433476ceae860bb);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_str_digest_2af2a3d29e3e2577c4d61b6f4ece995b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2af2a3d29e3e2577c4d61b6f4ece995b);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_dict_2366cb3246e451cebe4ed21878030053));
CHECK_OBJECT_DEEP(mod_consts.const_dict_2366cb3246e451cebe4ed21878030053);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_str_digest_0c894799a7f7600e63cd5bbd73a48765));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0c894799a7f7600e63cd5bbd73a48765);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_str_digest_cf9a6cd2716569d8a830513fa4cc0d73));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cf9a6cd2716569d8a830513fa4cc0d73);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_str_digest_c37d99dc93910202f42b19ca56f4a9dc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c37d99dc93910202f42b19ca56f4a9dc);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_str_digest_03d96647a8e7d7a2a101441806f52a3c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_03d96647a8e7d7a2a101441806f52a3c);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_dict_7031ad2bd3448ae1670405c3c48db6dc));
CHECK_OBJECT_DEEP(mod_consts.const_dict_7031ad2bd3448ae1670405c3c48db6dc);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_str_digest_fa6dfc1f4482ad869f974a6d09faf2fd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fa6dfc1f4482ad869f974a6d09faf2fd);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_str_digest_50ccdad44ee42e3611328a3d080fc065));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_50ccdad44ee42e3611328a3d080fc065);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_str_plain___repr__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___repr__);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_str_digest_4658ceca6bb1042fc81752459395cca8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4658ceca6bb1042fc81752459395cca8);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_tuple_7a4d14c7cf827edddb63fe15bc901986_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_7a4d14c7cf827edddb63fe15bc901986_tuple);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_tuple_type_TypeError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_TypeError_tuple);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_int_pos_345));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_345);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_str_digest_e2478e2e2308ce0cc96707836dbcacd5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e2478e2e2308ce0cc96707836dbcacd5);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_dict_843eda5a2ee5248f40108f31c9a0a3e5));
CHECK_OBJECT_DEEP(mod_consts.const_dict_843eda5a2ee5248f40108f31c9a0a3e5);
assert(mod_consts_hash[229] == DEEP_HASH(tstate, mod_consts.const_str_plain_to_raw_response_wrapper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_to_raw_response_wrapper);
assert(mod_consts_hash[230] == DEEP_HASH(tstate, mod_consts.const_dict_8f1cd11a863ea54173c2b1f8e1f03889));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8f1cd11a863ea54173c2b1f8e1f03889);
assert(mod_consts_hash[231] == DEEP_HASH(tstate, mod_consts.const_str_plain_async_to_raw_response_wrapper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_async_to_raw_response_wrapper);
assert(mod_consts_hash[232] == DEEP_HASH(tstate, mod_consts.const_int_pos_386));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_386);
assert(mod_consts_hash[233] == DEEP_HASH(tstate, mod_consts.const_dict_68359d61f8fd1d1275d36e51b19591c9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_68359d61f8fd1d1275d36e51b19591c9);
assert(mod_consts_hash[234] == DEEP_HASH(tstate, mod_consts.const_str_digest_039fb0760cc676df107ac5b185c14afc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_039fb0760cc676df107ac5b185c14afc);
assert(mod_consts_hash[235] == DEEP_HASH(tstate, mod_consts.const_str_digest_7ec112cc33728e62117faa6e661ff2e8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7ec112cc33728e62117faa6e661ff2e8);
assert(mod_consts_hash[236] == DEEP_HASH(tstate, mod_consts.const_str_digest_5a39e66e9ce1d2aa0874832f618f4c65));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5a39e66e9ce1d2aa0874832f618f4c65);
assert(mod_consts_hash[237] == DEEP_HASH(tstate, mod_consts.const_str_digest_cfd37198786706495530e78479c34af2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cfd37198786706495530e78479c34af2);
assert(mod_consts_hash[238] == DEEP_HASH(tstate, mod_consts.const_str_digest_ea02253d2ac6b13198ecb43fde117bfe));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ea02253d2ac6b13198ecb43fde117bfe);
assert(mod_consts_hash[239] == DEEP_HASH(tstate, mod_consts.const_dict_3435af114cbc37dcb1b52026f3c8880a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_3435af114cbc37dcb1b52026f3c8880a);
assert(mod_consts_hash[240] == DEEP_HASH(tstate, mod_consts.const_str_digest_d1c6d20f45c93b73c9fe302b9f81ecc7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d1c6d20f45c93b73c9fe302b9f81ecc7);
assert(mod_consts_hash[241] == DEEP_HASH(tstate, mod_consts.const_str_digest_4b8ba7f75337ed6f39d85eafef9a368f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4b8ba7f75337ed6f39d85eafef9a368f);
assert(mod_consts_hash[242] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[243] == DEEP_HASH(tstate, mod_consts.const_dict_e275a014f0070bba21fed9df92c40ac0));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e275a014f0070bba21fed9df92c40ac0);
assert(mod_consts_hash[244] == DEEP_HASH(tstate, mod_consts.const_str_digest_ec303bec879c64a38130cb1ab53ee6ba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ec303bec879c64a38130cb1ab53ee6ba);
assert(mod_consts_hash[245] == DEEP_HASH(tstate, mod_consts.const_dict_0f6eb376eaa281b332f667131a587bc9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0f6eb376eaa281b332f667131a587bc9);
assert(mod_consts_hash[246] == DEEP_HASH(tstate, mod_consts.const_str_digest_54fc8940cae39dfd0ff2398d14f81f1b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_54fc8940cae39dfd0ff2398d14f81f1b);
assert(mod_consts_hash[247] == DEEP_HASH(tstate, mod_consts.const_dict_b2f586a573796cb806fcf3b5316538bd));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b2f586a573796cb806fcf3b5316538bd);
assert(mod_consts_hash[248] == DEEP_HASH(tstate, mod_consts.const_str_digest_de68aa625081d15347e4315bd85446a3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_de68aa625081d15347e4315bd85446a3);
assert(mod_consts_hash[249] == DEEP_HASH(tstate, mod_consts.const_str_digest_2301f03e76f57662a070919138caad9a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2301f03e76f57662a070919138caad9a);
assert(mod_consts_hash[250] == DEEP_HASH(tstate, mod_consts.const_dict_ef5f909ff65572b5e54b9a900f542c7c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ef5f909ff65572b5e54b9a900f542c7c);
assert(mod_consts_hash[251] == DEEP_HASH(tstate, mod_consts.const_str_plain_write_to_file));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_write_to_file);
assert(mod_consts_hash[252] == DEEP_HASH(tstate, mod_consts.const_str_digest_a1e831b04086e67b3a35c5b50e577878));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a1e831b04086e67b3a35c5b50e577878);
assert(mod_consts_hash[253] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_5cdf8775c8d61e0bfabd5215802678f6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_5cdf8775c8d61e0bfabd5215802678f6_tuple);
assert(mod_consts_hash[254] == DEEP_HASH(tstate, mod_consts.const_dict_f3fe0f4a62dd56b4fa5042c0b8d16b4e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f3fe0f4a62dd56b4fa5042c0b8d16b4e);
assert(mod_consts_hash[255] == DEEP_HASH(tstate, mod_consts.const_dict_0c18636b79932543582c5e3337f15d57));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0c18636b79932543582c5e3337f15d57);
assert(mod_consts_hash[256] == DEEP_HASH(tstate, mod_consts.const_str_plain_stream_to_file));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stream_to_file);
assert(mod_consts_hash[257] == DEEP_HASH(tstate, mod_consts.const_str_digest_3530aab6952a4829b057422876525a21));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3530aab6952a4829b057422876525a21);
assert(mod_consts_hash[258] == DEEP_HASH(tstate, mod_consts.const_str_digest_7a1242fbafaff568ce909c619ab8328c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7a1242fbafaff568ce909c619ab8328c);
assert(mod_consts_hash[259] == DEEP_HASH(tstate, mod_consts.const_dict_857b48a932d6c271d39ddec087469c03));
CHECK_OBJECT_DEEP(mod_consts.const_dict_857b48a932d6c271d39ddec087469c03);
assert(mod_consts_hash[260] == DEEP_HASH(tstate, mod_consts.const_dict_954cb4f3876a39f4c6440a10f0625d45));
CHECK_OBJECT_DEEP(mod_consts.const_dict_954cb4f3876a39f4c6440a10f0625d45);
assert(mod_consts_hash[261] == DEEP_HASH(tstate, mod_consts.const_dict_d803a994da5de2709bb2cdb8a64c7893));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d803a994da5de2709bb2cdb8a64c7893);
assert(mod_consts_hash[262] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_response_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_response_tuple);
assert(mod_consts_hash[263] == DEEP_HASH(tstate, mod_consts.const_str_digest_0cea3ba0600eecad249f208542de3453));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0cea3ba0600eecad249f208542de3453);
assert(mod_consts_hash[264] == DEEP_HASH(tstate, mod_consts.const_str_digest_9d9449e47e872bfad58d4a668c3558c8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9d9449e47e872bfad58d4a668c3558c8);
assert(mod_consts_hash[265] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[266] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_response_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_response_tuple);
assert(mod_consts_hash[267] == DEEP_HASH(tstate, mod_consts.const_tuple_74316a210a0cac625fe8fcd222ab393f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_74316a210a0cac625fe8fcd222ab393f_tuple);
assert(mod_consts_hash[268] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain___class___tuple);
assert(mod_consts_hash[269] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[270] == DEEP_HASH(tstate, mod_consts.const_tuple_d466a79c1191ea585773558b592fc974_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d466a79c1191ea585773558b592fc974_tuple);
assert(mod_consts_hash[271] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_chunk_size_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_chunk_size_tuple);
assert(mod_consts_hash[272] == DEEP_HASH(tstate, mod_consts.const_tuple_8f0976ef6f40a9c5b08bf4c67c9ff7eb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8f0976ef6f40a9c5b08bf4c67c9ff7eb_tuple);
assert(mod_consts_hash[273] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_func_str_plain_wrapped_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_func_str_plain_wrapped_tuple);
assert(mod_consts_hash[274] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_kwargs_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_kwargs_tuple);
assert(mod_consts_hash[275] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_to_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_to_tuple);
assert(mod_consts_hash[276] == DEEP_HASH(tstate, mod_consts.const_tuple_31b880f7f2f29902ea798dc4e94a10ee_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_31b880f7f2f29902ea798dc4e94a10ee_tuple);
assert(mod_consts_hash[277] == DEEP_HASH(tstate, mod_consts.const_tuple_4397ebcf5c098d015451949e7db8819c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4397ebcf5c098d015451949e7db8819c_tuple);
assert(mod_consts_hash[278] == DEEP_HASH(tstate, mod_consts.const_tuple_b4abe18cfb9f389878866a50d74f36df_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b4abe18cfb9f389878866a50d74f36df_tuple);
assert(mod_consts_hash[279] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_func_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_func_tuple);
assert(mod_consts_hash[280] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_file_str_plain_f_str_plain_data_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_file_str_plain_f_str_plain_data_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 36
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
static PyObject *module_var_accessor_openai$_legacy_response$APIResponseValidationError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_legacy_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_legacy_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_APIResponseValidationError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_legacy_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_APIResponseValidationError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_APIResponseValidationError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_APIResponseValidationError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_APIResponseValidationError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_APIResponseValidationError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_APIResponseValidationError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_APIResponseValidationError);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_legacy_response$Any(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_legacy_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_legacy_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_legacy_response->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_legacy_response$AsyncStream(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_legacy_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_legacy_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncStream);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_legacy_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncStream);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncStream, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncStream);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncStream, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncStream);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncStream);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncStream);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_legacy_response$BaseModel(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_legacy_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_legacy_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseModel);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_legacy_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BaseModel);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BaseModel, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BaseModel);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BaseModel, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseModel);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseModel);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseModel);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_legacy_response$Generic(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_legacy_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_legacy_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Generic);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_legacy_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Generic);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Generic, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Generic);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Generic, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Generic);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Generic);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Generic);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_legacy_response$HttpxBinaryResponseContent(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_legacy_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_legacy_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_HttpxBinaryResponseContent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_legacy_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HttpxBinaryResponseContent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HttpxBinaryResponseContent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HttpxBinaryResponseContent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HttpxBinaryResponseContent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_HttpxBinaryResponseContent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_HttpxBinaryResponseContent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HttpxBinaryResponseContent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_legacy_response$LegacyAPIResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_legacy_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_legacy_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_LegacyAPIResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_legacy_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LegacyAPIResponse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LegacyAPIResponse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LegacyAPIResponse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LegacyAPIResponse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_LegacyAPIResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_LegacyAPIResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_LegacyAPIResponse);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_legacy_response$MissingStreamClassError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_legacy_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_legacy_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_MissingStreamClassError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_legacy_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MissingStreamClassError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MissingStreamClassError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MissingStreamClassError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MissingStreamClassError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_MissingStreamClassError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_MissingStreamClassError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MissingStreamClassError);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_legacy_response$NoneType(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_legacy_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_legacy_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_NoneType);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_legacy_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NoneType);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NoneType, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NoneType);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NoneType, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_NoneType);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_NoneType);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_NoneType);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_legacy_response$ParamSpec(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_legacy_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_legacy_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_ParamSpec);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_legacy_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ParamSpec);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ParamSpec, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ParamSpec);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ParamSpec, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_ParamSpec);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_ParamSpec);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ParamSpec);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_legacy_response$R(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_legacy_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_legacy_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_R);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_legacy_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_R);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_R, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_R);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_R, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_R);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_R);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_R);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_legacy_response$RAW_RESPONSE_HEADER(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_legacy_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_legacy_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_RAW_RESPONSE_HEADER);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_legacy_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RAW_RESPONSE_HEADER);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RAW_RESPONSE_HEADER, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RAW_RESPONSE_HEADER);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RAW_RESPONSE_HEADER, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_RAW_RESPONSE_HEADER);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_RAW_RESPONSE_HEADER);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RAW_RESPONSE_HEADER);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_legacy_response$Stream(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_legacy_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_legacy_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Stream);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_legacy_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Stream);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Stream, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Stream);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Stream, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Stream);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Stream);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Stream);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_legacy_response$TypeVar(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_legacy_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_legacy_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_legacy_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypeVar);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypeVar, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypeVar);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypeVar, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_legacy_response$Union(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_legacy_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_legacy_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_legacy_response->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_legacy_response$_T(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_legacy_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_legacy_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain__T);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_legacy_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__T);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__T, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__T);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__T, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain__T);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain__T);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__T);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_legacy_response$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_legacy_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_legacy_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_legacy_response->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_legacy_response$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_legacy_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_legacy_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_legacy_response->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_legacy_response$add_request_id(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_legacy_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_legacy_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_add_request_id);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_legacy_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_add_request_id);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_add_request_id, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_add_request_id);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_add_request_id, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_add_request_id);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_add_request_id);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_add_request_id);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_legacy_response$anyio(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_legacy_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_legacy_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_anyio);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_legacy_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_anyio);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_anyio, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_anyio);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_anyio, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_anyio);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_anyio);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_anyio);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_legacy_response$cast(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_legacy_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_legacy_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_legacy_response->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_legacy_response$deprecated(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_legacy_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_legacy_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_deprecated);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_legacy_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_deprecated);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_deprecated, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_deprecated);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_deprecated, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_deprecated);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_deprecated);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_deprecated);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_legacy_response$extract_stream_chunk_type(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_legacy_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_legacy_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_extract_stream_chunk_type);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_legacy_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_extract_stream_chunk_type);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_extract_stream_chunk_type, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_extract_stream_chunk_type);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_extract_stream_chunk_type, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_extract_stream_chunk_type);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_extract_stream_chunk_type);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_extract_stream_chunk_type);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_legacy_response$extract_type_arg(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_legacy_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_legacy_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_extract_type_arg);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_legacy_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_extract_type_arg);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_extract_type_arg, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_extract_type_arg);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_extract_type_arg, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_extract_type_arg);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_extract_type_arg);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_extract_type_arg);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_legacy_response$get_origin(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_legacy_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_legacy_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_get_origin);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_legacy_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_origin);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_origin, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_origin);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_origin, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_get_origin);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_get_origin);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_origin);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_legacy_response$httpx(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_legacy_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_legacy_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_httpx);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_legacy_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_httpx);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_httpx, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_httpx);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_httpx, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_httpx);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_httpx);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_httpx);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_legacy_response$inspect(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_legacy_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_legacy_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)const_str_plain_inspect);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_legacy_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_inspect);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_inspect, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_inspect);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_inspect, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)const_str_plain_inspect);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)const_str_plain_inspect);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_inspect);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_legacy_response$is_annotated_type(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_legacy_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_legacy_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_is_annotated_type);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_legacy_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_annotated_type);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_annotated_type, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_annotated_type);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_annotated_type, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_is_annotated_type);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_is_annotated_type);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_is_annotated_type);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_legacy_response$is_basemodel(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_legacy_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_legacy_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_is_basemodel);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_legacy_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_basemodel);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_basemodel, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_basemodel);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_basemodel, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_is_basemodel);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_is_basemodel);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_is_basemodel);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_legacy_response$is_given(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_legacy_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_legacy_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_is_given);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_legacy_response->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_is_given);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_is_given);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_is_given);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_legacy_response$is_stream_class_type(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_legacy_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_legacy_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_is_stream_class_type);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_legacy_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_stream_class_type);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_stream_class_type, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_stream_class_type);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_stream_class_type, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_is_stream_class_type);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_is_stream_class_type);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_is_stream_class_type);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_legacy_response$is_type_alias_type(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_legacy_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_legacy_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_is_type_alias_type);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_legacy_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_type_alias_type);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_type_alias_type, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_type_alias_type);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_type_alias_type, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_is_type_alias_type);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_is_type_alias_type);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_is_type_alias_type);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_legacy_response$log(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_legacy_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_legacy_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_legacy_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_log);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_log, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_log);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_log, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_legacy_response$logging(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_legacy_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_legacy_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_legacy_response->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_legacy_response$overload(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_legacy_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_legacy_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_legacy_response->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_legacy_response$override(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_legacy_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_legacy_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_override);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_legacy_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_override);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_override, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_override);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_override, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_override);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_override);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_override);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_b73af733761727d187743923e4ede94f;
static PyCodeObject *code_objects_39ded0bf3a788d59c665b00fe5a25198;
static PyCodeObject *code_objects_bd14fc44b170421e56b033ce28a92358;
static PyCodeObject *code_objects_51bf5bd9e756ea93ac1997d204f444b4;
static PyCodeObject *code_objects_3eb923013288915aff39f4140acbd656;
static PyCodeObject *code_objects_dd57bf315674f1971583963dd0e428cc;
static PyCodeObject *code_objects_cd86da0aba694d924f961faa5cc15584;
static PyCodeObject *code_objects_1e5d1d36b69abfcfcd358e63e98c8f37;
static PyCodeObject *code_objects_b5e1058365737334b14e4326fc6dd85e;
static PyCodeObject *code_objects_ce9edee518fbb619bcd48af7ba469576;
static PyCodeObject *code_objects_de91c6bb8fcaa44aaab47293f73b4b54;
static PyCodeObject *code_objects_91a92d6a519d851ee8ddd4f84b84cfe8;
static PyCodeObject *code_objects_52b3fc2a4eb0dda233d272f4720363c0;
static PyCodeObject *code_objects_955b34763ea16cf909094b9ef6bcf99f;
static PyCodeObject *code_objects_72e149ec62769d326477641473524133;
static PyCodeObject *code_objects_fd9fdc5cbcf08e80bc9fa4815e99769e;
static PyCodeObject *code_objects_5bbc91b93fd5ef6edf6540892ea20404;
static PyCodeObject *code_objects_23142a7e64faebc88129dffb1f09301a;
static PyCodeObject *code_objects_bee75934795f07fa35357944defe989c;
static PyCodeObject *code_objects_cc75da1a0172f795a7de7f343aaa8fb4;
static PyCodeObject *code_objects_e8dca49a07326249718ec8c336da1475;
static PyCodeObject *code_objects_bb3c271dfb95c675dd1691c71b4505f2;
static PyCodeObject *code_objects_02364e9758fb294ca49b490005055c42;
static PyCodeObject *code_objects_fe169a8c3530fe5e4774f63df5f7e808;
static PyCodeObject *code_objects_8a0dddd45440a784a1fa7dfb3bed01c8;
static PyCodeObject *code_objects_5c42d348a70f6446f641b931cfb656b5;
static PyCodeObject *code_objects_649bac9972892f6d65d7f611771cf40d;
static PyCodeObject *code_objects_eb5ea1bc3c6f1b3ebeaacd5b851ca83e;
static PyCodeObject *code_objects_3af9203398d37f3134756e885a000d9a;
static PyCodeObject *code_objects_2a54c315c8ba9e0f6b6bed095452436b;
static PyCodeObject *code_objects_b3a6eaca2368085da00f33d8aa4f98a4;
static PyCodeObject *code_objects_e6d6aca35dd6f2ed8523fe3ec618ad8f;
static PyCodeObject *code_objects_272e58165fbb8f6a8d6cd84d693cbbf8;
static PyCodeObject *code_objects_050caa75987f063a949d517b0c82da68;
static PyCodeObject *code_objects_cfe76c812ee18857e7240039e2165285;
static PyCodeObject *code_objects_6022fb761c11c25986f5288361777e96;
static PyCodeObject *code_objects_744bbe803a829651bf60accd01ee6aa9;
static PyCodeObject *code_objects_2c8e70db0a2dffc7d4a4216d9e3750a4;
static PyCodeObject *code_objects_d83c8b57dc52d62a75f0cb2b1c51ce2b;
static PyCodeObject *code_objects_072d88870607476764fbec2ff63fe945;
static PyCodeObject *code_objects_6b36ad34cb9fbdd37570f331d054c9d4;
static PyCodeObject *code_objects_c3633a29756a4f633c6cd423eba6a392;
static PyCodeObject *code_objects_6ed4ac8df1370822f59540835a205cdf;
static PyCodeObject *code_objects_49981829b080cb7809a8be574f18d858;
static PyCodeObject *code_objects_6c979cbae8c284068a1a0df52b5c1dae;
static PyCodeObject *code_objects_d1a21472ad5c9decbfad3cff0a23ca28;
static PyCodeObject *code_objects_504ac6fd7925b10a0ceb0c1a2903a529;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_0cea3ba0600eecad249f208542de3453); CHECK_OBJECT(module_filename_obj);
code_objects_b73af733761727d187743923e4ede94f = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_9d9449e47e872bfad58d4a668c3558c8, mod_consts.const_str_digest_9d9449e47e872bfad58d4a668c3558c8, NULL, NULL, 0, 0, 0);
code_objects_39ded0bf3a788d59c665b00fe5a25198 = MAKE_CODE_OBJECT(module_filename_obj, 386, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_HttpxBinaryResponseContent, mod_consts.const_str_plain_HttpxBinaryResponseContent, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_bd14fc44b170421e56b033ce28a92358 = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_LegacyAPIResponse, mod_consts.const_str_plain_LegacyAPIResponse, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_51bf5bd9e756ea93ac1997d204f444b4 = MAKE_CODE_OBJECT(module_filename_obj, 345, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_MissingStreamClassError, mod_consts.const_str_plain_MissingStreamClassError, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_3eb923013288915aff39f4140acbd656 = MAKE_CODE_OBJECT(module_filename_obj, 389, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_039fb0760cc676df107ac5b185c14afc, mod_consts.const_tuple_str_plain_self_str_plain_response_tuple, NULL, 2, 0, 0);
code_objects_dd57bf315674f1971583963dd0e428cc = MAKE_CODE_OBJECT(module_filename_obj, 70, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_8638803ce0356d04d0103db3a3e9d6bb, mod_consts.const_tuple_74316a210a0cac625fe8fcd222ab393f_tuple, NULL, 1, 7, 0);
code_objects_cd86da0aba694d924f961faa5cc15584 = MAKE_CODE_OBJECT(module_filename_obj, 346, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_e2478e2e2308ce0cc96707836dbcacd5, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 0, 0);
code_objects_1e5d1d36b69abfcfcd358e63e98c8f37 = MAKE_CODE_OBJECT(module_filename_obj, 341, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_4658ceca6bb1042fc81752459395cca8, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_b5e1058365737334b14e4326fc6dd85e = MAKE_CODE_OBJECT(module_filename_obj, 197, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__parse, mod_consts.const_str_digest_50ccdad44ee42e3611328a3d080fc065, mod_consts.const_tuple_d466a79c1191ea585773558b592fc974_tuple, NULL, 1, 1, 0);
code_objects_ce9edee518fbb619bcd48af7ba469576 = MAKE_CODE_OBJECT(module_filename_obj, 487, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_aclose, mod_consts.const_str_digest_1e6b1cb86f0508d31cf5695dfe9b0be9, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_de91c6bb8fcaa44aaab47293f73b4b54 = MAKE_CODE_OBJECT(module_filename_obj, 461, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_aiter_bytes, mod_consts.const_str_digest_48ed87d8dd090fe0fa9fcda2c7593b4b, mod_consts.const_tuple_str_plain_self_str_plain_chunk_size_tuple, NULL, 2, 0, 0);
code_objects_91a92d6a519d851ee8ddd4f84b84cfe8 = MAKE_CODE_OBJECT(module_filename_obj, 467, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_aiter_lines, mod_consts.const_str_digest_211a226f678533b98d969a55c72331ad, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_52b3fc2a4eb0dda233d272f4720363c0 = MAKE_CODE_OBJECT(module_filename_obj, 470, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_aiter_raw, mod_consts.const_str_digest_d9ddc6a693ee705ead6cc9d0efd0637a, mod_consts.const_tuple_str_plain_self_str_plain_chunk_size_tuple, NULL, 2, 0, 0);
code_objects_955b34763ea16cf909094b9ef6bcf99f = MAKE_CODE_OBJECT(module_filename_obj, 464, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_aiter_text, mod_consts.const_str_digest_fe99cda0df968277a353847fa2334330, mod_consts.const_tuple_str_plain_self_str_plain_chunk_size_tuple, NULL, 2, 0, 0);
code_objects_72e149ec62769d326477641473524133 = MAKE_CODE_OBJECT(module_filename_obj, 458, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_aread, mod_consts.const_str_digest_70e1d3b21c714952c355e85f51bce1f8, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_fd9fdc5cbcf08e80bc9fa4815e99769e = MAKE_CODE_OBJECT(module_filename_obj, 476, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_astream_to_file, mod_consts.const_str_digest_42ed249506a138762fc3f37cf84a965f, mod_consts.const_tuple_8f0976ef6f40a9c5b08bf4c67c9ff7eb_tuple, NULL, 2, 1, 0);
code_objects_5bbc91b93fd5ef6edf6540892ea20404 = MAKE_CODE_OBJECT(module_filename_obj, 369, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_async_to_raw_response_wrapper, mod_consts.const_str_plain_async_to_raw_response_wrapper, mod_consts.const_tuple_str_plain_func_str_plain_wrapped_tuple, NULL, 1, 0, 0);
code_objects_23142a7e64faebc88129dffb1f09301a = MAKE_CODE_OBJECT(module_filename_obj, 405, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_charset_encoding, mod_consts.const_str_digest_ea02253d2ac6b13198ecb43fde117bfe, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_bee75934795f07fa35357944defe989c = MAKE_CODE_OBJECT(module_filename_obj, 455, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain_close, mod_consts.const_str_digest_7a1242fbafaff568ce909c619ab8328c, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_cc75da1a0172f795a7de7f343aaa8fb4 = MAKE_CODE_OBJECT(module_filename_obj, 393, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_content, mod_consts.const_str_digest_7ec112cc33728e62117faa6e661ff2e8, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_e8dca49a07326249718ec8c336da1475 = MAKE_CODE_OBJECT(module_filename_obj, 168, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_content, mod_consts.const_str_digest_0c894799a7f7600e63cd5bbd73a48765, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_bb3c271dfb95c675dd1691c71b4505f2 = MAKE_CODE_OBJECT(module_filename_obj, 193, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_elapsed, mod_consts.const_str_digest_fa6dfc1f4482ad869f974a6d09faf2fd, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_02364e9758fb294ca49b490005055c42 = MAKE_CODE_OBJECT(module_filename_obj, 401, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain_encoding, mod_consts.const_str_digest_cfd37198786706495530e78479c34af2, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_fe169a8c3530fe5e4774f63df5f7e808 = MAKE_CODE_OBJECT(module_filename_obj, 148, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_headers, mod_consts.const_str_digest_daadefa1c5c1faf6d7f898a86e06e69a, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_8a0dddd45440a784a1fa7dfb3bed01c8 = MAKE_CODE_OBJECT(module_filename_obj, 152, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_http_request, mod_consts.const_str_digest_858b38ba4a235e1694d9c278c0ca1490, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_5c42d348a70f6446f641b931cfb656b5 = MAKE_CODE_OBJECT(module_filename_obj, 185, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_http_version, mod_consts.const_str_digest_c37d99dc93910202f42b19ca56f4a9dc, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_649bac9972892f6d65d7f611771cf40d = MAKE_CODE_OBJECT(module_filename_obj, 189, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_closed, mod_consts.const_str_digest_03d96647a8e7d7a2a101441806f52a3c, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_eb5ea1bc3c6f1b3ebeaacd5b851ca83e = MAKE_CODE_OBJECT(module_filename_obj, 414, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_iter_bytes, mod_consts.const_str_digest_ec303bec879c64a38130cb1ab53ee6ba, mod_consts.const_tuple_str_plain_self_str_plain_chunk_size_tuple, NULL, 2, 0, 0);
code_objects_3af9203398d37f3134756e885a000d9a = MAKE_CODE_OBJECT(module_filename_obj, 420, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_iter_lines, mod_consts.const_str_digest_de68aa625081d15347e4315bd85446a3, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_2a54c315c8ba9e0f6b6bed095452436b = MAKE_CODE_OBJECT(module_filename_obj, 423, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_iter_raw, mod_consts.const_str_digest_2301f03e76f57662a070919138caad9a, mod_consts.const_tuple_str_plain_self_str_plain_chunk_size_tuple, NULL, 2, 0, 0);
code_objects_b3a6eaca2368085da00f33d8aa4f98a4 = MAKE_CODE_OBJECT(module_filename_obj, 417, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_iter_text, mod_consts.const_str_digest_54fc8940cae39dfd0ff2398d14f81f1b, mod_consts.const_tuple_str_plain_self_str_plain_chunk_size_tuple, NULL, 2, 0, 0);
code_objects_e6d6aca35dd6f2ed8523fe3ec618ad8f = MAKE_CODE_OBJECT(module_filename_obj, 408, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_json, mod_consts.const_str_digest_d1c6d20f45c93b73c9fe302b9f81ecc7, mod_consts.const_tuple_str_plain_self_str_plain_kwargs_tuple, NULL, 1, 0, 0);
code_objects_272e58165fbb8f6a8d6cd84d693cbbf8 = MAKE_CODE_OBJECT(module_filename_obj, 164, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_method, mod_consts.const_str_digest_2af2a3d29e3e2577c4d61b6f4ece995b, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_050caa75987f063a949d517b0c82da68 = MAKE_CODE_OBJECT(module_filename_obj, 98, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_parse, mod_consts.const_str_digest_516842115db5f3bd680931dcafaa02d3, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_cfe76c812ee18857e7240039e2165285 = MAKE_CODE_OBJECT(module_filename_obj, 95, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_parse, mod_consts.const_str_digest_516842115db5f3bd680931dcafaa02d3, mod_consts.const_tuple_str_plain_self_str_plain_to_tuple, NULL, 1, 1, 0);
code_objects_6022fb761c11c25986f5288361777e96 = MAKE_CODE_OBJECT(module_filename_obj, 100, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_parse, mod_consts.const_str_digest_516842115db5f3bd680931dcafaa02d3, mod_consts.const_tuple_31b880f7f2f29902ea798dc4e94a10ee_tuple, NULL, 1, 1, 0);
code_objects_744bbe803a829651bf60accd01ee6aa9 = MAKE_CODE_OBJECT(module_filename_obj, 411, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain_read, mod_consts.const_str_digest_4b8ba7f75337ed6f39d85eafef9a368f, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_2c8e70db0a2dffc7d4a4216d9e3750a4 = MAKE_CODE_OBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_request_id, mod_consts.const_str_digest_75da570e84f95ea4b94e6a1787e8a6cd, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_d83c8b57dc52d62a75f0cb2b1c51ce2b = MAKE_CODE_OBJECT(module_filename_obj, 156, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_status_code, mod_consts.const_str_digest_2bbd210cddc42fd633ea28e56d696a56, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_072d88870607476764fbec2ff63fe945 = MAKE_CODE_OBJECT(module_filename_obj, 445, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_stream_to_file, mod_consts.const_str_digest_3530aab6952a4829b057422876525a21, mod_consts.const_tuple_4397ebcf5c098d015451949e7db8819c_tuple, NULL, 2, 1, 0);
code_objects_6b36ad34cb9fbdd37570f331d054c9d4 = MAKE_CODE_OBJECT(module_filename_obj, 397, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_text, mod_consts.const_str_digest_5a39e66e9ce1d2aa0874832f618f4c65, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_c3633a29756a4f633c6cd423eba6a392 = MAKE_CODE_OBJECT(module_filename_obj, 177, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_text, mod_consts.const_str_digest_cf9a6cd2716569d8a830513fa4cc0d73, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_6ed4ac8df1370822f59540835a205cdf = MAKE_CODE_OBJECT(module_filename_obj, 352, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_to_raw_response_wrapper, mod_consts.const_str_plain_to_raw_response_wrapper, mod_consts.const_tuple_str_plain_func_str_plain_wrapped_tuple, NULL, 1, 0, 0);
code_objects_49981829b080cb7809a8be574f18d858 = MAKE_CODE_OBJECT(module_filename_obj, 160, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_url, mod_consts.const_str_digest_e69debb7c50535710433476ceae860bb, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_6c979cbae8c284068a1a0df52b5c1dae = MAKE_CODE_OBJECT(module_filename_obj, 375, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_wrapped, mod_consts.const_str_digest_ece4072b36db9c798f8cf693482ca28d, mod_consts.const_tuple_b4abe18cfb9f389878866a50d74f36df_tuple, mod_consts.const_tuple_str_plain_func_tuple, 0, 0, 0);
code_objects_d1a21472ad5c9decbfad3cff0a23ca28 = MAKE_CODE_OBJECT(module_filename_obj, 358, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_wrapped, mod_consts.const_str_digest_69e8a5fbf48fd004547d2bac357739cd, mod_consts.const_tuple_b4abe18cfb9f389878866a50d74f36df_tuple, mod_consts.const_tuple_str_plain_func_tuple, 0, 0, 0);
code_objects_504ac6fd7925b10a0ceb0c1a2903a529 = MAKE_CODE_OBJECT(module_filename_obj, 426, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_write_to_file, mod_consts.const_str_digest_a1e831b04086e67b3a35c5b50e577878, mod_consts.const_tuple_str_plain_self_str_plain_file_str_plain_f_str_plain_data_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_COROUTINE_openai$_legacy_response$$$function__20_async_to_raw_response_wrapper$$$function__1_wrapped$$$coroutine__1_wrapped(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_openai$_legacy_response$$$function__35_aread$$$coroutine__1_aread(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_openai$_legacy_response$$$function__36_aiter_bytes$$$coroutine__1_aiter_bytes(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_openai$_legacy_response$$$function__37_aiter_text$$$coroutine__1_aiter_text(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_openai$_legacy_response$$$function__38_aiter_lines$$$coroutine__1_aiter_lines(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_openai$_legacy_response$$$function__39_aiter_raw$$$coroutine__1_aiter_raw(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_openai$_legacy_response$$$function__40_astream_to_file$$$coroutine__1_astream_to_file(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_openai$_legacy_response$$$function__41_aclose$$$coroutine__1_aclose(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__unpack_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_list_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__10_method(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__11_content(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__12_text(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__13_http_version(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__14_is_closed(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__15_elapsed(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__16__parse(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__17___repr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__18___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__19_to_raw_response_wrapper(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__19_to_raw_response_wrapper$$$function__1_wrapped(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__1___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__20_async_to_raw_response_wrapper(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__20_async_to_raw_response_wrapper$$$function__1_wrapped(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__21___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__22_content(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__23_text(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__24_encoding(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__25_charset_encoding(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__26_json(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__27_read(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__28_iter_bytes(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__29_iter_text(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__2_request_id(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__30_iter_lines(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__31_iter_raw(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__32_write_to_file(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__33_stream_to_file(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__34_close(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__35_aread(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__36_aiter_bytes(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__37_aiter_text(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__38_aiter_lines(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__39_aiter_raw(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__3_parse(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__40_astream_to_file(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__41_aclose(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__4_parse(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__5_parse(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__6_headers(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__7_http_request(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__8_status_code(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__9_url(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_openai$_legacy_response$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_raw = python_pars[1];
PyObject *par_cast_to = python_pars[2];
PyObject *par_client = python_pars[3];
PyObject *par_stream = python_pars[4];
PyObject *par_stream_cls = python_pars[5];
PyObject *par_options = python_pars[6];
PyObject *par_retries_taken = python_pars[7];
struct Nuitka_FrameObject *frame_frame_openai$_legacy_response$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_legacy_response$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_legacy_response$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_openai$_legacy_response$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_legacy_response$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_legacy_response$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_dd57bf315674f1971583963dd0e428cc, module_openai$_legacy_response, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_legacy_response$$$function__1___init__->m_type_description == NULL);
frame_frame_openai$_legacy_response$$$function__1___init__ = cache_frame_frame_openai$_legacy_response$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_legacy_response$$$function__1___init__);
assert(Py_REFCNT(frame_frame_openai$_legacy_response$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_cast_to);
tmp_assattr_value_1 = par_cast_to;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__cast_to, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_client);
tmp_assattr_value_2 = par_client;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__client, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = MAKE_DICT_EMPTY(tstate);
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__parsed_by_type, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_stream);
tmp_assattr_value_4 = par_stream;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__stream, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(par_stream_cls);
tmp_assattr_value_5 = par_stream_cls;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain__stream_cls, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
CHECK_OBJECT(par_options);
tmp_assattr_value_6 = par_options;
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain__options, tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_assattr_target_7;
CHECK_OBJECT(par_raw);
tmp_assattr_value_7 = par_raw;
CHECK_OBJECT(par_self);
tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain_http_response, tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_8;
PyObject *tmp_assattr_target_8;
CHECK_OBJECT(par_retries_taken);
tmp_assattr_value_8 = par_retries_taken;
CHECK_OBJECT(par_self);
tmp_assattr_target_8 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain_retries_taken, tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "oooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_legacy_response$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_legacy_response$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_legacy_response$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_legacy_response$$$function__1___init__,
    type_description_1,
    par_self,
    par_raw,
    par_cast_to,
    par_client,
    par_stream,
    par_stream_cls,
    par_options,
    par_retries_taken
);


// Release cached frame if used for exception.
if (frame_frame_openai$_legacy_response$$$function__1___init__ == cache_frame_frame_openai$_legacy_response$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_legacy_response$$$function__1___init__);
    cache_frame_frame_openai$_legacy_response$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_openai$_legacy_response$$$function__1___init__);

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
CHECK_OBJECT(par_raw);
Py_DECREF(par_raw);
CHECK_OBJECT(par_cast_to);
Py_DECREF(par_cast_to);
CHECK_OBJECT(par_client);
Py_DECREF(par_client);
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);
CHECK_OBJECT(par_stream_cls);
Py_DECREF(par_stream_cls);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);
CHECK_OBJECT(par_retries_taken);
Py_DECREF(par_retries_taken);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_raw);
Py_DECREF(par_raw);
CHECK_OBJECT(par_cast_to);
Py_DECREF(par_cast_to);
CHECK_OBJECT(par_client);
Py_DECREF(par_client);
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);
CHECK_OBJECT(par_stream_cls);
Py_DECREF(par_stream_cls);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);
CHECK_OBJECT(par_retries_taken);
Py_DECREF(par_retries_taken);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$_legacy_response$$$function__2_request_id(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$_legacy_response$$$function__2_request_id;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_legacy_response$$$function__2_request_id = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_legacy_response$$$function__2_request_id)) {
    Py_XDECREF(cache_frame_frame_openai$_legacy_response$$$function__2_request_id);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_legacy_response$$$function__2_request_id == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_legacy_response$$$function__2_request_id = MAKE_FUNCTION_FRAME(tstate, code_objects_2c8e70db0a2dffc7d4a4216d9e3750a4, module_openai$_legacy_response, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_legacy_response$$$function__2_request_id->m_type_description == NULL);
frame_frame_openai$_legacy_response$$$function__2_request_id = cache_frame_frame_openai$_legacy_response$$$function__2_request_id;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_legacy_response$$$function__2_request_id);
assert(Py_REFCNT(frame_frame_openai$_legacy_response$$$function__2_request_id) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_http_response);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_headers);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_openai$_legacy_response$$$function__2_request_id->m_frame.f_lineno = 92;
tmp_return_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_e9c2aeeceffba066c955439d957cb058_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_legacy_response$$$function__2_request_id, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_legacy_response$$$function__2_request_id->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_legacy_response$$$function__2_request_id, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_legacy_response$$$function__2_request_id,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$_legacy_response$$$function__2_request_id == cache_frame_frame_openai$_legacy_response$$$function__2_request_id) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_legacy_response$$$function__2_request_id);
    cache_frame_frame_openai$_legacy_response$$$function__2_request_id = NULL;
}

assertFrameObject(frame_frame_openai$_legacy_response$$$function__2_request_id);

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


static PyObject *impl_openai$_legacy_response$$$function__5_parse(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_to = python_pars[1];
PyObject *var_cache_key = NULL;
PyObject *var_cached = NULL;
PyObject *var_parsed = NULL;
struct Nuitka_FrameObject *frame_frame_openai$_legacy_response$$$function__5_parse;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_legacy_response$$$function__5_parse = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_openai$_legacy_response$$$function__5_parse)) {
    Py_XDECREF(cache_frame_frame_openai$_legacy_response$$$function__5_parse);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_legacy_response$$$function__5_parse == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_legacy_response$$$function__5_parse = MAKE_FUNCTION_FRAME(tstate, code_objects_6022fb761c11c25986f5288361777e96, module_openai$_legacy_response, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_legacy_response$$$function__5_parse->m_type_description == NULL);
frame_frame_openai$_legacy_response$$$function__5_parse = cache_frame_frame_openai$_legacy_response$$$function__5_parse;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_legacy_response$$$function__5_parse);
assert(Py_REFCNT(frame_frame_openai$_legacy_response$$$function__5_parse) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_to);
tmp_cmp_expr_left_1 = par_to;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_to);
tmp_assign_source_1 = par_to;
Py_INCREF(tmp_assign_source_1);
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__cast_to);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
assert(var_cache_key == NULL);
var_cache_key = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__parsed_by_type);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_cache_key);
tmp_args_element_value_1 = var_cache_key;
frame_frame_openai$_legacy_response$$$function__5_parse->m_frame.f_lineno = 133;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_cached == NULL);
var_cached = tmp_assign_source_2;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_cached);
tmp_cmp_expr_left_2 = var_cached;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
CHECK_OBJECT(var_cached);
tmp_return_value = var_cached;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_value_0_1;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__parse);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_to);
tmp_kw_call_value_0_1 = par_to;
frame_frame_openai$_legacy_response$$$function__5_parse->m_frame.f_lineno = 137;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_assign_source_3 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_str_plain_to_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_parsed == NULL);
var_parsed = tmp_assign_source_3;
}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
int tmp_truth_name_1;
tmp_called_value_3 = module_var_accessor_openai$_legacy_response$is_given(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_given);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 138;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__options);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_post_parser);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$_legacy_response$$$function__5_parse->m_frame.f_lineno = 138;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 138;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__options);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_parsed);
tmp_args_element_value_3 = var_parsed;
frame_frame_openai$_legacy_response$$$function__5_parse->m_frame.f_lineno = 139;
tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_post_parser, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_parsed;
    assert(old != NULL);
    var_parsed = tmp_assign_source_4;
    Py_DECREF(old);
}

}
branch_no_2:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(var_parsed);
tmp_isinstance_inst_1 = var_parsed;
tmp_isinstance_cls_1 = module_var_accessor_openai$_legacy_response$BaseModel(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 141;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_8;
tmp_called_value_4 = module_var_accessor_openai$_legacy_response$add_request_id(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_add_request_id);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 142;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_parsed);
tmp_args_element_value_4 = var_parsed;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_request_id);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$_legacy_response$$$function__5_parse->m_frame.f_lineno = 142;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_3:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(var_parsed);
tmp_ass_subvalue_1 = var_parsed;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__parsed_by_type);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_cache_key);
tmp_ass_subscript_1 = var_cache_key;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_value_5 = module_var_accessor_openai$_legacy_response$cast(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 145;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = module_var_accessor_openai$_legacy_response$R(tstate);
if (unlikely(tmp_args_element_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_R);
}

if (tmp_args_element_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 145;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_parsed);
tmp_args_element_value_7 = var_parsed;
frame_frame_openai$_legacy_response$$$function__5_parse->m_frame.f_lineno = 145;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_legacy_response$$$function__5_parse, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_legacy_response$$$function__5_parse->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_legacy_response$$$function__5_parse, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_legacy_response$$$function__5_parse,
    type_description_1,
    par_self,
    par_to,
    var_cache_key,
    var_cached,
    var_parsed
);


// Release cached frame if used for exception.
if (frame_frame_openai$_legacy_response$$$function__5_parse == cache_frame_frame_openai$_legacy_response$$$function__5_parse) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_legacy_response$$$function__5_parse);
    cache_frame_frame_openai$_legacy_response$$$function__5_parse = NULL;
}

assertFrameObject(frame_frame_openai$_legacy_response$$$function__5_parse);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_cache_key);
CHECK_OBJECT(var_cache_key);
Py_DECREF(var_cache_key);
var_cache_key = NULL;
CHECK_OBJECT(var_cached);
CHECK_OBJECT(var_cached);
Py_DECREF(var_cached);
var_cached = NULL;
Py_XDECREF(var_parsed);
var_parsed = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_cache_key);
var_cache_key = NULL;
Py_XDECREF(var_cached);
var_cached = NULL;
Py_XDECREF(var_parsed);
var_parsed = NULL;
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
CHECK_OBJECT(par_to);
Py_DECREF(par_to);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_to);
Py_DECREF(par_to);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$_legacy_response$$$function__6_headers(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$_legacy_response$$$function__6_headers;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_legacy_response$$$function__6_headers = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_legacy_response$$$function__6_headers)) {
    Py_XDECREF(cache_frame_frame_openai$_legacy_response$$$function__6_headers);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_legacy_response$$$function__6_headers == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_legacy_response$$$function__6_headers = MAKE_FUNCTION_FRAME(tstate, code_objects_fe169a8c3530fe5e4774f63df5f7e808, module_openai$_legacy_response, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_legacy_response$$$function__6_headers->m_type_description == NULL);
frame_frame_openai$_legacy_response$$$function__6_headers = cache_frame_frame_openai$_legacy_response$$$function__6_headers;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_legacy_response$$$function__6_headers);
assert(Py_REFCNT(frame_frame_openai$_legacy_response$$$function__6_headers) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_http_response);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_headers);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_legacy_response$$$function__6_headers, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_legacy_response$$$function__6_headers->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_legacy_response$$$function__6_headers, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_legacy_response$$$function__6_headers,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$_legacy_response$$$function__6_headers == cache_frame_frame_openai$_legacy_response$$$function__6_headers) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_legacy_response$$$function__6_headers);
    cache_frame_frame_openai$_legacy_response$$$function__6_headers = NULL;
}

assertFrameObject(frame_frame_openai$_legacy_response$$$function__6_headers);

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


static PyObject *impl_openai$_legacy_response$$$function__7_http_request(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$_legacy_response$$$function__7_http_request;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_legacy_response$$$function__7_http_request = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_legacy_response$$$function__7_http_request)) {
    Py_XDECREF(cache_frame_frame_openai$_legacy_response$$$function__7_http_request);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_legacy_response$$$function__7_http_request == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_legacy_response$$$function__7_http_request = MAKE_FUNCTION_FRAME(tstate, code_objects_8a0dddd45440a784a1fa7dfb3bed01c8, module_openai$_legacy_response, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_legacy_response$$$function__7_http_request->m_type_description == NULL);
frame_frame_openai$_legacy_response$$$function__7_http_request = cache_frame_frame_openai$_legacy_response$$$function__7_http_request;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_legacy_response$$$function__7_http_request);
assert(Py_REFCNT(frame_frame_openai$_legacy_response$$$function__7_http_request) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_http_response);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_request);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_legacy_response$$$function__7_http_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_legacy_response$$$function__7_http_request->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_legacy_response$$$function__7_http_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_legacy_response$$$function__7_http_request,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$_legacy_response$$$function__7_http_request == cache_frame_frame_openai$_legacy_response$$$function__7_http_request) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_legacy_response$$$function__7_http_request);
    cache_frame_frame_openai$_legacy_response$$$function__7_http_request = NULL;
}

assertFrameObject(frame_frame_openai$_legacy_response$$$function__7_http_request);

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


static PyObject *impl_openai$_legacy_response$$$function__8_status_code(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$_legacy_response$$$function__8_status_code;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_legacy_response$$$function__8_status_code = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_legacy_response$$$function__8_status_code)) {
    Py_XDECREF(cache_frame_frame_openai$_legacy_response$$$function__8_status_code);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_legacy_response$$$function__8_status_code == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_legacy_response$$$function__8_status_code = MAKE_FUNCTION_FRAME(tstate, code_objects_d83c8b57dc52d62a75f0cb2b1c51ce2b, module_openai$_legacy_response, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_legacy_response$$$function__8_status_code->m_type_description == NULL);
frame_frame_openai$_legacy_response$$$function__8_status_code = cache_frame_frame_openai$_legacy_response$$$function__8_status_code;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_legacy_response$$$function__8_status_code);
assert(Py_REFCNT(frame_frame_openai$_legacy_response$$$function__8_status_code) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_http_response);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_status_code);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_legacy_response$$$function__8_status_code, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_legacy_response$$$function__8_status_code->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_legacy_response$$$function__8_status_code, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_legacy_response$$$function__8_status_code,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$_legacy_response$$$function__8_status_code == cache_frame_frame_openai$_legacy_response$$$function__8_status_code) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_legacy_response$$$function__8_status_code);
    cache_frame_frame_openai$_legacy_response$$$function__8_status_code = NULL;
}

assertFrameObject(frame_frame_openai$_legacy_response$$$function__8_status_code);

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


static PyObject *impl_openai$_legacy_response$$$function__9_url(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$_legacy_response$$$function__9_url;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_legacy_response$$$function__9_url = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_legacy_response$$$function__9_url)) {
    Py_XDECREF(cache_frame_frame_openai$_legacy_response$$$function__9_url);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_legacy_response$$$function__9_url == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_legacy_response$$$function__9_url = MAKE_FUNCTION_FRAME(tstate, code_objects_49981829b080cb7809a8be574f18d858, module_openai$_legacy_response, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_legacy_response$$$function__9_url->m_type_description == NULL);
frame_frame_openai$_legacy_response$$$function__9_url = cache_frame_frame_openai$_legacy_response$$$function__9_url;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_legacy_response$$$function__9_url);
assert(Py_REFCNT(frame_frame_openai$_legacy_response$$$function__9_url) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_http_response);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_url);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_legacy_response$$$function__9_url, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_legacy_response$$$function__9_url->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_legacy_response$$$function__9_url, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_legacy_response$$$function__9_url,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$_legacy_response$$$function__9_url == cache_frame_frame_openai$_legacy_response$$$function__9_url) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_legacy_response$$$function__9_url);
    cache_frame_frame_openai$_legacy_response$$$function__9_url = NULL;
}

assertFrameObject(frame_frame_openai$_legacy_response$$$function__9_url);

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


static PyObject *impl_openai$_legacy_response$$$function__10_method(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$_legacy_response$$$function__10_method;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_legacy_response$$$function__10_method = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_legacy_response$$$function__10_method)) {
    Py_XDECREF(cache_frame_frame_openai$_legacy_response$$$function__10_method);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_legacy_response$$$function__10_method == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_legacy_response$$$function__10_method = MAKE_FUNCTION_FRAME(tstate, code_objects_272e58165fbb8f6a8d6cd84d693cbbf8, module_openai$_legacy_response, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_legacy_response$$$function__10_method->m_type_description == NULL);
frame_frame_openai$_legacy_response$$$function__10_method = cache_frame_frame_openai$_legacy_response$$$function__10_method;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_legacy_response$$$function__10_method);
assert(Py_REFCNT(frame_frame_openai$_legacy_response$$$function__10_method) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_http_request);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_method);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_legacy_response$$$function__10_method, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_legacy_response$$$function__10_method->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_legacy_response$$$function__10_method, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_legacy_response$$$function__10_method,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$_legacy_response$$$function__10_method == cache_frame_frame_openai$_legacy_response$$$function__10_method) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_legacy_response$$$function__10_method);
    cache_frame_frame_openai$_legacy_response$$$function__10_method = NULL;
}

assertFrameObject(frame_frame_openai$_legacy_response$$$function__10_method);

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


static PyObject *impl_openai$_legacy_response$$$function__11_content(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$_legacy_response$$$function__11_content;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_legacy_response$$$function__11_content = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_legacy_response$$$function__11_content)) {
    Py_XDECREF(cache_frame_frame_openai$_legacy_response$$$function__11_content);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_legacy_response$$$function__11_content == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_legacy_response$$$function__11_content = MAKE_FUNCTION_FRAME(tstate, code_objects_e8dca49a07326249718ec8c336da1475, module_openai$_legacy_response, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_legacy_response$$$function__11_content->m_type_description == NULL);
frame_frame_openai$_legacy_response$$$function__11_content = cache_frame_frame_openai$_legacy_response$$$function__11_content;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_legacy_response$$$function__11_content);
assert(Py_REFCNT(frame_frame_openai$_legacy_response$$$function__11_content) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_http_response);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_content);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_legacy_response$$$function__11_content, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_legacy_response$$$function__11_content->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_legacy_response$$$function__11_content, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_legacy_response$$$function__11_content,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$_legacy_response$$$function__11_content == cache_frame_frame_openai$_legacy_response$$$function__11_content) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_legacy_response$$$function__11_content);
    cache_frame_frame_openai$_legacy_response$$$function__11_content = NULL;
}

assertFrameObject(frame_frame_openai$_legacy_response$$$function__11_content);

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


static PyObject *impl_openai$_legacy_response$$$function__12_text(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$_legacy_response$$$function__12_text;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_legacy_response$$$function__12_text = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_legacy_response$$$function__12_text)) {
    Py_XDECREF(cache_frame_frame_openai$_legacy_response$$$function__12_text);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_legacy_response$$$function__12_text == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_legacy_response$$$function__12_text = MAKE_FUNCTION_FRAME(tstate, code_objects_c3633a29756a4f633c6cd423eba6a392, module_openai$_legacy_response, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_legacy_response$$$function__12_text->m_type_description == NULL);
frame_frame_openai$_legacy_response$$$function__12_text = cache_frame_frame_openai$_legacy_response$$$function__12_text;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_legacy_response$$$function__12_text);
assert(Py_REFCNT(frame_frame_openai$_legacy_response$$$function__12_text) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_http_response);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_text);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_legacy_response$$$function__12_text, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_legacy_response$$$function__12_text->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_legacy_response$$$function__12_text, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_legacy_response$$$function__12_text,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$_legacy_response$$$function__12_text == cache_frame_frame_openai$_legacy_response$$$function__12_text) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_legacy_response$$$function__12_text);
    cache_frame_frame_openai$_legacy_response$$$function__12_text = NULL;
}

assertFrameObject(frame_frame_openai$_legacy_response$$$function__12_text);

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


static PyObject *impl_openai$_legacy_response$$$function__13_http_version(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$_legacy_response$$$function__13_http_version;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_legacy_response$$$function__13_http_version = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_legacy_response$$$function__13_http_version)) {
    Py_XDECREF(cache_frame_frame_openai$_legacy_response$$$function__13_http_version);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_legacy_response$$$function__13_http_version == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_legacy_response$$$function__13_http_version = MAKE_FUNCTION_FRAME(tstate, code_objects_5c42d348a70f6446f641b931cfb656b5, module_openai$_legacy_response, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_legacy_response$$$function__13_http_version->m_type_description == NULL);
frame_frame_openai$_legacy_response$$$function__13_http_version = cache_frame_frame_openai$_legacy_response$$$function__13_http_version;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_legacy_response$$$function__13_http_version);
assert(Py_REFCNT(frame_frame_openai$_legacy_response$$$function__13_http_version) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_http_response);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_http_version);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_legacy_response$$$function__13_http_version, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_legacy_response$$$function__13_http_version->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_legacy_response$$$function__13_http_version, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_legacy_response$$$function__13_http_version,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$_legacy_response$$$function__13_http_version == cache_frame_frame_openai$_legacy_response$$$function__13_http_version) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_legacy_response$$$function__13_http_version);
    cache_frame_frame_openai$_legacy_response$$$function__13_http_version = NULL;
}

assertFrameObject(frame_frame_openai$_legacy_response$$$function__13_http_version);

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


static PyObject *impl_openai$_legacy_response$$$function__14_is_closed(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$_legacy_response$$$function__14_is_closed;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_legacy_response$$$function__14_is_closed = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_legacy_response$$$function__14_is_closed)) {
    Py_XDECREF(cache_frame_frame_openai$_legacy_response$$$function__14_is_closed);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_legacy_response$$$function__14_is_closed == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_legacy_response$$$function__14_is_closed = MAKE_FUNCTION_FRAME(tstate, code_objects_649bac9972892f6d65d7f611771cf40d, module_openai$_legacy_response, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_legacy_response$$$function__14_is_closed->m_type_description == NULL);
frame_frame_openai$_legacy_response$$$function__14_is_closed = cache_frame_frame_openai$_legacy_response$$$function__14_is_closed;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_legacy_response$$$function__14_is_closed);
assert(Py_REFCNT(frame_frame_openai$_legacy_response$$$function__14_is_closed) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_http_response);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_is_closed);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_legacy_response$$$function__14_is_closed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_legacy_response$$$function__14_is_closed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_legacy_response$$$function__14_is_closed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_legacy_response$$$function__14_is_closed,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$_legacy_response$$$function__14_is_closed == cache_frame_frame_openai$_legacy_response$$$function__14_is_closed) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_legacy_response$$$function__14_is_closed);
    cache_frame_frame_openai$_legacy_response$$$function__14_is_closed = NULL;
}

assertFrameObject(frame_frame_openai$_legacy_response$$$function__14_is_closed);

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


static PyObject *impl_openai$_legacy_response$$$function__15_elapsed(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$_legacy_response$$$function__15_elapsed;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_legacy_response$$$function__15_elapsed = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_legacy_response$$$function__15_elapsed)) {
    Py_XDECREF(cache_frame_frame_openai$_legacy_response$$$function__15_elapsed);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_legacy_response$$$function__15_elapsed == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_legacy_response$$$function__15_elapsed = MAKE_FUNCTION_FRAME(tstate, code_objects_bb3c271dfb95c675dd1691c71b4505f2, module_openai$_legacy_response, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_legacy_response$$$function__15_elapsed->m_type_description == NULL);
frame_frame_openai$_legacy_response$$$function__15_elapsed = cache_frame_frame_openai$_legacy_response$$$function__15_elapsed;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_legacy_response$$$function__15_elapsed);
assert(Py_REFCNT(frame_frame_openai$_legacy_response$$$function__15_elapsed) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_http_response);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_elapsed);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_legacy_response$$$function__15_elapsed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_legacy_response$$$function__15_elapsed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_legacy_response$$$function__15_elapsed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_legacy_response$$$function__15_elapsed,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$_legacy_response$$$function__15_elapsed == cache_frame_frame_openai$_legacy_response$$$function__15_elapsed) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_legacy_response$$$function__15_elapsed);
    cache_frame_frame_openai$_legacy_response$$$function__15_elapsed = NULL;
}

assertFrameObject(frame_frame_openai$_legacy_response$$$function__15_elapsed);

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


static PyObject *impl_openai$_legacy_response$$$function__16__parse(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_to = python_pars[1];
PyObject *var_cast_to = NULL;
PyObject *var_origin = NULL;
PyObject *var_stream_cls = NULL;
PyObject *var_response = NULL;
PyObject *var_content_type = NULL;
PyObject *var__ = NULL;
PyObject *var_data = NULL;
PyObject *var_exc = NULL;
nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_openai$_legacy_response$$$function__16__parse;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_legacy_response$$$function__16__parse = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_openai$_legacy_response$$$function__16__parse)) {
    Py_XDECREF(cache_frame_frame_openai$_legacy_response$$$function__16__parse);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_legacy_response$$$function__16__parse == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_legacy_response$$$function__16__parse = MAKE_FUNCTION_FRAME(tstate, code_objects_b5e1058365737334b14e4326fc6dd85e, module_openai$_legacy_response, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_legacy_response$$$function__16__parse->m_type_description == NULL);
frame_frame_openai$_legacy_response$$$function__16__parse = cache_frame_frame_openai$_legacy_response$$$function__16__parse;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_legacy_response$$$function__16__parse);
assert(Py_REFCNT(frame_frame_openai$_legacy_response$$$function__16__parse) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_to);
tmp_cmp_expr_left_1 = par_to;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_to);
tmp_assign_source_1 = par_to;
Py_INCREF(tmp_assign_source_1);
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__cast_to);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
assert(var_cast_to == NULL);
var_cast_to = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_1;
tmp_called_value_1 = module_var_accessor_openai$_legacy_response$is_type_alias_type(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_type_alias_type);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 201;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_cast_to);
tmp_args_element_value_1 = var_cast_to;
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 201;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 201;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_cast_to);
tmp_expression_value_2 = var_cast_to;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain___value__);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_cast_to;
    assert(old != NULL);
    var_cast_to = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_1:;
{
nuitka_bool tmp_condition_result_3;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_2;
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
int tmp_truth_name_3;
if (var_cast_to == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast_to);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 205;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_2 = CHECK_IF_TRUE(var_cast_to);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
tmp_called_value_2 = module_var_accessor_openai$_legacy_response$is_annotated_type(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_annotated_type);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 205;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (var_cast_to == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast_to);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 205;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_2 = var_cast_to;
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 205;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 205;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
tmp_condition_result_3 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_3 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_3 = module_var_accessor_openai$_legacy_response$extract_type_arg(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_extract_type_arg);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 206;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (var_cast_to == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast_to);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 206;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_3 = var_cast_to;
tmp_args_element_value_4 = const_int_0;
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 206;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_cast_to;
    var_cast_to = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
branch_no_2:;
{
PyObject *tmp_assign_source_4;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_value_4 = module_var_accessor_openai$_legacy_response$get_origin(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_origin);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 208;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (var_cast_to == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast_to);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 208;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_5 = var_cast_to;
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 208;
tmp_or_left_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_5);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 208;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(tmp_or_left_value_1);
Py_DECREF(tmp_or_left_value_1);
if (var_cast_to == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast_to);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 208;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_or_right_value_1 = var_cast_to;
Py_INCREF(tmp_or_right_value_1);
tmp_assign_source_4 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_assign_source_4 = tmp_or_left_value_1;
or_end_1:;
assert(var_origin == NULL);
var_origin = tmp_assign_source_4;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_expression_value_3;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_4;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__stream);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 210;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_5;
CHECK_OBJECT(par_to);
tmp_truth_name_5 = CHECK_IF_TRUE(par_to);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
bool tmp_condition_result_6;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_value_5 = module_var_accessor_openai$_legacy_response$is_stream_class_type(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_stream_class_type);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 212;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_to);
tmp_args_element_value_6 = par_to;
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 212;
tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_6);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_ccb2279665c962b05c8f0a5fe5910208;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_format_value_1 = module_var_accessor_openai$_legacy_response$Stream(tstate);
if (unlikely(tmp_format_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Stream);
}

if (tmp_format_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 213;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_9e8a5f5cfa9b1bd64faded3c0030d01e;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
tmp_format_value_2 = module_var_accessor_openai$_legacy_response$AsyncStream(tstate);
if (unlikely(tmp_format_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncStream);
}

if (tmp_format_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 213;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
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
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 213;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 213;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooo";
goto frame_exception_exit_1;
}
branch_no_5:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_called_value_7;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_called_value_8;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_expression_value_5;
tmp_called_value_6 = module_var_accessor_openai$_legacy_response$cast(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 215;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_7 = module_var_accessor_openai$_legacy_response$_T(tstate);
if (unlikely(tmp_args_element_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__T);
}

if (tmp_args_element_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 216;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_to);
tmp_called_value_7 = par_to;
tmp_called_value_8 = module_var_accessor_openai$_legacy_response$extract_stream_chunk_type(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_extract_stream_chunk_type);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 218;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_to);
tmp_tuple_element_2 = par_to;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_8d32f7670fe75d876f51ad2f33ade2af);
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 218;
tmp_kw_call_value_0_1 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_http_response);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 222;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_9 = module_var_accessor_openai$_legacy_response$cast(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);

exception_lineno = 223;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_9 = module_var_accessor_openai$_legacy_response$Any(tstate);
if (unlikely(tmp_args_element_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_args_element_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);

exception_lineno = 223;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__client);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);

exception_lineno = 223;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 223;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_kw_call_value_2_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
}

CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_kw_call_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);

exception_lineno = 223;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 217;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

    tmp_args_element_value_8 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_7, kw_values, mod_consts.const_tuple_str_plain_cast_to_str_plain_response_str_plain_client_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
CHECK_OBJECT(tmp_kw_call_value_2_1);
Py_DECREF(tmp_kw_call_value_2_1);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 215;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_4:;
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_expression_value_6;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_6;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__stream_cls);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 227;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_7;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_13;
PyObject *tmp_expression_value_8;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_expression_value_9;
PyObject *tmp_kw_call_value_2_2;
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_args_element_value_15;
PyObject *tmp_expression_value_10;
tmp_called_value_10 = module_var_accessor_openai$_legacy_response$cast(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 228;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_11 = module_var_accessor_openai$_legacy_response$R(tstate);
if (unlikely(tmp_args_element_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_R);
}

if (tmp_args_element_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 229;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__stream_cls);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_12 = module_var_accessor_openai$_legacy_response$extract_stream_chunk_type(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_extract_stream_chunk_type);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_11);

exception_lineno = 231;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__stream_cls);
if (tmp_args_element_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);

exception_lineno = 231;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 231;
tmp_kw_call_value_0_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_13);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_kw_call_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);

exception_lineno = 231;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_kw_call_value_1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_http_response);
if (tmp_kw_call_value_1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);
Py_DECREF(tmp_kw_call_value_0_2);

exception_lineno = 232;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_13 = module_var_accessor_openai$_legacy_response$cast(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_11);
Py_DECREF(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_1_2);

exception_lineno = 233;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_14 = module_var_accessor_openai$_legacy_response$Any(tstate);
if (unlikely(tmp_args_element_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_args_element_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_11);
Py_DECREF(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_1_2);

exception_lineno = 233;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_args_element_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain__client);
if (tmp_args_element_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);
Py_DECREF(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_1_2);

exception_lineno = 233;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 233;
{
    PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15};
    tmp_kw_call_value_2_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_13, call_args);
}

CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_kw_call_value_2_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);
Py_DECREF(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_1_2);

exception_lineno = 233;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 230;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2};

    tmp_args_element_value_12 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_11, kw_values, mod_consts.const_tuple_str_plain_cast_to_str_plain_response_str_plain_client_tuple);
}

CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_0_2);
CHECK_OBJECT(tmp_kw_call_value_1_2);
Py_DECREF(tmp_kw_call_value_1_2);
CHECK_OBJECT(tmp_kw_call_value_2_2);
Py_DECREF(tmp_kw_call_value_2_2);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 228;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
}

CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_6:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_16;
PyObject *tmp_args_element_value_17;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
tmp_called_value_14 = module_var_accessor_openai$_legacy_response$cast(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 237;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_16 = mod_consts.const_str_digest_9fdf0b6ea91f7fffbe0c1d0e7cf72b50;
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain__client);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain__default_stream_cls);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_args_element_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 237;
{
    PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17};
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_14, call_args);
}

CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_stream_cls == NULL);
var_stream_cls = tmp_assign_source_5;
}
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_stream_cls);
tmp_cmp_expr_left_2 = var_stream_cls;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_8 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_15;
tmp_called_value_15 = module_var_accessor_openai$_legacy_response$MissingStreamClassError(tstate);
if (unlikely(tmp_called_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MissingStreamClassError);
}

if (tmp_called_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 239;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 239;
tmp_raise_type_input_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_15);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 239;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooo";
goto frame_exception_exit_1;
}
branch_no_7:;
{
PyObject *tmp_called_value_16;
PyObject *tmp_args_element_value_18;
PyObject *tmp_args_element_value_19;
PyObject *tmp_called_value_17;
PyObject *tmp_kw_call_value_0_3;
PyObject *tmp_kw_call_value_1_3;
PyObject *tmp_expression_value_13;
PyObject *tmp_kw_call_value_2_3;
PyObject *tmp_called_value_18;
PyObject *tmp_args_element_value_20;
PyObject *tmp_args_element_value_21;
PyObject *tmp_expression_value_14;
tmp_called_value_16 = module_var_accessor_openai$_legacy_response$cast(tstate);
if (unlikely(tmp_called_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 241;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_18 = module_var_accessor_openai$_legacy_response$R(tstate);
if (unlikely(tmp_args_element_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_R);
}

if (tmp_args_element_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 242;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_stream_cls);
tmp_called_value_17 = var_stream_cls;
if (var_cast_to == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast_to);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 244;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_0_3 = var_cast_to;
CHECK_OBJECT(par_self);
tmp_expression_value_13 = par_self;
tmp_kw_call_value_1_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_http_response);
if (tmp_kw_call_value_1_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_18 = module_var_accessor_openai$_legacy_response$cast(tstate);
if (unlikely(tmp_called_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_value_1_3);

exception_lineno = 246;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_20 = module_var_accessor_openai$_legacy_response$Any(tstate);
if (unlikely(tmp_args_element_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_args_element_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_value_1_3);

exception_lineno = 246;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_14 = par_self;
tmp_args_element_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain__client);
if (tmp_args_element_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_1_3);

exception_lineno = 246;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 246;
{
    PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21};
    tmp_kw_call_value_2_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_18, call_args);
}

CHECK_OBJECT(tmp_args_element_value_21);
Py_DECREF(tmp_args_element_value_21);
if (tmp_kw_call_value_2_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_1_3);

exception_lineno = 246;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 243;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3, tmp_kw_call_value_2_3};

    tmp_args_element_value_19 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_17, kw_values, mod_consts.const_tuple_str_plain_cast_to_str_plain_response_str_plain_client_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_1_3);
Py_DECREF(tmp_kw_call_value_1_3);
CHECK_OBJECT(tmp_kw_call_value_2_3);
Py_DECREF(tmp_kw_call_value_2_3);
if (tmp_args_element_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 241;
{
    PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_16, call_args);
}

CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_3:;
{
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
if (var_cast_to == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast_to);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 250;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_3 = var_cast_to;
tmp_cmp_expr_right_3 = module_var_accessor_openai$_legacy_response$NoneType(tstate);
if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NoneType);
}

if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 250;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_called_value_19;
PyObject *tmp_args_element_value_22;
PyObject *tmp_args_element_value_23;
tmp_called_value_19 = module_var_accessor_openai$_legacy_response$cast(tstate);
if (unlikely(tmp_called_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 251;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_22 = module_var_accessor_openai$_legacy_response$R(tstate);
if (unlikely(tmp_args_element_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_R);
}

if (tmp_args_element_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 251;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_23 = Py_None;
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 251;
{
    PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_19, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_8:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(par_self);
tmp_expression_value_15 = par_self;
tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_http_response);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_response == NULL);
var_response = tmp_assign_source_6;
}
{
nuitka_bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
if (var_cast_to == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast_to);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 254;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_4 = var_cast_to;
tmp_cmp_expr_right_4 = (PyObject *)&PyUnicode_Type;
tmp_condition_result_10 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_called_value_20;
PyObject *tmp_args_element_value_24;
PyObject *tmp_args_element_value_25;
PyObject *tmp_expression_value_16;
tmp_called_value_20 = module_var_accessor_openai$_legacy_response$cast(tstate);
if (unlikely(tmp_called_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 255;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_24 = module_var_accessor_openai$_legacy_response$R(tstate);
if (unlikely(tmp_args_element_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_R);
}

if (tmp_args_element_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 255;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_response);
tmp_expression_value_16 = var_response;
tmp_args_element_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_text);
if (tmp_args_element_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 255;
{
    PyObject *call_args[] = {tmp_args_element_value_24, tmp_args_element_value_25};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_20, call_args);
}

CHECK_OBJECT(tmp_args_element_value_25);
Py_DECREF(tmp_args_element_value_25);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_9:;
{
nuitka_bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
if (var_cast_to == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast_to);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 257;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_5 = var_cast_to;
tmp_cmp_expr_right_5 = (PyObject *)&PyLong_Type;
tmp_condition_result_11 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_called_value_21;
PyObject *tmp_args_element_value_26;
PyObject *tmp_args_element_value_27;
PyObject *tmp_int_arg_1;
PyObject *tmp_expression_value_17;
tmp_called_value_21 = module_var_accessor_openai$_legacy_response$cast(tstate);
if (unlikely(tmp_called_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 258;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_26 = module_var_accessor_openai$_legacy_response$R(tstate);
if (unlikely(tmp_args_element_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_R);
}

if (tmp_args_element_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 258;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_response);
tmp_expression_value_17 = var_response;
tmp_int_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_text);
if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_27 = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_args_element_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 258;
{
    PyObject *call_args[] = {tmp_args_element_value_26, tmp_args_element_value_27};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_21, call_args);
}

CHECK_OBJECT(tmp_args_element_value_27);
Py_DECREF(tmp_args_element_value_27);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_10:;
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
if (var_cast_to == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast_to);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 260;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_6 = var_cast_to;
tmp_cmp_expr_right_6 = (PyObject *)&PyFloat_Type;
tmp_condition_result_12 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_called_value_22;
PyObject *tmp_args_element_value_28;
PyObject *tmp_args_element_value_29;
PyObject *tmp_float_arg_1;
PyObject *tmp_expression_value_18;
tmp_called_value_22 = module_var_accessor_openai$_legacy_response$cast(tstate);
if (unlikely(tmp_called_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 261;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_28 = module_var_accessor_openai$_legacy_response$R(tstate);
if (unlikely(tmp_args_element_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_R);
}

if (tmp_args_element_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 261;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_response);
tmp_expression_value_18 = var_response;
tmp_float_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_text);
if (tmp_float_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_29 = TO_FLOAT(tmp_float_arg_1);
CHECK_OBJECT(tmp_float_arg_1);
Py_DECREF(tmp_float_arg_1);
if (tmp_args_element_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 261;
{
    PyObject *call_args[] = {tmp_args_element_value_28, tmp_args_element_value_29};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_22, call_args);
}

CHECK_OBJECT(tmp_args_element_value_29);
Py_DECREF(tmp_args_element_value_29);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_11:;
{
nuitka_bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
if (var_cast_to == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast_to);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 263;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_7 = var_cast_to;
tmp_cmp_expr_right_7 = (PyObject *)&PyBool_Type;
tmp_condition_result_13 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_called_value_23;
PyObject *tmp_args_element_value_30;
PyObject *tmp_args_element_value_31;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_called_value_24;
PyObject *tmp_expression_value_19;
PyObject *tmp_expression_value_20;
tmp_called_value_23 = module_var_accessor_openai$_legacy_response$cast(tstate);
if (unlikely(tmp_called_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 264;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_30 = module_var_accessor_openai$_legacy_response$R(tstate);
if (unlikely(tmp_args_element_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_R);
}

if (tmp_args_element_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 264;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_response);
tmp_expression_value_20 = var_response;
tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_text);
if (tmp_expression_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, const_str_plain_lower);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
if (tmp_called_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 264;
tmp_cmp_expr_left_8 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_24);
CHECK_OBJECT(tmp_called_value_24);
Py_DECREF(tmp_called_value_24);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_8 = mod_consts.const_str_plain_true;
tmp_args_element_value_31 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
if (tmp_args_element_value_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 264;
{
    PyObject *call_args[] = {tmp_args_element_value_30, tmp_args_element_value_31};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_23, call_args);
}

CHECK_OBJECT(tmp_args_element_value_31);
Py_DECREF(tmp_args_element_value_31);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_12:;
{
nuitka_bool tmp_condition_result_14;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_32;
int tmp_truth_name_7;
PyObject *tmp_issubclass_cls_1;
PyObject *tmp_issubclass_classes_1;
tmp_called_instance_1 = module_var_accessor_openai$_legacy_response$inspect(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 266;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_origin);
tmp_args_element_value_32 = var_origin;
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 266;
tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_isclass, tmp_args_element_value_32);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_7 = CHECK_IF_TRUE(tmp_call_result_3);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_3);

exception_lineno = 266;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(var_origin);
tmp_issubclass_cls_1 = var_origin;
tmp_issubclass_classes_1 = module_var_accessor_openai$_legacy_response$HttpxBinaryResponseContent(tstate);
if (unlikely(tmp_issubclass_classes_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HttpxBinaryResponseContent);
}

if (tmp_issubclass_classes_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 266;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_1, tmp_issubclass_classes_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_14 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_14 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_called_value_25;
PyObject *tmp_args_element_value_33;
PyObject *tmp_args_element_value_34;
PyObject *tmp_called_value_26;
PyObject *tmp_args_element_value_35;
tmp_called_value_25 = module_var_accessor_openai$_legacy_response$cast(tstate);
if (unlikely(tmp_called_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 267;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_33 = module_var_accessor_openai$_legacy_response$R(tstate);
if (unlikely(tmp_args_element_value_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_R);
}

if (tmp_args_element_value_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 267;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (var_cast_to == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast_to);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 267;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_26 = var_cast_to;
CHECK_OBJECT(var_response);
tmp_args_element_value_35 = var_response;
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 267;
tmp_args_element_value_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_35);
if (tmp_args_element_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 267;
{
    PyObject *call_args[] = {tmp_args_element_value_33, tmp_args_element_value_34};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_25, call_args);
}

CHECK_OBJECT(tmp_args_element_value_34);
Py_DECREF(tmp_args_element_value_34);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_13:;
{
nuitka_bool tmp_condition_result_15;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(var_origin);
tmp_cmp_expr_left_9 = var_origin;
tmp_cmp_expr_right_9 = module_var_accessor_openai$_legacy_response$LegacyAPIResponse(tstate);
if (unlikely(tmp_cmp_expr_right_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LegacyAPIResponse);
}

if (tmp_cmp_expr_right_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 269;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_15 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
if (tmp_condition_result_15 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_21f052c60176cdcbc87ff2af58fa0efd;
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 270;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 270;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooo";
goto frame_exception_exit_1;
}
branch_no_14:;
{
nuitka_bool tmp_condition_result_16;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_36;
int tmp_truth_name_8;
PyObject *tmp_issubclass_cls_2;
PyObject *tmp_issubclass_classes_2;
PyObject *tmp_expression_value_21;
tmp_called_instance_2 = module_var_accessor_openai$_legacy_response$inspect(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 272;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_origin);
tmp_args_element_value_36 = var_origin;
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 272;
tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_isclass, tmp_args_element_value_36);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_8 = CHECK_IF_TRUE(tmp_call_result_4);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_4);

exception_lineno = 272;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_3 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(var_origin);
tmp_issubclass_cls_2 = var_origin;
tmp_expression_value_21 = module_var_accessor_openai$_legacy_response$httpx(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_httpx);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 274;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_issubclass_classes_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_Response);
if (tmp_issubclass_classes_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_2, tmp_issubclass_classes_2);
CHECK_OBJECT(tmp_issubclass_classes_2);
Py_DECREF(tmp_issubclass_classes_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_16 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_condition_result_16 = tmp_and_left_value_3;
and_end_3:;
if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
{
nuitka_bool tmp_condition_result_17;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
PyObject *tmp_expression_value_22;
if (var_cast_to == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast_to);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 280;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_10 = var_cast_to;
tmp_expression_value_22 = module_var_accessor_openai$_legacy_response$httpx(tstate);
if (unlikely(tmp_expression_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_httpx);
}

if (tmp_expression_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 280;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_Response);
if (tmp_cmp_expr_right_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_17 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
CHECK_OBJECT(tmp_cmp_expr_right_10);
Py_DECREF(tmp_cmp_expr_right_10);
if (tmp_condition_result_17 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_make_exception_arg_3;
tmp_make_exception_arg_3 = mod_consts.const_str_digest_397c6d27e9b8a03cdb40a716af7338db;
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 281;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_3);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 281;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooo";
goto frame_exception_exit_1;
}
branch_no_16:;
{
PyObject *tmp_called_value_27;
PyObject *tmp_args_element_value_37;
PyObject *tmp_args_element_value_38;
tmp_called_value_27 = module_var_accessor_openai$_legacy_response$cast(tstate);
if (unlikely(tmp_called_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 282;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_37 = module_var_accessor_openai$_legacy_response$R(tstate);
if (unlikely(tmp_args_element_value_37 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_R);
}

if (tmp_args_element_value_37 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 282;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_response);
tmp_args_element_value_38 = var_response;
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 282;
{
    PyObject *call_args[] = {tmp_args_element_value_37, tmp_args_element_value_38};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_27, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_15:;
{
nuitka_bool tmp_condition_result_18;
int tmp_and_left_truth_4;
nuitka_bool tmp_and_left_value_4;
nuitka_bool tmp_and_right_value_4;
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_39;
int tmp_truth_name_9;
int tmp_and_left_truth_5;
nuitka_bool tmp_and_left_value_5;
nuitka_bool tmp_and_right_value_5;
PyObject *tmp_operand_value_2;
PyObject *tmp_issubclass_cls_3;
PyObject *tmp_issubclass_classes_3;
PyObject *tmp_issubclass_cls_4;
PyObject *tmp_issubclass_classes_4;
tmp_called_instance_3 = module_var_accessor_openai$_legacy_response$inspect(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 285;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_origin);
tmp_args_element_value_39 = var_origin;
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 285;
tmp_call_result_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_isclass, tmp_args_element_value_39);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_9 = CHECK_IF_TRUE(tmp_call_result_5);
if (tmp_truth_name_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_5);

exception_lineno = 285;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_4 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_4 == 1) {
    goto and_right_4;
} else {
    goto and_left_4;
}
and_right_4:;
CHECK_OBJECT(var_origin);
tmp_issubclass_cls_3 = var_origin;
tmp_issubclass_classes_3 = module_var_accessor_openai$_legacy_response$BaseModel(tstate);
if (unlikely(tmp_issubclass_classes_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_issubclass_classes_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 288;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_3, tmp_issubclass_classes_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_5 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_5 = tmp_and_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_5 == 1) {
    goto and_right_5;
} else {
    goto and_left_5;
}
and_right_5:;
CHECK_OBJECT(var_origin);
tmp_issubclass_cls_4 = var_origin;
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 289;
{
    PyObject *hard_module = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_bfe4d764d81ba66d1179fc365f01bcb0, mod_consts.const_str_digest_bfe4d764d81ba66d1179fc365f01bcb0);
    if (likely(hard_module != NULL)) {
        tmp_issubclass_classes_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_BaseModel);

        Py_DECREF(hard_module);

    } else {
        tmp_issubclass_classes_4 = NULL;
    }
}
if (tmp_issubclass_classes_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_4, tmp_issubclass_classes_4);
CHECK_OBJECT(tmp_issubclass_classes_4);
Py_DECREF(tmp_issubclass_classes_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_right_value_4 = tmp_and_right_value_5;
goto and_end_5;
and_left_5:;
tmp_and_right_value_4 = tmp_and_left_value_5;
and_end_5:;
tmp_condition_result_18 = tmp_and_right_value_4;
goto and_end_4;
and_left_4:;
tmp_condition_result_18 = tmp_and_left_value_4;
and_end_4:;
if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
    goto branch_yes_17;
} else {
    goto branch_no_17;
}
}
branch_yes_17:;
{
PyObject *tmp_raise_type_5;
PyObject *tmp_make_exception_arg_4;
tmp_make_exception_arg_4 = mod_consts.const_str_digest_818ba1cb071c659297e389c71993f8e0;
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 291;
tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 291;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooo";
goto frame_exception_exit_1;
}
branch_no_17:;
{
bool tmp_condition_result_19;
int tmp_and_left_truth_6;
bool tmp_and_left_value_6;
bool tmp_and_right_value_6;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
int tmp_and_left_truth_7;
bool tmp_and_left_value_7;
bool tmp_and_right_value_7;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
int tmp_and_left_truth_8;
bool tmp_and_left_value_8;
bool tmp_and_right_value_8;
PyObject *tmp_cmp_expr_left_13;
PyObject *tmp_cmp_expr_right_13;
int tmp_and_left_truth_9;
bool tmp_and_left_value_9;
bool tmp_and_right_value_9;
PyObject *tmp_cmp_expr_left_14;
PyObject *tmp_cmp_expr_right_14;
PyObject *tmp_operand_value_3;
PyObject *tmp_issubclass_cls_5;
PyObject *tmp_issubclass_classes_5;
if (var_cast_to == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast_to);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 294;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_11 = var_cast_to;
tmp_cmp_expr_right_11 = (PyObject *)&PyBaseObject_Type;
tmp_and_left_value_6 = (tmp_cmp_expr_left_11 != tmp_cmp_expr_right_11) ? true : false;
tmp_and_left_truth_6 = tmp_and_left_value_6 != false ? 1 : 0;
if (tmp_and_left_truth_6 == 1) {
    goto and_right_6;
} else {
    goto and_left_6;
}
and_right_6:;
CHECK_OBJECT(var_origin);
tmp_cmp_expr_left_12 = var_origin;
tmp_cmp_expr_right_12 = (PyObject *)&PyList_Type;
tmp_and_left_value_7 = (tmp_cmp_expr_left_12 != tmp_cmp_expr_right_12) ? true : false;
tmp_and_left_truth_7 = tmp_and_left_value_7 != false ? 1 : 0;
if (tmp_and_left_truth_7 == 1) {
    goto and_right_7;
} else {
    goto and_left_7;
}
and_right_7:;
CHECK_OBJECT(var_origin);
tmp_cmp_expr_left_13 = var_origin;
tmp_cmp_expr_right_13 = (PyObject *)&PyDict_Type;
tmp_and_left_value_8 = (tmp_cmp_expr_left_13 != tmp_cmp_expr_right_13) ? true : false;
tmp_and_left_truth_8 = tmp_and_left_value_8 != false ? 1 : 0;
if (tmp_and_left_truth_8 == 1) {
    goto and_right_8;
} else {
    goto and_left_8;
}
and_right_8:;
CHECK_OBJECT(var_origin);
tmp_cmp_expr_left_14 = var_origin;
tmp_cmp_expr_right_14 = module_var_accessor_openai$_legacy_response$Union(tstate);
if (unlikely(tmp_cmp_expr_right_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_cmp_expr_right_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 297;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_9 = (tmp_cmp_expr_left_14 != tmp_cmp_expr_right_14) ? true : false;
tmp_and_left_truth_9 = tmp_and_left_value_9 != false ? 1 : 0;
if (tmp_and_left_truth_9 == 1) {
    goto and_right_9;
} else {
    goto and_left_9;
}
and_right_9:;
CHECK_OBJECT(var_origin);
tmp_issubclass_cls_5 = var_origin;
tmp_issubclass_classes_5 = module_var_accessor_openai$_legacy_response$BaseModel(tstate);
if (unlikely(tmp_issubclass_classes_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_issubclass_classes_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 298;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_5, tmp_issubclass_classes_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_9 = (tmp_res == 0) ? true : false;
tmp_and_right_value_8 = tmp_and_right_value_9;
goto and_end_9;
and_left_9:;
tmp_and_right_value_8 = tmp_and_left_value_9;
and_end_9:;
tmp_and_right_value_7 = tmp_and_right_value_8;
goto and_end_8;
and_left_8:;
tmp_and_right_value_7 = tmp_and_left_value_8;
and_end_8:;
tmp_and_right_value_6 = tmp_and_right_value_7;
goto and_end_7;
and_left_7:;
tmp_and_right_value_6 = tmp_and_left_value_7;
and_end_7:;
tmp_condition_result_19 = tmp_and_right_value_6;
goto and_end_6;
and_left_6:;
tmp_condition_result_19 = tmp_and_left_value_6;
and_end_6:;
if (tmp_condition_result_19 != false) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
{
PyObject *tmp_raise_type_6;
PyObject *tmp_make_exception_arg_5;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = mod_consts.const_str_digest_3ca6fbd40a33cb087e163512a8ad578d;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 17);
{
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
PyObject *tmp_format_value_4;
PyObject *tmp_format_spec_4;
PyObject *tmp_format_value_5;
PyObject *tmp_format_spec_5;
PyObject *tmp_format_value_6;
PyObject *tmp_format_spec_6;
PyObject *tmp_format_value_7;
PyObject *tmp_format_spec_7;
PyObject *tmp_format_value_8;
PyObject *tmp_format_spec_8;
PyObject *tmp_format_value_9;
PyObject *tmp_format_spec_9;
PyObject *tmp_format_value_10;
PyObject *tmp_expression_value_23;
PyObject *tmp_format_spec_10;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_3);
if (var_cast_to == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast_to);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 301;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_2;
}

tmp_format_value_3 = var_cast_to;
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_0d9339f3b718745dfb03d69bcae8ad25;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_3);
tmp_format_value_4 = module_var_accessor_openai$_legacy_response$BaseModel(tstate);
if (unlikely(tmp_format_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_format_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 301;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_2;
}
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 3, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 4, tmp_tuple_element_3);
tmp_format_value_5 = (PyObject *)&PyDict_Type;
tmp_format_spec_5 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 5, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 6, tmp_tuple_element_3);
tmp_format_value_6 = (PyObject *)&PyList_Type;
tmp_format_spec_6 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_6, tmp_format_spec_6);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 7, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 8, tmp_tuple_element_3);
tmp_format_value_7 = module_var_accessor_openai$_legacy_response$Union(tstate);
if (unlikely(tmp_format_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_format_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 301;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_2;
}
tmp_format_spec_7 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_7, tmp_format_spec_7);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 9, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 10, tmp_tuple_element_3);
tmp_format_value_8 = module_var_accessor_openai$_legacy_response$NoneType(tstate);
if (unlikely(tmp_format_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NoneType);
}

if (tmp_format_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 301;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_2;
}
tmp_format_spec_8 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_8, tmp_format_spec_8);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 11, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 12, tmp_tuple_element_3);
tmp_format_value_9 = (PyObject *)&PyUnicode_Type;
tmp_format_spec_9 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_9, tmp_format_spec_9);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 13, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_9e8a5f5cfa9b1bd64faded3c0030d01e;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 14, tmp_tuple_element_3);
tmp_expression_value_23 = module_var_accessor_openai$_legacy_response$httpx(tstate);
if (unlikely(tmp_expression_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_httpx);
}

if (tmp_expression_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 301;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_2;
}
tmp_format_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_Response);
if (tmp_format_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_2;
}
tmp_format_spec_10 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_10, tmp_format_spec_10);
CHECK_OBJECT(tmp_format_value_10);
Py_DECREF(tmp_format_value_10);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 15, tmp_tuple_element_3);
tmp_tuple_element_3 = const_str_dot;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 16, tmp_tuple_element_3);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_5 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_make_exception_arg_5 == NULL));
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 300;
tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_5);
CHECK_OBJECT(tmp_make_exception_arg_5);
Py_DECREF(tmp_make_exception_arg_5);
assert(!(tmp_raise_type_6 == NULL));
exception_state.exception_value = tmp_raise_type_6;
exception_lineno = 300;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooo";
goto frame_exception_exit_1;
}
branch_no_18:;
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_28;
PyObject *tmp_expression_value_24;
PyObject *tmp_called_value_29;
PyObject *tmp_expression_value_25;
PyObject *tmp_expression_value_26;
CHECK_OBJECT(var_response);
tmp_expression_value_26 = var_response;
tmp_expression_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_headers);
if (tmp_expression_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_25);
Py_DECREF(tmp_expression_value_25);
if (tmp_called_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 306;
tmp_expression_value_24 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_29, mod_consts.const_tuple_str_digest_d1c9bee04bd0a9c88e6c11d7c3b4ffd8_str_chr_42_tuple);

CHECK_OBJECT(tmp_called_value_29);
Py_DECREF(tmp_called_value_29);
if (tmp_expression_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, const_str_plain_split);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_called_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 306;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_28, mod_consts.const_tuple_str_chr_59_tuple);

CHECK_OBJECT(tmp_called_value_28);
Py_DECREF(tmp_called_value_28);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_7 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;
}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_8 = UNPACK_NEXT_STARRED(tstate, &exception_state, tmp_unpack_1, 0, 1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 306;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_list_arg_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_list_arg_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_9 = MAKE_LIST(tstate, tmp_list_arg_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
}
{
bool tmp_condition_result_20;
PyObject *tmp_cmp_expr_left_15;
nuitka_digit tmp_cmp_expr_right_15;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_len_arg_1 = tmp_tuple_unpack_1__element_2;
tmp_cmp_expr_left_15 = BUILTIN_LEN(tstate, tmp_len_arg_1);
assert(!(tmp_cmp_expr_left_15 == NULL));
tmp_cmp_expr_right_15 = 0;
tmp_condition_result_20 = RICH_COMPARE_LT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
CHECK_OBJECT(tmp_cmp_expr_left_15);
Py_DECREF(tmp_cmp_expr_left_15);
if (tmp_condition_result_20 != false) {
    goto branch_yes_19;
} else {
    goto branch_no_19;
}
}
branch_yes_19:;
{
PyObject *tmp_raise_type_7;
PyObject *tmp_make_exception_arg_6;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_add_expr_left_1;
nuitka_digit tmp_add_expr_right_1;
PyObject *tmp_len_arg_2;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_24746f585ec81069525114d28b7a36fd;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_len_arg_2 = tmp_tuple_unpack_1__element_2;
tmp_add_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_2);
assert(!(tmp_add_expr_left_1 == NULL));
tmp_add_expr_right_1 = 1;
tmp_mod_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
assert(!(tmp_mod_expr_right_1 == NULL));
tmp_make_exception_arg_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_LONG(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 306;
tmp_raise_type_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_6);
CHECK_OBJECT(tmp_make_exception_arg_6);
Py_DECREF(tmp_make_exception_arg_6);
assert(!(tmp_raise_type_7 == NULL));
exception_state.exception_value = tmp_raise_type_7;
exception_lineno = 306;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooo";
goto try_except_handler_3;
}
branch_no_19:;
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
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_10 = tmp_tuple_unpack_1__element_1;
assert(var_content_type == NULL);
Py_INCREF(tmp_assign_source_10);
var_content_type = tmp_assign_source_10;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;
assert(var__ == NULL);
Py_INCREF(tmp_assign_source_11);
var__ = tmp_assign_source_11;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
bool tmp_condition_result_21;
PyObject *tmp_operand_value_4;
PyObject *tmp_called_value_30;
PyObject *tmp_expression_value_27;
CHECK_OBJECT(var_content_type);
tmp_expression_value_27 = var_content_type;
tmp_called_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_endswith);
if (tmp_called_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 307;
tmp_operand_value_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_30, mod_consts.const_tuple_str_plain_json_tuple);

CHECK_OBJECT(tmp_called_value_30);
Py_DECREF(tmp_called_value_30);
if (tmp_operand_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
CHECK_OBJECT(tmp_operand_value_4);
Py_DECREF(tmp_operand_value_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_21 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_21 != false) {
    goto branch_yes_20;
} else {
    goto branch_no_20;
}
}
branch_yes_20:;
{
nuitka_bool tmp_condition_result_22;
PyObject *tmp_called_value_31;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_40;
int tmp_truth_name_10;
tmp_called_value_31 = module_var_accessor_openai$_legacy_response$is_basemodel(tstate);
if (unlikely(tmp_called_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_basemodel);
}

if (tmp_called_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 308;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (var_cast_to == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast_to);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 308;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_40 = var_cast_to;
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 308;
tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_31, tmp_args_element_value_40);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_10 = CHECK_IF_TRUE(tmp_call_result_6);
if (tmp_truth_name_10 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_6);

exception_lineno = 308;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_22 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
    goto branch_yes_21;
} else {
    goto branch_no_21;
}
}
branch_yes_21:;
{
nuitka_bool tmp_assign_source_12;
tmp_assign_source_12 = NUITKA_BOOL_TRUE;
tmp_try_except_1__unhandled_indicator = tmp_assign_source_12;
}
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_instance_4;
CHECK_OBJECT(var_response);
tmp_called_instance_4 = var_response;
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 310;
tmp_assign_source_13 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_json);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
assert(var_data == NULL);
var_data = tmp_assign_source_13;
}
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
nuitka_bool tmp_assign_source_14;
tmp_assign_source_14 = NUITKA_BOOL_FALSE;
tmp_try_except_1__unhandled_indicator = tmp_assign_source_14;
}
// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_legacy_response$$$function__16__parse, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_legacy_response$$$function__16__parse, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_23;
PyObject *tmp_cmp_expr_left_16;
PyObject *tmp_cmp_expr_right_16;
tmp_cmp_expr_left_16 = EXC_TYPE(tstate);
tmp_cmp_expr_right_16 = PyExc_Exception;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
assert(!(tmp_res == -1));
tmp_condition_result_23 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_23 != false) {
    goto branch_yes_22;
} else {
    goto branch_no_22;
}
}
branch_yes_22:;
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_15); 
assert(var_exc == NULL);
Py_INCREF(tmp_assign_source_15);
var_exc = tmp_assign_source_15;
}
// Tried code:
{
PyObject *tmp_called_instance_5;
PyObject *tmp_call_result_7;
PyObject *tmp_args_element_value_41;
PyObject *tmp_args_element_value_42;
PyObject *tmp_type_arg_1;
PyObject *tmp_args_element_value_43;
tmp_called_instance_5 = module_var_accessor_openai$_legacy_response$log(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_log);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 312;
type_description_1 = "oooooooooo";
    goto try_except_handler_6;
}
tmp_args_element_value_41 = mod_consts.const_str_digest_bda98ec74330d6904c815f1f1072c0d1;
CHECK_OBJECT(var_exc);
tmp_type_arg_1 = var_exc;
tmp_args_element_value_42 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_args_element_value_42 == NULL));
CHECK_OBJECT(var_exc);
tmp_args_element_value_43 = var_exc;
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 312;
{
    PyObject *call_args[] = {tmp_args_element_value_41, tmp_args_element_value_42, tmp_args_element_value_43};
    tmp_call_result_7 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_5,
        mod_consts.const_str_plain_debug,
        call_args
    );
}

CHECK_OBJECT(tmp_args_element_value_42);
Py_DECREF(tmp_args_element_value_42);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "oooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_exc);
var_exc = NULL;

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
try_end_4:;
Py_XDECREF(var_exc);
var_exc = NULL;

goto branch_end_22;
branch_no_22:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 309;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_openai$_legacy_response$$$function__16__parse->m_frame)) {
        frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooo";
goto try_except_handler_5;
branch_end_22:;
goto try_end_5;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_3;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_3:;
{
bool tmp_condition_result_24;
nuitka_bool tmp_cmp_expr_left_17;
nuitka_bool tmp_cmp_expr_right_17;
assert(tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_17 = tmp_try_except_1__unhandled_indicator;
tmp_cmp_expr_right_17 = NUITKA_BOOL_TRUE;
tmp_condition_result_24 = (tmp_cmp_expr_left_17 == tmp_cmp_expr_right_17) ? true : false;
if (tmp_condition_result_24 != false) {
    goto branch_yes_23;
} else {
    goto branch_no_23;
}
}
branch_yes_23:;
{
PyObject *tmp_called_value_32;
PyObject *tmp_expression_value_28;
PyObject *tmp_expression_value_29;
PyObject *tmp_kw_call_value_0_4;
PyObject *tmp_kw_call_value_1_4;
PyObject *tmp_kw_call_value_2_4;
CHECK_OBJECT(par_self);
tmp_expression_value_29 = par_self;
tmp_expression_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain__client);
if (tmp_expression_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain__process_response_data);
CHECK_OBJECT(tmp_expression_value_28);
Py_DECREF(tmp_expression_value_28);
if (tmp_called_value_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (var_data == NULL) {
Py_DECREF(tmp_called_value_32);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 315;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_0_4 = var_data;
if (var_cast_to == NULL) {
Py_DECREF(tmp_called_value_32);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast_to);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 316;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_1_4 = var_cast_to;
CHECK_OBJECT(var_response);
tmp_kw_call_value_2_4 = var_response;
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 314;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_4, tmp_kw_call_value_2_4};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_32, kw_values, mod_consts.const_tuple_str_plain_data_str_plain_cast_to_str_plain_response_tuple);
}

CHECK_OBJECT(tmp_called_value_32);
Py_DECREF(tmp_called_value_32);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_23:;
branch_no_21:;
{
nuitka_bool tmp_condition_result_25;
PyObject *tmp_expression_value_30;
PyObject *tmp_expression_value_31;
PyObject *tmp_attribute_value_3;
int tmp_truth_name_11;
CHECK_OBJECT(par_self);
tmp_expression_value_31 = par_self;
tmp_expression_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain__client);
if (tmp_expression_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain__strict_response_validation);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
if (tmp_attribute_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_11 = CHECK_IF_TRUE(tmp_attribute_value_3);
if (tmp_truth_name_11 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_3);

exception_lineno = 320;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_25 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_3);
Py_DECREF(tmp_attribute_value_3);
if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
    goto branch_yes_24;
} else {
    goto branch_no_24;
}
}
branch_yes_24:;
{
PyObject *tmp_raise_type_8;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_33;
PyObject *tmp_kw_call_value_0_5;
PyObject *tmp_kw_call_value_1_5;
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kw_call_value_2_5;
PyObject *tmp_expression_value_32;
tmp_called_value_33 = module_var_accessor_openai$_legacy_response$APIResponseValidationError(tstate);
if (unlikely(tmp_called_value_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_APIResponseValidationError);
}

if (tmp_called_value_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 321;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_response);
tmp_kw_call_value_0_5 = var_response;
tmp_tuple_element_4 = mod_consts.const_str_digest_20d48a27cea801c4fd3de44f324dc4de;
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_11;
PyObject *tmp_format_spec_11;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_4);
CHECK_OBJECT(var_content_type);
tmp_format_value_11 = var_content_type;
tmp_format_spec_11 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_11, tmp_format_spec_11);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = mod_consts.const_str_digest_ff83716bae5dd22226a4a98d62d81b7c;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_4);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_string_concat_values_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_kw_call_value_1_5 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_kw_call_value_1_5 == NULL));
CHECK_OBJECT(var_response);
tmp_expression_value_32 = var_response;
tmp_kw_call_value_2_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_text);
if (tmp_kw_call_value_2_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_1_5);

exception_lineno = 324;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 321;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_5, tmp_kw_call_value_1_5, tmp_kw_call_value_2_5};

    tmp_raise_type_input_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_33, kw_values, mod_consts.const_tuple_str_plain_response_str_plain_message_str_plain_body_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_1_5);
Py_DECREF(tmp_kw_call_value_1_5);
CHECK_OBJECT(tmp_kw_call_value_2_5);
Py_DECREF(tmp_kw_call_value_2_5);
if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_8 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_8;
exception_lineno = 321;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooo";
goto frame_exception_exit_1;
}
branch_no_24:;
{
PyObject *tmp_expression_value_33;
CHECK_OBJECT(var_response);
tmp_expression_value_33 = var_response;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_text);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_20:;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_instance_6;
CHECK_OBJECT(var_response);
tmp_called_instance_6 = var_response;
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 332;
tmp_assign_source_16 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts.const_str_plain_json);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_data == NULL);
var_data = tmp_assign_source_16;
}
{
PyObject *tmp_called_value_34;
PyObject *tmp_expression_value_34;
PyObject *tmp_expression_value_35;
PyObject *tmp_kw_call_value_0_6;
PyObject *tmp_kw_call_value_1_6;
PyObject *tmp_kw_call_value_2_6;
CHECK_OBJECT(par_self);
tmp_expression_value_35 = par_self;
tmp_expression_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain__client);
if (tmp_expression_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain__process_response_data);
CHECK_OBJECT(tmp_expression_value_34);
Py_DECREF(tmp_expression_value_34);
if (tmp_called_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_data);
tmp_kw_call_value_0_6 = var_data;
if (var_cast_to == NULL) {
Py_DECREF(tmp_called_value_34);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast_to);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 336;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_1_6 = var_cast_to;
CHECK_OBJECT(var_response);
tmp_kw_call_value_2_6 = var_response;
frame_frame_openai$_legacy_response$$$function__16__parse->m_frame.f_lineno = 334;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_6, tmp_kw_call_value_1_6, tmp_kw_call_value_2_6};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_34, kw_values, mod_consts.const_tuple_str_plain_data_str_plain_cast_to_str_plain_response_tuple);
}

CHECK_OBJECT(tmp_called_value_34);
Py_DECREF(tmp_called_value_34);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_legacy_response$$$function__16__parse, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_legacy_response$$$function__16__parse->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_legacy_response$$$function__16__parse, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_legacy_response$$$function__16__parse,
    type_description_1,
    par_self,
    par_to,
    var_cast_to,
    var_origin,
    var_stream_cls,
    var_response,
    var_content_type,
    var__,
    var_data,
    var_exc
);


// Release cached frame if used for exception.
if (frame_frame_openai$_legacy_response$$$function__16__parse == cache_frame_frame_openai$_legacy_response$$$function__16__parse) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_legacy_response$$$function__16__parse);
    cache_frame_frame_openai$_legacy_response$$$function__16__parse = NULL;
}

assertFrameObject(frame_frame_openai$_legacy_response$$$function__16__parse);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_cast_to);
var_cast_to = NULL;
CHECK_OBJECT(var_origin);
CHECK_OBJECT(var_origin);
Py_DECREF(var_origin);
var_origin = NULL;
Py_XDECREF(var_stream_cls);
var_stream_cls = NULL;
Py_XDECREF(var_response);
var_response = NULL;
Py_XDECREF(var_content_type);
var_content_type = NULL;
Py_XDECREF(var__);
var__ = NULL;
Py_XDECREF(var_data);
var_data = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_cast_to);
var_cast_to = NULL;
Py_XDECREF(var_origin);
var_origin = NULL;
Py_XDECREF(var_stream_cls);
var_stream_cls = NULL;
Py_XDECREF(var_response);
var_response = NULL;
Py_XDECREF(var_content_type);
var_content_type = NULL;
Py_XDECREF(var__);
var__ = NULL;
Py_XDECREF(var_data);
var_data = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_to);
Py_DECREF(par_to);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_to);
Py_DECREF(par_to);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$_legacy_response$$$function__17___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$_legacy_response$$$function__17___repr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_legacy_response$$$function__17___repr__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_legacy_response$$$function__17___repr__)) {
    Py_XDECREF(cache_frame_frame_openai$_legacy_response$$$function__17___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_legacy_response$$$function__17___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_legacy_response$$$function__17___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_1e5d1d36b69abfcfcd358e63e98c8f37, module_openai$_legacy_response, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_legacy_response$$$function__17___repr__->m_type_description == NULL);
frame_frame_openai$_legacy_response$$$function__17___repr__ = cache_frame_frame_openai$_legacy_response$$$function__17___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_legacy_response$$$function__17___repr__);
assert(Py_REFCNT(frame_frame_openai$_legacy_response$$$function__17___repr__) == 2);

// Framed code:
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_095e3a84ee36799809dc09a87cd529fa;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 7);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_format_spec_2;
PyObject *tmp_format_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_status_code);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_space;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_http_response);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_reason_phrase);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_f36f62be05587d4977c37fd528da5bc1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__cast_to);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_62;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 6, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_return_value == NULL));
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_legacy_response$$$function__17___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_legacy_response$$$function__17___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_legacy_response$$$function__17___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_legacy_response$$$function__17___repr__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$_legacy_response$$$function__17___repr__ == cache_frame_frame_openai$_legacy_response$$$function__17___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_legacy_response$$$function__17___repr__);
    cache_frame_frame_openai$_legacy_response$$$function__17___repr__ = NULL;
}

assertFrameObject(frame_frame_openai$_legacy_response$$$function__17___repr__);

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


static PyObject *impl_openai$_legacy_response$$$function__18___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$_legacy_response$$$function__18___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_legacy_response$$$function__18___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_legacy_response$$$function__18___init__)) {
    Py_XDECREF(cache_frame_frame_openai$_legacy_response$$$function__18___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_legacy_response$$$function__18___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_legacy_response$$$function__18___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_cd86da0aba694d924f961faa5cc15584, module_openai$_legacy_response, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_legacy_response$$$function__18___init__->m_type_description == NULL);
frame_frame_openai$_legacy_response$$$function__18___init__ = cache_frame_frame_openai$_legacy_response$$$function__18___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_legacy_response$$$function__18___init__);
assert(Py_REFCNT(frame_frame_openai$_legacy_response$$$function__18___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 347;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_openai$_legacy_response, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
frame_frame_openai$_legacy_response$$$function__18___init__->m_frame.f_lineno = 347;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    const_str_plain___init__,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_96cb7fc57a31072361369315e2271c46_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_1 = "oc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_legacy_response$$$function__18___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_legacy_response$$$function__18___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_legacy_response$$$function__18___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_legacy_response$$$function__18___init__,
    type_description_1,
    par_self,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_openai$_legacy_response$$$function__18___init__ == cache_frame_frame_openai$_legacy_response$$$function__18___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_legacy_response$$$function__18___init__);
    cache_frame_frame_openai$_legacy_response$$$function__18___init__ = NULL;
}

assertFrameObject(frame_frame_openai$_legacy_response$$$function__18___init__);

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


static PyObject *impl_openai$_legacy_response$$$function__19_to_raw_response_wrapper(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_func = Nuitka_Cell_New1(python_pars[0]);
PyObject *var_wrapped = NULL;
struct Nuitka_FrameObject *frame_frame_openai$_legacy_response$$$function__19_to_raw_response_wrapper;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_legacy_response$$$function__19_to_raw_response_wrapper = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_openai$_legacy_response$$$function__19_to_raw_response_wrapper)) {
    Py_XDECREF(cache_frame_frame_openai$_legacy_response$$$function__19_to_raw_response_wrapper);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_legacy_response$$$function__19_to_raw_response_wrapper == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_legacy_response$$$function__19_to_raw_response_wrapper = MAKE_FUNCTION_FRAME(tstate, code_objects_6ed4ac8df1370822f59540835a205cdf, module_openai$_legacy_response, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_legacy_response$$$function__19_to_raw_response_wrapper->m_type_description == NULL);
frame_frame_openai$_legacy_response$$$function__19_to_raw_response_wrapper = cache_frame_frame_openai$_legacy_response$$$function__19_to_raw_response_wrapper;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_legacy_response$$$function__19_to_raw_response_wrapper);
assert(Py_REFCNT(frame_frame_openai$_legacy_response$$$function__19_to_raw_response_wrapper) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_called_instance_1 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_called_instance_1 == NULL));
CHECK_OBJECT(Nuitka_Cell_GET(par_func));
tmp_args_element_value_1 = Nuitka_Cell_GET(par_func);
frame_frame_openai$_legacy_response$$$function__19_to_raw_response_wrapper->m_frame.f_lineno = 357;
tmp_called_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_wraps, tmp_args_element_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_c3e710a26dffe1be46840d17e8199774);
tmp_closure_1[0] = par_func;
Py_INCREF(tmp_closure_1[0]);
tmp_args_element_value_2 = MAKE_FUNCTION_openai$_legacy_response$$$function__19_to_raw_response_wrapper$$$function__1_wrapped(tstate, tmp_annotations_1, tmp_closure_1);

frame_frame_openai$_legacy_response$$$function__19_to_raw_response_wrapper->m_frame.f_lineno = 357;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "co";
    goto frame_exception_exit_1;
}
assert(var_wrapped == NULL);
var_wrapped = tmp_assign_source_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_legacy_response$$$function__19_to_raw_response_wrapper, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_legacy_response$$$function__19_to_raw_response_wrapper->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_legacy_response$$$function__19_to_raw_response_wrapper, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_legacy_response$$$function__19_to_raw_response_wrapper,
    type_description_1,
    par_func,
    var_wrapped
);


// Release cached frame if used for exception.
if (frame_frame_openai$_legacy_response$$$function__19_to_raw_response_wrapper == cache_frame_frame_openai$_legacy_response$$$function__19_to_raw_response_wrapper) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_legacy_response$$$function__19_to_raw_response_wrapper);
    cache_frame_frame_openai$_legacy_response$$$function__19_to_raw_response_wrapper = NULL;
}

assertFrameObject(frame_frame_openai$_legacy_response$$$function__19_to_raw_response_wrapper);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_wrapped);
tmp_return_value = var_wrapped;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_func);
CHECK_OBJECT(par_func);
Py_DECREF(par_func);
par_func = NULL;
CHECK_OBJECT(var_wrapped);
CHECK_OBJECT(var_wrapped);
Py_DECREF(var_wrapped);
var_wrapped = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_func);
CHECK_OBJECT(par_func);
Py_DECREF(par_func);
par_func = NULL;
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


static PyObject *impl_openai$_legacy_response$$$function__19_to_raw_response_wrapper$$$function__1_wrapped(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_args = python_pars[0];
PyObject *par_kwargs = python_pars[1];
PyObject *var_extra_headers = NULL;
struct Nuitka_FrameObject *frame_frame_openai$_legacy_response$$$function__19_to_raw_response_wrapper$$$function__1_wrapped;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_legacy_response$$$function__19_to_raw_response_wrapper$$$function__1_wrapped = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_openai$_legacy_response$$$function__19_to_raw_response_wrapper$$$function__1_wrapped)) {
    Py_XDECREF(cache_frame_frame_openai$_legacy_response$$$function__19_to_raw_response_wrapper$$$function__1_wrapped);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_legacy_response$$$function__19_to_raw_response_wrapper$$$function__1_wrapped == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_legacy_response$$$function__19_to_raw_response_wrapper$$$function__1_wrapped = MAKE_FUNCTION_FRAME(tstate, code_objects_d1a21472ad5c9decbfad3cff0a23ca28, module_openai$_legacy_response, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_legacy_response$$$function__19_to_raw_response_wrapper$$$function__1_wrapped->m_type_description == NULL);
frame_frame_openai$_legacy_response$$$function__19_to_raw_response_wrapper$$$function__1_wrapped = cache_frame_frame_openai$_legacy_response$$$function__19_to_raw_response_wrapper$$$function__1_wrapped;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_legacy_response$$$function__19_to_raw_response_wrapper$$$function__1_wrapped);
assert(Py_REFCNT(frame_frame_openai$_legacy_response$$$function__19_to_raw_response_wrapper$$$function__1_wrapped) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_key_value_1;
tmp_called_value_1 = module_var_accessor_openai$_legacy_response$cast(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 359;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_openai$_legacy_response$Any(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 359;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_kwargs);
tmp_dict_arg_value_1 = par_kwargs;
tmp_key_value_1 = mod_consts.const_str_plain_extra_headers;
tmp_args_element_value_2 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
if (tmp_args_element_value_2 == NULL) {
    tmp_args_element_value_2 = Py_None;
    Py_INCREF_IMMORTAL(tmp_args_element_value_2);
}
assert(!(tmp_args_element_value_2 == NULL));
frame_frame_openai$_legacy_response$$$function__19_to_raw_response_wrapper$$$function__1_wrapped->m_frame.f_lineno = 359;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_or_left_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 359;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(tmp_or_left_value_1);
Py_DECREF(tmp_or_left_value_1);
tmp_or_right_value_1 = MAKE_DICT_EMPTY(tstate);
tmp_tuple_element_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_tuple_element_1 = tmp_or_left_value_1;
or_end_1:;
tmp_direct_call_arg1_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 0, tmp_tuple_element_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_1 = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
assert(var_extra_headers == NULL);
var_extra_headers = tmp_assign_source_1;
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_plain_true;
CHECK_OBJECT(var_extra_headers);
tmp_ass_subscribed_1 = var_extra_headers;
tmp_ass_subscript_1 = module_var_accessor_openai$_legacy_response$RAW_RESPONSE_HEADER(tstate);
if (unlikely(tmp_ass_subscript_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RAW_RESPONSE_HEADER);
}

if (tmp_ass_subscript_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 360;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
}
CHECK_OBJECT(var_extra_headers);
tmp_dictset_value = var_extra_headers;
CHECK_OBJECT(par_kwargs);
tmp_dictset_dict = par_kwargs;
tmp_dictset_key = mod_consts.const_str_plain_extra_headers;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_direct_call_arg3_1;
tmp_called_value_2 = module_var_accessor_openai$_legacy_response$cast(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 364;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = module_var_accessor_openai$_legacy_response$LegacyAPIResponse(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LegacyAPIResponse);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 364;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = module_var_accessor_openai$_legacy_response$R(tstate);
if (unlikely(tmp_subscript_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_R);
}

if (tmp_subscript_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 364;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_args_element_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_func);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 364;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}

tmp_direct_call_arg1_2 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_args);
tmp_direct_call_arg2_1 = par_args;
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg3_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg1_2);
Py_INCREF(tmp_direct_call_arg2_1);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_args_element_value_4 = impl___main__$$$helper_function_complex_call_helper_star_list_star_dict(tstate, dir_call_args);
}
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 364;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
frame_frame_openai$_legacy_response$$$function__19_to_raw_response_wrapper$$$function__1_wrapped->m_frame.f_lineno = 364;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
type_description_1 = "oooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_legacy_response$$$function__19_to_raw_response_wrapper$$$function__1_wrapped, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_legacy_response$$$function__19_to_raw_response_wrapper$$$function__1_wrapped->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_legacy_response$$$function__19_to_raw_response_wrapper$$$function__1_wrapped, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_legacy_response$$$function__19_to_raw_response_wrapper$$$function__1_wrapped,
    type_description_1,
    par_args,
    par_kwargs,
    var_extra_headers,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_openai$_legacy_response$$$function__19_to_raw_response_wrapper$$$function__1_wrapped == cache_frame_frame_openai$_legacy_response$$$function__19_to_raw_response_wrapper$$$function__1_wrapped) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_legacy_response$$$function__19_to_raw_response_wrapper$$$function__1_wrapped);
    cache_frame_frame_openai$_legacy_response$$$function__19_to_raw_response_wrapper$$$function__1_wrapped = NULL;
}

assertFrameObject(frame_frame_openai$_legacy_response$$$function__19_to_raw_response_wrapper$$$function__1_wrapped);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_extra_headers);
CHECK_OBJECT(var_extra_headers);
Py_DECREF(var_extra_headers);
var_extra_headers = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_extra_headers);
var_extra_headers = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$_legacy_response$$$function__20_async_to_raw_response_wrapper(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_func = Nuitka_Cell_New1(python_pars[0]);
PyObject *var_wrapped = NULL;
struct Nuitka_FrameObject *frame_frame_openai$_legacy_response$$$function__20_async_to_raw_response_wrapper;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_legacy_response$$$function__20_async_to_raw_response_wrapper = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_openai$_legacy_response$$$function__20_async_to_raw_response_wrapper)) {
    Py_XDECREF(cache_frame_frame_openai$_legacy_response$$$function__20_async_to_raw_response_wrapper);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_legacy_response$$$function__20_async_to_raw_response_wrapper == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_legacy_response$$$function__20_async_to_raw_response_wrapper = MAKE_FUNCTION_FRAME(tstate, code_objects_5bbc91b93fd5ef6edf6540892ea20404, module_openai$_legacy_response, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_legacy_response$$$function__20_async_to_raw_response_wrapper->m_type_description == NULL);
frame_frame_openai$_legacy_response$$$function__20_async_to_raw_response_wrapper = cache_frame_frame_openai$_legacy_response$$$function__20_async_to_raw_response_wrapper;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_legacy_response$$$function__20_async_to_raw_response_wrapper);
assert(Py_REFCNT(frame_frame_openai$_legacy_response$$$function__20_async_to_raw_response_wrapper) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_called_instance_1 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_called_instance_1 == NULL));
CHECK_OBJECT(Nuitka_Cell_GET(par_func));
tmp_args_element_value_1 = Nuitka_Cell_GET(par_func);
frame_frame_openai$_legacy_response$$$function__20_async_to_raw_response_wrapper->m_frame.f_lineno = 374;
tmp_called_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_wraps, tmp_args_element_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 374;
type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_c3e710a26dffe1be46840d17e8199774);
tmp_closure_1[0] = par_func;
Py_INCREF(tmp_closure_1[0]);
tmp_args_element_value_2 = MAKE_FUNCTION_openai$_legacy_response$$$function__20_async_to_raw_response_wrapper$$$function__1_wrapped(tstate, tmp_annotations_1, tmp_closure_1);

frame_frame_openai$_legacy_response$$$function__20_async_to_raw_response_wrapper->m_frame.f_lineno = 374;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 374;
type_description_1 = "co";
    goto frame_exception_exit_1;
}
assert(var_wrapped == NULL);
var_wrapped = tmp_assign_source_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_legacy_response$$$function__20_async_to_raw_response_wrapper, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_legacy_response$$$function__20_async_to_raw_response_wrapper->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_legacy_response$$$function__20_async_to_raw_response_wrapper, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_legacy_response$$$function__20_async_to_raw_response_wrapper,
    type_description_1,
    par_func,
    var_wrapped
);


// Release cached frame if used for exception.
if (frame_frame_openai$_legacy_response$$$function__20_async_to_raw_response_wrapper == cache_frame_frame_openai$_legacy_response$$$function__20_async_to_raw_response_wrapper) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_legacy_response$$$function__20_async_to_raw_response_wrapper);
    cache_frame_frame_openai$_legacy_response$$$function__20_async_to_raw_response_wrapper = NULL;
}

assertFrameObject(frame_frame_openai$_legacy_response$$$function__20_async_to_raw_response_wrapper);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_wrapped);
tmp_return_value = var_wrapped;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_func);
CHECK_OBJECT(par_func);
Py_DECREF(par_func);
par_func = NULL;
CHECK_OBJECT(var_wrapped);
CHECK_OBJECT(var_wrapped);
Py_DECREF(var_wrapped);
var_wrapped = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_func);
CHECK_OBJECT(par_func);
Py_DECREF(par_func);
par_func = NULL;
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


static PyObject *impl_openai$_legacy_response$$$function__20_async_to_raw_response_wrapper$$$function__1_wrapped(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_args = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_kwargs = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[3];
tmp_closure_1[0] = par_args;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = self->m_closure[0];
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_kwargs;
Py_INCREF(tmp_closure_1[2]);
tmp_return_value = MAKE_COROUTINE_openai$_legacy_response$$$function__20_async_to_raw_response_wrapper$$$function__1_wrapped$$$coroutine__1_wrapped(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_args);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
par_args = NULL;
CHECK_OBJECT(par_kwargs);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
par_kwargs = NULL;
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
struct openai$_legacy_response$$$function__20_async_to_raw_response_wrapper$$$function__1_wrapped$$$coroutine__1_wrapped_locals {
PyObject *var_extra_headers;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
bool tmp_result;
PyObject *tmp_return_value;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
};
#endif

static PyObject *openai$_legacy_response$$$function__20_async_to_raw_response_wrapper$$$function__1_wrapped$$$coroutine__1_wrapped_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$_legacy_response$$$function__20_async_to_raw_response_wrapper$$$function__1_wrapped$$$coroutine__1_wrapped_locals *coroutine_heap = (struct openai$_legacy_response$$$function__20_async_to_raw_response_wrapper$$$function__1_wrapped$$$coroutine__1_wrapped_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_extra_headers = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_6c979cbae8c284068a1a0df52b5c1dae, module_openai$_legacy_response, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_openai$_legacy_response$cast(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 376;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_openai$_legacy_response$Any(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 376;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_kwargs);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 376;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 376;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 376;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_extra_headers_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 376;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 376;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_or_left_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 376;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_or_left_value_1);

coroutine_heap->exception_lineno = 376;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(tmp_or_left_value_1);
Py_DECREF(tmp_or_left_value_1);
tmp_or_right_value_1 = MAKE_DICT_EMPTY(tstate);
tmp_tuple_element_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_tuple_element_1 = tmp_or_left_value_1;
or_end_1:;
tmp_direct_call_arg1_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 0, tmp_tuple_element_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_1 = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 376;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_extra_headers == NULL);
coroutine_heap->var_extra_headers = tmp_assign_source_1;
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_plain_true;
CHECK_OBJECT(coroutine_heap->var_extra_headers);
tmp_ass_subscribed_1 = coroutine_heap->var_extra_headers;
tmp_ass_subscript_1 = module_var_accessor_openai$_legacy_response$RAW_RESPONSE_HEADER(tstate);
if (unlikely(tmp_ass_subscript_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_RAW_RESPONSE_HEADER);
}

if (tmp_ass_subscript_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 377;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 377;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(coroutine_heap->var_extra_headers);
tmp_ass_subvalue_2 = coroutine_heap->var_extra_headers;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_kwargs);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 379;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}

tmp_ass_subscribed_2 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_ass_subscript_2 = mod_consts.const_str_plain_extra_headers;
coroutine_heap->tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 379;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_direct_call_arg3_1;
tmp_called_value_3 = module_var_accessor_openai$_legacy_response$cast(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 381;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_openai$_legacy_response$LegacyAPIResponse(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_LegacyAPIResponse);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 381;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = module_var_accessor_openai$_legacy_response$R(tstate);
if (unlikely(tmp_subscript_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_R);
}

if (tmp_subscript_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 381;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 381;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 381;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_args_element_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_func);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 381;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}

tmp_direct_call_arg1_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_args_element_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain_args);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 381;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}

tmp_direct_call_arg2_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_args_element_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_kwargs);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 381;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}

tmp_direct_call_arg3_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
Py_INCREF(tmp_direct_call_arg1_2);
Py_INCREF(tmp_direct_call_arg2_1);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_expression_value_4 = impl___main__$$$helper_function_complex_call_helper_star_list_star_dict(tstate, dir_call_args);
}
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_args_element_value_3);

coroutine_heap->exception_lineno = 381;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = ASYNC_AWAIT(tstate, tmp_expression_value_4, await_normal);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_args_element_value_3);

coroutine_heap->exception_lineno = 381;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_called_value_3, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_subscript_value_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_direct_call_arg1_2, sizeof(PyObject *), &tmp_direct_call_arg2_1, sizeof(PyObject *), &tmp_direct_call_arg3_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_3;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_called_value_3, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_subscript_value_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_direct_call_arg1_2, sizeof(PyObject *), &tmp_direct_call_arg2_1, sizeof(PyObject *), &tmp_direct_call_arg3_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_args_element_value_3);

coroutine_heap->exception_lineno = 381;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = yield_return_value;
coroutine->m_frame->m_frame.f_lineno = 381;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    coroutine_heap->tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (coroutine_heap->tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 381;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
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
    coroutine->m_closure[0],
    coroutine->m_closure[2],
    coroutine_heap->var_extra_headers,
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
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(coroutine_heap->var_extra_headers);
CHECK_OBJECT(coroutine_heap->var_extra_headers);
Py_DECREF(coroutine_heap->var_extra_headers);
coroutine_heap->var_extra_headers = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_extra_headers);
coroutine_heap->var_extra_headers = NULL;
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

static PyObject *MAKE_COROUTINE_openai$_legacy_response$$$function__20_async_to_raw_response_wrapper$$$function__1_wrapped$$$coroutine__1_wrapped(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        openai$_legacy_response$$$function__20_async_to_raw_response_wrapper$$$function__1_wrapped$$$coroutine__1_wrapped_context,
        module_openai$_legacy_response,
        mod_consts.const_str_plain_wrapped,
        mod_consts.const_str_digest_ece4072b36db9c798f8cf693482ca28d,
        code_objects_6c979cbae8c284068a1a0df52b5c1dae,
        closure,
        3,
#if 1
        sizeof(struct openai$_legacy_response$$$function__20_async_to_raw_response_wrapper$$$function__1_wrapped$$$coroutine__1_wrapped_locals)
#else
        0
#endif
    );
}


static PyObject *impl_openai$_legacy_response$$$function__21___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_response = python_pars[1];
struct Nuitka_FrameObject *frame_frame_openai$_legacy_response$$$function__21___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_legacy_response$$$function__21___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_legacy_response$$$function__21___init__)) {
    Py_XDECREF(cache_frame_frame_openai$_legacy_response$$$function__21___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_legacy_response$$$function__21___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_legacy_response$$$function__21___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_3eb923013288915aff39f4140acbd656, module_openai$_legacy_response, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_legacy_response$$$function__21___init__->m_type_description == NULL);
frame_frame_openai$_legacy_response$$$function__21___init__ = cache_frame_frame_openai$_legacy_response$$$function__21___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_legacy_response$$$function__21___init__);
assert(Py_REFCNT(frame_frame_openai$_legacy_response$$$function__21___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_response);
tmp_assattr_value_1 = par_response;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_response, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 390;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_legacy_response$$$function__21___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_legacy_response$$$function__21___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_legacy_response$$$function__21___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_legacy_response$$$function__21___init__,
    type_description_1,
    par_self,
    par_response
);


// Release cached frame if used for exception.
if (frame_frame_openai$_legacy_response$$$function__21___init__ == cache_frame_frame_openai$_legacy_response$$$function__21___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_legacy_response$$$function__21___init__);
    cache_frame_frame_openai$_legacy_response$$$function__21___init__ = NULL;
}

assertFrameObject(frame_frame_openai$_legacy_response$$$function__21___init__);

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


static PyObject *impl_openai$_legacy_response$$$function__22_content(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$_legacy_response$$$function__22_content;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_legacy_response$$$function__22_content = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_legacy_response$$$function__22_content)) {
    Py_XDECREF(cache_frame_frame_openai$_legacy_response$$$function__22_content);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_legacy_response$$$function__22_content == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_legacy_response$$$function__22_content = MAKE_FUNCTION_FRAME(tstate, code_objects_cc75da1a0172f795a7de7f343aaa8fb4, module_openai$_legacy_response, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_legacy_response$$$function__22_content->m_type_description == NULL);
frame_frame_openai$_legacy_response$$$function__22_content = cache_frame_frame_openai$_legacy_response$$$function__22_content;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_legacy_response$$$function__22_content);
assert(Py_REFCNT(frame_frame_openai$_legacy_response$$$function__22_content) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_response);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 394;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_content);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 394;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_legacy_response$$$function__22_content, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_legacy_response$$$function__22_content->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_legacy_response$$$function__22_content, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_legacy_response$$$function__22_content,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$_legacy_response$$$function__22_content == cache_frame_frame_openai$_legacy_response$$$function__22_content) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_legacy_response$$$function__22_content);
    cache_frame_frame_openai$_legacy_response$$$function__22_content = NULL;
}

assertFrameObject(frame_frame_openai$_legacy_response$$$function__22_content);

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


static PyObject *impl_openai$_legacy_response$$$function__23_text(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$_legacy_response$$$function__23_text;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_legacy_response$$$function__23_text = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_legacy_response$$$function__23_text)) {
    Py_XDECREF(cache_frame_frame_openai$_legacy_response$$$function__23_text);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_legacy_response$$$function__23_text == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_legacy_response$$$function__23_text = MAKE_FUNCTION_FRAME(tstate, code_objects_6b36ad34cb9fbdd37570f331d054c9d4, module_openai$_legacy_response, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_legacy_response$$$function__23_text->m_type_description == NULL);
frame_frame_openai$_legacy_response$$$function__23_text = cache_frame_frame_openai$_legacy_response$$$function__23_text;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_legacy_response$$$function__23_text);
assert(Py_REFCNT(frame_frame_openai$_legacy_response$$$function__23_text) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_response);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 398;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_text);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 398;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_legacy_response$$$function__23_text, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_legacy_response$$$function__23_text->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_legacy_response$$$function__23_text, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_legacy_response$$$function__23_text,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$_legacy_response$$$function__23_text == cache_frame_frame_openai$_legacy_response$$$function__23_text) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_legacy_response$$$function__23_text);
    cache_frame_frame_openai$_legacy_response$$$function__23_text = NULL;
}

assertFrameObject(frame_frame_openai$_legacy_response$$$function__23_text);

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


static PyObject *impl_openai$_legacy_response$$$function__24_encoding(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$_legacy_response$$$function__24_encoding;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_legacy_response$$$function__24_encoding = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_legacy_response$$$function__24_encoding)) {
    Py_XDECREF(cache_frame_frame_openai$_legacy_response$$$function__24_encoding);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_legacy_response$$$function__24_encoding == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_legacy_response$$$function__24_encoding = MAKE_FUNCTION_FRAME(tstate, code_objects_02364e9758fb294ca49b490005055c42, module_openai$_legacy_response, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_legacy_response$$$function__24_encoding->m_type_description == NULL);
frame_frame_openai$_legacy_response$$$function__24_encoding = cache_frame_frame_openai$_legacy_response$$$function__24_encoding;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_legacy_response$$$function__24_encoding);
assert(Py_REFCNT(frame_frame_openai$_legacy_response$$$function__24_encoding) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_response);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 402;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_encoding);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 402;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_legacy_response$$$function__24_encoding, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_legacy_response$$$function__24_encoding->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_legacy_response$$$function__24_encoding, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_legacy_response$$$function__24_encoding,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$_legacy_response$$$function__24_encoding == cache_frame_frame_openai$_legacy_response$$$function__24_encoding) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_legacy_response$$$function__24_encoding);
    cache_frame_frame_openai$_legacy_response$$$function__24_encoding = NULL;
}

assertFrameObject(frame_frame_openai$_legacy_response$$$function__24_encoding);

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


static PyObject *impl_openai$_legacy_response$$$function__25_charset_encoding(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$_legacy_response$$$function__25_charset_encoding;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_legacy_response$$$function__25_charset_encoding = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_legacy_response$$$function__25_charset_encoding)) {
    Py_XDECREF(cache_frame_frame_openai$_legacy_response$$$function__25_charset_encoding);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_legacy_response$$$function__25_charset_encoding == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_legacy_response$$$function__25_charset_encoding = MAKE_FUNCTION_FRAME(tstate, code_objects_23142a7e64faebc88129dffb1f09301a, module_openai$_legacy_response, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_legacy_response$$$function__25_charset_encoding->m_type_description == NULL);
frame_frame_openai$_legacy_response$$$function__25_charset_encoding = cache_frame_frame_openai$_legacy_response$$$function__25_charset_encoding;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_legacy_response$$$function__25_charset_encoding);
assert(Py_REFCNT(frame_frame_openai$_legacy_response$$$function__25_charset_encoding) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_response);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_charset_encoding);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_legacy_response$$$function__25_charset_encoding, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_legacy_response$$$function__25_charset_encoding->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_legacy_response$$$function__25_charset_encoding, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_legacy_response$$$function__25_charset_encoding,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$_legacy_response$$$function__25_charset_encoding == cache_frame_frame_openai$_legacy_response$$$function__25_charset_encoding) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_legacy_response$$$function__25_charset_encoding);
    cache_frame_frame_openai$_legacy_response$$$function__25_charset_encoding = NULL;
}

assertFrameObject(frame_frame_openai$_legacy_response$$$function__25_charset_encoding);

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


static PyObject *impl_openai$_legacy_response$$$function__26_json(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_kwargs = python_pars[1];
struct Nuitka_FrameObject *frame_frame_openai$_legacy_response$$$function__26_json;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_legacy_response$$$function__26_json = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_legacy_response$$$function__26_json)) {
    Py_XDECREF(cache_frame_frame_openai$_legacy_response$$$function__26_json);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_legacy_response$$$function__26_json == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_legacy_response$$$function__26_json = MAKE_FUNCTION_FRAME(tstate, code_objects_e6d6aca35dd6f2ed8523fe3ec618ad8f, module_openai$_legacy_response, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_legacy_response$$$function__26_json->m_type_description == NULL);
frame_frame_openai$_legacy_response$$$function__26_json = cache_frame_frame_openai$_legacy_response$$$function__26_json;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_legacy_response$$$function__26_json);
assert(Py_REFCNT(frame_frame_openai$_legacy_response$$$function__26_json) == 2);

// Framed code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_direct_call_arg2_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_response);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_json);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg2_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_legacy_response$$$function__26_json, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_legacy_response$$$function__26_json->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_legacy_response$$$function__26_json, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_legacy_response$$$function__26_json,
    type_description_1,
    par_self,
    par_kwargs
);


// Release cached frame if used for exception.
if (frame_frame_openai$_legacy_response$$$function__26_json == cache_frame_frame_openai$_legacy_response$$$function__26_json) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_legacy_response$$$function__26_json);
    cache_frame_frame_openai$_legacy_response$$$function__26_json = NULL;
}

assertFrameObject(frame_frame_openai$_legacy_response$$$function__26_json);

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
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$_legacy_response$$$function__27_read(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$_legacy_response$$$function__27_read;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_legacy_response$$$function__27_read = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_legacy_response$$$function__27_read)) {
    Py_XDECREF(cache_frame_frame_openai$_legacy_response$$$function__27_read);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_legacy_response$$$function__27_read == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_legacy_response$$$function__27_read = MAKE_FUNCTION_FRAME(tstate, code_objects_744bbe803a829651bf60accd01ee6aa9, module_openai$_legacy_response, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_legacy_response$$$function__27_read->m_type_description == NULL);
frame_frame_openai$_legacy_response$$$function__27_read = cache_frame_frame_openai$_legacy_response$$$function__27_read;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_legacy_response$$$function__27_read);
assert(Py_REFCNT(frame_frame_openai$_legacy_response$$$function__27_read) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_response);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 412;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_openai$_legacy_response$$$function__27_read->m_frame.f_lineno = 412;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_read);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 412;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_legacy_response$$$function__27_read, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_legacy_response$$$function__27_read->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_legacy_response$$$function__27_read, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_legacy_response$$$function__27_read,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$_legacy_response$$$function__27_read == cache_frame_frame_openai$_legacy_response$$$function__27_read) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_legacy_response$$$function__27_read);
    cache_frame_frame_openai$_legacy_response$$$function__27_read = NULL;
}

assertFrameObject(frame_frame_openai$_legacy_response$$$function__27_read);

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


static PyObject *impl_openai$_legacy_response$$$function__28_iter_bytes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_chunk_size = python_pars[1];
struct Nuitka_FrameObject *frame_frame_openai$_legacy_response$$$function__28_iter_bytes;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_legacy_response$$$function__28_iter_bytes = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_legacy_response$$$function__28_iter_bytes)) {
    Py_XDECREF(cache_frame_frame_openai$_legacy_response$$$function__28_iter_bytes);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_legacy_response$$$function__28_iter_bytes == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_legacy_response$$$function__28_iter_bytes = MAKE_FUNCTION_FRAME(tstate, code_objects_eb5ea1bc3c6f1b3ebeaacd5b851ca83e, module_openai$_legacy_response, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_legacy_response$$$function__28_iter_bytes->m_type_description == NULL);
frame_frame_openai$_legacy_response$$$function__28_iter_bytes = cache_frame_frame_openai$_legacy_response$$$function__28_iter_bytes;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_legacy_response$$$function__28_iter_bytes);
assert(Py_REFCNT(frame_frame_openai$_legacy_response$$$function__28_iter_bytes) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_response);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 415;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_chunk_size);
tmp_args_element_value_1 = par_chunk_size;
frame_frame_openai$_legacy_response$$$function__28_iter_bytes->m_frame.f_lineno = 415;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_iter_bytes, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 415;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_legacy_response$$$function__28_iter_bytes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_legacy_response$$$function__28_iter_bytes->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_legacy_response$$$function__28_iter_bytes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_legacy_response$$$function__28_iter_bytes,
    type_description_1,
    par_self,
    par_chunk_size
);


// Release cached frame if used for exception.
if (frame_frame_openai$_legacy_response$$$function__28_iter_bytes == cache_frame_frame_openai$_legacy_response$$$function__28_iter_bytes) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_legacy_response$$$function__28_iter_bytes);
    cache_frame_frame_openai$_legacy_response$$$function__28_iter_bytes = NULL;
}

assertFrameObject(frame_frame_openai$_legacy_response$$$function__28_iter_bytes);

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
CHECK_OBJECT(par_chunk_size);
Py_DECREF(par_chunk_size);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_chunk_size);
Py_DECREF(par_chunk_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$_legacy_response$$$function__29_iter_text(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_chunk_size = python_pars[1];
struct Nuitka_FrameObject *frame_frame_openai$_legacy_response$$$function__29_iter_text;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_legacy_response$$$function__29_iter_text = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_legacy_response$$$function__29_iter_text)) {
    Py_XDECREF(cache_frame_frame_openai$_legacy_response$$$function__29_iter_text);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_legacy_response$$$function__29_iter_text == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_legacy_response$$$function__29_iter_text = MAKE_FUNCTION_FRAME(tstate, code_objects_b3a6eaca2368085da00f33d8aa4f98a4, module_openai$_legacy_response, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_legacy_response$$$function__29_iter_text->m_type_description == NULL);
frame_frame_openai$_legacy_response$$$function__29_iter_text = cache_frame_frame_openai$_legacy_response$$$function__29_iter_text;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_legacy_response$$$function__29_iter_text);
assert(Py_REFCNT(frame_frame_openai$_legacy_response$$$function__29_iter_text) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_response);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_chunk_size);
tmp_args_element_value_1 = par_chunk_size;
frame_frame_openai$_legacy_response$$$function__29_iter_text->m_frame.f_lineno = 418;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_iter_text, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_legacy_response$$$function__29_iter_text, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_legacy_response$$$function__29_iter_text->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_legacy_response$$$function__29_iter_text, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_legacy_response$$$function__29_iter_text,
    type_description_1,
    par_self,
    par_chunk_size
);


// Release cached frame if used for exception.
if (frame_frame_openai$_legacy_response$$$function__29_iter_text == cache_frame_frame_openai$_legacy_response$$$function__29_iter_text) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_legacy_response$$$function__29_iter_text);
    cache_frame_frame_openai$_legacy_response$$$function__29_iter_text = NULL;
}

assertFrameObject(frame_frame_openai$_legacy_response$$$function__29_iter_text);

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
CHECK_OBJECT(par_chunk_size);
Py_DECREF(par_chunk_size);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_chunk_size);
Py_DECREF(par_chunk_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$_legacy_response$$$function__30_iter_lines(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$_legacy_response$$$function__30_iter_lines;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_legacy_response$$$function__30_iter_lines = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_legacy_response$$$function__30_iter_lines)) {
    Py_XDECREF(cache_frame_frame_openai$_legacy_response$$$function__30_iter_lines);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_legacy_response$$$function__30_iter_lines == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_legacy_response$$$function__30_iter_lines = MAKE_FUNCTION_FRAME(tstate, code_objects_3af9203398d37f3134756e885a000d9a, module_openai$_legacy_response, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_legacy_response$$$function__30_iter_lines->m_type_description == NULL);
frame_frame_openai$_legacy_response$$$function__30_iter_lines = cache_frame_frame_openai$_legacy_response$$$function__30_iter_lines;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_legacy_response$$$function__30_iter_lines);
assert(Py_REFCNT(frame_frame_openai$_legacy_response$$$function__30_iter_lines) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_response);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_openai$_legacy_response$$$function__30_iter_lines->m_frame.f_lineno = 421;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_iter_lines);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_legacy_response$$$function__30_iter_lines, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_legacy_response$$$function__30_iter_lines->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_legacy_response$$$function__30_iter_lines, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_legacy_response$$$function__30_iter_lines,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$_legacy_response$$$function__30_iter_lines == cache_frame_frame_openai$_legacy_response$$$function__30_iter_lines) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_legacy_response$$$function__30_iter_lines);
    cache_frame_frame_openai$_legacy_response$$$function__30_iter_lines = NULL;
}

assertFrameObject(frame_frame_openai$_legacy_response$$$function__30_iter_lines);

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


static PyObject *impl_openai$_legacy_response$$$function__31_iter_raw(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_chunk_size = python_pars[1];
struct Nuitka_FrameObject *frame_frame_openai$_legacy_response$$$function__31_iter_raw;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_legacy_response$$$function__31_iter_raw = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_legacy_response$$$function__31_iter_raw)) {
    Py_XDECREF(cache_frame_frame_openai$_legacy_response$$$function__31_iter_raw);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_legacy_response$$$function__31_iter_raw == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_legacy_response$$$function__31_iter_raw = MAKE_FUNCTION_FRAME(tstate, code_objects_2a54c315c8ba9e0f6b6bed095452436b, module_openai$_legacy_response, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_legacy_response$$$function__31_iter_raw->m_type_description == NULL);
frame_frame_openai$_legacy_response$$$function__31_iter_raw = cache_frame_frame_openai$_legacy_response$$$function__31_iter_raw;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_legacy_response$$$function__31_iter_raw);
assert(Py_REFCNT(frame_frame_openai$_legacy_response$$$function__31_iter_raw) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_response);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_chunk_size);
tmp_args_element_value_1 = par_chunk_size;
frame_frame_openai$_legacy_response$$$function__31_iter_raw->m_frame.f_lineno = 424;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_iter_raw, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_legacy_response$$$function__31_iter_raw, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_legacy_response$$$function__31_iter_raw->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_legacy_response$$$function__31_iter_raw, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_legacy_response$$$function__31_iter_raw,
    type_description_1,
    par_self,
    par_chunk_size
);


// Release cached frame if used for exception.
if (frame_frame_openai$_legacy_response$$$function__31_iter_raw == cache_frame_frame_openai$_legacy_response$$$function__31_iter_raw) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_legacy_response$$$function__31_iter_raw);
    cache_frame_frame_openai$_legacy_response$$$function__31_iter_raw = NULL;
}

assertFrameObject(frame_frame_openai$_legacy_response$$$function__31_iter_raw);

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
CHECK_OBJECT(par_chunk_size);
Py_DECREF(par_chunk_size);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_chunk_size);
Py_DECREF(par_chunk_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$_legacy_response$$$function__32_write_to_file(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_file = python_pars[1];
PyObject *var_f = NULL;
PyObject *var_data = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_openai$_legacy_response$$$function__32_write_to_file;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_legacy_response$$$function__32_write_to_file = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_openai$_legacy_response$$$function__32_write_to_file)) {
    Py_XDECREF(cache_frame_frame_openai$_legacy_response$$$function__32_write_to_file);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_legacy_response$$$function__32_write_to_file == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_legacy_response$$$function__32_write_to_file = MAKE_FUNCTION_FRAME(tstate, code_objects_504ac6fd7925b10a0ceb0c1a2903a529, module_openai$_legacy_response, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_legacy_response$$$function__32_write_to_file->m_type_description == NULL);
frame_frame_openai$_legacy_response$$$function__32_write_to_file = cache_frame_frame_openai$_legacy_response$$$function__32_write_to_file;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_legacy_response$$$function__32_write_to_file);
assert(Py_REFCNT(frame_frame_openai$_legacy_response$$$function__32_write_to_file) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_open_filename_1;
PyObject *tmp_open_mode_1;
CHECK_OBJECT(par_file);
tmp_open_filename_1 = par_file;
tmp_open_mode_1 = mod_consts.const_str_plain_wb;
tmp_assign_source_1 = BUILTIN_OPEN(tstate, tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_1 = tmp_with_1__source;
tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, const_str_plain___enter__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_openai$_legacy_response$$$function__32_write_to_file->m_frame.f_lineno = 438;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_2 = tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_3;
}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_with_1__enter);
tmp_assign_source_5 = tmp_with_1__enter;
assert(var_f == NULL);
Py_INCREF(tmp_assign_source_5);
var_f = tmp_assign_source_5;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_response);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
frame_frame_openai$_legacy_response$$$function__32_write_to_file->m_frame.f_lineno = 439;
tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_iter_bytes);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_6;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_7 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooo";
exception_lineno = 439;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_8 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_data;
    var_data = tmp_assign_source_8;
    Py_INCREF(var_data);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
if (var_f == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_f);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 440;
type_description_1 = "oooo";
    goto try_except_handler_5;
}

tmp_called_instance_2 = var_f;
CHECK_OBJECT(var_data);
tmp_args_element_value_1 = var_data;
frame_frame_openai$_legacy_response$$$function__32_write_to_file->m_frame.f_lineno = 440;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_write, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
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

goto try_except_handler_4;
// End of try:
try_end_1:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_legacy_response$$$function__32_write_to_file, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_legacy_response$$$function__32_write_to_file, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_2);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_BaseException;
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
nuitka_bool tmp_assign_source_9;
tmp_assign_source_9 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_9;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_2 = tmp_with_1__exit;
tmp_args_element_value_2 = EXC_TYPE(tstate);
tmp_args_element_value_3 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_3); 
tmp_args_element_value_4 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_4 == NULL) {
    tmp_args_element_value_4 = Py_None;
}
frame_frame_openai$_legacy_response$$$function__32_write_to_file->m_frame.f_lineno = 438;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "oooo";
    goto try_except_handler_6;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "oooo";
    goto try_except_handler_6;
}
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 438;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_openai$_legacy_response$$$function__32_write_to_file->m_frame)) {
        frame_frame_openai$_legacy_response$$$function__32_write_to_file->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_6;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 438;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_openai$_legacy_response$$$function__32_write_to_file->m_frame)) {
        frame_frame_openai$_legacy_response$$$function__32_write_to_file->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_6;
branch_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_3;
// End of try:
try_end_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
goto try_end_4;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_3;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = tmp_with_1__indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_3 = tmp_with_1__exit;
frame_frame_openai$_legacy_response$$$function__32_write_to_file->m_frame.f_lineno = 438;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_3, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_4);

exception_lineno = 438;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_3:;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_2;
// End of try:
try_end_4:;
{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
frame_frame_openai$_legacy_response$$$function__32_write_to_file->m_frame.f_lineno = 438;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_4:;
goto try_end_5;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_5:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_legacy_response$$$function__32_write_to_file, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_legacy_response$$$function__32_write_to_file->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_legacy_response$$$function__32_write_to_file, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_legacy_response$$$function__32_write_to_file,
    type_description_1,
    par_self,
    par_file,
    var_f,
    var_data
);


// Release cached frame if used for exception.
if (frame_frame_openai$_legacy_response$$$function__32_write_to_file == cache_frame_frame_openai$_legacy_response$$$function__32_write_to_file) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_legacy_response$$$function__32_write_to_file);
    cache_frame_frame_openai$_legacy_response$$$function__32_write_to_file = NULL;
}

assertFrameObject(frame_frame_openai$_legacy_response$$$function__32_write_to_file);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(tmp_with_1__source);
CHECK_OBJECT(tmp_with_1__source);
Py_DECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
CHECK_OBJECT(tmp_with_1__enter);
CHECK_OBJECT(tmp_with_1__enter);
Py_DECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
CHECK_OBJECT(tmp_with_1__exit);
CHECK_OBJECT(tmp_with_1__exit);
Py_DECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_f);
var_f = NULL;
Py_XDECREF(var_data);
var_data = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_f);
var_f = NULL;
Py_XDECREF(var_data);
var_data = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_file);
Py_DECREF(par_file);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_file);
Py_DECREF(par_file);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$_legacy_response$$$function__33_stream_to_file(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_file = python_pars[1];
PyObject *par_chunk_size = python_pars[2];
PyObject *var_f = NULL;
PyObject *var_data = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_openai$_legacy_response$$$function__33_stream_to_file;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_legacy_response$$$function__33_stream_to_file = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_openai$_legacy_response$$$function__33_stream_to_file)) {
    Py_XDECREF(cache_frame_frame_openai$_legacy_response$$$function__33_stream_to_file);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_legacy_response$$$function__33_stream_to_file == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_legacy_response$$$function__33_stream_to_file = MAKE_FUNCTION_FRAME(tstate, code_objects_072d88870607476764fbec2ff63fe945, module_openai$_legacy_response, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_legacy_response$$$function__33_stream_to_file->m_type_description == NULL);
frame_frame_openai$_legacy_response$$$function__33_stream_to_file = cache_frame_frame_openai$_legacy_response$$$function__33_stream_to_file;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_legacy_response$$$function__33_stream_to_file);
assert(Py_REFCNT(frame_frame_openai$_legacy_response$$$function__33_stream_to_file) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_open_filename_1;
PyObject *tmp_open_mode_1;
CHECK_OBJECT(par_file);
tmp_open_filename_1 = par_file;
tmp_open_mode_1 = mod_consts.const_str_plain_wb;
tmp_assign_source_1 = BUILTIN_OPEN(tstate, tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_1 = tmp_with_1__source;
tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, const_str_plain___enter__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
frame_frame_openai$_legacy_response$$$function__33_stream_to_file->m_frame.f_lineno = 451;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_2 = tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_3;
}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_with_1__enter);
tmp_assign_source_5 = tmp_with_1__enter;
assert(var_f == NULL);
Py_INCREF(tmp_assign_source_5);
var_f = tmp_assign_source_5;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_response);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_chunk_size);
tmp_args_element_value_1 = par_chunk_size;
frame_frame_openai$_legacy_response$$$function__33_stream_to_file->m_frame.f_lineno = 452;
tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_iter_bytes, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_6;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_7 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooo";
exception_lineno = 452;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_8 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_data;
    var_data = tmp_assign_source_8;
    Py_INCREF(var_data);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
if (var_f == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_f);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 453;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}

tmp_called_instance_2 = var_f;
CHECK_OBJECT(var_data);
tmp_args_element_value_2 = var_data;
frame_frame_openai$_legacy_response$$$function__33_stream_to_file->m_frame.f_lineno = 453;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_write, tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 453;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
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

goto try_except_handler_4;
// End of try:
try_end_1:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_legacy_response$$$function__33_stream_to_file, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_legacy_response$$$function__33_stream_to_file, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_2);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_BaseException;
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
nuitka_bool tmp_assign_source_9;
tmp_assign_source_9 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_9;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_2 = tmp_with_1__exit;
tmp_args_element_value_3 = EXC_TYPE(tstate);
tmp_args_element_value_4 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_4); 
tmp_args_element_value_5 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_5 == NULL) {
    tmp_args_element_value_5 = Py_None;
}
frame_frame_openai$_legacy_response$$$function__33_stream_to_file->m_frame.f_lineno = 451;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_1 = "ooooo";
    goto try_except_handler_6;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_1 = "ooooo";
    goto try_except_handler_6;
}
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 451;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_openai$_legacy_response$$$function__33_stream_to_file->m_frame)) {
        frame_frame_openai$_legacy_response$$$function__33_stream_to_file->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
goto try_except_handler_6;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 451;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_openai$_legacy_response$$$function__33_stream_to_file->m_frame)) {
        frame_frame_openai$_legacy_response$$$function__33_stream_to_file->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
goto try_except_handler_6;
branch_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_3;
// End of try:
try_end_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
goto try_end_4;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_3;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = tmp_with_1__indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_3 = tmp_with_1__exit;
frame_frame_openai$_legacy_response$$$function__33_stream_to_file->m_frame.f_lineno = 451;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_3, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_4);

exception_lineno = 451;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_3:;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_2;
// End of try:
try_end_4:;
{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
frame_frame_openai$_legacy_response$$$function__33_stream_to_file->m_frame.f_lineno = 451;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_4:;
goto try_end_5;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_5:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_legacy_response$$$function__33_stream_to_file, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_legacy_response$$$function__33_stream_to_file->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_legacy_response$$$function__33_stream_to_file, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_legacy_response$$$function__33_stream_to_file,
    type_description_1,
    par_self,
    par_file,
    par_chunk_size,
    var_f,
    var_data
);


// Release cached frame if used for exception.
if (frame_frame_openai$_legacy_response$$$function__33_stream_to_file == cache_frame_frame_openai$_legacy_response$$$function__33_stream_to_file) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_legacy_response$$$function__33_stream_to_file);
    cache_frame_frame_openai$_legacy_response$$$function__33_stream_to_file = NULL;
}

assertFrameObject(frame_frame_openai$_legacy_response$$$function__33_stream_to_file);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(tmp_with_1__source);
CHECK_OBJECT(tmp_with_1__source);
Py_DECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
CHECK_OBJECT(tmp_with_1__enter);
CHECK_OBJECT(tmp_with_1__enter);
Py_DECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
CHECK_OBJECT(tmp_with_1__exit);
CHECK_OBJECT(tmp_with_1__exit);
Py_DECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_f);
var_f = NULL;
Py_XDECREF(var_data);
var_data = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_f);
var_f = NULL;
Py_XDECREF(var_data);
var_data = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_file);
Py_DECREF(par_file);
CHECK_OBJECT(par_chunk_size);
Py_DECREF(par_chunk_size);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_file);
Py_DECREF(par_file);
CHECK_OBJECT(par_chunk_size);
Py_DECREF(par_chunk_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$_legacy_response$$$function__34_close(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$_legacy_response$$$function__34_close;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_legacy_response$$$function__34_close = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_legacy_response$$$function__34_close)) {
    Py_XDECREF(cache_frame_frame_openai$_legacy_response$$$function__34_close);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_legacy_response$$$function__34_close == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_legacy_response$$$function__34_close = MAKE_FUNCTION_FRAME(tstate, code_objects_bee75934795f07fa35357944defe989c, module_openai$_legacy_response, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_legacy_response$$$function__34_close->m_type_description == NULL);
frame_frame_openai$_legacy_response$$$function__34_close = cache_frame_frame_openai$_legacy_response$$$function__34_close;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_legacy_response$$$function__34_close);
assert(Py_REFCNT(frame_frame_openai$_legacy_response$$$function__34_close) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_response);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 456;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_openai$_legacy_response$$$function__34_close->m_frame.f_lineno = 456;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_close);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 456;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_legacy_response$$$function__34_close, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_legacy_response$$$function__34_close->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_legacy_response$$$function__34_close, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_legacy_response$$$function__34_close,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$_legacy_response$$$function__34_close == cache_frame_frame_openai$_legacy_response$$$function__34_close) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_legacy_response$$$function__34_close);
    cache_frame_frame_openai$_legacy_response$$$function__34_close = NULL;
}

assertFrameObject(frame_frame_openai$_legacy_response$$$function__34_close);

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


static PyObject *impl_openai$_legacy_response$$$function__35_aread(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_openai$_legacy_response$$$function__35_aread$$$coroutine__1_aread(tstate, tmp_closure_1);

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
struct openai$_legacy_response$$$function__35_aread$$$coroutine__1_aread_locals {
char const *type_description_1;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
};
#endif

static PyObject *openai$_legacy_response$$$function__35_aread$$$coroutine__1_aread_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$_legacy_response$$$function__35_aread$$$coroutine__1_aread_locals *coroutine_heap = (struct openai$_legacy_response$$$function__35_aread$$$coroutine__1_aread_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_72e149ec62769d326477641473524133, module_openai$_legacy_response, sizeof(void *));
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
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_3;
coroutine->m_frame->m_frame.f_lineno = 459;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 459;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_response);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 459;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 459;
tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_aread);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 459;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 459;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 459;
coroutine_heap->type_description_1 = "c";
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
    coroutine->m_closure[0]
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

static PyObject *MAKE_COROUTINE_openai$_legacy_response$$$function__35_aread$$$coroutine__1_aread(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        openai$_legacy_response$$$function__35_aread$$$coroutine__1_aread_context,
        module_openai$_legacy_response,
        mod_consts.const_str_plain_aread,
        mod_consts.const_str_digest_70e1d3b21c714952c355e85f51bce1f8,
        code_objects_72e149ec62769d326477641473524133,
        closure,
        1,
#if 1
        sizeof(struct openai$_legacy_response$$$function__35_aread$$$coroutine__1_aread_locals)
#else
        0
#endif
    );
}


static PyObject *impl_openai$_legacy_response$$$function__36_aiter_bytes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_chunk_size = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_chunk_size;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_self;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_COROUTINE_openai$_legacy_response$$$function__36_aiter_bytes$$$coroutine__1_aiter_bytes(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_chunk_size);
CHECK_OBJECT(par_chunk_size);
Py_DECREF(par_chunk_size);
par_chunk_size = NULL;
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
struct openai$_legacy_response$$$function__36_aiter_bytes$$$coroutine__1_aiter_bytes_locals {
char const *type_description_1;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
};
#endif

static PyObject *openai$_legacy_response$$$function__36_aiter_bytes$$$coroutine__1_aiter_bytes_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$_legacy_response$$$function__36_aiter_bytes$$$coroutine__1_aiter_bytes_locals *coroutine_heap = (struct openai$_legacy_response$$$function__36_aiter_bytes$$$coroutine__1_aiter_bytes_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_de91c6bb8fcaa44aaab47293f73b4b54, module_openai$_legacy_response, sizeof(void *)+sizeof(void *));
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 462;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_response);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 462;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_aiter_bytes);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 462;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_chunk_size);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 462;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine->m_frame->m_frame.f_lineno = 462;
coroutine_heap->tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (coroutine_heap->tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 462;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
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
    coroutine->m_closure[1],
    coroutine->m_closure[0]
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

static PyObject *MAKE_COROUTINE_openai$_legacy_response$$$function__36_aiter_bytes$$$coroutine__1_aiter_bytes(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        openai$_legacy_response$$$function__36_aiter_bytes$$$coroutine__1_aiter_bytes_context,
        module_openai$_legacy_response,
        mod_consts.const_str_plain_aiter_bytes,
        mod_consts.const_str_digest_48ed87d8dd090fe0fa9fcda2c7593b4b,
        code_objects_de91c6bb8fcaa44aaab47293f73b4b54,
        closure,
        2,
#if 1
        sizeof(struct openai$_legacy_response$$$function__36_aiter_bytes$$$coroutine__1_aiter_bytes_locals)
#else
        0
#endif
    );
}


static PyObject *impl_openai$_legacy_response$$$function__37_aiter_text(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_chunk_size = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_chunk_size;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_self;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_COROUTINE_openai$_legacy_response$$$function__37_aiter_text$$$coroutine__1_aiter_text(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_chunk_size);
CHECK_OBJECT(par_chunk_size);
Py_DECREF(par_chunk_size);
par_chunk_size = NULL;
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
struct openai$_legacy_response$$$function__37_aiter_text$$$coroutine__1_aiter_text_locals {
char const *type_description_1;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
};
#endif

static PyObject *openai$_legacy_response$$$function__37_aiter_text$$$coroutine__1_aiter_text_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$_legacy_response$$$function__37_aiter_text$$$coroutine__1_aiter_text_locals *coroutine_heap = (struct openai$_legacy_response$$$function__37_aiter_text$$$coroutine__1_aiter_text_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_955b34763ea16cf909094b9ef6bcf99f, module_openai$_legacy_response, sizeof(void *)+sizeof(void *));
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 465;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_response);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 465;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_aiter_text);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 465;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_chunk_size);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 465;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine->m_frame->m_frame.f_lineno = 465;
coroutine_heap->tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (coroutine_heap->tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 465;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
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
    coroutine->m_closure[1],
    coroutine->m_closure[0]
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

static PyObject *MAKE_COROUTINE_openai$_legacy_response$$$function__37_aiter_text$$$coroutine__1_aiter_text(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        openai$_legacy_response$$$function__37_aiter_text$$$coroutine__1_aiter_text_context,
        module_openai$_legacy_response,
        mod_consts.const_str_plain_aiter_text,
        mod_consts.const_str_digest_fe99cda0df968277a353847fa2334330,
        code_objects_955b34763ea16cf909094b9ef6bcf99f,
        closure,
        2,
#if 1
        sizeof(struct openai$_legacy_response$$$function__37_aiter_text$$$coroutine__1_aiter_text_locals)
#else
        0
#endif
    );
}


static PyObject *impl_openai$_legacy_response$$$function__38_aiter_lines(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_openai$_legacy_response$$$function__38_aiter_lines$$$coroutine__1_aiter_lines(tstate, tmp_closure_1);

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
struct openai$_legacy_response$$$function__38_aiter_lines$$$coroutine__1_aiter_lines_locals {
char const *type_description_1;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
};
#endif

static PyObject *openai$_legacy_response$$$function__38_aiter_lines$$$coroutine__1_aiter_lines_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$_legacy_response$$$function__38_aiter_lines$$$coroutine__1_aiter_lines_locals *coroutine_heap = (struct openai$_legacy_response$$$function__38_aiter_lines$$$coroutine__1_aiter_lines_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_91a92d6a519d851ee8ddd4f84b84cfe8, module_openai$_legacy_response, sizeof(void *));
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
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 468;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_response);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 468;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 468;
coroutine_heap->tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_aiter_lines);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (coroutine_heap->tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 468;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
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
    coroutine->m_closure[0]
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

static PyObject *MAKE_COROUTINE_openai$_legacy_response$$$function__38_aiter_lines$$$coroutine__1_aiter_lines(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        openai$_legacy_response$$$function__38_aiter_lines$$$coroutine__1_aiter_lines_context,
        module_openai$_legacy_response,
        mod_consts.const_str_plain_aiter_lines,
        mod_consts.const_str_digest_211a226f678533b98d969a55c72331ad,
        code_objects_91a92d6a519d851ee8ddd4f84b84cfe8,
        closure,
        1,
#if 1
        sizeof(struct openai$_legacy_response$$$function__38_aiter_lines$$$coroutine__1_aiter_lines_locals)
#else
        0
#endif
    );
}


static PyObject *impl_openai$_legacy_response$$$function__39_aiter_raw(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_chunk_size = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_chunk_size;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_self;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_COROUTINE_openai$_legacy_response$$$function__39_aiter_raw$$$coroutine__1_aiter_raw(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_chunk_size);
CHECK_OBJECT(par_chunk_size);
Py_DECREF(par_chunk_size);
par_chunk_size = NULL;
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
struct openai$_legacy_response$$$function__39_aiter_raw$$$coroutine__1_aiter_raw_locals {
char const *type_description_1;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
};
#endif

static PyObject *openai$_legacy_response$$$function__39_aiter_raw$$$coroutine__1_aiter_raw_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$_legacy_response$$$function__39_aiter_raw$$$coroutine__1_aiter_raw_locals *coroutine_heap = (struct openai$_legacy_response$$$function__39_aiter_raw$$$coroutine__1_aiter_raw_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_52b3fc2a4eb0dda233d272f4720363c0, module_openai$_legacy_response, sizeof(void *)+sizeof(void *));
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 471;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_response);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 471;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_aiter_raw);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 471;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_chunk_size);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 471;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine->m_frame->m_frame.f_lineno = 471;
coroutine_heap->tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (coroutine_heap->tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 471;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
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
    coroutine->m_closure[1],
    coroutine->m_closure[0]
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

static PyObject *MAKE_COROUTINE_openai$_legacy_response$$$function__39_aiter_raw$$$coroutine__1_aiter_raw(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        openai$_legacy_response$$$function__39_aiter_raw$$$coroutine__1_aiter_raw_context,
        module_openai$_legacy_response,
        mod_consts.const_str_plain_aiter_raw,
        mod_consts.const_str_digest_d9ddc6a693ee705ead6cc9d0efd0637a,
        code_objects_52b3fc2a4eb0dda233d272f4720363c0,
        closure,
        2,
#if 1
        sizeof(struct openai$_legacy_response$$$function__39_aiter_raw$$$coroutine__1_aiter_raw_locals)
#else
        0
#endif
    );
}


static PyObject *impl_openai$_legacy_response$$$function__40_astream_to_file(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_file = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_chunk_size = Nuitka_Cell_New1(python_pars[2]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[3];
tmp_closure_1[0] = par_chunk_size;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_file;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_self;
Py_INCREF(tmp_closure_1[2]);
tmp_return_value = MAKE_COROUTINE_openai$_legacy_response$$$function__40_astream_to_file$$$coroutine__1_astream_to_file(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_file);
CHECK_OBJECT(par_file);
Py_DECREF(par_file);
par_file = NULL;
CHECK_OBJECT(par_chunk_size);
CHECK_OBJECT(par_chunk_size);
Py_DECREF(par_chunk_size);
par_chunk_size = NULL;
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
struct openai$_legacy_response$$$function__40_astream_to_file$$$coroutine__1_astream_to_file_locals {
PyObject *var_path;
PyObject *var_f;
PyObject *var_data;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
PyObject *tmp_with_1__enter;
PyObject *tmp_with_1__exit;
nuitka_bool tmp_with_1__indicator;
PyObject *tmp_with_1__source;
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
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
int exception_keeper_lineno_6;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
int exception_keeper_lineno_7;
};
#endif

static PyObject *openai$_legacy_response$$$function__40_astream_to_file$$$coroutine__1_astream_to_file_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$_legacy_response$$$function__40_astream_to_file$$$coroutine__1_astream_to_file_locals *coroutine_heap = (struct openai$_legacy_response$$$function__40_astream_to_file$$$coroutine__1_astream_to_file_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 8: goto yield_return_8;
case 7: goto yield_return_7;
case 6: goto yield_return_6;
case 5: goto yield_return_5;
case 4: goto yield_return_4;
case 3: goto yield_return_3;
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_path = NULL;
coroutine_heap->var_f = NULL;
coroutine_heap->var_data = NULL;
coroutine_heap->tmp_for_loop_1__for_iterator = NULL;
coroutine_heap->tmp_for_loop_1__iter_value = NULL;
coroutine_heap->tmp_with_1__enter = NULL;
coroutine_heap->tmp_with_1__exit = NULL;
coroutine_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
coroutine_heap->tmp_with_1__source = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_fd9fdc5cbcf08e80bc9fa4815e99769e, module_openai$_legacy_response, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
tmp_expression_value_1 = module_var_accessor_openai$_legacy_response$anyio(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_anyio);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 482;
coroutine_heap->type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_Path);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 482;
coroutine_heap->type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain_file);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 482;
coroutine_heap->type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine->m_frame->m_frame.f_lineno = 482;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 482;
coroutine_heap->type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_path == NULL);
coroutine_heap->var_path = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
coroutine->m_frame->m_frame.f_lineno = 483;
CHECK_OBJECT(coroutine_heap->var_path);
tmp_expression_value_4 = coroutine_heap->var_path;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_open);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 483;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_2;
}
coroutine->m_frame->m_frame.f_lineno = 483;
tmp_expression_value_3 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_wb_tuple, 0), mod_consts.const_tuple_str_plain_mode_tuple);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 483;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_2;
}
tmp_expression_value_2 = ASYNC_AWAIT(tstate, tmp_expression_value_3, await_normal);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 483;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_2;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 483;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = yield_return_value;
assert(coroutine_heap->tmp_with_1__source == NULL);
coroutine_heap->tmp_with_1__source = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
tmp_expression_value_5 = coroutine_heap->tmp_with_1__source;
tmp_called_value_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_5, const_str_plain___aenter__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 483;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_2;
}
coroutine->m_frame->m_frame.f_lineno = 483;
tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 483;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_2;
}
assert(coroutine_heap->tmp_with_1__enter == NULL);
coroutine_heap->tmp_with_1__enter = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
tmp_expression_value_6 = coroutine_heap->tmp_with_1__source;
tmp_assign_source_4 = LOOKUP_SPECIAL(tstate, tmp_expression_value_6, const_str_plain___aexit__);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 483;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_2;
}
assert(coroutine_heap->tmp_with_1__exit == NULL);
coroutine_heap->tmp_with_1__exit = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
coroutine->m_frame->m_frame.f_lineno = 483;
CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
tmp_expression_value_8 = coroutine_heap->tmp_with_1__enter;
tmp_expression_value_7 = ASYNC_AWAIT(tstate, tmp_expression_value_8, await_enter);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 483;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_8, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_7;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_8, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 483;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_2;
}
tmp_assign_source_5 = yield_return_value;
{
    PyObject *old = coroutine_heap->tmp_with_1__enter;
    assert(old != NULL);
    coroutine_heap->tmp_with_1__enter = tmp_assign_source_5;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_assign_source_6;
tmp_assign_source_6 = NUITKA_BOOL_TRUE;
coroutine_heap->tmp_with_1__indicator = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
tmp_assign_source_7 = coroutine_heap->tmp_with_1__enter;
assert(coroutine_heap->var_f == NULL);
Py_INCREF(tmp_assign_source_7);
coroutine_heap->var_f = tmp_assign_source_7;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_value_value_1;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_2;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 484;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}

tmp_expression_value_11 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_response);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 484;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_aiter_bytes);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 484;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_4);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_chunk_size);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 484;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}

tmp_args_element_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine->m_frame->m_frame.f_lineno = 484;
tmp_value_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 484;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}
tmp_expression_value_9 = ASYNC_MAKE_ITERATOR(tstate, tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 484;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_value_value_1, sizeof(PyObject *), &tmp_called_value_4, sizeof(PyObject *), &tmp_expression_value_10, sizeof(PyObject *), &tmp_expression_value_11, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 3;
coroutine->m_yield_from = tmp_expression_value_9;
coroutine->m_awaiting = true;
return NULL;

yield_return_3:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_value_value_1, sizeof(PyObject *), &tmp_called_value_4, sizeof(PyObject *), &tmp_expression_value_10, sizeof(PyObject *), &tmp_expression_value_11, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 484;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}
tmp_assign_source_8 = yield_return_value;
assert(coroutine_heap->tmp_for_loop_1__for_iterator == NULL);
coroutine_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_8;
}
// Tried code:
loop_start_1:;
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_expression_value_12;
PyObject *tmp_value_value_2;
CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__for_iterator);
tmp_value_value_2 = coroutine_heap->tmp_for_loop_1__for_iterator;
tmp_expression_value_12 = ASYNC_ITERATOR_NEXT(tstate, tmp_value_value_2);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 484;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_6;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_value_value_2, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 4;
coroutine->m_yield_from = tmp_expression_value_12;
coroutine->m_awaiting = true;
return NULL;

yield_return_4:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_value_value_2, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 484;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_6;
}
tmp_assign_source_9 = yield_return_value;
{
    PyObject *old = coroutine_heap->tmp_for_loop_1__iter_value;
    coroutine_heap->tmp_for_loop_1__iter_value = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
goto try_end_1;
// Exception handler code:
try_except_handler_6:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = coroutine_heap->exception_keeper_name_1.exception_value;
tmp_cmp_expr_right_1 = PyExc_StopAsyncIteration;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_1 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_1);
goto loop_end_1;
goto branch_end_1;
branch_no_1:;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_1;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

goto try_except_handler_5;
branch_end_1:;
// End of try:
try_end_1:;
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__iter_value);
tmp_assign_source_10 = coroutine_heap->tmp_for_loop_1__iter_value;
{
    PyObject *old = coroutine_heap->var_data;
    coroutine_heap->var_data = tmp_assign_source_10;
    Py_INCREF(coroutine_heap->var_data);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 485;
if (coroutine_heap->var_f == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_f);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 485;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_5;
}

tmp_called_instance_1 = coroutine_heap->var_f;
CHECK_OBJECT(coroutine_heap->var_data);
tmp_args_element_value_3 = coroutine_heap->var_data;
coroutine->m_frame->m_frame.f_lineno = 485;
tmp_expression_value_14 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_write, tmp_args_element_value_3);
if (tmp_expression_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 485;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_5;
}
tmp_expression_value_13 = ASYNC_AWAIT(tstate, tmp_expression_value_14, await_normal);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 485;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_5;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_14, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 5;
coroutine->m_yield_from = tmp_expression_value_13;
coroutine->m_awaiting = true;
return NULL;

yield_return_5:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_14, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 485;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_5;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 484;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_5;
}
goto loop_start_1;
loop_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_5:;
coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_2 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->tmp_for_loop_1__iter_value);
coroutine_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(coroutine_heap->tmp_for_loop_1__for_iterator);
coroutine_heap->tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_2;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

goto try_except_handler_4;
// End of try:
try_end_2:;
Py_XDECREF(coroutine_heap->tmp_for_loop_1__iter_value);
coroutine_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(coroutine_heap->tmp_for_loop_1__for_iterator);
coroutine_heap->tmp_for_loop_1__for_iterator = NULL;
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_3 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Preserve existing published exception id 1.
coroutine_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_3, exception_tb);
    } else if (coroutine_heap->exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_BaseException;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_2 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
nuitka_bool tmp_assign_source_11;
tmp_assign_source_11 = NUITKA_BOOL_FALSE;
coroutine_heap->tmp_with_1__indicator = tmp_assign_source_11;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
coroutine->m_frame->m_frame.f_lineno = 483;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_5 = coroutine_heap->tmp_with_1__exit;
tmp_args_element_value_4 = EXC_TYPE(tstate);
tmp_args_element_value_5 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_5); 
tmp_args_element_value_6 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_6 == NULL) {
    tmp_args_element_value_6 = Py_None;
}
coroutine->m_frame->m_frame.f_lineno = 483;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_expression_value_16 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 483;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_7;
}
tmp_expression_value_15 = ASYNC_AWAIT(tstate, tmp_expression_value_16, await_exit);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 483;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_7;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_condition_result_3, sizeof(bool), &tmp_expression_value_16, sizeof(PyObject *), &tmp_called_value_5, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), NULL);
SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
coroutine->m_yield_return_index = 6;
coroutine->m_yield_from = tmp_expression_value_15;
coroutine->m_awaiting = true;
return NULL;

yield_return_6:
RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_condition_result_3, sizeof(bool), &tmp_expression_value_16, sizeof(PyObject *), &tmp_called_value_5, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 483;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_7;
}
tmp_operand_value_1 = yield_return_value;
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 483;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_7;
}
tmp_condition_result_3 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 483;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cccooo";
goto try_except_handler_7;
branch_no_3:;
goto branch_end_2;
branch_no_2:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 483;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cccooo";
goto try_except_handler_7;
branch_end_2:;
goto try_end_4;
// Exception handler code:
try_except_handler_7:;
coroutine_heap->exception_keeper_lineno_4 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_4 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_4;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_4;

goto try_except_handler_3;
// End of try:
try_end_4:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

goto try_end_3;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_3:;
goto try_end_5;
// Exception handler code:
try_except_handler_3:;
coroutine_heap->exception_keeper_lineno_5 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_5 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = coroutine_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_expression_value_17;
PyObject *tmp_expression_value_18;
PyObject *tmp_called_value_6;
PyObject *tmp_await_result_2;
coroutine->m_frame->m_frame.f_lineno = 483;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_6 = coroutine_heap->tmp_with_1__exit;
coroutine->m_frame->m_frame.f_lineno = 483;
tmp_expression_value_18 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_expression_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_5);

coroutine_heap->exception_lineno = 483;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_2;
}
tmp_expression_value_17 = ASYNC_AWAIT(tstate, tmp_expression_value_18, await_exit);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_expression_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_5);

coroutine_heap->exception_lineno = 483;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_18, sizeof(PyObject *), &tmp_called_value_6, sizeof(PyObject *), NULL);
SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
coroutine->m_yield_return_index = 7;
coroutine->m_yield_from = tmp_expression_value_17;
coroutine->m_awaiting = true;
return NULL;

yield_return_7:
RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_18, sizeof(PyObject *), &tmp_called_value_6, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_5);

coroutine_heap->exception_lineno = 483;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_2;
}
tmp_await_result_2 = yield_return_value;
CHECK_OBJECT(tmp_await_result_2);
Py_DECREF(tmp_await_result_2);
}
branch_no_4:;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_5;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_5;

goto try_except_handler_2;
// End of try:
try_end_5:;
{
bool tmp_condition_result_5;
nuitka_bool tmp_cmp_expr_left_4;
nuitka_bool tmp_cmp_expr_right_4;
assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_4 = coroutine_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
tmp_condition_result_5 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_expression_value_19;
PyObject *tmp_expression_value_20;
PyObject *tmp_called_value_7;
PyObject *tmp_await_result_3;
coroutine->m_frame->m_frame.f_lineno = 483;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_7 = coroutine_heap->tmp_with_1__exit;
coroutine->m_frame->m_frame.f_lineno = 483;
tmp_expression_value_20 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_7, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_expression_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 483;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_2;
}
tmp_expression_value_19 = ASYNC_AWAIT(tstate, tmp_expression_value_20, await_exit);
CHECK_OBJECT(tmp_expression_value_20);
Py_DECREF(tmp_expression_value_20);
if (tmp_expression_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 483;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_20, sizeof(PyObject *), &tmp_called_value_7, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 8;
coroutine->m_yield_from = tmp_expression_value_19;
coroutine->m_awaiting = true;
return NULL;

yield_return_8:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_20, sizeof(PyObject *), &tmp_called_value_7, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 483;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_2;
}
tmp_await_result_3 = yield_return_value;
CHECK_OBJECT(tmp_await_result_3);
Py_DECREF(tmp_await_result_3);
}
branch_no_5:;
goto try_end_6;
// Exception handler code:
try_except_handler_2:;
coroutine_heap->exception_keeper_lineno_6 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_6 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->tmp_with_1__source);
coroutine_heap->tmp_with_1__source = NULL;
Py_XDECREF(coroutine_heap->tmp_with_1__enter);
coroutine_heap->tmp_with_1__enter = NULL;
Py_XDECREF(coroutine_heap->tmp_with_1__exit);
coroutine_heap->tmp_with_1__exit = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_6;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
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
    coroutine->m_closure[1],
    coroutine->m_closure[0],
    coroutine_heap->var_path,
    coroutine_heap->var_f,
    coroutine_heap->var_data
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
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
Py_DECREF(coroutine_heap->tmp_with_1__source);
coroutine_heap->tmp_with_1__source = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
Py_DECREF(coroutine_heap->tmp_with_1__enter);
coroutine_heap->tmp_with_1__enter = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
Py_DECREF(coroutine_heap->tmp_with_1__exit);
coroutine_heap->tmp_with_1__exit = NULL;
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(coroutine_heap->var_path);
CHECK_OBJECT(coroutine_heap->var_path);
Py_DECREF(coroutine_heap->var_path);
coroutine_heap->var_path = NULL;
Py_XDECREF(coroutine_heap->var_f);
coroutine_heap->var_f = NULL;
Py_XDECREF(coroutine_heap->var_data);
coroutine_heap->var_data = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_7 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_7 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_path);
coroutine_heap->var_path = NULL;
Py_XDECREF(coroutine_heap->var_f);
coroutine_heap->var_f = NULL;
Py_XDECREF(coroutine_heap->var_data);
coroutine_heap->var_data = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_7;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_7;

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

static PyObject *MAKE_COROUTINE_openai$_legacy_response$$$function__40_astream_to_file$$$coroutine__1_astream_to_file(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        openai$_legacy_response$$$function__40_astream_to_file$$$coroutine__1_astream_to_file_context,
        module_openai$_legacy_response,
        mod_consts.const_str_plain_astream_to_file,
        mod_consts.const_str_digest_42ed249506a138762fc3f37cf84a965f,
        code_objects_fd9fdc5cbcf08e80bc9fa4815e99769e,
        closure,
        3,
#if 1
        sizeof(struct openai$_legacy_response$$$function__40_astream_to_file$$$coroutine__1_astream_to_file_locals)
#else
        0
#endif
    );
}


static PyObject *impl_openai$_legacy_response$$$function__41_aclose(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_openai$_legacy_response$$$function__41_aclose$$$coroutine__1_aclose(tstate, tmp_closure_1);

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
struct openai$_legacy_response$$$function__41_aclose$$$coroutine__1_aclose_locals {
char const *type_description_1;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
};
#endif

static PyObject *openai$_legacy_response$$$function__41_aclose$$$coroutine__1_aclose_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$_legacy_response$$$function__41_aclose$$$coroutine__1_aclose_locals *coroutine_heap = (struct openai$_legacy_response$$$function__41_aclose$$$coroutine__1_aclose_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_ce9edee518fbb619bcd48af7ba469576, module_openai$_legacy_response, sizeof(void *));
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
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_3;
coroutine->m_frame->m_frame.f_lineno = 488;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 488;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_response);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 488;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 488;
tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_aclose);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 488;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 488;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 488;
coroutine_heap->type_description_1 = "c";
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
    coroutine->m_closure[0]
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

static PyObject *MAKE_COROUTINE_openai$_legacy_response$$$function__41_aclose$$$coroutine__1_aclose(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        openai$_legacy_response$$$function__41_aclose$$$coroutine__1_aclose_context,
        module_openai$_legacy_response,
        mod_consts.const_str_plain_aclose,
        mod_consts.const_str_digest_1e6b1cb86f0508d31cf5695dfe9b0be9,
        code_objects_ce9edee518fbb619bcd48af7ba469576,
        closure,
        1,
#if 1
        sizeof(struct openai$_legacy_response$$$function__41_aclose$$$coroutine__1_aclose_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__10_method(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_legacy_response$$$function__10_method,
        mod_consts.const_str_plain_method,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2af2a3d29e3e2577c4d61b6f4ece995b,
#endif
        code_objects_272e58165fbb8f6a8d6cd84d693cbbf8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_legacy_response,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__11_content(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_legacy_response$$$function__11_content,
        mod_consts.const_str_plain_content,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0c894799a7f7600e63cd5bbd73a48765,
#endif
        code_objects_e8dca49a07326249718ec8c336da1475,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_legacy_response,
        mod_consts.const_str_digest_9fc86fa1388202d8834a97f1a1c49057,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__12_text(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_legacy_response$$$function__12_text,
        mod_consts.const_str_plain_text,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_cf9a6cd2716569d8a830513fa4cc0d73,
#endif
        code_objects_c3633a29756a4f633c6cd423eba6a392,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_legacy_response,
        mod_consts.const_str_digest_eb905b5b06a82a22979d51d9f7473385,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__13_http_version(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_legacy_response$$$function__13_http_version,
        mod_consts.const_str_plain_http_version,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c37d99dc93910202f42b19ca56f4a9dc,
#endif
        code_objects_5c42d348a70f6446f641b931cfb656b5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_legacy_response,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__14_is_closed(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_legacy_response$$$function__14_is_closed,
        mod_consts.const_str_plain_is_closed,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_03d96647a8e7d7a2a101441806f52a3c,
#endif
        code_objects_649bac9972892f6d65d7f611771cf40d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_legacy_response,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__15_elapsed(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_legacy_response$$$function__15_elapsed,
        mod_consts.const_str_plain_elapsed,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fa6dfc1f4482ad869f974a6d09faf2fd,
#endif
        code_objects_bb3c271dfb95c675dd1691c71b4505f2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_legacy_response,
        mod_consts.const_str_digest_7f6f1ba60f52c5801303cb6bd40e8ce2,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__16__parse(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_legacy_response$$$function__16__parse,
        mod_consts.const_str_plain__parse,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_50ccdad44ee42e3611328a3d080fc065,
#endif
        code_objects_b5e1058365737334b14e4326fc6dd85e,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$_legacy_response,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__17___repr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_legacy_response$$$function__17___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4658ceca6bb1042fc81752459395cca8,
#endif
        code_objects_1e5d1d36b69abfcfcd358e63e98c8f37,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_legacy_response,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__18___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_legacy_response$$$function__18___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e2478e2e2308ce0cc96707836dbcacd5,
#endif
        code_objects_cd86da0aba694d924f961faa5cc15584,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_legacy_response,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__19_to_raw_response_wrapper(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_legacy_response$$$function__19_to_raw_response_wrapper,
        mod_consts.const_str_plain_to_raw_response_wrapper,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6ed4ac8df1370822f59540835a205cdf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_legacy_response,
        mod_consts.const_str_digest_7c97f874082fd03708ea8942e706fcbb,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__19_to_raw_response_wrapper$$$function__1_wrapped(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_legacy_response$$$function__19_to_raw_response_wrapper$$$function__1_wrapped,
        mod_consts.const_str_plain_wrapped,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_69e8a5fbf48fd004547d2bac357739cd,
#endif
        code_objects_d1a21472ad5c9decbfad3cff0a23ca28,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_legacy_response,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__1___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_legacy_response$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8638803ce0356d04d0103db3a3e9d6bb,
#endif
        code_objects_dd57bf315674f1971583963dd0e428cc,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$_legacy_response,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__20_async_to_raw_response_wrapper(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_legacy_response$$$function__20_async_to_raw_response_wrapper,
        mod_consts.const_str_plain_async_to_raw_response_wrapper,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5bbc91b93fd5ef6edf6540892ea20404,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_legacy_response,
        mod_consts.const_str_digest_7c97f874082fd03708ea8942e706fcbb,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__20_async_to_raw_response_wrapper$$$function__1_wrapped(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_legacy_response$$$function__20_async_to_raw_response_wrapper$$$function__1_wrapped,
        mod_consts.const_str_plain_wrapped,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ece4072b36db9c798f8cf693482ca28d,
#endif
        code_objects_6c979cbae8c284068a1a0df52b5c1dae,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_legacy_response,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__21___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_legacy_response$$$function__21___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_039fb0760cc676df107ac5b185c14afc,
#endif
        code_objects_3eb923013288915aff39f4140acbd656,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_legacy_response,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__22_content(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_legacy_response$$$function__22_content,
        mod_consts.const_str_plain_content,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7ec112cc33728e62117faa6e661ff2e8,
#endif
        code_objects_cc75da1a0172f795a7de7f343aaa8fb4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_legacy_response,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__23_text(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_legacy_response$$$function__23_text,
        mod_consts.const_str_plain_text,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5a39e66e9ce1d2aa0874832f618f4c65,
#endif
        code_objects_6b36ad34cb9fbdd37570f331d054c9d4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_legacy_response,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__24_encoding(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_legacy_response$$$function__24_encoding,
        const_str_plain_encoding,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_cfd37198786706495530e78479c34af2,
#endif
        code_objects_02364e9758fb294ca49b490005055c42,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_legacy_response,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__25_charset_encoding(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_legacy_response$$$function__25_charset_encoding,
        mod_consts.const_str_plain_charset_encoding,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ea02253d2ac6b13198ecb43fde117bfe,
#endif
        code_objects_23142a7e64faebc88129dffb1f09301a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_legacy_response,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__26_json(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_legacy_response$$$function__26_json,
        mod_consts.const_str_plain_json,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d1c6d20f45c93b73c9fe302b9f81ecc7,
#endif
        code_objects_e6d6aca35dd6f2ed8523fe3ec618ad8f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_legacy_response,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__27_read(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_legacy_response$$$function__27_read,
        const_str_plain_read,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4b8ba7f75337ed6f39d85eafef9a368f,
#endif
        code_objects_744bbe803a829651bf60accd01ee6aa9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_legacy_response,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__28_iter_bytes(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_legacy_response$$$function__28_iter_bytes,
        mod_consts.const_str_plain_iter_bytes,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ec303bec879c64a38130cb1ab53ee6ba,
#endif
        code_objects_eb5ea1bc3c6f1b3ebeaacd5b851ca83e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_legacy_response,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__29_iter_text(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_legacy_response$$$function__29_iter_text,
        mod_consts.const_str_plain_iter_text,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_54fc8940cae39dfd0ff2398d14f81f1b,
#endif
        code_objects_b3a6eaca2368085da00f33d8aa4f98a4,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_legacy_response,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__2_request_id(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_legacy_response$$$function__2_request_id,
        mod_consts.const_str_plain_request_id,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_75da570e84f95ea4b94e6a1787e8a6cd,
#endif
        code_objects_2c8e70db0a2dffc7d4a4216d9e3750a4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_legacy_response,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__30_iter_lines(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_legacy_response$$$function__30_iter_lines,
        mod_consts.const_str_plain_iter_lines,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_de68aa625081d15347e4315bd85446a3,
#endif
        code_objects_3af9203398d37f3134756e885a000d9a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_legacy_response,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__31_iter_raw(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_legacy_response$$$function__31_iter_raw,
        mod_consts.const_str_plain_iter_raw,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2301f03e76f57662a070919138caad9a,
#endif
        code_objects_2a54c315c8ba9e0f6b6bed095452436b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_legacy_response,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__32_write_to_file(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_legacy_response$$$function__32_write_to_file,
        mod_consts.const_str_plain_write_to_file,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a1e831b04086e67b3a35c5b50e577878,
#endif
        code_objects_504ac6fd7925b10a0ceb0c1a2903a529,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_legacy_response,
        mod_consts.const_str_digest_62038b0784dfff25fd3170faff589fb7,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__33_stream_to_file(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_legacy_response$$$function__33_stream_to_file,
        mod_consts.const_str_plain_stream_to_file,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3530aab6952a4829b057422876525a21,
#endif
        code_objects_072d88870607476764fbec2ff63fe945,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$_legacy_response,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__34_close(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_legacy_response$$$function__34_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7a1242fbafaff568ce909c619ab8328c,
#endif
        code_objects_bee75934795f07fa35357944defe989c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_legacy_response,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__35_aread(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_legacy_response$$$function__35_aread,
        mod_consts.const_str_plain_aread,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_70e1d3b21c714952c355e85f51bce1f8,
#endif
        code_objects_72e149ec62769d326477641473524133,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_legacy_response,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__36_aiter_bytes(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_legacy_response$$$function__36_aiter_bytes,
        mod_consts.const_str_plain_aiter_bytes,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_48ed87d8dd090fe0fa9fcda2c7593b4b,
#endif
        code_objects_de91c6bb8fcaa44aaab47293f73b4b54,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_legacy_response,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__37_aiter_text(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_legacy_response$$$function__37_aiter_text,
        mod_consts.const_str_plain_aiter_text,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fe99cda0df968277a353847fa2334330,
#endif
        code_objects_955b34763ea16cf909094b9ef6bcf99f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_legacy_response,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__38_aiter_lines(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_legacy_response$$$function__38_aiter_lines,
        mod_consts.const_str_plain_aiter_lines,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_211a226f678533b98d969a55c72331ad,
#endif
        code_objects_91a92d6a519d851ee8ddd4f84b84cfe8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_legacy_response,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__39_aiter_raw(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_legacy_response$$$function__39_aiter_raw,
        mod_consts.const_str_plain_aiter_raw,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d9ddc6a693ee705ead6cc9d0efd0637a,
#endif
        code_objects_52b3fc2a4eb0dda233d272f4720363c0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_legacy_response,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__3_parse(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_parse,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_516842115db5f3bd680931dcafaa02d3,
#endif
        code_objects_cfe76c812ee18857e7240039e2165285,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_legacy_response,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__40_astream_to_file(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_legacy_response$$$function__40_astream_to_file,
        mod_consts.const_str_plain_astream_to_file,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_42ed249506a138762fc3f37cf84a965f,
#endif
        code_objects_fd9fdc5cbcf08e80bc9fa4815e99769e,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$_legacy_response,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__41_aclose(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_legacy_response$$$function__41_aclose,
        mod_consts.const_str_plain_aclose,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1e6b1cb86f0508d31cf5695dfe9b0be9,
#endif
        code_objects_ce9edee518fbb619bcd48af7ba469576,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_legacy_response,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__4_parse(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_parse,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_516842115db5f3bd680931dcafaa02d3,
#endif
        code_objects_050caa75987f063a949d517b0c82da68,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_legacy_response,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__5_parse(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_legacy_response$$$function__5_parse,
        mod_consts.const_str_plain_parse,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_516842115db5f3bd680931dcafaa02d3,
#endif
        code_objects_6022fb761c11c25986f5288361777e96,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$_legacy_response,
        mod_consts.const_str_digest_2f75afbdd694f98d421e5fa076317702,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__6_headers(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_legacy_response$$$function__6_headers,
        mod_consts.const_str_plain_headers,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_daadefa1c5c1faf6d7f898a86e06e69a,
#endif
        code_objects_fe169a8c3530fe5e4774f63df5f7e808,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_legacy_response,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__7_http_request(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_legacy_response$$$function__7_http_request,
        mod_consts.const_str_plain_http_request,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_858b38ba4a235e1694d9c278c0ca1490,
#endif
        code_objects_8a0dddd45440a784a1fa7dfb3bed01c8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_legacy_response,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__8_status_code(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_legacy_response$$$function__8_status_code,
        mod_consts.const_str_plain_status_code,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2bbd210cddc42fd633ea28e56d696a56,
#endif
        code_objects_d83c8b57dc52d62a75f0cb2b1c51ce2b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_legacy_response,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_legacy_response$$$function__9_url(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_legacy_response$$$function__9_url,
        mod_consts.const_str_plain_url,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e69debb7c50535710433476ceae860bb,
#endif
        code_objects_49981829b080cb7809a8be574f18d858,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_legacy_response,
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

static function_impl_code const function_table_openai$_legacy_response[] = {
impl_openai$_legacy_response$$$function__19_to_raw_response_wrapper$$$function__1_wrapped,
impl_openai$_legacy_response$$$function__20_async_to_raw_response_wrapper$$$function__1_wrapped,
impl_openai$_legacy_response$$$function__1___init__,
impl_openai$_legacy_response$$$function__2_request_id,
impl_openai$_legacy_response$$$function__5_parse,
impl_openai$_legacy_response$$$function__6_headers,
impl_openai$_legacy_response$$$function__7_http_request,
impl_openai$_legacy_response$$$function__8_status_code,
impl_openai$_legacy_response$$$function__9_url,
impl_openai$_legacy_response$$$function__10_method,
impl_openai$_legacy_response$$$function__11_content,
impl_openai$_legacy_response$$$function__12_text,
impl_openai$_legacy_response$$$function__13_http_version,
impl_openai$_legacy_response$$$function__14_is_closed,
impl_openai$_legacy_response$$$function__15_elapsed,
impl_openai$_legacy_response$$$function__16__parse,
impl_openai$_legacy_response$$$function__17___repr__,
impl_openai$_legacy_response$$$function__18___init__,
impl_openai$_legacy_response$$$function__19_to_raw_response_wrapper,
impl_openai$_legacy_response$$$function__20_async_to_raw_response_wrapper,
impl_openai$_legacy_response$$$function__21___init__,
impl_openai$_legacy_response$$$function__22_content,
impl_openai$_legacy_response$$$function__23_text,
impl_openai$_legacy_response$$$function__24_encoding,
impl_openai$_legacy_response$$$function__25_charset_encoding,
impl_openai$_legacy_response$$$function__26_json,
impl_openai$_legacy_response$$$function__27_read,
impl_openai$_legacy_response$$$function__28_iter_bytes,
impl_openai$_legacy_response$$$function__29_iter_text,
impl_openai$_legacy_response$$$function__30_iter_lines,
impl_openai$_legacy_response$$$function__31_iter_raw,
impl_openai$_legacy_response$$$function__32_write_to_file,
impl_openai$_legacy_response$$$function__33_stream_to_file,
impl_openai$_legacy_response$$$function__34_close,
impl_openai$_legacy_response$$$function__35_aread,
impl_openai$_legacy_response$$$function__36_aiter_bytes,
impl_openai$_legacy_response$$$function__37_aiter_text,
impl_openai$_legacy_response$$$function__38_aiter_lines,
impl_openai$_legacy_response$$$function__39_aiter_raw,
impl_openai$_legacy_response$$$function__40_astream_to_file,
impl_openai$_legacy_response$$$function__41_aclose,
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

    return Nuitka_Function_GetFunctionState(function, function_table_openai$_legacy_response);
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
        module_openai$_legacy_response,
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
        function_table_openai$_legacy_response,
        sizeof(function_table_openai$_legacy_response) / sizeof(function_impl_code)
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
static char const *module_full_name = "openai._legacy_response";
#endif

// Internal entry point for module code.
PyObject *module_code_openai$_legacy_response(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("openai$_legacy_response");

    // Store the module for future use.
    module_openai$_legacy_response = module;

    moduledict_openai$_legacy_response = MODULE_DICT(module_openai$_legacy_response);

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
        PRINT_STRING("openai$_legacy_response: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("openai$_legacy_response: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("openai$_legacy_response: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "openai._legacy_response" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initopenai$_legacy_response\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_openai$_legacy_response,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_openai$_legacy_response,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_openai$_legacy_response,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_openai$_legacy_response,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_openai$_legacy_response,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_openai$_legacy_response);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_openai$_legacy_response, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_openai$_legacy_response, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_openai$_legacy_response, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_openai$_legacy_response);
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

        UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
struct Nuitka_CellObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__bases = NULL;
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
struct Nuitka_FrameObject *frame_frame_openai$_legacy_response;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_openai$_legacy_response$$$class__1_LegacyAPIResponse_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
PyObject *locals_openai$_legacy_response$$$class__2_MissingStreamClassError_345 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$_legacy_response$$$class__2_MissingStreamClassError_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
PyObject *locals_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_386 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_4;
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
UPDATE_STRING_DICT0(moduledict_openai$_legacy_response, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_openai$_legacy_response, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_openai$_legacy_response = MAKE_MODULE_FRAME(code_objects_b73af733761727d187743923e4ede94f, module_openai$_legacy_response);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_legacy_response);
assert(Py_REFCNT(frame_frame_openai$_legacy_response) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_openai$_legacy_response$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_openai$_legacy_response$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_openai$_legacy_response, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = const_str_plain_inspect;
tmp_globals_arg_value_1 = (PyObject *)moduledict_openai$_legacy_response;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_openai$_legacy_response->m_frame.f_lineno = 4;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)const_str_plain_inspect, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_logging;
tmp_globals_arg_value_2 = (PyObject *)moduledict_openai$_legacy_response;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_openai$_legacy_response->m_frame.f_lineno = 5;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_logging, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_datetime;
tmp_globals_arg_value_3 = (PyObject *)moduledict_openai$_legacy_response;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_openai$_legacy_response->m_frame.f_lineno = 6;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_datetime, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_assign_source_10 == NULL));
UPDATE_STRING_DICT0(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_functools, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_11 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_11);
tmp_import_from_1__module = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = Py_False;
UPDATE_STRING_DICT0(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_12);
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
        (PyObject *)moduledict_openai$_legacy_response,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_13);
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
        (PyObject *)moduledict_openai$_legacy_response,
        mod_consts.const_str_plain_Union,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Union);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_openai$_legacy_response,
        mod_consts.const_str_plain_Generic,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Generic);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Generic, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_openai$_legacy_response,
        mod_consts.const_str_plain_TypeVar,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_TypeVar);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_openai$_legacy_response,
        mod_consts.const_str_plain_Callable,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_Callable);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_6 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_openai$_legacy_response,
        mod_consts.const_str_plain_Iterator,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_Iterator);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterator, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_7 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_openai$_legacy_response,
        mod_consts.const_str_plain_AsyncIterator,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_AsyncIterator);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncIterator, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_8 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_openai$_legacy_response,
        mod_consts.const_str_plain_cast,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_cast);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_cast, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_9 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_openai$_legacy_response,
        mod_consts.const_str_plain_overload,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_overload);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_overload, tmp_assign_source_21);
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
PyObject *tmp_assign_source_22;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_typing_extensions;
tmp_globals_arg_value_4 = (PyObject *)moduledict_openai$_legacy_response;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_dadbb36ffe08efc15c0c700e846cdb4d_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_openai$_legacy_response->m_frame.f_lineno = 20;
tmp_assign_source_22 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_22;
}
// Tried code:
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_10 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_openai$_legacy_response,
        mod_consts.const_str_plain_Awaitable,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_Awaitable);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Awaitable, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_11 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_openai$_legacy_response,
        mod_consts.const_str_plain_ParamSpec,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_ParamSpec);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_ParamSpec, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_12 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_openai$_legacy_response,
        mod_consts.const_str_plain_override,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_override);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_override, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_13 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_openai$_legacy_response,
        mod_consts.const_str_plain_deprecated,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_deprecated);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_deprecated, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_14 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_openai$_legacy_response,
        mod_consts.const_str_plain_get_origin,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_get_origin);
}

if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_get_origin, tmp_assign_source_27);
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
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_anyio;
tmp_globals_arg_value_5 = (PyObject *)moduledict_openai$_legacy_response;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = Py_None;
tmp_level_value_5 = const_int_0;
frame_frame_openai$_legacy_response->m_frame.f_lineno = 22;
tmp_assign_source_28 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_anyio, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_httpx;
tmp_globals_arg_value_6 = (PyObject *)moduledict_openai$_legacy_response;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = Py_None;
tmp_level_value_6 = const_int_0;
frame_frame_openai$_legacy_response->m_frame.f_lineno = 23;
tmp_assign_source_29 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_httpx, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
frame_frame_openai$_legacy_response->m_frame.f_lineno = 24;
tmp_assign_source_30 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_plain_pydantic, mod_consts.const_str_plain_pydantic);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_pydantic, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_import_name_from_15;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain__types;
tmp_globals_arg_value_7 = (PyObject *)moduledict_openai$_legacy_response;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_NoneType_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_openai$_legacy_response->m_frame.f_lineno = 26;
tmp_import_name_from_15 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_openai$_legacy_response,
        mod_consts.const_str_plain_NoneType,
        const_int_0
    );
} else {
    tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_NoneType);
}

CHECK_OBJECT(tmp_import_name_from_15);
Py_DECREF(tmp_import_name_from_15);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_NoneType, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain__utils;
tmp_globals_arg_value_8 = (PyObject *)moduledict_openai$_legacy_response;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_47a04d17d714233456e3078885d32343_tuple;
tmp_level_value_8 = const_int_pos_1;
frame_frame_openai$_legacy_response->m_frame.f_lineno = 27;
tmp_assign_source_32 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_32;
}
// Tried code:
{
PyObject *tmp_assign_source_33;
PyObject *tmp_import_name_from_16;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_16 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_openai$_legacy_response,
        mod_consts.const_str_plain_is_given,
        const_int_0
    );
} else {
    tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_is_given);
}

if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_is_given, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_import_name_from_17;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_17 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_openai$_legacy_response,
        mod_consts.const_str_plain_extract_type_arg,
        const_int_0
    );
} else {
    tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_extract_type_arg);
}

if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_extract_type_arg, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_import_name_from_18;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_18 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_openai$_legacy_response,
        mod_consts.const_str_plain_is_annotated_type,
        const_int_0
    );
} else {
    tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_is_annotated_type);
}

if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_is_annotated_type, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_import_name_from_19;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_19 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_openai$_legacy_response,
        mod_consts.const_str_plain_is_type_alias_type,
        const_int_0
    );
} else {
    tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_is_type_alias_type);
}

if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_is_type_alias_type, tmp_assign_source_36);
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
PyObject *tmp_assign_source_37;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain__models;
tmp_globals_arg_value_9 = (PyObject *)moduledict_openai$_legacy_response;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_8d9cb36109f032e22ae89ba3d292bd55_tuple;
tmp_level_value_9 = const_int_pos_1;
frame_frame_openai$_legacy_response->m_frame.f_lineno = 28;
tmp_assign_source_37 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_37;
}
// Tried code:
{
PyObject *tmp_assign_source_38;
PyObject *tmp_import_name_from_20;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_20 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_openai$_legacy_response,
        mod_consts.const_str_plain_BaseModel,
        const_int_0
    );
} else {
    tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_BaseModel);
}

if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseModel, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_import_name_from_21;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_21 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_openai$_legacy_response,
        mod_consts.const_str_plain_is_basemodel,
        const_int_0
    );
} else {
    tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain_is_basemodel);
}

if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_is_basemodel, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_import_name_from_22;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_22 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_openai$_legacy_response,
        mod_consts.const_str_plain_add_request_id,
        const_int_0
    );
} else {
    tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain_add_request_id);
}

if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_add_request_id, tmp_assign_source_40);
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
PyObject *tmp_assign_source_41;
PyObject *tmp_import_name_from_23;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_plain__constants;
tmp_globals_arg_value_10 = (PyObject *)moduledict_openai$_legacy_response;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_RAW_RESPONSE_HEADER_tuple;
tmp_level_value_10 = const_int_pos_1;
frame_frame_openai$_legacy_response->m_frame.f_lineno = 29;
tmp_import_name_from_23 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_23)) {
    tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_23,
        (PyObject *)moduledict_openai$_legacy_response,
        mod_consts.const_str_plain_RAW_RESPONSE_HEADER,
        const_int_0
    );
} else {
    tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts.const_str_plain_RAW_RESPONSE_HEADER);
}

CHECK_OBJECT(tmp_import_name_from_23);
Py_DECREF(tmp_import_name_from_23);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_RAW_RESPONSE_HEADER, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_plain__streaming;
tmp_globals_arg_value_11 = (PyObject *)moduledict_openai$_legacy_response;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_fa2accb28bba15a2b2627fb23b86bb0b_tuple;
tmp_level_value_11 = const_int_pos_1;
frame_frame_openai$_legacy_response->m_frame.f_lineno = 30;
tmp_assign_source_42 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_5__module == NULL);
tmp_import_from_5__module = tmp_assign_source_42;
}
// Tried code:
{
PyObject *tmp_assign_source_43;
PyObject *tmp_import_name_from_24;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_24 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_24)) {
    tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_24,
        (PyObject *)moduledict_openai$_legacy_response,
        mod_consts.const_str_plain_Stream,
        const_int_0
    );
} else {
    tmp_assign_source_43 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts.const_str_plain_Stream);
}

if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Stream, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_import_name_from_25;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_25 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_25)) {
    tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_25,
        (PyObject *)moduledict_openai$_legacy_response,
        mod_consts.const_str_plain_AsyncStream,
        const_int_0
    );
} else {
    tmp_assign_source_44 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts.const_str_plain_AsyncStream);
}

if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncStream, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_import_name_from_26;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_26 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_26)) {
    tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_26,
        (PyObject *)moduledict_openai$_legacy_response,
        mod_consts.const_str_plain_is_stream_class_type,
        const_int_0
    );
} else {
    tmp_assign_source_45 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts.const_str_plain_is_stream_class_type);
}

if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_is_stream_class_type, tmp_assign_source_45);
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_import_name_from_27;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_27 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_27)) {
    tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_27,
        (PyObject *)moduledict_openai$_legacy_response,
        mod_consts.const_str_plain_extract_stream_chunk_type,
        const_int_0
    );
} else {
    tmp_assign_source_46 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts.const_str_plain_extract_stream_chunk_type);
}

if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_extract_stream_chunk_type, tmp_assign_source_46);
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
PyObject *tmp_assign_source_47;
PyObject *tmp_import_name_from_28;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_plain__exceptions;
tmp_globals_arg_value_12 = (PyObject *)moduledict_openai$_legacy_response;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_str_plain_APIResponseValidationError_tuple;
tmp_level_value_12 = const_int_pos_1;
frame_frame_openai$_legacy_response->m_frame.f_lineno = 31;
tmp_import_name_from_28 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
if (tmp_import_name_from_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_28)) {
    tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_28,
        (PyObject *)moduledict_openai$_legacy_response,
        mod_consts.const_str_plain_APIResponseValidationError,
        const_int_0
    );
} else {
    tmp_assign_source_47 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_28, mod_consts.const_str_plain_APIResponseValidationError);
}

CHECK_OBJECT(tmp_import_name_from_28);
Py_DECREF(tmp_import_name_from_28);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_APIResponseValidationError, tmp_assign_source_47);
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_openai$_legacy_response$ParamSpec(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ParamSpec);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;

    goto frame_exception_exit_1;
}
frame_frame_openai$_legacy_response->m_frame.f_lineno = 38;
tmp_assign_source_48 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_P_tuple);

if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_P, tmp_assign_source_48);
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_openai$_legacy_response$TypeVar(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeVar);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 39;

    goto frame_exception_exit_1;
}
frame_frame_openai$_legacy_response->m_frame.f_lineno = 39;
tmp_assign_source_49 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_R_tuple);

if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_R, tmp_assign_source_49);
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_called_value_3;
tmp_called_value_3 = module_var_accessor_openai$_legacy_response$TypeVar(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeVar);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 40;

    goto frame_exception_exit_1;
}
frame_frame_openai$_legacy_response->m_frame.f_lineno = 40;
tmp_assign_source_50 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain__T_tuple);

if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain__T, tmp_assign_source_50);
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_openai$_legacy_response$logging(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 42;

    goto frame_exception_exit_1;
}
frame_frame_openai$_legacy_response->m_frame.f_lineno = 42;
tmp_assign_source_51 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_getLogger,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_98558e994e88a785750c83b419333be5_tuple, 0)
);

if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_log, tmp_assign_source_51);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_3fab2fa3fadd4d4d413d0704d0eac706;
tmp_ass_subscribed_1 = module_var_accessor_openai$_legacy_response$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 42;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_log;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_52;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
tmp_expression_value_1 = module_var_accessor_openai$_legacy_response$Generic(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Generic);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 45;

    goto try_except_handler_6;
}
tmp_subscript_value_1 = module_var_accessor_openai$_legacy_response$R(tstate);
if (unlikely(tmp_subscript_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_R);
}

if (tmp_subscript_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 45;

    goto try_except_handler_6;
}
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_6;
}
tmp_assign_source_52 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_52, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_52;
}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_53 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_53;
}
{
PyObject *tmp_assign_source_54;
tmp_assign_source_54 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_54;
}
{
PyObject *tmp_assign_source_55;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_6;
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
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_2, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_6;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_6;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_55 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_55;
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

    goto try_except_handler_6;
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
PyObject *tmp_assign_source_56;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_4 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_6;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_LegacyAPIResponse;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_openai$_legacy_response->m_frame.f_lineno = 45;
tmp_assign_source_56 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_56;
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

    goto try_except_handler_6;
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
PyObject *tmp_name_value_13;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_13 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_13, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_6;
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
goto try_except_handler_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_6;
}
frame_frame_openai$_legacy_response->m_frame.f_lineno = 45;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 45;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_6;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_57;
tmp_assign_source_57 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_57;
}
branch_end_1:;
{
PyObject *tmp_assign_source_58;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_98558e994e88a785750c83b419333be5;
tmp_res = PyObject_SetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_digest_2a269e7ee746c809f1dfacce896c41b6;
tmp_res = PyObject_SetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_plain_LegacyAPIResponse;
tmp_res = PyObject_SetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_int_pos_45;
tmp_res = PyObject_SetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_8;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_8;
}
frame_frame_openai$_legacy_response$$$class__1_LegacyAPIResponse_2 = MAKE_CLASS_FRAME(tstate, code_objects_bd14fc44b170421e56b033ce28a92358, module_openai$_legacy_response, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_legacy_response$$$class__1_LegacyAPIResponse_2);
assert(Py_REFCNT(frame_frame_openai$_legacy_response$$$class__1_LegacyAPIResponse_2) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_str_digest_05160a609b8c0f74e1c566c3ce779885;
tmp_ass_subscribed_2 = PyObject_GetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 58;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain__cast_to;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_ass_subvalue_3 = mod_consts.const_str_digest_d0d478c1994c667ffb507e1b562725fe;
tmp_ass_subscribed_3 = PyObject_GetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 59;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_3 = mod_consts.const_str_plain__client;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subscribed_3);
Py_DECREF(tmp_ass_subscribed_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
tmp_ass_subvalue_4 = mod_consts.const_str_digest_fbdeb9886c8565354604635da3ef5fc8;
tmp_ass_subscribed_4 = PyObject_GetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 60;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_4 = mod_consts.const_str_plain__parsed_by_type;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
CHECK_OBJECT(tmp_ass_subscribed_4);
Py_DECREF(tmp_ass_subscribed_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_ass_subscript_5;
tmp_ass_subvalue_5 = mod_consts.const_str_plain_bool;
tmp_ass_subscribed_5 = PyObject_GetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 61;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_5 = mod_consts.const_str_plain__stream;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
CHECK_OBJECT(tmp_ass_subscribed_5);
Py_DECREF(tmp_ass_subscribed_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_6;
PyObject *tmp_ass_subscribed_6;
PyObject *tmp_ass_subscript_6;
tmp_ass_subvalue_6 = mod_consts.const_str_digest_9fdf0b6ea91f7fffbe0c1d0e7cf72b50;
tmp_ass_subscribed_6 = PyObject_GetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 62;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_6 = mod_consts.const_str_plain__stream_cls;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
CHECK_OBJECT(tmp_ass_subscribed_6);
Py_DECREF(tmp_ass_subscribed_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_7;
PyObject *tmp_ass_subscribed_7;
PyObject *tmp_ass_subscript_7;
tmp_ass_subvalue_7 = mod_consts.const_str_plain_FinalRequestOptions;
tmp_ass_subscribed_7 = PyObject_GetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 63;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_7 = mod_consts.const_str_plain__options;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
CHECK_OBJECT(tmp_ass_subscribed_7);
Py_DECREF(tmp_ass_subscribed_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_8;
PyObject *tmp_ass_subscribed_8;
PyObject *tmp_ass_subscript_8;
tmp_ass_subvalue_8 = mod_consts.const_str_digest_11df174efb5cc83c4ecfcd61824f025d;
tmp_ass_subscribed_8 = PyObject_GetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 65;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_8 = mod_consts.const_str_plain_http_response;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
CHECK_OBJECT(tmp_ass_subscribed_8);
Py_DECREF(tmp_ass_subscribed_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_9;
PyObject *tmp_ass_subscribed_9;
PyObject *tmp_ass_subscript_9;
tmp_ass_subvalue_9 = const_str_plain_int;
tmp_ass_subscribed_9 = PyObject_GetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 67;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_9 = mod_consts.const_str_plain_retries_taken;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
CHECK_OBJECT(tmp_ass_subscribed_9);
Py_DECREF(tmp_ass_subscribed_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_1;
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_6148aac6132080f83b2250a58d97a427);
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_480844f54f53615f4abf05683128a43a);

tmp_dictset_value = MAKE_FUNCTION_openai$_legacy_response$$$function__1___init__(tstate, tmp_kw_defaults_1, tmp_annotations_1);

tmp_res = PyObject_SetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_2;
tmp_called_value_5 = PyObject_GetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, mod_consts.const_str_plain_property);

if (tmp_called_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_5 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071);

tmp_args_element_value_1 = MAKE_FUNCTION_openai$_legacy_response$$$function__2_request_id(tstate, tmp_annotations_2);

frame_frame_openai$_legacy_response$$$class__1_LegacyAPIResponse_2->m_frame.f_lineno = 90;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, mod_consts.const_str_plain_request_id, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_3;
tmp_called_value_6 = PyObject_GetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, mod_consts.const_str_plain_overload);

if (tmp_called_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_6 = module_var_accessor_openai$_legacy_response$overload(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 94;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_d09c40bb9088e19c03826306b206b7f7);

tmp_args_element_value_2 = MAKE_FUNCTION_openai$_legacy_response$$$function__3_parse(tstate, tmp_annotations_3);

frame_frame_openai$_legacy_response$$$class__1_LegacyAPIResponse_2->m_frame.f_lineno = 94;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, mod_consts.const_str_plain_parse, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_3;
PyObject *tmp_annotations_4;
tmp_called_value_7 = PyObject_GetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, mod_consts.const_str_plain_overload);

if (tmp_called_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_7 = module_var_accessor_openai$_legacy_response$overload(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 97;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_e6d402b5a2b1a140aaa5baccee33c088);

tmp_args_element_value_3 = MAKE_FUNCTION_openai$_legacy_response$$$function__4_parse(tstate, tmp_annotations_4);

frame_frame_openai$_legacy_response$$$class__1_LegacyAPIResponse_2->m_frame.f_lineno = 97;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, mod_consts.const_str_plain_parse, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_kw_defaults_2;
PyObject *tmp_annotations_5;
tmp_kw_defaults_2 = DICT_COPY(tstate, mod_consts.const_dict_4a9c3781541e03fcd584004778b3fc93);
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_cf02cca8867f3ef637ecb9ec7dcd7824);

tmp_dictset_value = MAKE_FUNCTION_openai$_legacy_response$$$function__5_parse(tstate, tmp_kw_defaults_2, tmp_annotations_5);

tmp_res = PyObject_SetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, mod_consts.const_str_plain_parse, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_4;
PyObject *tmp_annotations_6;
tmp_called_value_8 = PyObject_GetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, mod_consts.const_str_plain_property);

if (tmp_called_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_8 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_0d163f087cd2a452cbc7325cbf6c06ed);

tmp_args_element_value_4 = MAKE_FUNCTION_openai$_legacy_response$$$function__6_headers(tstate, tmp_annotations_6);

frame_frame_openai$_legacy_response$$$class__1_LegacyAPIResponse_2->m_frame.f_lineno = 147;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, mod_consts.const_str_plain_headers, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_5;
PyObject *tmp_annotations_7;
tmp_called_value_9 = PyObject_GetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, mod_consts.const_str_plain_property);

if (tmp_called_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_9 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_737dcc7cab6c587da407ad864dd9e576);

tmp_args_element_value_5 = MAKE_FUNCTION_openai$_legacy_response$$$function__7_http_request(tstate, tmp_annotations_7);

frame_frame_openai$_legacy_response$$$class__1_LegacyAPIResponse_2->m_frame.f_lineno = 151;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, mod_consts.const_str_plain_http_request, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_6;
PyObject *tmp_annotations_8;
tmp_called_value_10 = PyObject_GetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, mod_consts.const_str_plain_property);

if (tmp_called_value_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_10 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);

tmp_args_element_value_6 = MAKE_FUNCTION_openai$_legacy_response$$$function__8_status_code(tstate, tmp_annotations_8);

frame_frame_openai$_legacy_response$$$class__1_LegacyAPIResponse_2->m_frame.f_lineno = 155;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, mod_consts.const_str_plain_status_code, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_7;
PyObject *tmp_annotations_9;
tmp_called_value_11 = PyObject_GetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, mod_consts.const_str_plain_property);

if (tmp_called_value_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_11 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_130436027655285a7e211ba95a9db462);

tmp_args_element_value_7 = MAKE_FUNCTION_openai$_legacy_response$$$function__9_url(tstate, tmp_annotations_9);

frame_frame_openai$_legacy_response$$$class__1_LegacyAPIResponse_2->m_frame.f_lineno = 159;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, mod_consts.const_str_plain_url, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_8;
PyObject *tmp_annotations_10;
tmp_called_value_12 = PyObject_GetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, mod_consts.const_str_plain_property);

if (tmp_called_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_12 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_8 = MAKE_FUNCTION_openai$_legacy_response$$$function__10_method(tstate, tmp_annotations_10);

frame_frame_openai$_legacy_response$$$class__1_LegacyAPIResponse_2->m_frame.f_lineno = 163;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, mod_consts.const_str_plain_method, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_9;
PyObject *tmp_annotations_11;
tmp_called_value_13 = PyObject_GetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, mod_consts.const_str_plain_property);

if (tmp_called_value_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_13 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_2366cb3246e451cebe4ed21878030053);

tmp_args_element_value_9 = MAKE_FUNCTION_openai$_legacy_response$$$function__11_content(tstate, tmp_annotations_11);

frame_frame_openai$_legacy_response$$$class__1_LegacyAPIResponse_2->m_frame.f_lineno = 167;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, mod_consts.const_str_plain_content, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_10;
PyObject *tmp_annotations_12;
tmp_called_value_14 = PyObject_GetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, mod_consts.const_str_plain_property);

if (tmp_called_value_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_14 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_10 = MAKE_FUNCTION_openai$_legacy_response$$$function__12_text(tstate, tmp_annotations_12);

frame_frame_openai$_legacy_response$$$class__1_LegacyAPIResponse_2->m_frame.f_lineno = 176;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, mod_consts.const_str_plain_text, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_11;
PyObject *tmp_annotations_13;
tmp_called_value_15 = PyObject_GetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, mod_consts.const_str_plain_property);

if (tmp_called_value_15 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_15 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_15);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_11 = MAKE_FUNCTION_openai$_legacy_response$$$function__13_http_version(tstate, tmp_annotations_13);

frame_frame_openai$_legacy_response$$$class__1_LegacyAPIResponse_2->m_frame.f_lineno = 184;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, mod_consts.const_str_plain_http_version, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_16;
PyObject *tmp_args_element_value_12;
PyObject *tmp_annotations_14;
tmp_called_value_16 = PyObject_GetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, mod_consts.const_str_plain_property);

if (tmp_called_value_16 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_16 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_16);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_args_element_value_12 = MAKE_FUNCTION_openai$_legacy_response$$$function__14_is_closed(tstate, tmp_annotations_14);

frame_frame_openai$_legacy_response$$$class__1_LegacyAPIResponse_2->m_frame.f_lineno = 188;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, mod_consts.const_str_plain_is_closed, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_17;
PyObject *tmp_args_element_value_13;
PyObject *tmp_annotations_15;
tmp_called_value_17 = PyObject_GetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, mod_consts.const_str_plain_property);

if (tmp_called_value_17 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_17 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_17);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_7031ad2bd3448ae1670405c3c48db6dc);

tmp_args_element_value_13 = MAKE_FUNCTION_openai$_legacy_response$$$function__15_elapsed(tstate, tmp_annotations_15);

frame_frame_openai$_legacy_response$$$class__1_LegacyAPIResponse_2->m_frame.f_lineno = 192;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, mod_consts.const_str_plain_elapsed, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_kw_defaults_3;
PyObject *tmp_annotations_16;
tmp_kw_defaults_3 = DICT_COPY(tstate, mod_consts.const_dict_4a9c3781541e03fcd584004778b3fc93);
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_cf02cca8867f3ef637ecb9ec7dcd7824);

tmp_dictset_value = MAKE_FUNCTION_openai$_legacy_response$$$function__16__parse(tstate, tmp_kw_defaults_3, tmp_annotations_16);

tmp_res = PyObject_SetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, mod_consts.const_str_plain__parse, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_18;
PyObject *tmp_args_element_value_14;
PyObject *tmp_annotations_17;
tmp_called_value_18 = PyObject_GetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, mod_consts.const_str_plain_override);

if (tmp_called_value_18 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_18 = module_var_accessor_openai$_legacy_response$override(tstate);
if (unlikely(tmp_called_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_override);
}

if (tmp_called_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 340;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_18);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_14 = MAKE_FUNCTION_openai$_legacy_response$$$function__17___repr__(tstate, tmp_annotations_17);

frame_frame_openai$_legacy_response$$$class__1_LegacyAPIResponse_2->m_frame.f_lineno = 340;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_14);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_legacy_response$$$class__1_LegacyAPIResponse_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_legacy_response$$$class__1_LegacyAPIResponse_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_legacy_response$$$class__1_LegacyAPIResponse_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_legacy_response$$$class__1_LegacyAPIResponse_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_openai$_legacy_response$$$class__1_LegacyAPIResponse_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_8;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_7a4d14c7cf827edddb63fe15bc901986_tuple;
tmp_res = PyObject_SetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_8;
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

    goto try_except_handler_8;
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
tmp_res = PyObject_SetItem(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_8;
}
branch_no_3:;
{
PyObject *tmp_assign_source_59;
PyObject *tmp_called_value_19;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_19 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_LegacyAPIResponse;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_openai$_legacy_response->m_frame.f_lineno = 45;
tmp_assign_source_59 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_8;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_59;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_58 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_58);
goto try_return_handler_8;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
Py_DECREF(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45);
locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45 = NULL;
goto try_return_handler_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45);
locals_openai$_legacy_response$$$class__1_LegacyAPIResponse_45 = NULL;
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
exception_lineno = 45;
goto try_except_handler_6;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_LegacyAPIResponse, tmp_assign_source_58);
}
goto try_end_6;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
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
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
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
PyObject *tmp_assign_source_60;
PyObject *tmp_direct_call_arg1_2;
tmp_direct_call_arg1_2 = mod_consts.const_tuple_type_TypeError_tuple;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_60 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;

    goto try_except_handler_9;
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
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;

    goto try_except_handler_9;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_8 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_3, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;

    goto try_except_handler_9;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;

    goto try_except_handler_9;
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


exception_lineno = 345;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_62;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;

    goto try_except_handler_9;
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
PyObject *tmp_called_value_20;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_10 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;

    goto try_except_handler_9;
}
tmp_tuple_element_5 = mod_consts.const_str_plain_MissingStreamClassError;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_5 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_openai$_legacy_response->m_frame.f_lineno = 345;
tmp_assign_source_63 = CALL_FUNCTION(tstate, tmp_called_value_20, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_63;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_11 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_11, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;

    goto try_except_handler_9;
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
PyObject *tmp_tuple_element_6;
PyObject *tmp_expression_value_12;
PyObject *tmp_name_value_14;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_12 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_14 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_6 = BUILTIN_GETATTR(tstate, tmp_expression_value_12, tmp_name_value_14, tmp_default_value_2);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;

    goto try_except_handler_9;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_13;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_13 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_13 == NULL));
tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_6);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_9;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;

    goto try_except_handler_9;
}
frame_frame_openai$_legacy_response->m_frame.f_lineno = 345;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 345;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_9;
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
outline_1_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_openai$_legacy_response$$$class__2_MissingStreamClassError_345 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_98558e994e88a785750c83b419333be5;
tmp_res = PyObject_SetItem(locals_openai$_legacy_response$$$class__2_MissingStreamClassError_345, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_str_plain_MissingStreamClassError;
tmp_res = PyObject_SetItem(locals_openai$_legacy_response$$$class__2_MissingStreamClassError_345, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_int_pos_345;
tmp_res = PyObject_SetItem(locals_openai$_legacy_response$$$class__2_MissingStreamClassError_345, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;

    goto try_except_handler_11;
}
frame_frame_openai$_legacy_response$$$class__2_MissingStreamClassError_3 = MAKE_CLASS_FRAME(tstate, code_objects_51bf5bd9e756ea93ac1997d204f444b4, module_openai$_legacy_response, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_legacy_response$$$class__2_MissingStreamClassError_3);
assert(Py_REFCNT(frame_frame_openai$_legacy_response$$$class__2_MissingStreamClassError_3) == 2);

// Framed code:
{
PyObject *tmp_annotations_18;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
tmp_closure_1[0] = outline_1_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_openai$_legacy_response$$$function__18___init__(tstate, tmp_annotations_18, tmp_closure_1);

tmp_res = PyObject_SetItem(locals_openai$_legacy_response$$$class__2_MissingStreamClassError_345, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_2 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_legacy_response$$$class__2_MissingStreamClassError_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_legacy_response$$$class__2_MissingStreamClassError_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_legacy_response$$$class__2_MissingStreamClassError_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_legacy_response$$$class__2_MissingStreamClassError_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_openai$_legacy_response$$$class__2_MissingStreamClassError_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_11;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$_legacy_response$$$class__2_MissingStreamClassError_345, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;

    goto try_except_handler_11;
}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_2__bases;
tmp_cmp_expr_right_2 = mod_consts.const_tuple_type_TypeError_tuple;
tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;

    goto try_except_handler_11;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
tmp_dictset_value = mod_consts.const_tuple_type_TypeError_tuple;
tmp_res = PyObject_SetItem(locals_openai$_legacy_response$$$class__2_MissingStreamClassError_345, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;

    goto try_except_handler_11;
}
branch_no_6:;
{
PyObject *tmp_assign_source_66;
PyObject *tmp_called_value_21;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_7;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_21 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_7 = mod_consts.const_str_plain_MissingStreamClassError;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_7 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_7);
tmp_tuple_element_7 = locals_openai$_legacy_response$$$class__2_MissingStreamClassError_345;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_openai$_legacy_response->m_frame.f_lineno = 345;
tmp_assign_source_66 = CALL_FUNCTION(tstate, tmp_called_value_21, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;

    goto try_except_handler_11;
}
assert(Nuitka_Cell_GET(outline_1_var___class__) == NULL);
Nuitka_Cell_SET(outline_1_var___class__, tmp_assign_source_66);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_1_var___class__));
tmp_assign_source_65 = Nuitka_Cell_GET(outline_1_var___class__);
Py_INCREF(tmp_assign_source_65);
goto try_return_handler_11;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
Py_DECREF(locals_openai$_legacy_response$$$class__2_MissingStreamClassError_345);
locals_openai$_legacy_response$$$class__2_MissingStreamClassError_345 = NULL;
goto try_return_handler_10;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$_legacy_response$$$class__2_MissingStreamClassError_345);
locals_openai$_legacy_response$$$class__2_MissingStreamClassError_345 = NULL;
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
exception_lineno = 345;
goto try_except_handler_9;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_MissingStreamClassError, tmp_assign_source_65);
}
goto try_end_7;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_2__bases);
tmp_class_container$class_creation_2__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__metaclass);
tmp_class_container$class_creation_2__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__prepared);
tmp_class_container$class_creation_2__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
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
PyObject *tmp_assign_source_67;
PyObject *tmp_annotations_19;
tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_843eda5a2ee5248f40108f31c9a0a3e5);

tmp_assign_source_67 = MAKE_FUNCTION_openai$_legacy_response$$$function__19_to_raw_response_wrapper(tstate, tmp_annotations_19);

UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_to_raw_response_wrapper, tmp_assign_source_67);
}
{
PyObject *tmp_assign_source_68;
PyObject *tmp_annotations_20;
tmp_annotations_20 = DICT_COPY(tstate, mod_consts.const_dict_8f1cd11a863ea54173c2b1f8e1f03889);

tmp_assign_source_68 = MAKE_FUNCTION_openai$_legacy_response$$$function__20_async_to_raw_response_wrapper(tstate, tmp_annotations_20);

UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_async_to_raw_response_wrapper, tmp_assign_source_68);
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
locals_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_386 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
tmp_dictset_value = mod_consts.const_str_digest_98558e994e88a785750c83b419333be5;
tmp_result = DICT_SET_ITEM(locals_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_386, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_HttpxBinaryResponseContent;
tmp_result = DICT_SET_ITEM(locals_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_386, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_386;
tmp_result = DICT_SET_ITEM(locals_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_386, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_result = DICT_SET_ITEM(locals_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_386, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_4 = MAKE_CLASS_FRAME(tstate, code_objects_39ded0bf3a788d59c665b00fe5a25198, module_openai$_legacy_response, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_4);
assert(Py_REFCNT(frame_frame_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_4) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_10;
PyObject *tmp_ass_subscribed_10;
PyObject *tmp_ass_subscript_10;
tmp_ass_subvalue_10 = mod_consts.const_str_digest_11df174efb5cc83c4ecfcd61824f025d;
tmp_ass_subscribed_10 = DICT_GET_ITEM0(tstate, locals_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_386, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 387;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

if (tmp_ass_subscribed_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_ass_subscript_10 = mod_consts.const_str_plain_response;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_21;
tmp_annotations_21 = DICT_COPY(tstate, mod_consts.const_dict_68359d61f8fd1d1275d36e51b19591c9);

tmp_dictset_value = MAKE_FUNCTION_openai$_legacy_response$$$function__21___init__(tstate, tmp_annotations_21);

tmp_result = DICT_SET_ITEM(locals_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_386, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_called_value_22;
PyObject *tmp_args_element_value_15;
PyObject *tmp_annotations_22;
tmp_called_value_22 = (PyObject *)&PyProperty_Type;
tmp_annotations_22 = DICT_COPY(tstate, mod_consts.const_dict_2366cb3246e451cebe4ed21878030053);

tmp_args_element_value_15 = MAKE_FUNCTION_openai$_legacy_response$$$function__22_content(tstate, tmp_annotations_22);

frame_frame_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_4->m_frame.f_lineno = 392;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_15);
CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_result = DICT_SET_ITEM(locals_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_386, mod_consts.const_str_plain_content, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 393;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_23;
PyObject *tmp_args_element_value_16;
PyObject *tmp_annotations_23;
tmp_called_value_23 = (PyObject *)&PyProperty_Type;
tmp_annotations_23 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_16 = MAKE_FUNCTION_openai$_legacy_response$$$function__23_text(tstate, tmp_annotations_23);

frame_frame_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_4->m_frame.f_lineno = 396;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_16);
CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 396;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_result = DICT_SET_ITEM(locals_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_386, mod_consts.const_str_plain_text, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 397;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_24;
PyObject *tmp_args_element_value_17;
PyObject *tmp_annotations_24;
tmp_called_value_24 = (PyObject *)&PyProperty_Type;
tmp_annotations_24 = DICT_COPY(tstate, mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071);

tmp_args_element_value_17 = MAKE_FUNCTION_openai$_legacy_response$$$function__24_encoding(tstate, tmp_annotations_24);

frame_frame_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_4->m_frame.f_lineno = 400;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_17);
CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_result = DICT_SET_ITEM(locals_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_386, const_str_plain_encoding, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 401;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_25;
PyObject *tmp_args_element_value_18;
PyObject *tmp_annotations_25;
tmp_called_value_25 = (PyObject *)&PyProperty_Type;
tmp_annotations_25 = DICT_COPY(tstate, mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071);

tmp_args_element_value_18 = MAKE_FUNCTION_openai$_legacy_response$$$function__25_charset_encoding(tstate, tmp_annotations_25);

frame_frame_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_4->m_frame.f_lineno = 404;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_18);
CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 404;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_result = DICT_SET_ITEM(locals_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_386, mod_consts.const_str_plain_charset_encoding, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 405;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_26;
tmp_annotations_26 = DICT_COPY(tstate, mod_consts.const_dict_3435af114cbc37dcb1b52026f3c8880a);

tmp_dictset_value = MAKE_FUNCTION_openai$_legacy_response$$$function__26_json(tstate, tmp_annotations_26);

tmp_result = DICT_SET_ITEM(locals_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_386, mod_consts.const_str_plain_json, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_27;
tmp_annotations_27 = DICT_COPY(tstate, mod_consts.const_dict_2366cb3246e451cebe4ed21878030053);

tmp_dictset_value = MAKE_FUNCTION_openai$_legacy_response$$$function__27_read(tstate, tmp_annotations_27);

tmp_result = DICT_SET_ITEM(locals_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_386, const_str_plain_read, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_28;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
tmp_annotations_28 = DICT_COPY(tstate, mod_consts.const_dict_e275a014f0070bba21fed9df92c40ac0);
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_openai$_legacy_response$$$function__28_iter_bytes(tstate, tmp_defaults_1, tmp_annotations_28);

tmp_result = DICT_SET_ITEM(locals_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_386, mod_consts.const_str_plain_iter_bytes, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_29;
tmp_defaults_2 = mod_consts.const_tuple_none_tuple;
tmp_annotations_29 = DICT_COPY(tstate, mod_consts.const_dict_0f6eb376eaa281b332f667131a587bc9);
Py_INCREF(tmp_defaults_2);

tmp_dictset_value = MAKE_FUNCTION_openai$_legacy_response$$$function__29_iter_text(tstate, tmp_defaults_2, tmp_annotations_29);

tmp_result = DICT_SET_ITEM(locals_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_386, mod_consts.const_str_plain_iter_text, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_30;
tmp_annotations_30 = DICT_COPY(tstate, mod_consts.const_dict_b2f586a573796cb806fcf3b5316538bd);

tmp_dictset_value = MAKE_FUNCTION_openai$_legacy_response$$$function__30_iter_lines(tstate, tmp_annotations_30);

tmp_result = DICT_SET_ITEM(locals_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_386, mod_consts.const_str_plain_iter_lines, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_defaults_3;
PyObject *tmp_annotations_31;
tmp_defaults_3 = mod_consts.const_tuple_none_tuple;
tmp_annotations_31 = DICT_COPY(tstate, mod_consts.const_dict_e275a014f0070bba21fed9df92c40ac0);
Py_INCREF(tmp_defaults_3);

tmp_dictset_value = MAKE_FUNCTION_openai$_legacy_response$$$function__31_iter_raw(tstate, tmp_defaults_3, tmp_annotations_31);

tmp_result = DICT_SET_ITEM(locals_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_386, mod_consts.const_str_plain_iter_raw, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_32;
tmp_annotations_32 = DICT_COPY(tstate, mod_consts.const_dict_ef5f909ff65572b5e54b9a900f542c7c);

tmp_dictset_value = MAKE_FUNCTION_openai$_legacy_response$$$function__32_write_to_file(tstate, tmp_annotations_32);

tmp_result = DICT_SET_ITEM(locals_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_386, mod_consts.const_str_plain_write_to_file, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_called_value_26;
PyObject *tmp_called_value_27;
PyObject *tmp_args_element_value_19;
PyObject *tmp_kw_defaults_4;
PyObject *tmp_annotations_33;
tmp_called_value_27 = module_var_accessor_openai$_legacy_response$deprecated(tstate);
if (unlikely(tmp_called_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_deprecated);
}

if (tmp_called_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 442;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
frame_frame_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_4->m_frame.f_lineno = 442;
tmp_called_value_26 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_27, mod_consts.const_tuple_str_digest_5cdf8775c8d61e0bfabd5215802678f6_tuple);

if (tmp_called_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 442;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_kw_defaults_4 = DICT_COPY(tstate, mod_consts.const_dict_f3fe0f4a62dd56b4fa5042c0b8d16b4e);
tmp_annotations_33 = DICT_COPY(tstate, mod_consts.const_dict_0c18636b79932543582c5e3337f15d57);

tmp_args_element_value_19 = MAKE_FUNCTION_openai$_legacy_response$$$function__33_stream_to_file(tstate, tmp_kw_defaults_4, tmp_annotations_33);

frame_frame_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_4->m_frame.f_lineno = 442;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_19);
CHECK_OBJECT(tmp_called_value_26);
Py_DECREF(tmp_called_value_26);
CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 442;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_result = DICT_SET_ITEM(locals_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_386, mod_consts.const_str_plain_stream_to_file, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_34;
tmp_annotations_34 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_openai$_legacy_response$$$function__34_close(tstate, tmp_annotations_34);

tmp_result = DICT_SET_ITEM(locals_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_386, const_str_plain_close, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_35;
tmp_annotations_35 = DICT_COPY(tstate, mod_consts.const_dict_2366cb3246e451cebe4ed21878030053);

tmp_dictset_value = MAKE_FUNCTION_openai$_legacy_response$$$function__35_aread(tstate, tmp_annotations_35);

tmp_result = DICT_SET_ITEM(locals_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_386, mod_consts.const_str_plain_aread, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_defaults_4;
PyObject *tmp_annotations_36;
tmp_defaults_4 = mod_consts.const_tuple_none_tuple;
tmp_annotations_36 = DICT_COPY(tstate, mod_consts.const_dict_857b48a932d6c271d39ddec087469c03);
Py_INCREF(tmp_defaults_4);

tmp_dictset_value = MAKE_FUNCTION_openai$_legacy_response$$$function__36_aiter_bytes(tstate, tmp_defaults_4, tmp_annotations_36);

tmp_result = DICT_SET_ITEM(locals_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_386, mod_consts.const_str_plain_aiter_bytes, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_defaults_5;
PyObject *tmp_annotations_37;
tmp_defaults_5 = mod_consts.const_tuple_none_tuple;
tmp_annotations_37 = DICT_COPY(tstate, mod_consts.const_dict_954cb4f3876a39f4c6440a10f0625d45);
Py_INCREF(tmp_defaults_5);

tmp_dictset_value = MAKE_FUNCTION_openai$_legacy_response$$$function__37_aiter_text(tstate, tmp_defaults_5, tmp_annotations_37);

tmp_result = DICT_SET_ITEM(locals_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_386, mod_consts.const_str_plain_aiter_text, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_38;
tmp_annotations_38 = DICT_COPY(tstate, mod_consts.const_dict_d803a994da5de2709bb2cdb8a64c7893);

tmp_dictset_value = MAKE_FUNCTION_openai$_legacy_response$$$function__38_aiter_lines(tstate, tmp_annotations_38);

tmp_result = DICT_SET_ITEM(locals_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_386, mod_consts.const_str_plain_aiter_lines, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_defaults_6;
PyObject *tmp_annotations_39;
tmp_defaults_6 = mod_consts.const_tuple_none_tuple;
tmp_annotations_39 = DICT_COPY(tstate, mod_consts.const_dict_857b48a932d6c271d39ddec087469c03);
Py_INCREF(tmp_defaults_6);

tmp_dictset_value = MAKE_FUNCTION_openai$_legacy_response$$$function__39_aiter_raw(tstate, tmp_defaults_6, tmp_annotations_39);

tmp_result = DICT_SET_ITEM(locals_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_386, mod_consts.const_str_plain_aiter_raw, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_called_value_28;
PyObject *tmp_called_value_29;
PyObject *tmp_args_element_value_20;
PyObject *tmp_kw_defaults_5;
PyObject *tmp_annotations_40;
tmp_called_value_29 = module_var_accessor_openai$_legacy_response$deprecated(tstate);
if (unlikely(tmp_called_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_deprecated);
}

if (tmp_called_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 473;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
frame_frame_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_4->m_frame.f_lineno = 473;
tmp_called_value_28 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_29, mod_consts.const_tuple_str_digest_5cdf8775c8d61e0bfabd5215802678f6_tuple);

if (tmp_called_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 473;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_kw_defaults_5 = DICT_COPY(tstate, mod_consts.const_dict_f3fe0f4a62dd56b4fa5042c0b8d16b4e);
tmp_annotations_40 = DICT_COPY(tstate, mod_consts.const_dict_0c18636b79932543582c5e3337f15d57);

tmp_args_element_value_20 = MAKE_FUNCTION_openai$_legacy_response$$$function__40_astream_to_file(tstate, tmp_kw_defaults_5, tmp_annotations_40);

frame_frame_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_4->m_frame.f_lineno = 473;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_20);
CHECK_OBJECT(tmp_called_value_28);
Py_DECREF(tmp_called_value_28);
CHECK_OBJECT(tmp_args_element_value_20);
Py_DECREF(tmp_args_element_value_20);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 473;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_result = DICT_SET_ITEM(locals_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_386, mod_consts.const_str_plain_astream_to_file, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 476;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_14;
skip_nested_handling_3:;
{
PyObject *tmp_annotations_41;
tmp_annotations_41 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_openai$_legacy_response$$$function__41_aclose(tstate, tmp_annotations_41);

tmp_result = DICT_SET_ITEM(locals_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_386, mod_consts.const_str_plain_aclose, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_str_plain_response_tuple;
tmp_result = DICT_SET_ITEM(locals_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_386, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_72;
PyObject *tmp_called_value_30;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_5;
tmp_called_value_30 = (PyObject *)&PyType_Type;
tmp_tuple_element_8 = mod_consts.const_str_plain_HttpxBinaryResponseContent;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_8);
tmp_tuple_element_8 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = locals_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_386;
PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_openai$_legacy_response->m_frame.f_lineno = 386;
tmp_assign_source_72 = CALL_FUNCTION(tstate, tmp_called_value_30, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_72 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 386;

    goto try_except_handler_14;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_72;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_71 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_71);
goto try_return_handler_14;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
Py_DECREF(locals_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_386);
locals_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_386 = NULL;
goto try_return_handler_13;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_386);
locals_openai$_legacy_response$$$class__3_HttpxBinaryResponseContent_386 = NULL;
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
exception_lineno = 386;
goto try_except_handler_12;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_openai$_legacy_response, (Nuitka_StringObject *)mod_consts.const_str_plain_HttpxBinaryResponseContent, tmp_assign_source_71);
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_4;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_legacy_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_legacy_response->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_legacy_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_openai$_legacy_response);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_4:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("openai$_legacy_response", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "openai._legacy_response" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_openai$_legacy_response);
    return module_openai$_legacy_response;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$_legacy_response, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("openai$_legacy_response", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

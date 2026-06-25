/* Generated code for Python module 'httpx$_content'
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



/* The "module_httpx$_content" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_httpx$_content;
PyDictObject *moduledict_httpx$_content;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain__stream;
PyObject *const_str_plain_self;
PyObject *const_str_digest_f831839c7a746aa1e519a1a2979ef53f;
PyObject *const_str_plain___aiter__;
PyObject *const_str_digest_c7243d90bc9a975693181bf58e5e8a1c;
PyObject *const_str_plain__is_stream_consumed;
PyObject *const_str_plain_isgenerator;
PyObject *const_str_plain__is_generator;
PyObject *const_str_plain_StreamConsumed;
PyObject *const_str_plain_CHUNK_SIZE;
PyObject *const_str_plain_chunk;
PyObject *const_str_digest_a93e27c9e4eb0900c48cbe178b1b4a09;
PyObject *const_str_plain_isasyncgen;
PyObject *const_str_plain_aread;
PyObject *const_str_digest_3ffce2741303c0a9253815c42af41daa;
PyObject *const_str_plain_StreamClosed;
PyObject *const_str_digest_eb49f16c9ecf4c33a79117cdb7ff6c15;
PyObject *const_tuple_type_bytes_type_str_tuple;
PyObject *const_str_plain_encode;
PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
PyObject *const_str_digest_3c9527fc53ea2272c2080ca035d6631c;
PyObject *const_str_plain_ByteStream;
PyObject *const_str_plain_Iterable;
PyObject *const_str_plain_peek_filelike_length;
PyObject *const_dict_28476657b1209c8792e14b5c774094a5;
PyObject *const_str_plain_IteratorByteStream;
PyObject *const_str_plain_AsyncIterable;
PyObject *const_str_plain_AsyncIteratorByteStream;
PyObject *const_str_digest_0de8bee7f8732529113e7904ee34b5e7;
PyObject *const_str_plain_items;
PyObject *const_tuple_type_list_type_tuple_tuple;
PyObject *const_str_plain_plain_data;
PyObject *const_str_plain_primitive_value_to_str;
PyObject *const_str_plain_urlencode;
PyObject *const_dict_3e205b6416b9b29c0480d7ddc5289df9;
PyObject *const_str_digest_6d6a615162e89eb148ba9bf8dbfc06d3;
PyObject *const_str_digest_5d735bc80d16f0fedbdde78344a2d394;
PyObject *const_str_plain_MultipartStream;
PyObject *const_tuple_str_plain_data_str_plain_files_str_plain_boundary_tuple;
PyObject *const_str_plain_get_headers;
PyObject *const_str_digest_ec15a558a17cf4e08c127637db31e90c;
PyObject *const_str_digest_8c7295acd0a0d41f9148d3a8a041614a;
PyObject *const_str_plain_json_dumps;
PyObject *const_dict_e7ea3a6767795dbcb3f578a55495704d;
PyObject *const_str_digest_1781891970018ef9597f363946d7327b;
PyObject *const_str_plain_Mapping;
PyObject *const_str_plain_warnings;
PyObject *const_str_plain_warn;
PyObject *const_str_digest_3856c3e3593db206fa587bd7e8bdc845;
PyObject *const_str_plain_DeprecationWarning;
PyObject *const_dict_f154c9a58c9419d7e391901d7b7fe49e;
PyObject *const_str_plain_encode_content;
PyObject *const_str_plain_encode_multipart_data;
PyObject *const_str_plain_encode_urlencoded_data;
PyObject *const_str_plain_encode_json;
PyObject *const_tuple_bytes_empty_tuple;
PyObject *const_str_digest_2b3729410a64b8532d63d2def762904a;
PyObject *const_str_plain_encode_text;
PyObject *const_str_plain_encode_html;
PyObject *const_str_digest_d535bb731414a767d7575ea2862d5324;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_json;
PyObject *const_tuple_str_plain_dumps_tuple;
PyObject *const_str_plain_dumps;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_AsyncIterator;
PyObject *const_str_plain_Iterator;
PyObject *const_str_digest_04991ea695faff4a76e4efb6a8a8593f;
PyObject *const_tuple_str_plain_urlencode_tuple;
PyObject *const_str_plain__exceptions;
PyObject *const_tuple_str_plain_StreamClosed_str_plain_StreamConsumed_tuple;
PyObject *const_str_plain__multipart;
PyObject *const_tuple_str_plain_MultipartStream_tuple;
PyObject *const_str_plain__types;
PyObject *const_tuple_9d7b0dd5056864eefdc2f993e2900dce_tuple;
PyObject *const_str_plain_AsyncByteStream;
PyObject *const_str_plain_RequestContent;
PyObject *const_str_plain_RequestData;
PyObject *const_str_plain_RequestFiles;
PyObject *const_str_plain_ResponseContent;
PyObject *const_str_plain_SyncByteStream;
PyObject *const_str_plain__utils;
PyObject *const_tuple_28a0cb370be1fcd45da75e890d37dee9_tuple;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_a6294a787a9c164c8536b1136773a00c;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_31;
PyObject *const_str_plain___firstlineno__;
PyObject *const_dict_6171d1365e826cd3fee4602d43a383ec;
PyObject *const_str_digest_ad6c1520f727910d6f0beb0bfef70110;
PyObject *const_dict_e5b5c5d7069fea32467c0044970d9b64;
PyObject *const_dict_70b3e7f37fa1175d2427ad1ec0e8d604;
PyObject *const_tuple_str_plain__stream_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_int_pos_42;
PyObject *const_int_pos_65536;
PyObject *const_dict_35a170c4fc12cce82a6a859eeb89b5a2;
PyObject *const_str_digest_64d5515c08d164a3e3eea50e8247d696;
PyObject *const_tuple_0ef259473a1fececb0a4ab85b31cea0d_tuple;
PyObject *const_int_pos_67;
PyObject *const_dict_15e559020559e50e0fce3aee83ff08d9;
PyObject *const_str_digest_d2398f8bf34afb81437de4d1753af95f;
PyObject *const_str_plain_UnattachedStream;
PyObject *const_str_digest_099898656c967405e3ca974e896882bb;
PyObject *const_int_pos_92;
PyObject *const_str_digest_583c6bf51738679bd7c4bee3b25118ec;
PyObject *const_dict_ed96d3363f3ba7fcda701e16e2d2e4aa;
PyObject *const_dict_9cd693f365eaf113b4c5c709f9263cc2;
PyObject *const_dict_6f18b48b1dd8dc04e0d08a8fe5f6e0e0;
PyObject *const_dict_c25e04b7ffa0dcc842d575fbef50aed2;
PyObject *const_dict_77984266c3252ce98b68c48d2bf422f5;
PyObject *const_dict_8eacd9ddccf78b8590a5e83d84fae3ed;
PyObject *const_tuple_none_none_none_none_none_tuple;
PyObject *const_dict_d0d1c355912977cc50b92e8c1debfa42;
PyObject *const_str_plain_encode_request;
PyObject *const_tuple_none_none_none_none_tuple;
PyObject *const_dict_c3cff02164d4a6fecd72c7c4b5c985be;
PyObject *const_str_plain_encode_response;
PyObject *const_str_digest_59e40299ee20c71d75008d6a19f75c3c;
PyObject *const_str_digest_c0565f35797e6c2b6f1793e5a2b3ef21;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_chunk_str_plain_part_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_stream_tuple;
PyObject *const_tuple_97004978cb80c0c9c128335173d8634e_tuple;
PyObject *const_tuple_440c77af5ec7dc77742bcc0bbf72b0a7_tuple;
PyObject *const_tuple_d5aa2ff6681e2b70ad8ba1a498c95b15_tuple;
PyObject *const_tuple_bc38ea44adf84ba25172e5191e917436_tuple;
PyObject *const_tuple_799de2132f91a372c1ae9be33af2a14f_tuple;
PyObject *const_tuple_c4185d0609b3193fdd8190f7cdda23f1_tuple;
PyObject *const_tuple_8f0ac76c51dae6a99a8141206f0b2bcb_tuple;
PyObject *const_tuple_9e7edc3f14ad08262bcd92b19b919a09_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[138];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("httpx._content"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain__stream);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_f831839c7a746aa1e519a1a2979ef53f);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain___aiter__);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_c7243d90bc9a975693181bf58e5e8a1c);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain__is_stream_consumed);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_isgenerator);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain__is_generator);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_StreamConsumed);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_CHUNK_SIZE);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_chunk);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_a93e27c9e4eb0900c48cbe178b1b4a09);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_isasyncgen);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_aread);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_3ffce2741303c0a9253815c42af41daa);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_StreamClosed);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_eb49f16c9ecf4c33a79117cdb7ff6c15);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_type_bytes_type_str_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_3c9527fc53ea2272c2080ca035d6631c);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_ByteStream);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_peek_filelike_length);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_dict_28476657b1209c8792e14b5c774094a5);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_IteratorByteStream);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncIterable);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncIteratorByteStream);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_0de8bee7f8732529113e7904ee34b5e7);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_tuple_type_list_type_tuple_tuple);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_plain_data);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_primitive_value_to_str);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_urlencode);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_dict_3e205b6416b9b29c0480d7ddc5289df9);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_6d6a615162e89eb148ba9bf8dbfc06d3);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_5d735bc80d16f0fedbdde78344a2d394);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_MultipartStream);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_data_str_plain_files_str_plain_boundary_tuple);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_headers);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_ec15a558a17cf4e08c127637db31e90c);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_8c7295acd0a0d41f9148d3a8a041614a);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_json_dumps);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_dict_e7ea3a6767795dbcb3f578a55495704d);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_1781891970018ef9597f363946d7327b);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_Mapping);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_warnings);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_warn);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_3856c3e3593db206fa587bd7e8bdc845);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_DeprecationWarning);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode_content);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode_multipart_data);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode_urlencoded_data);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode_json);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_bytes_empty_tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_digest_2b3729410a64b8532d63d2def762904a);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode_text);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode_html);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_d535bb731414a767d7575ea2862d5324);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_json);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dumps_tuple);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_dumps);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncIterator);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterator);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_urlencode_tuple);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain__exceptions);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_StreamClosed_str_plain_StreamConsumed_tuple);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain__multipart);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MultipartStream_tuple);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain__types);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_tuple_9d7b0dd5056864eefdc2f993e2900dce_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncByteStream);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_RequestContent);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_RequestData);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_RequestFiles);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseContent);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_SyncByteStream);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain__utils);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_28a0cb370be1fcd45da75e890d37dee9_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_digest_a6294a787a9c164c8536b1136773a00c);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_int_pos_31);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_dict_6171d1365e826cd3fee4602d43a383ec);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_digest_ad6c1520f727910d6f0beb0bfef70110);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_dict_e5b5c5d7069fea32467c0044970d9b64);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_dict_70b3e7f37fa1175d2427ad1ec0e8d604);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__stream_tuple);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_int_pos_42);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_int_pos_65536);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_dict_35a170c4fc12cce82a6a859eeb89b5a2);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_digest_64d5515c08d164a3e3eea50e8247d696);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_tuple_0ef259473a1fececb0a4ab85b31cea0d_tuple);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_int_pos_67);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_dict_15e559020559e50e0fce3aee83ff08d9);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_digest_d2398f8bf34afb81437de4d1753af95f);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_UnattachedStream);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_099898656c967405e3ca974e896882bb);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_int_pos_92);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_digest_583c6bf51738679bd7c4bee3b25118ec);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_dict_ed96d3363f3ba7fcda701e16e2d2e4aa);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_dict_9cd693f365eaf113b4c5c709f9263cc2);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_dict_6f18b48b1dd8dc04e0d08a8fe5f6e0e0);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_dict_c25e04b7ffa0dcc842d575fbef50aed2);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_dict_77984266c3252ce98b68c48d2bf422f5);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_dict_8eacd9ddccf78b8590a5e83d84fae3ed);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_none_none_tuple);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_dict_d0d1c355912977cc50b92e8c1debfa42);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode_request);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_none_tuple);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_dict_c3cff02164d4a6fecd72c7c4b5c985be);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode_response);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_digest_59e40299ee20c71d75008d6a19f75c3c);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_digest_c0565f35797e6c2b6f1793e5a2b3ef21);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_chunk_str_plain_part_tuple);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_stream_tuple);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_tuple_97004978cb80c0c9c128335173d8634e_tuple);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_tuple_440c77af5ec7dc77742bcc0bbf72b0a7_tuple);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_tuple_d5aa2ff6681e2b70ad8ba1a498c95b15_tuple);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_tuple_bc38ea44adf84ba25172e5191e917436_tuple);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_tuple_799de2132f91a372c1ae9be33af2a14f_tuple);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_tuple_c4185d0609b3193fdd8190f7cdda23f1_tuple);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_tuple_8f0ac76c51dae6a99a8141206f0b2bcb_tuple);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_tuple_9e7edc3f14ad08262bcd92b19b919a09_tuple);
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
void checkModuleConstants_httpx$_content(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain__stream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__stream);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_f831839c7a746aa1e519a1a2979ef53f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f831839c7a746aa1e519a1a2979ef53f);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain___aiter__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___aiter__);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_c7243d90bc9a975693181bf58e5e8a1c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c7243d90bc9a975693181bf58e5e8a1c);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain__is_stream_consumed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__is_stream_consumed);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_isgenerator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isgenerator);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain__is_generator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__is_generator);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_StreamConsumed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StreamConsumed);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_CHUNK_SIZE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CHUNK_SIZE);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_chunk));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chunk);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_a93e27c9e4eb0900c48cbe178b1b4a09));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a93e27c9e4eb0900c48cbe178b1b4a09);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_isasyncgen));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isasyncgen);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_aread));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_aread);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_3ffce2741303c0a9253815c42af41daa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3ffce2741303c0a9253815c42af41daa);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_StreamClosed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StreamClosed);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_eb49f16c9ecf4c33a79117cdb7ff6c15));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eb49f16c9ecf4c33a79117cdb7ff6c15);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_type_bytes_type_str_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_bytes_type_str_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encode);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_3c9527fc53ea2272c2080ca035d6631c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3c9527fc53ea2272c2080ca035d6631c);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_ByteStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ByteStream);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Iterable);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_peek_filelike_length));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_peek_filelike_length);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_dict_28476657b1209c8792e14b5c774094a5));
CHECK_OBJECT_DEEP(mod_consts.const_dict_28476657b1209c8792e14b5c774094a5);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_IteratorByteStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IteratorByteStream);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncIterable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncIterable);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncIteratorByteStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncIteratorByteStream);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_0de8bee7f8732529113e7904ee34b5e7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0de8bee7f8732529113e7904ee34b5e7);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_items));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_items);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_tuple_type_list_type_tuple_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_list_type_tuple_tuple);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_plain_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_plain_data);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_primitive_value_to_str));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_primitive_value_to_str);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_urlencode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_urlencode);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_dict_3e205b6416b9b29c0480d7ddc5289df9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_3e205b6416b9b29c0480d7ddc5289df9);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_6d6a615162e89eb148ba9bf8dbfc06d3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6d6a615162e89eb148ba9bf8dbfc06d3);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_5d735bc80d16f0fedbdde78344a2d394));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5d735bc80d16f0fedbdde78344a2d394);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_MultipartStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MultipartStream);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_data_str_plain_files_str_plain_boundary_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_data_str_plain_files_str_plain_boundary_tuple);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_headers);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_ec15a558a17cf4e08c127637db31e90c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ec15a558a17cf4e08c127637db31e90c);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_8c7295acd0a0d41f9148d3a8a041614a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8c7295acd0a0d41f9148d3a8a041614a);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_json_dumps));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_json_dumps);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_dict_e7ea3a6767795dbcb3f578a55495704d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e7ea3a6767795dbcb3f578a55495704d);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_1781891970018ef9597f363946d7327b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1781891970018ef9597f363946d7327b);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_Mapping));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Mapping);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_warnings));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warnings);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_warn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warn);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_3856c3e3593db206fa587bd7e8bdc845));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3856c3e3593db206fa587bd7e8bdc845);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_DeprecationWarning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DeprecationWarning);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode_content));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encode_content);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode_multipart_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encode_multipart_data);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode_urlencoded_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encode_urlencoded_data);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode_json));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encode_json);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_bytes_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bytes_empty_tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_digest_2b3729410a64b8532d63d2def762904a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2b3729410a64b8532d63d2def762904a);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode_text));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encode_text);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode_html));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encode_html);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_d535bb731414a767d7575ea2862d5324));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d535bb731414a767d7575ea2862d5324);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_json));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_json);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dumps_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_dumps_tuple);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_dumps));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dumps);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncIterator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncIterator);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Iterator);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_urlencode_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_urlencode_tuple);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain__exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__exceptions);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_StreamClosed_str_plain_StreamConsumed_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_StreamClosed_str_plain_StreamConsumed_tuple);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain__multipart));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__multipart);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MultipartStream_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_MultipartStream_tuple);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain__types));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__types);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_tuple_9d7b0dd5056864eefdc2f993e2900dce_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9d7b0dd5056864eefdc2f993e2900dce_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncByteStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncByteStream);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_RequestContent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RequestContent);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_RequestData));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RequestData);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_RequestFiles));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RequestFiles);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseContent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseContent);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_SyncByteStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SyncByteStream);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain__utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__utils);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_28a0cb370be1fcd45da75e890d37dee9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_28a0cb370be1fcd45da75e890d37dee9_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_digest_a6294a787a9c164c8536b1136773a00c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a6294a787a9c164c8536b1136773a00c);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_int_pos_31));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_31);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_dict_6171d1365e826cd3fee4602d43a383ec));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6171d1365e826cd3fee4602d43a383ec);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_digest_ad6c1520f727910d6f0beb0bfef70110));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ad6c1520f727910d6f0beb0bfef70110);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_dict_e5b5c5d7069fea32467c0044970d9b64));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e5b5c5d7069fea32467c0044970d9b64);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_dict_70b3e7f37fa1175d2427ad1ec0e8d604));
CHECK_OBJECT_DEEP(mod_consts.const_dict_70b3e7f37fa1175d2427ad1ec0e8d604);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__stream_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__stream_tuple);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_int_pos_42));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_42);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_int_pos_65536));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_65536);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_dict_35a170c4fc12cce82a6a859eeb89b5a2));
CHECK_OBJECT_DEEP(mod_consts.const_dict_35a170c4fc12cce82a6a859eeb89b5a2);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_digest_64d5515c08d164a3e3eea50e8247d696));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_64d5515c08d164a3e3eea50e8247d696);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_tuple_0ef259473a1fececb0a4ab85b31cea0d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0ef259473a1fececb0a4ab85b31cea0d_tuple);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_int_pos_67));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_67);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_dict_15e559020559e50e0fce3aee83ff08d9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_15e559020559e50e0fce3aee83ff08d9);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_digest_d2398f8bf34afb81437de4d1753af95f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d2398f8bf34afb81437de4d1753af95f);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_UnattachedStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UnattachedStream);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_099898656c967405e3ca974e896882bb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_099898656c967405e3ca974e896882bb);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_int_pos_92));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_92);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_digest_583c6bf51738679bd7c4bee3b25118ec));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_583c6bf51738679bd7c4bee3b25118ec);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_dict_ed96d3363f3ba7fcda701e16e2d2e4aa));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ed96d3363f3ba7fcda701e16e2d2e4aa);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_dict_9cd693f365eaf113b4c5c709f9263cc2));
CHECK_OBJECT_DEEP(mod_consts.const_dict_9cd693f365eaf113b4c5c709f9263cc2);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_dict_6f18b48b1dd8dc04e0d08a8fe5f6e0e0));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6f18b48b1dd8dc04e0d08a8fe5f6e0e0);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_dict_c25e04b7ffa0dcc842d575fbef50aed2));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c25e04b7ffa0dcc842d575fbef50aed2);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_dict_77984266c3252ce98b68c48d2bf422f5));
CHECK_OBJECT_DEEP(mod_consts.const_dict_77984266c3252ce98b68c48d2bf422f5);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_dict_8eacd9ddccf78b8590a5e83d84fae3ed));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8eacd9ddccf78b8590a5e83d84fae3ed);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_none_none_tuple);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_dict_d0d1c355912977cc50b92e8c1debfa42));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d0d1c355912977cc50b92e8c1debfa42);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encode_request);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_none_tuple);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_dict_c3cff02164d4a6fecd72c7c4b5c985be));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c3cff02164d4a6fecd72c7c4b5c985be);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encode_response);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_digest_59e40299ee20c71d75008d6a19f75c3c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_59e40299ee20c71d75008d6a19f75c3c);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_digest_c0565f35797e6c2b6f1793e5a2b3ef21));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c0565f35797e6c2b6f1793e5a2b3ef21);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_chunk_str_plain_part_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_chunk_str_plain_part_tuple);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_stream_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_stream_tuple);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_tuple_97004978cb80c0c9c128335173d8634e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_97004978cb80c0c9c128335173d8634e_tuple);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_tuple_440c77af5ec7dc77742bcc0bbf72b0a7_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_440c77af5ec7dc77742bcc0bbf72b0a7_tuple);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_tuple_d5aa2ff6681e2b70ad8ba1a498c95b15_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d5aa2ff6681e2b70ad8ba1a498c95b15_tuple);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_tuple_bc38ea44adf84ba25172e5191e917436_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bc38ea44adf84ba25172e5191e917436_tuple);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_tuple_799de2132f91a372c1ae9be33af2a14f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_799de2132f91a372c1ae9be33af2a14f_tuple);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_tuple_c4185d0609b3193fdd8190f7cdda23f1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c4185d0609b3193fdd8190f7cdda23f1_tuple);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_tuple_8f0ac76c51dae6a99a8141206f0b2bcb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8f0ac76c51dae6a99a8141206f0b2bcb_tuple);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_tuple_9e7edc3f14ad08262bcd92b19b919a09_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9e7edc3f14ad08262bcd92b19b919a09_tuple);
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
static PyObject *module_var_accessor_httpx$_content$AsyncByteStream(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_content->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_content->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncByteStream);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_content->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncByteStream);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncByteStream, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncByteStream);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncByteStream, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncByteStream);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncByteStream);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncByteStream);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_content$AsyncIterable(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_content->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_content->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncIterable);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_content->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncIterable);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncIterable, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncIterable);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncIterable, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncIterable);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncIterable);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncIterable);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_content$AsyncIteratorByteStream(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_content->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_content->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncIteratorByteStream);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_content->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncIteratorByteStream);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncIteratorByteStream, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncIteratorByteStream);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncIteratorByteStream, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncIteratorByteStream);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncIteratorByteStream);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncIteratorByteStream);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_content$ByteStream(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_content->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_content->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_ByteStream);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_content->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ByteStream);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ByteStream, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ByteStream);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ByteStream, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_ByteStream);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_ByteStream);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ByteStream);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_content$DeprecationWarning(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_content->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_content->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_content->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DeprecationWarning);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DeprecationWarning, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DeprecationWarning);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DeprecationWarning, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_content$Iterable(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_content->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_content->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_content->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_content$IteratorByteStream(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_content->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_content->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_IteratorByteStream);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_content->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IteratorByteStream);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IteratorByteStream, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IteratorByteStream);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IteratorByteStream, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_IteratorByteStream);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_IteratorByteStream);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_IteratorByteStream);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_content$Mapping(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_content->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_content->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_content->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Mapping);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Mapping, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Mapping);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Mapping, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_content$MultipartStream(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_content->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_content->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_MultipartStream);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_content->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MultipartStream);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MultipartStream, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MultipartStream);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MultipartStream, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_MultipartStream);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_MultipartStream);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MultipartStream);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_content$StreamClosed(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_content->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_content->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_StreamClosed);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_content->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_StreamClosed);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_StreamClosed, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_StreamClosed);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_StreamClosed, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_StreamClosed);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_StreamClosed);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_StreamClosed);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_content$StreamConsumed(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_content->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_content->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_StreamConsumed);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_content->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_StreamConsumed);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_StreamConsumed, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_StreamConsumed);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_StreamConsumed, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_StreamConsumed);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_StreamConsumed);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_StreamConsumed);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_content$SyncByteStream(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_content->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_content->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncByteStream);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_content->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SyncByteStream);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SyncByteStream, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SyncByteStream);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SyncByteStream, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncByteStream);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncByteStream);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncByteStream);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_content$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_content->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_content->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_content->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_content$encode_content(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_content->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_content->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_content);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_content->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_encode_content);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_encode_content, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_encode_content);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_encode_content, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_content);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_content);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_content);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_content$encode_html(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_content->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_content->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_html);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_content->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_encode_html);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_encode_html, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_encode_html);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_encode_html, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_html);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_html);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_html);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_content$encode_json(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_content->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_content->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_json);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_content->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_encode_json);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_encode_json, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_encode_json);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_encode_json, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_json);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_json);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_json);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_content$encode_multipart_data(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_content->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_content->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_multipart_data);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_content->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_encode_multipart_data);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_encode_multipart_data, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_encode_multipart_data);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_encode_multipart_data, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_multipart_data);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_multipart_data);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_multipart_data);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_content$encode_text(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_content->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_content->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_text);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_content->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_encode_text);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_encode_text, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_encode_text);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_encode_text, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_text);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_text);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_text);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_content$encode_urlencoded_data(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_content->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_content->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_urlencoded_data);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_content->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_encode_urlencoded_data);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_encode_urlencoded_data, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_encode_urlencoded_data);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_encode_urlencoded_data, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_urlencoded_data);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_urlencoded_data);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_urlencoded_data);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_content$inspect(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_content->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_content->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)const_str_plain_inspect);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_content->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)const_str_plain_inspect);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)const_str_plain_inspect);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_inspect);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_content$json_dumps(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_content->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_content->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_json_dumps);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_content->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_json_dumps);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_json_dumps, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_json_dumps);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_json_dumps, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_json_dumps);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_json_dumps);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_json_dumps);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_content$peek_filelike_length(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_content->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_content->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_peek_filelike_length);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_content->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_peek_filelike_length);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_peek_filelike_length, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_peek_filelike_length);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_peek_filelike_length, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_peek_filelike_length);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_peek_filelike_length);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_peek_filelike_length);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_content$primitive_value_to_str(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_content->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_content->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_primitive_value_to_str);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_content->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_primitive_value_to_str);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_primitive_value_to_str, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_primitive_value_to_str);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_primitive_value_to_str, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_primitive_value_to_str);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_primitive_value_to_str);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_primitive_value_to_str);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_content$urlencode(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_content->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_content->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_urlencode);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_content->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_urlencode);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_urlencode, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_urlencode);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_urlencode, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_urlencode);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_urlencode);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_urlencode);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_content$warnings(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_content->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_content->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_content->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_warnings);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_warnings, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_warnings);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_warnings, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_a2aca0da1f368cee8b370e42b900b149;
static PyCodeObject *code_objects_53c2b63cef969c95b2f0ec282ae9eca2;
static PyCodeObject *code_objects_5ff08d658f1c161c6e1a2b3846176c41;
static PyCodeObject *code_objects_34a6ecbfbc23a33f42e923125055851b;
static PyCodeObject *code_objects_5ded8c51e86123cac983ef9ad0fb78b0;
static PyCodeObject *code_objects_9adc441bc8c43ad7a8d1cb2f81afe32f;
static PyCodeObject *code_objects_0573c416e3a4cf820e8c1e57a0995408;
static PyCodeObject *code_objects_7e5dac79f8e73b212abeac3cf3f709a2;
static PyCodeObject *code_objects_f0fd23675a871fc9af981a7a3f0fa5ce;
static PyCodeObject *code_objects_dafc5d1202b6cd2d330a71fe7a764163;
static PyCodeObject *code_objects_e53d1aa227b760542806a23c3e41de92;
static PyCodeObject *code_objects_4711452a37a742977a7ad4782ceab74e;
static PyCodeObject *code_objects_4e42fcfd920d3e264d497825787d98a1;
static PyCodeObject *code_objects_1b0530e0b677ce7fb58e0ad9c47006f0;
static PyCodeObject *code_objects_21d841bfcb11fb55ba3a51e8c5f48f25;
static PyCodeObject *code_objects_4406610697f2c941bcbf3e1d034b94dd;
static PyCodeObject *code_objects_01a691bdea9b970ec0699494c255e464;
static PyCodeObject *code_objects_5f27d920eed772853fd7367c5abac2cb;
static PyCodeObject *code_objects_6445ce00ac99059849dc3ebc47daafb0;
static PyCodeObject *code_objects_ede41cbbf31f4d0c1d4f0955e074f869;
static PyCodeObject *code_objects_a7d8206e2ef172a6b8fcbd3b03c48b59;
static PyCodeObject *code_objects_9bbcb4f5140926fdfba6423210f84261;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_59e40299ee20c71d75008d6a19f75c3c); CHECK_OBJECT(module_filename_obj);
code_objects_a2aca0da1f368cee8b370e42b900b149 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_c0565f35797e6c2b6f1793e5a2b3ef21, mod_consts.const_str_digest_c0565f35797e6c2b6f1793e5a2b3ef21, NULL, NULL, 0, 0, 0);
code_objects_53c2b63cef969c95b2f0ec282ae9eca2 = MAKE_CODE_OBJECT(module_filename_obj, 67, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_AsyncIteratorByteStream, mod_consts.const_str_plain_AsyncIteratorByteStream, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_5ff08d658f1c161c6e1a2b3846176c41 = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ByteStream, mod_consts.const_str_plain_ByteStream, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_34a6ecbfbc23a33f42e923125055851b = MAKE_CODE_OBJECT(module_filename_obj, 42, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_IteratorByteStream, mod_consts.const_str_plain_IteratorByteStream, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_5ded8c51e86123cac983ef9ad0fb78b0 = MAKE_CODE_OBJECT(module_filename_obj, 92, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_UnattachedStream, mod_consts.const_str_plain_UnattachedStream, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_9adc441bc8c43ad7a8d1cb2f81afe32f = MAKE_CODE_OBJECT(module_filename_obj, 75, CO_ASYNC_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___aiter__, mod_consts.const_str_digest_3ffce2741303c0a9253815c42af41daa, mod_consts.const_tuple_str_plain_self_str_plain_chunk_str_plain_part_tuple, NULL, 1, 0, 0);
code_objects_0573c416e3a4cf820e8c1e57a0995408 = MAKE_CODE_OBJECT(module_filename_obj, 38, CO_ASYNC_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___aiter__, mod_consts.const_str_digest_c7243d90bc9a975693181bf58e5e8a1c, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_7e5dac79f8e73b212abeac3cf3f709a2 = MAKE_CODE_OBJECT(module_filename_obj, 102, CO_ASYNC_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___aiter__, mod_consts.const_str_digest_eb49f16c9ecf4c33a79117cdb7ff6c15, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_f0fd23675a871fc9af981a7a3f0fa5ce = MAKE_CODE_OBJECT(module_filename_obj, 70, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_d2398f8bf34afb81437de4d1753af95f, mod_consts.const_tuple_str_plain_self_str_plain_stream_tuple, NULL, 2, 0, 0);
code_objects_dafc5d1202b6cd2d330a71fe7a764163 = MAKE_CODE_OBJECT(module_filename_obj, 32, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_ad6c1520f727910d6f0beb0bfef70110, mod_consts.const_tuple_str_plain_self_str_plain_stream_tuple, NULL, 2, 0, 0);
code_objects_e53d1aa227b760542806a23c3e41de92 = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_64d5515c08d164a3e3eea50e8247d696, mod_consts.const_tuple_str_plain_self_str_plain_stream_tuple, NULL, 2, 0, 0);
code_objects_4711452a37a742977a7ad4782ceab74e = MAKE_CODE_OBJECT(module_filename_obj, 35, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___iter__, mod_consts.const_str_digest_f831839c7a746aa1e519a1a2979ef53f, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_4e42fcfd920d3e264d497825787d98a1 = MAKE_CODE_OBJECT(module_filename_obj, 50, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___iter__, mod_consts.const_str_digest_a93e27c9e4eb0900c48cbe178b1b4a09, mod_consts.const_tuple_str_plain_self_str_plain_chunk_str_plain_part_tuple, NULL, 1, 0, 0);
code_objects_1b0530e0b677ce7fb58e0ad9c47006f0 = MAKE_CODE_OBJECT(module_filename_obj, 99, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___iter__, mod_consts.const_str_digest_583c6bf51738679bd7c4bee3b25118ec, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_21d841bfcb11fb55ba3a51e8c5f48f25 = MAKE_CODE_OBJECT(module_filename_obj, 107, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_encode_content, mod_consts.const_str_plain_encode_content, mod_consts.const_tuple_97004978cb80c0c9c128335173d8634e_tuple, NULL, 1, 0, 0);
code_objects_4406610697f2c941bcbf3e1d034b94dd = MAKE_CODE_OBJECT(module_filename_obj, 168, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_encode_html, mod_consts.const_str_plain_encode_html, mod_consts.const_tuple_440c77af5ec7dc77742bcc0bbf72b0a7_tuple, NULL, 1, 0, 0);
code_objects_01a691bdea9b970ec0699494c255e464 = MAKE_CODE_OBJECT(module_filename_obj, 176, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_encode_json, mod_consts.const_str_plain_encode_json, mod_consts.const_tuple_d5aa2ff6681e2b70ad8ba1a498c95b15_tuple, NULL, 1, 0, 0);
code_objects_5f27d920eed772853fd7367c5abac2cb = MAKE_CODE_OBJECT(module_filename_obj, 152, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_encode_multipart_data, mod_consts.const_str_plain_encode_multipart_data, mod_consts.const_tuple_bc38ea44adf84ba25172e5191e917436_tuple, NULL, 3, 0, 0);
code_objects_6445ce00ac99059849dc3ebc47daafb0 = MAKE_CODE_OBJECT(module_filename_obj, 186, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_encode_request, mod_consts.const_str_plain_encode_request, mod_consts.const_tuple_799de2132f91a372c1ae9be33af2a14f_tuple, NULL, 5, 0, 0);
code_objects_ede41cbbf31f4d0c1d4f0955e074f869 = MAKE_CODE_OBJECT(module_filename_obj, 221, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_encode_response, mod_consts.const_str_plain_encode_response, mod_consts.const_tuple_c4185d0609b3193fdd8190f7cdda23f1_tuple, NULL, 4, 0, 0);
code_objects_a7d8206e2ef172a6b8fcbd3b03c48b59 = MAKE_CODE_OBJECT(module_filename_obj, 160, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_encode_text, mod_consts.const_str_plain_encode_text, mod_consts.const_tuple_8f0ac76c51dae6a99a8141206f0b2bcb_tuple, NULL, 1, 0, 0);
code_objects_9bbcb4f5140926fdfba6423210f84261 = MAKE_CODE_OBJECT(module_filename_obj, 136, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_encode_urlencoded_data, mod_consts.const_str_plain_encode_urlencoded_data, mod_consts.const_tuple_9e7edc3f14ad08262bcd92b19b919a09_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_httpx$_content$$$function__2___iter__$$$genobj__1___iter__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_ASYNCGEN_httpx$_content$$$function__3___aiter__$$$asyncgen__1___aiter__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_httpx$_content$$$function__5___iter__$$$genobj__1___iter__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_ASYNCGEN_httpx$_content$$$function__7___aiter__$$$asyncgen__1___aiter__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_ASYNCGEN_httpx$_content$$$function__9___aiter__$$$asyncgen__1___aiter__(PyThreadState *tstate);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_httpx$_content$$$function__10_encode_content(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_content$$$function__11_encode_urlencoded_data(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_content$$$function__12_encode_multipart_data(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_content$$$function__13_encode_text(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_content$$$function__14_encode_html(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_content$$$function__15_encode_json(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_content$$$function__16_encode_request(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_content$$$function__17_encode_response(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_content$$$function__1___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_content$$$function__2___iter__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_content$$$function__3___aiter__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_content$$$function__4___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_content$$$function__5___iter__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_content$$$function__6___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_content$$$function__7___aiter__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_content$$$function__8___iter__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_content$$$function__9___aiter__(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_httpx$_content$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_stream = python_pars[1];
struct Nuitka_FrameObject *frame_frame_httpx$_content$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_content$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_content$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_httpx$_content$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_content$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_content$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_dafc5d1202b6cd2d330a71fe7a764163, module_httpx$_content, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_content$$$function__1___init__->m_type_description == NULL);
frame_frame_httpx$_content$$$function__1___init__ = cache_frame_frame_httpx$_content$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_content$$$function__1___init__);
assert(Py_REFCNT(frame_frame_httpx$_content$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_stream);
tmp_assattr_value_1 = par_stream;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__stream, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_content$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_content$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_content$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_content$$$function__1___init__,
    type_description_1,
    par_self,
    par_stream
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_content$$$function__1___init__ == cache_frame_frame_httpx$_content$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_content$$$function__1___init__);
    cache_frame_frame_httpx$_content$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_httpx$_content$$$function__1___init__);

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
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_content$$$function__2___iter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_GENERATOR_httpx$_content$$$function__2___iter__$$$genobj__1___iter__(tstate, tmp_closure_1);

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
struct httpx$_content$$$function__2___iter__$$$genobj__1___iter___locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
};
#endif

static PyObject *httpx$_content$$$function__2___iter__$$$genobj__1___iter___context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct httpx$_content$$$function__2___iter__$$$genobj__1___iter___locals *generator_heap = (struct httpx$_content$$$function__2___iter__$$$genobj__1___iter___locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_4711452a37a742977a7ad4782ceab74e, module_httpx$_content, sizeof(void *));
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
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 36;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__stream);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 36;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 36;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
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

static PyObject *MAKE_GENERATOR_httpx$_content$$$function__2___iter__$$$genobj__1___iter__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        httpx$_content$$$function__2___iter__$$$genobj__1___iter___context,
        module_httpx$_content,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_f831839c7a746aa1e519a1a2979ef53f,
#endif
        code_objects_4711452a37a742977a7ad4782ceab74e,
        closure,
        1,
#if 1
        sizeof(struct httpx$_content$$$function__2___iter__$$$genobj__1___iter___locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpx$_content$$$function__3___aiter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_ASYNCGEN_httpx$_content$$$function__3___aiter__$$$asyncgen__1___aiter__(tstate, tmp_closure_1);

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
struct httpx$_content$$$function__3___aiter__$$$asyncgen__1___aiter___locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
};
#endif

static PyObject *httpx$_content$$$function__3___aiter__$$$asyncgen__1___aiter___context(PyThreadState *tstate, struct Nuitka_AsyncgenObject *asyncgen, PyObject *yield_return_value) {
    CHECK_OBJECT(asyncgen);
    assert(Nuitka_Asyncgen_Check((PyObject *)asyncgen));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct httpx$_content$$$function__3___aiter__$$$asyncgen__1___aiter___locals *asyncgen_heap = (struct httpx$_content$$$function__3___aiter__$$$asyncgen__1___aiter___locals *)asyncgen->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(asyncgen->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
asyncgen_heap->type_description_1 = NULL;
asyncgen_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
asyncgen_heap->exception_lineno = 0;

    // Actual asyncgen body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_0573c416e3a4cf820e8c1e57a0995408, module_httpx$_content, sizeof(void *));
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
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 39;
asyncgen_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__stream);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 39;
asyncgen_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 39;
asyncgen_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}

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
    asyncgen->m_closure[0]
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
goto function_exception_exit;
frame_no_exception_1:;
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("return must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&asyncgen_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
    return NULL;
    function_return_exit:;

    return NULL;

}

static PyObject *MAKE_ASYNCGEN_httpx$_content$$$function__3___aiter__$$$asyncgen__1___aiter__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Asyncgen_New(
        httpx$_content$$$function__3___aiter__$$$asyncgen__1___aiter___context,
        module_httpx$_content,
        mod_consts.const_str_plain___aiter__,
        mod_consts.const_str_digest_c7243d90bc9a975693181bf58e5e8a1c,
        code_objects_0573c416e3a4cf820e8c1e57a0995408,
        closure,
        1,
#if 1
        sizeof(struct httpx$_content$$$function__3___aiter__$$$asyncgen__1___aiter___locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpx$_content$$$function__4___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_stream = python_pars[1];
struct Nuitka_FrameObject *frame_frame_httpx$_content$$$function__4___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_content$$$function__4___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_content$$$function__4___init__)) {
    Py_XDECREF(cache_frame_frame_httpx$_content$$$function__4___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_content$$$function__4___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_content$$$function__4___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_e53d1aa227b760542806a23c3e41de92, module_httpx$_content, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_content$$$function__4___init__->m_type_description == NULL);
frame_frame_httpx$_content$$$function__4___init__ = cache_frame_frame_httpx$_content$$$function__4___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_content$$$function__4___init__);
assert(Py_REFCNT(frame_frame_httpx$_content$$$function__4___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_stream);
tmp_assattr_value_1 = par_stream;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__stream, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__is_stream_consumed, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_assattr_target_3;
tmp_called_instance_1 = module_var_accessor_httpx$_content$inspect(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_stream);
tmp_args_element_value_1 = par_stream;
frame_frame_httpx$_content$$$function__4___init__->m_frame.f_lineno = 48;
tmp_assattr_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_isgenerator, tmp_args_element_value_1);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__is_generator, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_content$$$function__4___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_content$$$function__4___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_content$$$function__4___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_content$$$function__4___init__,
    type_description_1,
    par_self,
    par_stream
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_content$$$function__4___init__ == cache_frame_frame_httpx$_content$$$function__4___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_content$$$function__4___init__);
    cache_frame_frame_httpx$_content$$$function__4___init__ = NULL;
}

assertFrameObject(frame_frame_httpx$_content$$$function__4___init__);

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
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_content$$$function__5___iter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_GENERATOR_httpx$_content$$$function__5___iter__$$$genobj__1___iter__(tstate, tmp_closure_1);

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
struct httpx$_content$$$function__5___iter__$$$genobj__1___iter___locals {
PyObject *var_chunk;
PyObject *var_part;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
bool tmp_result;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
};
#endif

static PyObject *httpx$_content$$$function__5___iter__$$$genobj__1___iter___context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct httpx$_content$$$function__5___iter__$$$genobj__1___iter___locals *generator_heap = (struct httpx$_content$$$function__5___iter__$$$genobj__1___iter___locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_chunk = NULL;
generator_heap->var_part = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_4e42fcfd920d3e264d497825787d98a1, module_httpx$_content, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_2;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 51;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__is_stream_consumed);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 51;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_attribute_value_1);

generator_heap->exception_lineno = 51;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 51;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 51;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__is_generator);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 51;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_attribute_value_2);

generator_heap->exception_lineno = 51;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
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
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_httpx$_content$StreamConsumed(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_StreamConsumed);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 52;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 52;
tmp_raise_type_input_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 52;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 52;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
generator_heap->exception_state.exception_value = tmp_raise_type_1;
generator_heap->exception_lineno = 52;
RAISE_EXCEPTION_WITH_VALUE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "coo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_True;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 54;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_1 = Nuitka_Cell_GET(generator->m_closure[0]);
generator_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__is_stream_consumed, tmp_assattr_value_1);
if (generator_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 54;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 55;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__stream);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 55;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
generator_heap->tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, const_str_plain_read);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 55;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (generator_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_7;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 57;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}

tmp_expression_value_6 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__stream);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 57;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_read);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 57;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 57;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}

tmp_expression_value_7 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_CHUNK_SIZE);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_2);

generator_heap->exception_lineno = 57;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 57;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 57;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_chunk == NULL);
generator_heap->var_chunk = tmp_assign_source_1;
}
loop_start_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
if (generator_heap->var_chunk == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_chunk);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 58;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}

tmp_operand_value_1 = generator_heap->var_chunk;
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 58;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = (generator_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
goto loop_end_1;
branch_no_3:;
{
PyObject *tmp_expression_value_8;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
if (generator_heap->var_chunk == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_chunk);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 59;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}

tmp_expression_value_8 = generator_heap->var_chunk;
Py_INCREF(tmp_expression_value_8);
generator->m_yield_return_index = 1;
return tmp_expression_value_8;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 59;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_11;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 60;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}

tmp_expression_value_10 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain__stream);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 60;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, const_str_plain_read);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 60;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 60;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}

tmp_expression_value_11 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_CHUNK_SIZE);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_3);

generator_heap->exception_lineno = 60;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 60;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 60;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_chunk;
    generator_heap->var_chunk = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 58;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_12;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 63;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}

tmp_expression_value_12 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain__stream);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 63;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 63;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_3;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_4;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_4 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "coo";
generator_heap->exception_lineno = 63;
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
    PyObject *old = generator_heap->var_part;
    generator_heap->var_part = tmp_assign_source_5;
    Py_INCREF(generator_heap->var_part);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_13;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
CHECK_OBJECT(generator_heap->var_part);
tmp_expression_value_13 = generator_heap->var_part;
Py_INCREF(tmp_expression_value_13);
generator->m_yield_return_index = 2;
return tmp_expression_value_13;
yield_return_2:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 64;
generator_heap->type_description_1 = "coo";
    goto try_except_handler_2;
}
tmp_yield_result_2 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_2);
Py_DECREF(tmp_yield_result_2);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 63;
generator_heap->type_description_1 = "coo";
    goto try_except_handler_2;
}
goto loop_start_2;
loop_end_2:;
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
branch_end_2:;

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
    generator_heap->var_chunk,
    generator_heap->var_part
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

Py_XDECREF(generator_heap->var_chunk);
generator_heap->var_chunk = NULL;
Py_XDECREF(generator_heap->var_part);
generator_heap->var_part = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->var_chunk);
generator_heap->var_chunk = NULL;
Py_XDECREF(generator_heap->var_part);
generator_heap->var_part = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_httpx$_content$$$function__5___iter__$$$genobj__1___iter__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        httpx$_content$$$function__5___iter__$$$genobj__1___iter___context,
        module_httpx$_content,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_a93e27c9e4eb0900c48cbe178b1b4a09,
#endif
        code_objects_4e42fcfd920d3e264d497825787d98a1,
        closure,
        1,
#if 1
        sizeof(struct httpx$_content$$$function__5___iter__$$$genobj__1___iter___locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpx$_content$$$function__6___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_stream = python_pars[1];
struct Nuitka_FrameObject *frame_frame_httpx$_content$$$function__6___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_content$$$function__6___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_content$$$function__6___init__)) {
    Py_XDECREF(cache_frame_frame_httpx$_content$$$function__6___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_content$$$function__6___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_content$$$function__6___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_f0fd23675a871fc9af981a7a3f0fa5ce, module_httpx$_content, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_content$$$function__6___init__->m_type_description == NULL);
frame_frame_httpx$_content$$$function__6___init__ = cache_frame_frame_httpx$_content$$$function__6___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_content$$$function__6___init__);
assert(Py_REFCNT(frame_frame_httpx$_content$$$function__6___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_stream);
tmp_assattr_value_1 = par_stream;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__stream, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__is_stream_consumed, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_assattr_target_3;
tmp_called_instance_1 = module_var_accessor_httpx$_content$inspect(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_stream);
tmp_args_element_value_1 = par_stream;
frame_frame_httpx$_content$$$function__6___init__->m_frame.f_lineno = 73;
tmp_assattr_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_isasyncgen, tmp_args_element_value_1);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__is_generator, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_content$$$function__6___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_content$$$function__6___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_content$$$function__6___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_content$$$function__6___init__,
    type_description_1,
    par_self,
    par_stream
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_content$$$function__6___init__ == cache_frame_frame_httpx$_content$$$function__6___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_content$$$function__6___init__);
    cache_frame_frame_httpx$_content$$$function__6___init__ = NULL;
}

assertFrameObject(frame_frame_httpx$_content$$$function__6___init__);

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
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_content$$$function__7___aiter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_ASYNCGEN_httpx$_content$$$function__7___aiter__$$$asyncgen__1___aiter__(tstate, tmp_closure_1);

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
struct httpx$_content$$$function__7___aiter__$$$asyncgen__1___aiter___locals {
PyObject *var_chunk;
PyObject *var_part;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
bool tmp_result;
int tmp_res;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
};
#endif

static PyObject *httpx$_content$$$function__7___aiter__$$$asyncgen__1___aiter___context(PyThreadState *tstate, struct Nuitka_AsyncgenObject *asyncgen, PyObject *yield_return_value) {
    CHECK_OBJECT(asyncgen);
    assert(Nuitka_Asyncgen_Check((PyObject *)asyncgen));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct httpx$_content$$$function__7___aiter__$$$asyncgen__1___aiter___locals *asyncgen_heap = (struct httpx$_content$$$function__7___aiter__$$$asyncgen__1___aiter___locals *)asyncgen->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(asyncgen->m_yield_return_index) {
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
asyncgen_heap->var_chunk = NULL;
asyncgen_heap->var_part = NULL;
asyncgen_heap->tmp_for_loop_1__for_iterator = NULL;
asyncgen_heap->tmp_for_loop_1__iter_value = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_9adc441bc8c43ad7a8d1cb2f81afe32f, module_httpx$_content, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_2;
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 76;
asyncgen_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__is_stream_consumed);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 76;
asyncgen_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_attribute_value_1);

asyncgen_heap->exception_lineno = 76;
asyncgen_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 76;
asyncgen_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 76;
asyncgen_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__is_generator);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 76;
asyncgen_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_attribute_value_2);

asyncgen_heap->exception_lineno = 76;
asyncgen_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
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
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_httpx$_content$StreamConsumed(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_StreamConsumed);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 77;
asyncgen_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
asyncgen->m_frame->m_frame.f_lineno = 77;
tmp_raise_type_input_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 77;
asyncgen_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 77;
asyncgen_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
asyncgen_heap->exception_state.exception_value = tmp_raise_type_1;
asyncgen_heap->exception_lineno = 77;
RAISE_EXCEPTION_WITH_VALUE(tstate, &asyncgen_heap->exception_state);
asyncgen_heap->type_description_1 = "coo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_True;
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 79;
asyncgen_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_1 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
asyncgen_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__is_stream_consumed, tmp_assattr_value_1);
if (asyncgen_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 79;
asyncgen_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 80;
asyncgen_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__stream);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 80;
asyncgen_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
asyncgen_heap->tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts.const_str_plain_aread);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (asyncgen_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 80;
asyncgen_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (asyncgen_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_9;
asyncgen->m_frame->m_frame.f_lineno = 82;
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 82;
asyncgen_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}

tmp_expression_value_8 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__stream);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 82;
asyncgen_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_aread);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 82;
asyncgen_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 82;
asyncgen_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}

tmp_expression_value_9 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_CHUNK_SIZE);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_called_value_2);

asyncgen_heap->exception_lineno = 82;
asyncgen_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
asyncgen->m_frame->m_frame.f_lineno = 82;
tmp_expression_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 82;
asyncgen_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = ASYNC_AWAIT(tstate, tmp_expression_value_6, await_normal);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 82;
asyncgen_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_6, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_7, sizeof(PyObject *), &tmp_expression_value_8, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_9, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 1;
asyncgen->m_yield_from = tmp_expression_value_5;
asyncgen->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_6, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_7, sizeof(PyObject *), &tmp_expression_value_8, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_9, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 82;
asyncgen_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = yield_return_value;
assert(asyncgen_heap->var_chunk == NULL);
asyncgen_heap->var_chunk = tmp_assign_source_1;
}
loop_start_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
if (asyncgen_heap->var_chunk == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_chunk);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 83;
asyncgen_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}

tmp_operand_value_1 = asyncgen_heap->var_chunk;
asyncgen_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (asyncgen_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 83;
asyncgen_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = (asyncgen_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
goto loop_end_1;
branch_no_3:;
{
PyObject *tmp_expression_value_10;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
if (asyncgen_heap->var_chunk == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_chunk);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 84;
asyncgen_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}

tmp_expression_value_10 = asyncgen_heap->var_chunk;
Py_INCREF(tmp_expression_value_10);
asyncgen->m_yield_return_index = 2;
return tmp_expression_value_10;
yield_return_2:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 84;
asyncgen_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_15;
asyncgen->m_frame->m_frame.f_lineno = 85;
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 85;
asyncgen_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}

tmp_expression_value_14 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain__stream);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 85;
asyncgen_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_aread);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 85;
asyncgen_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 85;
asyncgen_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}

tmp_expression_value_15 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_CHUNK_SIZE);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_called_value_3);

asyncgen_heap->exception_lineno = 85;
asyncgen_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
asyncgen->m_frame->m_frame.f_lineno = 85;
tmp_expression_value_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 85;
asyncgen_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
tmp_expression_value_11 = ASYNC_AWAIT(tstate, tmp_expression_value_12, await_normal);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 85;
asyncgen_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_12, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_13, sizeof(PyObject *), &tmp_expression_value_14, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_expression_value_15, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 3;
asyncgen->m_yield_from = tmp_expression_value_11;
asyncgen->m_awaiting = true;
return NULL;

yield_return_3:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_12, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_13, sizeof(PyObject *), &tmp_expression_value_14, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_expression_value_15, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 85;
asyncgen_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = yield_return_value;
{
    PyObject *old = asyncgen_heap->var_chunk;
    asyncgen_heap->var_chunk = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 83;
asyncgen_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_16;
PyObject *tmp_value_value_1;
PyObject *tmp_expression_value_17;
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 88;
asyncgen_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}

tmp_expression_value_17 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
tmp_value_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain__stream);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 88;
asyncgen_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
tmp_expression_value_16 = ASYNC_MAKE_ITERATOR(tstate, tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_expression_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 88;
asyncgen_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_value_value_1, sizeof(PyObject *), &tmp_expression_value_17, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 4;
asyncgen->m_yield_from = tmp_expression_value_16;
asyncgen->m_awaiting = true;
return NULL;

yield_return_4:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_value_value_1, sizeof(PyObject *), &tmp_expression_value_17, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 88;
asyncgen_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = yield_return_value;
assert(asyncgen_heap->tmp_for_loop_1__for_iterator == NULL);
asyncgen_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_3;
}
// Tried code:
loop_start_2:;
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_18;
PyObject *tmp_value_value_2;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
tmp_value_value_2 = asyncgen_heap->tmp_for_loop_1__for_iterator;
tmp_expression_value_18 = ASYNC_ITERATOR_NEXT(tstate, tmp_value_value_2);
if (tmp_expression_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 88;
asyncgen_heap->type_description_1 = "coo";
    goto try_except_handler_3;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_value_value_2, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 5;
asyncgen->m_yield_from = tmp_expression_value_18;
asyncgen->m_awaiting = true;
return NULL;

yield_return_5:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_value_value_2, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 88;
asyncgen_heap->type_description_1 = "coo";
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
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = asyncgen_heap->exception_keeper_name_1.exception_value;
tmp_cmp_expr_right_1 = PyExc_StopAsyncIteration;
asyncgen_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(asyncgen_heap->tmp_res == -1));
tmp_condition_result_4 = (asyncgen_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
RELEASE_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_keeper_name_1);
goto loop_end_2;
goto branch_end_4;
branch_no_4:;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_1;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_1;

goto try_except_handler_2;
branch_end_4:;
// End of try:
try_end_1:;
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__iter_value);
tmp_assign_source_5 = asyncgen_heap->tmp_for_loop_1__iter_value;
{
    PyObject *old = asyncgen_heap->var_part;
    asyncgen_heap->var_part = tmp_assign_source_5;
    Py_INCREF(asyncgen_heap->var_part);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_19;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
CHECK_OBJECT(asyncgen_heap->var_part);
tmp_expression_value_19 = asyncgen_heap->var_part;
Py_INCREF(tmp_expression_value_19);
asyncgen->m_yield_return_index = 6;
return tmp_expression_value_19;
yield_return_6:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 89;
asyncgen_heap->type_description_1 = "coo";
    goto try_except_handler_2;
}
tmp_yield_result_2 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_2);
Py_DECREF(tmp_yield_result_2);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 88;
asyncgen_heap->type_description_1 = "coo";
    goto try_except_handler_2;
}
goto loop_start_2;
loop_end_2:;
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
asyncgen_heap->exception_keeper_lineno_2 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_2 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

Py_XDECREF(asyncgen_heap->tmp_for_loop_1__iter_value);
asyncgen_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(asyncgen_heap->tmp_for_loop_1__for_iterator);
asyncgen_heap->tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_2;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
Py_XDECREF(asyncgen_heap->tmp_for_loop_1__iter_value);
asyncgen_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(asyncgen_heap->tmp_for_loop_1__for_iterator);
asyncgen_heap->tmp_for_loop_1__for_iterator = NULL;
branch_end_2:;

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
    asyncgen->m_closure[0],
    asyncgen_heap->var_chunk,
    asyncgen_heap->var_part
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
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(asyncgen_heap->var_chunk);
asyncgen_heap->var_chunk = NULL;
Py_XDECREF(asyncgen_heap->var_part);
asyncgen_heap->var_part = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
asyncgen_heap->exception_keeper_lineno_3 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_3 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

Py_XDECREF(asyncgen_heap->var_chunk);
asyncgen_heap->var_chunk = NULL;
Py_XDECREF(asyncgen_heap->var_part);
asyncgen_heap->var_part = NULL;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_3;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_3;

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

static PyObject *MAKE_ASYNCGEN_httpx$_content$$$function__7___aiter__$$$asyncgen__1___aiter__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Asyncgen_New(
        httpx$_content$$$function__7___aiter__$$$asyncgen__1___aiter___context,
        module_httpx$_content,
        mod_consts.const_str_plain___aiter__,
        mod_consts.const_str_digest_3ffce2741303c0a9253815c42af41daa,
        code_objects_9adc441bc8c43ad7a8d1cb2f81afe32f,
        closure,
        1,
#if 1
        sizeof(struct httpx$_content$$$function__7___aiter__$$$asyncgen__1___aiter___locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpx$_content$$$function__8___iter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_httpx$_content$$$function__8___iter__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_content$$$function__8___iter__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_content$$$function__8___iter__)) {
    Py_XDECREF(cache_frame_frame_httpx$_content$$$function__8___iter__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_content$$$function__8___iter__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_content$$$function__8___iter__ = MAKE_FUNCTION_FRAME(tstate, code_objects_1b0530e0b677ce7fb58e0ad9c47006f0, module_httpx$_content, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_content$$$function__8___iter__->m_type_description == NULL);
frame_frame_httpx$_content$$$function__8___iter__ = cache_frame_frame_httpx$_content$$$function__8___iter__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_content$$$function__8___iter__);
assert(Py_REFCNT(frame_frame_httpx$_content$$$function__8___iter__) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_httpx$_content$StreamClosed(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_StreamClosed);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 100;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_content$$$function__8___iter__->m_frame.f_lineno = 100;
tmp_raise_type_input_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 100;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_content$$$function__8___iter__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_content$$$function__8___iter__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_content$$$function__8___iter__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_content$$$function__8___iter__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_content$$$function__8___iter__ == cache_frame_frame_httpx$_content$$$function__8___iter__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_content$$$function__8___iter__);
    cache_frame_frame_httpx$_content$$$function__8___iter__ = NULL;
}

assertFrameObject(frame_frame_httpx$_content$$$function__8___iter__);

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


static PyObject *impl_httpx$_content$$$function__9___aiter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_ASYNCGEN_httpx$_content$$$function__9___aiter__$$$asyncgen__1___aiter__(tstate);

goto try_return_handler_1;
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
struct httpx$_content$$$function__9___aiter__$$$asyncgen__1___aiter___locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
};
#endif

static PyObject *httpx$_content$$$function__9___aiter__$$$asyncgen__1___aiter___context(PyThreadState *tstate, struct Nuitka_AsyncgenObject *asyncgen, PyObject *yield_return_value) {
    CHECK_OBJECT(asyncgen);
    assert(Nuitka_Asyncgen_Check((PyObject *)asyncgen));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct httpx$_content$$$function__9___aiter__$$$asyncgen__1___aiter___locals *asyncgen_heap = (struct httpx$_content$$$function__9___aiter__$$$asyncgen__1___aiter___locals *)asyncgen->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
asyncgen_heap->type_description_1 = NULL;
asyncgen_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
asyncgen_heap->exception_lineno = 0;

    // Actual asyncgen body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_7e5dac79f8e73b212abeac3cf3f709a2, module_httpx$_content, sizeof(void *));
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_httpx$_content$StreamClosed(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_StreamClosed);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 103;
asyncgen_heap->type_description_1 = "N";
    goto frame_exception_exit_1;
}
asyncgen->m_frame->m_frame.f_lineno = 103;
tmp_raise_type_input_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 103;
asyncgen_heap->type_description_1 = "N";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 103;
asyncgen_heap->type_description_1 = "N";
    goto frame_exception_exit_1;
}
asyncgen_heap->exception_state.exception_value = tmp_raise_type_1;
asyncgen_heap->exception_lineno = 103;
RAISE_EXCEPTION_WITH_VALUE(tstate, &asyncgen_heap->exception_state);
asyncgen_heap->type_description_1 = "N";
goto frame_exception_exit_1;
}

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
    NULL
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
goto function_exception_exit;
frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("return must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&asyncgen_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
    return NULL;

}

static PyObject *MAKE_ASYNCGEN_httpx$_content$$$function__9___aiter__$$$asyncgen__1___aiter__(PyThreadState *tstate) {
    return Nuitka_Asyncgen_New(
        httpx$_content$$$function__9___aiter__$$$asyncgen__1___aiter___context,
        module_httpx$_content,
        mod_consts.const_str_plain___aiter__,
        mod_consts.const_str_digest_eb49f16c9ecf4c33a79117cdb7ff6c15,
        code_objects_7e5dac79f8e73b212abeac3cf3f709a2,
        NULL,
        0,
#if 1
        sizeof(struct httpx$_content$$$function__9___aiter__$$$asyncgen__1___aiter___locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpx$_content$$$function__10_encode_content(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_content = python_pars[0];
PyObject *var_body = NULL;
PyObject *var_content_length = NULL;
PyObject *var_headers = NULL;
PyObject *var_content_length_or_none = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_content$$$function__10_encode_content;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_content$$$function__10_encode_content = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_httpx$_content$$$function__10_encode_content)) {
    Py_XDECREF(cache_frame_frame_httpx$_content$$$function__10_encode_content);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_content$$$function__10_encode_content == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_content$$$function__10_encode_content = MAKE_FUNCTION_FRAME(tstate, code_objects_21d841bfcb11fb55ba3a51e8c5f48f25, module_httpx$_content, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_content$$$function__10_encode_content->m_type_description == NULL);
frame_frame_httpx$_content$$$function__10_encode_content = cache_frame_frame_httpx$_content$$$function__10_encode_content;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_content$$$function__10_encode_content);
assert(Py_REFCNT(frame_frame_httpx$_content$$$function__10_encode_content) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_content);
tmp_isinstance_inst_1 = par_content;
tmp_isinstance_cls_1 = mod_consts.const_tuple_type_bytes_type_str_tuple;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
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
PyObject *tmp_assign_source_1;
nuitka_bool tmp_condition_result_2;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_content);
tmp_isinstance_inst_2 = par_content;
tmp_isinstance_cls_2 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_content);
tmp_expression_value_1 = par_content;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_encode);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_content$$$function__10_encode_content->m_frame.f_lineno = 111;
tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(par_content);
tmp_assign_source_1 = par_content;
Py_INCREF(tmp_assign_source_1);
condexpr_end_1:;
assert(var_body == NULL);
var_body = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(var_body);
tmp_len_arg_1 = var_body;
tmp_assign_source_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_content_length == NULL);
var_content_length = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_unicode_arg_1;
CHECK_OBJECT(var_body);
tmp_truth_name_1 = CHECK_IF_TRUE(var_body);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
tmp_dict_key_1 = mod_consts.const_str_digest_3c9527fc53ea2272c2080ca035d6631c;
CHECK_OBJECT(var_content_length);
tmp_unicode_arg_1 = var_content_length;
tmp_dict_value_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
goto condexpr_end_2;
condexpr_false_2:;
tmp_assign_source_3 = MAKE_DICT_EMPTY(tstate);
condexpr_end_2:;
assert(var_headers == NULL);
var_headers = tmp_assign_source_3;
}
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_headers);
tmp_tuple_element_1 = var_headers;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
tmp_called_value_2 = module_var_accessor_httpx$_content$ByteStream(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ByteStream);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 114;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
CHECK_OBJECT(var_body);
tmp_args_element_value_1 = var_body;
frame_frame_httpx$_content$$$function__10_encode_content->m_frame.f_lineno = 114;
tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooooo";
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
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_4;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_isinstance_inst_3;
PyObject *tmp_isinstance_cls_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_4;
PyObject *tmp_isinstance_cls_4;
CHECK_OBJECT(par_content);
tmp_isinstance_inst_3 = par_content;
tmp_isinstance_cls_3 = module_var_accessor_httpx$_content$Iterable(tstate);
if (unlikely(tmp_isinstance_cls_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Iterable);
}

if (tmp_isinstance_cls_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 116;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_content);
tmp_isinstance_inst_4 = par_content;
tmp_isinstance_cls_4 = (PyObject *)&PyDict_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_4 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_4 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
tmp_called_value_3 = module_var_accessor_httpx$_content$peek_filelike_length(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_peek_filelike_length);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 121;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_content);
tmp_args_element_value_2 = par_content;
frame_frame_httpx$_content$$$function__10_encode_content->m_frame.f_lineno = 121;
tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_content_length_or_none == NULL);
var_content_length_or_none = tmp_assign_source_4;
}
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_content_length_or_none);
tmp_cmp_expr_left_1 = var_content_length_or_none;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = DICT_COPY(tstate, mod_consts.const_dict_28476657b1209c8792e14b5c774094a5);
assert(var_headers == NULL);
var_headers = tmp_assign_source_5;
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_unicode_arg_2;
tmp_dict_key_2 = mod_consts.const_str_digest_3c9527fc53ea2272c2080ca035d6631c;
CHECK_OBJECT(var_content_length_or_none);
tmp_unicode_arg_2 = var_content_length_or_none;
tmp_dict_value_2 = BUILTIN_UNICODE1(tmp_unicode_arg_2);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_6 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
assert(var_headers == NULL);
var_headers = tmp_assign_source_6;
}
branch_end_3:;
{
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(var_headers);
tmp_tuple_element_2 = var_headers;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
tmp_called_value_4 = module_var_accessor_httpx$_content$IteratorByteStream(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IteratorByteStream);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;
type_description_1 = "ooooo";
    goto tuple_build_exception_2;
}
CHECK_OBJECT(par_content);
tmp_args_element_value_3 = par_content;
frame_frame_httpx$_content$$$function__10_encode_content->m_frame.f_lineno = 127;
tmp_tuple_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "ooooo";
    goto tuple_build_exception_2;
}
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
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_isinstance_inst_5;
PyObject *tmp_isinstance_cls_5;
CHECK_OBJECT(par_content);
tmp_isinstance_inst_5 = par_content;
tmp_isinstance_cls_5 = module_var_accessor_httpx$_content$AsyncIterable(tstate);
if (unlikely(tmp_isinstance_cls_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncIterable);
}

if (tmp_isinstance_cls_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 129;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_5, tmp_isinstance_cls_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = DICT_COPY(tstate, mod_consts.const_dict_28476657b1209c8792e14b5c774094a5);
assert(var_headers == NULL);
var_headers = tmp_assign_source_7;
}
{
PyObject *tmp_tuple_element_3;
CHECK_OBJECT(var_headers);
tmp_tuple_element_3 = var_headers;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_4;
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_3);
tmp_called_value_5 = module_var_accessor_httpx$_content$AsyncIteratorByteStream(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncIteratorByteStream);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 131;
type_description_1 = "ooooo";
    goto tuple_build_exception_3;
}
CHECK_OBJECT(par_content);
tmp_args_element_value_4 = par_content;
frame_frame_httpx$_content$$$function__10_encode_content->m_frame.f_lineno = 131;
tmp_tuple_element_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "ooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_return_value);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
goto frame_return_exit_1;
}
branch_no_4:;
branch_end_2:;
branch_end_1:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_4;
tmp_tuple_element_4 = mod_consts.const_str_digest_0de8bee7f8732529113e7904ee34b5e7;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_type_arg_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_4);
CHECK_OBJECT(par_content);
tmp_type_arg_1 = par_content;
tmp_operand_value_2 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_operand_value_2 == NULL));
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooooo";
    goto tuple_build_exception_4;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooooo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_4);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_httpx$_content$$$function__10_encode_content->m_frame.f_lineno = 133;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 133;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto frame_exception_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_content$$$function__10_encode_content, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_content$$$function__10_encode_content->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_content$$$function__10_encode_content, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_content$$$function__10_encode_content,
    type_description_1,
    par_content,
    var_body,
    var_content_length,
    var_headers,
    var_content_length_or_none
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_content$$$function__10_encode_content == cache_frame_frame_httpx$_content$$$function__10_encode_content) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_content$$$function__10_encode_content);
    cache_frame_frame_httpx$_content$$$function__10_encode_content = NULL;
}

assertFrameObject(frame_frame_httpx$_content$$$function__10_encode_content);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_body);
var_body = NULL;
Py_XDECREF(var_content_length);
var_content_length = NULL;
CHECK_OBJECT(var_headers);
CHECK_OBJECT(var_headers);
Py_DECREF(var_headers);
var_headers = NULL;
Py_XDECREF(var_content_length_or_none);
var_content_length_or_none = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_body);
var_body = NULL;
Py_XDECREF(var_content_length);
var_content_length = NULL;
Py_XDECREF(var_headers);
var_headers = NULL;
Py_XDECREF(var_content_length_or_none);
var_content_length_or_none = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_content);
Py_DECREF(par_content);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_content);
Py_DECREF(par_content);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_content$$$function__11_encode_urlencoded_data(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_data = python_pars[0];
PyObject *var_plain_data = NULL;
PyObject *var_key = NULL;
PyObject *var_value = NULL;
PyObject *var_body = NULL;
PyObject *var_content_length = NULL;
PyObject *var_headers = NULL;
PyObject *outline_0_var_item = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_content$$$function__11_encode_urlencoded_data;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_content$$$function__11_encode_urlencoded_data = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_plain_data == NULL);
var_plain_data = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_httpx$_content$$$function__11_encode_urlencoded_data)) {
    Py_XDECREF(cache_frame_frame_httpx$_content$$$function__11_encode_urlencoded_data);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_content$$$function__11_encode_urlencoded_data == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_content$$$function__11_encode_urlencoded_data = MAKE_FUNCTION_FRAME(tstate, code_objects_9bbcb4f5140926fdfba6423210f84261, module_httpx$_content, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_content$$$function__11_encode_urlencoded_data->m_type_description == NULL);
frame_frame_httpx$_content$$$function__11_encode_urlencoded_data = cache_frame_frame_httpx$_content$$$function__11_encode_urlencoded_data;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_content$$$function__11_encode_urlencoded_data);
assert(Py_REFCNT(frame_frame_httpx$_content$$$function__11_encode_urlencoded_data) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_data);
tmp_expression_value_1 = par_data;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_items);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "ooooooNo";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_content$$$function__11_encode_urlencoded_data->m_frame.f_lineno = 140;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "ooooooNo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "ooooooNo";
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
type_description_1 = "ooooooNo";
exception_lineno = 140;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "ooooooNo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 140;
type_description_1 = "ooooooNo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 140;
type_description_1 = "ooooooNo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 140;
type_description_1 = "ooooooNo";
    goto try_except_handler_4;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
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

goto try_except_handler_3;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
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

goto try_except_handler_2;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_key;
    var_key = tmp_assign_source_7;
    Py_INCREF(var_key);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_value;
    var_value = tmp_assign_source_8;
    Py_INCREF(var_value);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(var_value);
tmp_isinstance_inst_1 = var_value;
tmp_isinstance_cls_1 = mod_consts.const_tuple_type_list_type_tuple_tuple;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "ooooooNo";
    goto try_except_handler_2;
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
PyObject *tmp_list_arg_value_1;
PyObject *tmp_value_value_1;
if (var_plain_data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_plain_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 142;
type_description_1 = "ooooooNo";
    goto try_except_handler_2;
}

tmp_list_arg_value_1 = var_plain_data;
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(var_value);
tmp_iter_arg_3 = var_value;
tmp_assign_source_9 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "ooooooNo";
    goto try_except_handler_5;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_10;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_2 = tmp_listcomp_1__$0;
tmp_assign_source_11 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_11 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooNo";
exception_lineno = 142;
        goto try_except_handler_6;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_12 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_item;
    outline_0_var_item = tmp_assign_source_12;
    Py_INCREF(outline_0_var_item);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(var_key);
tmp_tuple_element_1 = var_key;
tmp_append_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyTuple_SET_ITEM0(tmp_append_value_1, 0, tmp_tuple_element_1);
tmp_called_value_2 = module_var_accessor_httpx$_content$primitive_value_to_str(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_primitive_value_to_str);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 142;
type_description_1 = "ooooooNo";
    goto tuple_build_exception_1;
}
CHECK_OBJECT(outline_0_var_item);
tmp_args_element_value_1 = outline_0_var_item;
frame_frame_httpx$_content$$$function__11_encode_urlencoded_data->m_frame.f_lineno = 142;
tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "ooooooNo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_append_value_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_append_value_1);
goto try_except_handler_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "ooooooNo";
    goto try_except_handler_6;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "ooooooNo";
    goto try_except_handler_6;
}
goto loop_start_2;
loop_end_2:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_value_value_1 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_value_value_1);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
CHECK_OBJECT(tmp_listcomp_1__$0);
CHECK_OBJECT(tmp_listcomp_1__$0);
Py_DECREF(tmp_listcomp_1__$0);
tmp_listcomp_1__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_1__contraction);
CHECK_OBJECT(tmp_listcomp_1__contraction);
Py_DECREF(tmp_listcomp_1__contraction);
tmp_listcomp_1__contraction = NULL;
Py_XDECREF(tmp_listcomp_1__iter_value_0);
tmp_listcomp_1__iter_value_0 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp_1__$0);
CHECK_OBJECT(tmp_listcomp_1__$0);
Py_DECREF(tmp_listcomp_1__$0);
tmp_listcomp_1__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_1__contraction);
CHECK_OBJECT(tmp_listcomp_1__contraction);
Py_DECREF(tmp_listcomp_1__contraction);
tmp_listcomp_1__contraction = NULL;
Py_XDECREF(tmp_listcomp_1__iter_value_0);
tmp_listcomp_1__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_5;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_XDECREF(outline_0_var_item);
outline_0_var_item = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_item);
outline_0_var_item = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 142;
goto try_except_handler_2;
outline_result_1:;
tmp_result = LIST_EXTEND_FROM_ITERABLE(tstate, tmp_list_arg_value_1, tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "ooooooNo";
    goto try_except_handler_2;
}
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_1;
PyObject *tmp_tuple_element_2;
if (var_plain_data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_plain_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 144;
type_description_1 = "ooooooNo";
    goto try_except_handler_2;
}

tmp_list_arg_value_2 = var_plain_data;
CHECK_OBJECT(var_key);
tmp_tuple_element_2 = var_key;
tmp_item_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyTuple_SET_ITEM0(tmp_item_value_1, 0, tmp_tuple_element_2);
tmp_called_value_3 = module_var_accessor_httpx$_content$primitive_value_to_str(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_primitive_value_to_str);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 144;
type_description_1 = "ooooooNo";
    goto tuple_build_exception_2;
}
CHECK_OBJECT(var_value);
tmp_args_element_value_2 = var_value;
frame_frame_httpx$_content$$$function__11_encode_urlencoded_data->m_frame.f_lineno = 144;
tmp_tuple_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "ooooooNo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_item_value_1, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_item_value_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_result = LIST_APPEND1(tmp_list_arg_value_2, tmp_item_value_1);
assert(!(tmp_result == false));
}
branch_end_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "ooooooNo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_5;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_1;
tmp_called_value_5 = module_var_accessor_httpx$_content$urlencode(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urlencode);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 145;
type_description_1 = "ooooooNo";
    goto frame_exception_exit_1;
}
if (var_plain_data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_plain_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 145;
type_description_1 = "ooooooNo";
    goto frame_exception_exit_1;
}

tmp_tuple_element_3 = var_plain_data;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_3);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_3e205b6416b9b29c0480d7ddc5289df9);
frame_frame_httpx$_content$$$function__11_encode_urlencoded_data->m_frame.f_lineno = 145;
tmp_expression_value_2 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooooooNo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_encode);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooooooNo";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_content$$$function__11_encode_urlencoded_data->m_frame.f_lineno = 145;
tmp_assign_source_13 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooooooNo";
    goto frame_exception_exit_1;
}
assert(var_body == NULL);
var_body = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_unicode_arg_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(var_body);
tmp_len_arg_1 = var_body;
tmp_unicode_arg_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_unicode_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "ooooooNo";
    goto frame_exception_exit_1;
}
tmp_assign_source_14 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
CHECK_OBJECT(tmp_unicode_arg_1);
Py_DECREF(tmp_unicode_arg_1);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "ooooooNo";
    goto frame_exception_exit_1;
}
assert(var_content_length == NULL);
var_content_length = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_digest_3c9527fc53ea2272c2080ca035d6631c;
CHECK_OBJECT(var_content_length);
tmp_dict_value_1 = var_content_length;
tmp_assign_source_15 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_assign_source_15, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_digest_6d6a615162e89eb148ba9bf8dbfc06d3;
tmp_dict_value_1 = mod_consts.const_str_digest_5d735bc80d16f0fedbdde78344a2d394;
tmp_res = PyDict_SetItem(tmp_assign_source_15, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
assert(var_headers == NULL);
var_headers = tmp_assign_source_15;
}
{
PyObject *tmp_tuple_element_4;
CHECK_OBJECT(var_headers);
tmp_tuple_element_4 = var_headers;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_3;
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_4);
tmp_called_value_6 = module_var_accessor_httpx$_content$ByteStream(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ByteStream);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 149;
type_description_1 = "ooooooNo";
    goto tuple_build_exception_3;
}
CHECK_OBJECT(var_body);
tmp_args_element_value_3 = var_body;
frame_frame_httpx$_content$$$function__11_encode_urlencoded_data->m_frame.f_lineno = 149;
tmp_tuple_element_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_3);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ooooooNo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_4);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_return_value);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_content$$$function__11_encode_urlencoded_data, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_content$$$function__11_encode_urlencoded_data->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_content$$$function__11_encode_urlencoded_data, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_content$$$function__11_encode_urlencoded_data,
    type_description_1,
    par_data,
    var_plain_data,
    var_key,
    var_value,
    var_body,
    var_content_length,
    NULL,
    var_headers
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_content$$$function__11_encode_urlencoded_data == cache_frame_frame_httpx$_content$$$function__11_encode_urlencoded_data) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_content$$$function__11_encode_urlencoded_data);
    cache_frame_frame_httpx$_content$$$function__11_encode_urlencoded_data = NULL;
}

assertFrameObject(frame_frame_httpx$_content$$$function__11_encode_urlencoded_data);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_plain_data);
var_plain_data = NULL;
Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_value);
var_value = NULL;
CHECK_OBJECT(var_body);
CHECK_OBJECT(var_body);
Py_DECREF(var_body);
var_body = NULL;
CHECK_OBJECT(var_content_length);
CHECK_OBJECT(var_content_length);
Py_DECREF(var_content_length);
var_content_length = NULL;
CHECK_OBJECT(var_headers);
CHECK_OBJECT(var_headers);
Py_DECREF(var_headers);
var_headers = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_plain_data);
var_plain_data = NULL;
Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_value);
var_value = NULL;
Py_XDECREF(var_body);
var_body = NULL;
Py_XDECREF(var_content_length);
var_content_length = NULL;
Py_XDECREF(var_headers);
var_headers = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_data);
Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_content$$$function__12_encode_multipart_data(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_data = python_pars[0];
PyObject *par_files = python_pars[1];
PyObject *par_boundary = python_pars[2];
PyObject *var_multipart = NULL;
PyObject *var_headers = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_content$$$function__12_encode_multipart_data;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_content$$$function__12_encode_multipart_data = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_httpx$_content$$$function__12_encode_multipart_data)) {
    Py_XDECREF(cache_frame_frame_httpx$_content$$$function__12_encode_multipart_data);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_content$$$function__12_encode_multipart_data == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_content$$$function__12_encode_multipart_data = MAKE_FUNCTION_FRAME(tstate, code_objects_5f27d920eed772853fd7367c5abac2cb, module_httpx$_content, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_content$$$function__12_encode_multipart_data->m_type_description == NULL);
frame_frame_httpx$_content$$$function__12_encode_multipart_data = cache_frame_frame_httpx$_content$$$function__12_encode_multipart_data;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_content$$$function__12_encode_multipart_data);
assert(Py_REFCNT(frame_frame_httpx$_content$$$function__12_encode_multipart_data) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
tmp_called_value_1 = module_var_accessor_httpx$_content$MultipartStream(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MultipartStream);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 155;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_data);
tmp_kw_call_value_0_1 = par_data;
CHECK_OBJECT(par_files);
tmp_kw_call_value_1_1 = par_files;
CHECK_OBJECT(par_boundary);
tmp_kw_call_value_2_1 = par_boundary;
frame_frame_httpx$_content$$$function__12_encode_multipart_data->m_frame.f_lineno = 155;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

    tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_data_str_plain_files_str_plain_boundary_tuple);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_multipart == NULL);
var_multipart = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var_multipart);
tmp_called_instance_1 = var_multipart;
frame_frame_httpx$_content$$$function__12_encode_multipart_data->m_frame.f_lineno = 156;
tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_get_headers);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_headers == NULL);
var_headers = tmp_assign_source_2;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_content$$$function__12_encode_multipart_data, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_content$$$function__12_encode_multipart_data->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_content$$$function__12_encode_multipart_data, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_content$$$function__12_encode_multipart_data,
    type_description_1,
    par_data,
    par_files,
    par_boundary,
    var_multipart,
    var_headers
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_content$$$function__12_encode_multipart_data == cache_frame_frame_httpx$_content$$$function__12_encode_multipart_data) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_content$$$function__12_encode_multipart_data);
    cache_frame_frame_httpx$_content$$$function__12_encode_multipart_data = NULL;
}

assertFrameObject(frame_frame_httpx$_content$$$function__12_encode_multipart_data);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_headers);
tmp_tuple_element_1 = var_headers;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_multipart);
tmp_tuple_element_1 = var_multipart;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_multipart);
CHECK_OBJECT(var_multipart);
Py_DECREF(var_multipart);
var_multipart = NULL;
CHECK_OBJECT(var_headers);
CHECK_OBJECT(var_headers);
Py_DECREF(var_headers);
var_headers = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_multipart);
var_multipart = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_files);
Py_DECREF(par_files);
CHECK_OBJECT(par_boundary);
Py_DECREF(par_boundary);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_files);
Py_DECREF(par_files);
CHECK_OBJECT(par_boundary);
Py_DECREF(par_boundary);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_content$$$function__13_encode_text(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_text = python_pars[0];
PyObject *var_body = NULL;
PyObject *var_content_length = NULL;
PyObject *var_headers = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_content$$$function__13_encode_text;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_content$$$function__13_encode_text = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_httpx$_content$$$function__13_encode_text)) {
    Py_XDECREF(cache_frame_frame_httpx$_content$$$function__13_encode_text);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_content$$$function__13_encode_text == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_content$$$function__13_encode_text = MAKE_FUNCTION_FRAME(tstate, code_objects_a7d8206e2ef172a6b8fcbd3b03c48b59, module_httpx$_content, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_content$$$function__13_encode_text->m_type_description == NULL);
frame_frame_httpx$_content$$$function__13_encode_text = cache_frame_frame_httpx$_content$$$function__13_encode_text;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_content$$$function__13_encode_text);
assert(Py_REFCNT(frame_frame_httpx$_content$$$function__13_encode_text) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_text);
tmp_expression_value_1 = par_text;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_encode);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "oooNo";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_content$$$function__13_encode_text->m_frame.f_lineno = 161;
tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "oooNo";
    goto frame_exception_exit_1;
}
assert(var_body == NULL);
var_body = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_unicode_arg_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(var_body);
tmp_len_arg_1 = var_body;
tmp_unicode_arg_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_unicode_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oooNo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
CHECK_OBJECT(tmp_unicode_arg_1);
Py_DECREF(tmp_unicode_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oooNo";
    goto frame_exception_exit_1;
}
assert(var_content_length == NULL);
var_content_length = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_digest_3c9527fc53ea2272c2080ca035d6631c;
CHECK_OBJECT(var_content_length);
tmp_dict_value_1 = var_content_length;
tmp_assign_source_3 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_digest_6d6a615162e89eb148ba9bf8dbfc06d3;
tmp_dict_value_1 = mod_consts.const_str_digest_ec15a558a17cf4e08c127637db31e90c;
tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
assert(var_headers == NULL);
var_headers = tmp_assign_source_3;
}
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_headers);
tmp_tuple_element_1 = var_headers;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
tmp_called_value_2 = module_var_accessor_httpx$_content$ByteStream(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ByteStream);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 165;
type_description_1 = "oooNo";
    goto tuple_build_exception_1;
}
CHECK_OBJECT(var_body);
tmp_args_element_value_1 = var_body;
frame_frame_httpx$_content$$$function__13_encode_text->m_frame.f_lineno = 165;
tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "oooNo";
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_content$$$function__13_encode_text, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_content$$$function__13_encode_text->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_content$$$function__13_encode_text, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_content$$$function__13_encode_text,
    type_description_1,
    par_text,
    var_body,
    var_content_length,
    NULL,
    var_headers
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_content$$$function__13_encode_text == cache_frame_frame_httpx$_content$$$function__13_encode_text) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_content$$$function__13_encode_text);
    cache_frame_frame_httpx$_content$$$function__13_encode_text = NULL;
}

assertFrameObject(frame_frame_httpx$_content$$$function__13_encode_text);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_body);
CHECK_OBJECT(var_body);
Py_DECREF(var_body);
var_body = NULL;
CHECK_OBJECT(var_content_length);
CHECK_OBJECT(var_content_length);
Py_DECREF(var_content_length);
var_content_length = NULL;
CHECK_OBJECT(var_headers);
CHECK_OBJECT(var_headers);
Py_DECREF(var_headers);
var_headers = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_body);
var_body = NULL;
Py_XDECREF(var_content_length);
var_content_length = NULL;
Py_XDECREF(var_headers);
var_headers = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_text);
Py_DECREF(par_text);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_text);
Py_DECREF(par_text);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_content$$$function__14_encode_html(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_html = python_pars[0];
PyObject *var_body = NULL;
PyObject *var_content_length = NULL;
PyObject *var_headers = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_content$$$function__14_encode_html;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_content$$$function__14_encode_html = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_httpx$_content$$$function__14_encode_html)) {
    Py_XDECREF(cache_frame_frame_httpx$_content$$$function__14_encode_html);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_content$$$function__14_encode_html == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_content$$$function__14_encode_html = MAKE_FUNCTION_FRAME(tstate, code_objects_4406610697f2c941bcbf3e1d034b94dd, module_httpx$_content, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_content$$$function__14_encode_html->m_type_description == NULL);
frame_frame_httpx$_content$$$function__14_encode_html = cache_frame_frame_httpx$_content$$$function__14_encode_html;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_content$$$function__14_encode_html);
assert(Py_REFCNT(frame_frame_httpx$_content$$$function__14_encode_html) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_html);
tmp_expression_value_1 = par_html;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_encode);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "oooNo";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_content$$$function__14_encode_html->m_frame.f_lineno = 169;
tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "oooNo";
    goto frame_exception_exit_1;
}
assert(var_body == NULL);
var_body = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_unicode_arg_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(var_body);
tmp_len_arg_1 = var_body;
tmp_unicode_arg_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_unicode_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "oooNo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
CHECK_OBJECT(tmp_unicode_arg_1);
Py_DECREF(tmp_unicode_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "oooNo";
    goto frame_exception_exit_1;
}
assert(var_content_length == NULL);
var_content_length = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_digest_3c9527fc53ea2272c2080ca035d6631c;
CHECK_OBJECT(var_content_length);
tmp_dict_value_1 = var_content_length;
tmp_assign_source_3 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_digest_6d6a615162e89eb148ba9bf8dbfc06d3;
tmp_dict_value_1 = mod_consts.const_str_digest_8c7295acd0a0d41f9148d3a8a041614a;
tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
assert(var_headers == NULL);
var_headers = tmp_assign_source_3;
}
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_headers);
tmp_tuple_element_1 = var_headers;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
tmp_called_value_2 = module_var_accessor_httpx$_content$ByteStream(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ByteStream);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 173;
type_description_1 = "oooNo";
    goto tuple_build_exception_1;
}
CHECK_OBJECT(var_body);
tmp_args_element_value_1 = var_body;
frame_frame_httpx$_content$$$function__14_encode_html->m_frame.f_lineno = 173;
tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "oooNo";
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_content$$$function__14_encode_html, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_content$$$function__14_encode_html->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_content$$$function__14_encode_html, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_content$$$function__14_encode_html,
    type_description_1,
    par_html,
    var_body,
    var_content_length,
    NULL,
    var_headers
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_content$$$function__14_encode_html == cache_frame_frame_httpx$_content$$$function__14_encode_html) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_content$$$function__14_encode_html);
    cache_frame_frame_httpx$_content$$$function__14_encode_html = NULL;
}

assertFrameObject(frame_frame_httpx$_content$$$function__14_encode_html);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_body);
CHECK_OBJECT(var_body);
Py_DECREF(var_body);
var_body = NULL;
CHECK_OBJECT(var_content_length);
CHECK_OBJECT(var_content_length);
Py_DECREF(var_content_length);
var_content_length = NULL;
CHECK_OBJECT(var_headers);
CHECK_OBJECT(var_headers);
Py_DECREF(var_headers);
var_headers = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_body);
var_body = NULL;
Py_XDECREF(var_content_length);
var_content_length = NULL;
Py_XDECREF(var_headers);
var_headers = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_html);
Py_DECREF(par_html);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_html);
Py_DECREF(par_html);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_content$$$function__15_encode_json(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_json = python_pars[0];
PyObject *var_body = NULL;
PyObject *var_content_length = NULL;
PyObject *var_headers = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_content$$$function__15_encode_json;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_content$$$function__15_encode_json = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_httpx$_content$$$function__15_encode_json)) {
    Py_XDECREF(cache_frame_frame_httpx$_content$$$function__15_encode_json);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_content$$$function__15_encode_json == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_content$$$function__15_encode_json = MAKE_FUNCTION_FRAME(tstate, code_objects_01a691bdea9b970ec0699494c255e464, module_httpx$_content, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_content$$$function__15_encode_json->m_type_description == NULL);
frame_frame_httpx$_content$$$function__15_encode_json = cache_frame_frame_httpx$_content$$$function__15_encode_json;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_content$$$function__15_encode_json);
assert(Py_REFCNT(frame_frame_httpx$_content$$$function__15_encode_json) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_2 = module_var_accessor_httpx$_content$json_dumps(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_json_dumps);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 177;
type_description_1 = "oooNo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_json);
tmp_tuple_element_1 = par_json;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_e7ea3a6767795dbcb3f578a55495704d);
frame_frame_httpx$_content$$$function__15_encode_json->m_frame.f_lineno = 177;
tmp_expression_value_1 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oooNo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_encode);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oooNo";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_content$$$function__15_encode_json->m_frame.f_lineno = 177;
tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oooNo";
    goto frame_exception_exit_1;
}
assert(var_body == NULL);
var_body = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_unicode_arg_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(var_body);
tmp_len_arg_1 = var_body;
tmp_unicode_arg_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_unicode_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "oooNo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
CHECK_OBJECT(tmp_unicode_arg_1);
Py_DECREF(tmp_unicode_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "oooNo";
    goto frame_exception_exit_1;
}
assert(var_content_length == NULL);
var_content_length = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_digest_3c9527fc53ea2272c2080ca035d6631c;
CHECK_OBJECT(var_content_length);
tmp_dict_value_1 = var_content_length;
tmp_assign_source_3 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_digest_6d6a615162e89eb148ba9bf8dbfc06d3;
tmp_dict_value_1 = mod_consts.const_str_digest_1781891970018ef9597f363946d7327b;
tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
assert(var_headers == NULL);
var_headers = tmp_assign_source_3;
}
{
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(var_headers);
tmp_tuple_element_2 = var_headers;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
tmp_called_value_3 = module_var_accessor_httpx$_content$ByteStream(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ByteStream);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 183;
type_description_1 = "oooNo";
    goto tuple_build_exception_1;
}
CHECK_OBJECT(var_body);
tmp_args_element_value_1 = var_body;
frame_frame_httpx$_content$$$function__15_encode_json->m_frame.f_lineno = 183;
tmp_tuple_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "oooNo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_2);
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_content$$$function__15_encode_json, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_content$$$function__15_encode_json->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_content$$$function__15_encode_json, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_content$$$function__15_encode_json,
    type_description_1,
    par_json,
    var_body,
    var_content_length,
    NULL,
    var_headers
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_content$$$function__15_encode_json == cache_frame_frame_httpx$_content$$$function__15_encode_json) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_content$$$function__15_encode_json);
    cache_frame_frame_httpx$_content$$$function__15_encode_json = NULL;
}

assertFrameObject(frame_frame_httpx$_content$$$function__15_encode_json);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_body);
CHECK_OBJECT(var_body);
Py_DECREF(var_body);
var_body = NULL;
CHECK_OBJECT(var_content_length);
CHECK_OBJECT(var_content_length);
Py_DECREF(var_content_length);
var_content_length = NULL;
CHECK_OBJECT(var_headers);
CHECK_OBJECT(var_headers);
Py_DECREF(var_headers);
var_headers = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_body);
var_body = NULL;
Py_XDECREF(var_content_length);
var_content_length = NULL;
Py_XDECREF(var_headers);
var_headers = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_json);
Py_DECREF(par_json);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_json);
Py_DECREF(par_json);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_content$$$function__16_encode_request(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_content = python_pars[0];
PyObject *par_data = python_pars[1];
PyObject *par_files = python_pars[2];
PyObject *par_json = python_pars[3];
PyObject *par_boundary = python_pars[4];
struct Nuitka_FrameObject *frame_frame_httpx$_content$$$function__16_encode_request;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_content$$$function__16_encode_request = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_content$$$function__16_encode_request)) {
    Py_XDECREF(cache_frame_frame_httpx$_content$$$function__16_encode_request);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_content$$$function__16_encode_request == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_content$$$function__16_encode_request = MAKE_FUNCTION_FRAME(tstate, code_objects_6445ce00ac99059849dc3ebc47daafb0, module_httpx$_content, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_content$$$function__16_encode_request->m_type_description == NULL);
frame_frame_httpx$_content$$$function__16_encode_request = cache_frame_frame_httpx$_content$$$function__16_encode_request;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_content$$$function__16_encode_request);
assert(Py_REFCNT(frame_frame_httpx$_content$$$function__16_encode_request) == 2);

// Framed code:
{
bool tmp_condition_result_1;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_data);
tmp_cmp_expr_left_1 = par_data;
tmp_cmp_expr_right_1 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_data);
tmp_isinstance_inst_1 = par_data;
tmp_isinstance_cls_1 = module_var_accessor_httpx$_content$Mapping(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Mapping);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 197;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 0) ? true : false;
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_1 = module_var_accessor_httpx$_content$warnings(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 206;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_warn);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_3856c3e3593db206fa587bd7e8bdc845;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_httpx$_content$DeprecationWarning(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DeprecationWarning);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 206;
type_description_1 = "oooooN";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e);
frame_frame_httpx$_content$$$function__16_encode_request->m_frame.f_lineno = 206;
tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
tmp_called_value_2 = module_var_accessor_httpx$_content$encode_content(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_encode_content);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 207;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_data);
tmp_args_element_value_1 = par_data;
frame_frame_httpx$_content$$$function__16_encode_request->m_frame.f_lineno = 207;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_content);
tmp_cmp_expr_left_2 = par_content;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
tmp_called_value_3 = module_var_accessor_httpx$_content$encode_content(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_encode_content);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 210;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_content);
tmp_args_element_value_2 = par_content;
frame_frame_httpx$_content$$$function__16_encode_request->m_frame.f_lineno = 210;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_1;
CHECK_OBJECT(par_files);
tmp_truth_name_1 = CHECK_IF_TRUE(par_files);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_value_4 = module_var_accessor_httpx$_content$encode_multipart_data(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_encode_multipart_data);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 212;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_data);
tmp_or_left_value_1 = par_data;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_or_right_value_1 = MAKE_DICT_EMPTY(tstate);
tmp_args_element_value_3 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_args_element_value_3 = tmp_or_left_value_1;
or_end_1:;
CHECK_OBJECT(par_files);
tmp_args_element_value_4 = par_files;
CHECK_OBJECT(par_boundary);
tmp_args_element_value_5 = par_boundary;
frame_frame_httpx$_content$$$function__16_encode_request->m_frame.f_lineno = 212;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_3;
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_2;
CHECK_OBJECT(par_data);
tmp_truth_name_2 = CHECK_IF_TRUE(par_data);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_value_5 = module_var_accessor_httpx$_content$encode_urlencoded_data(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_encode_urlencoded_data);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 214;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_data);
tmp_args_element_value_6 = par_data;
frame_frame_httpx$_content$$$function__16_encode_request->m_frame.f_lineno = 214;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_6);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_4;
branch_no_4:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_json);
tmp_cmp_expr_left_3 = par_json;
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
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_value_6 = module_var_accessor_httpx$_content$encode_json(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_encode_json);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 216;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_json);
tmp_args_element_value_7 = par_json;
frame_frame_httpx$_content$$$function__16_encode_request->m_frame.f_lineno = 216;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_7);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_5:;
branch_end_4:;
branch_end_3:;
branch_end_2:;
{
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = MAKE_DICT_EMPTY(tstate);
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_7;
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_2);
tmp_called_value_7 = module_var_accessor_httpx$_content$ByteStream(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ByteStream);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 218;
type_description_1 = "oooooN";
    goto tuple_build_exception_2;
}
frame_frame_httpx$_content$$$function__16_encode_request->m_frame.f_lineno = 218;
tmp_tuple_element_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_7, mod_consts.const_tuple_bytes_empty_tuple);

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "oooooN";
    goto tuple_build_exception_2;
}
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_content$$$function__16_encode_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_content$$$function__16_encode_request->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_content$$$function__16_encode_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_content$$$function__16_encode_request,
    type_description_1,
    par_content,
    par_data,
    par_files,
    par_json,
    par_boundary,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_content$$$function__16_encode_request == cache_frame_frame_httpx$_content$$$function__16_encode_request) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_content$$$function__16_encode_request);
    cache_frame_frame_httpx$_content$$$function__16_encode_request = NULL;
}

assertFrameObject(frame_frame_httpx$_content$$$function__16_encode_request);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_content);
Py_DECREF(par_content);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_files);
Py_DECREF(par_files);
CHECK_OBJECT(par_json);
Py_DECREF(par_json);
CHECK_OBJECT(par_boundary);
Py_DECREF(par_boundary);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_content);
Py_DECREF(par_content);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_files);
Py_DECREF(par_files);
CHECK_OBJECT(par_json);
Py_DECREF(par_json);
CHECK_OBJECT(par_boundary);
Py_DECREF(par_boundary);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_content$$$function__17_encode_response(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_content = python_pars[0];
PyObject *par_text = python_pars[1];
PyObject *par_html = python_pars[2];
PyObject *par_json = python_pars[3];
struct Nuitka_FrameObject *frame_frame_httpx$_content$$$function__17_encode_response;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_content$$$function__17_encode_response = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_content$$$function__17_encode_response)) {
    Py_XDECREF(cache_frame_frame_httpx$_content$$$function__17_encode_response);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_content$$$function__17_encode_response == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_content$$$function__17_encode_response = MAKE_FUNCTION_FRAME(tstate, code_objects_ede41cbbf31f4d0c1d4f0955e074f869, module_httpx$_content, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_content$$$function__17_encode_response->m_type_description == NULL);
frame_frame_httpx$_content$$$function__17_encode_response = cache_frame_frame_httpx$_content$$$function__17_encode_response;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_content$$$function__17_encode_response);
assert(Py_REFCNT(frame_frame_httpx$_content$$$function__17_encode_response) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_content);
tmp_cmp_expr_left_1 = par_content;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_httpx$_content$encode_content(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_encode_content);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 232;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_content);
tmp_args_element_value_1 = par_content;
frame_frame_httpx$_content$$$function__17_encode_response->m_frame.f_lineno = 232;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_1;
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_text);
tmp_cmp_expr_left_2 = par_text;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
tmp_called_value_2 = module_var_accessor_httpx$_content$encode_text(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_encode_text);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 234;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_text);
tmp_args_element_value_2 = par_text;
frame_frame_httpx$_content$$$function__17_encode_response->m_frame.f_lineno = 234;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_2;
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_html);
tmp_cmp_expr_left_3 = par_html;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
tmp_called_value_3 = module_var_accessor_httpx$_content$encode_html(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_encode_html);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 236;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_html);
tmp_args_element_value_3 = par_html;
frame_frame_httpx$_content$$$function__17_encode_response->m_frame.f_lineno = 236;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_3;
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(par_json);
tmp_cmp_expr_left_4 = par_json;
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_4;
tmp_called_value_4 = module_var_accessor_httpx$_content$encode_json(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_encode_json);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 238;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_json);
tmp_args_element_value_4 = par_json;
frame_frame_httpx$_content$$$function__17_encode_response->m_frame.f_lineno = 238;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_4:;
branch_end_3:;
branch_end_2:;
branch_end_1:;
{
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = MAKE_DICT_EMPTY(tstate);
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_5;
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
tmp_called_value_5 = module_var_accessor_httpx$_content$ByteStream(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ByteStream);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 240;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
frame_frame_httpx$_content$$$function__17_encode_response->m_frame.f_lineno = 240;
tmp_tuple_element_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_bytes_empty_tuple);

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_content$$$function__17_encode_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_content$$$function__17_encode_response->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_content$$$function__17_encode_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_content$$$function__17_encode_response,
    type_description_1,
    par_content,
    par_text,
    par_html,
    par_json
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_content$$$function__17_encode_response == cache_frame_frame_httpx$_content$$$function__17_encode_response) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_content$$$function__17_encode_response);
    cache_frame_frame_httpx$_content$$$function__17_encode_response = NULL;
}

assertFrameObject(frame_frame_httpx$_content$$$function__17_encode_response);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_content);
Py_DECREF(par_content);
CHECK_OBJECT(par_text);
Py_DECREF(par_text);
CHECK_OBJECT(par_html);
Py_DECREF(par_html);
CHECK_OBJECT(par_json);
Py_DECREF(par_json);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_content);
Py_DECREF(par_content);
CHECK_OBJECT(par_text);
Py_DECREF(par_text);
CHECK_OBJECT(par_html);
Py_DECREF(par_html);
CHECK_OBJECT(par_json);
Py_DECREF(par_json);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_httpx$_content$$$function__10_encode_content(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_content$$$function__10_encode_content,
        mod_consts.const_str_plain_encode_content,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_21d841bfcb11fb55ba3a51e8c5f48f25,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_content,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_content$$$function__11_encode_urlencoded_data(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_content$$$function__11_encode_urlencoded_data,
        mod_consts.const_str_plain_encode_urlencoded_data,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_9bbcb4f5140926fdfba6423210f84261,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_content,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_content$$$function__12_encode_multipart_data(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_content$$$function__12_encode_multipart_data,
        mod_consts.const_str_plain_encode_multipart_data,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5f27d920eed772853fd7367c5abac2cb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_content,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_content$$$function__13_encode_text(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_content$$$function__13_encode_text,
        mod_consts.const_str_plain_encode_text,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a7d8206e2ef172a6b8fcbd3b03c48b59,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_content,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_content$$$function__14_encode_html(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_content$$$function__14_encode_html,
        mod_consts.const_str_plain_encode_html,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_4406610697f2c941bcbf3e1d034b94dd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_content,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_content$$$function__15_encode_json(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_content$$$function__15_encode_json,
        mod_consts.const_str_plain_encode_json,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_01a691bdea9b970ec0699494c255e464,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_content,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_content$$$function__16_encode_request(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_content$$$function__16_encode_request,
        mod_consts.const_str_plain_encode_request,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6445ce00ac99059849dc3ebc47daafb0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_content,
        mod_consts.const_str_digest_2b3729410a64b8532d63d2def762904a,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_content$$$function__17_encode_response(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_content$$$function__17_encode_response,
        mod_consts.const_str_plain_encode_response,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ede41cbbf31f4d0c1d4f0955e074f869,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_content,
        mod_consts.const_str_digest_d535bb731414a767d7575ea2862d5324,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_content$$$function__1___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_content$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ad6c1520f727910d6f0beb0bfef70110,
#endif
        code_objects_dafc5d1202b6cd2d330a71fe7a764163,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_content,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_content$$$function__2___iter__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_content$$$function__2___iter__,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f831839c7a746aa1e519a1a2979ef53f,
#endif
        code_objects_4711452a37a742977a7ad4782ceab74e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_content,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_content$$$function__3___aiter__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_content$$$function__3___aiter__,
        mod_consts.const_str_plain___aiter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c7243d90bc9a975693181bf58e5e8a1c,
#endif
        code_objects_0573c416e3a4cf820e8c1e57a0995408,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_content,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_content$$$function__4___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_content$$$function__4___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_64d5515c08d164a3e3eea50e8247d696,
#endif
        code_objects_e53d1aa227b760542806a23c3e41de92,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_content,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_content$$$function__5___iter__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_content$$$function__5___iter__,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a93e27c9e4eb0900c48cbe178b1b4a09,
#endif
        code_objects_4e42fcfd920d3e264d497825787d98a1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_content,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_content$$$function__6___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_content$$$function__6___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d2398f8bf34afb81437de4d1753af95f,
#endif
        code_objects_f0fd23675a871fc9af981a7a3f0fa5ce,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_content,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_content$$$function__7___aiter__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_content$$$function__7___aiter__,
        mod_consts.const_str_plain___aiter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3ffce2741303c0a9253815c42af41daa,
#endif
        code_objects_9adc441bc8c43ad7a8d1cb2f81afe32f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_content,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_content$$$function__8___iter__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_content$$$function__8___iter__,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_583c6bf51738679bd7c4bee3b25118ec,
#endif
        code_objects_1b0530e0b677ce7fb58e0ad9c47006f0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_content,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_content$$$function__9___aiter__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_content$$$function__9___aiter__,
        mod_consts.const_str_plain___aiter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_eb49f16c9ecf4c33a79117cdb7ff6c15,
#endif
        code_objects_7e5dac79f8e73b212abeac3cf3f709a2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_content,
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

static function_impl_code const function_table_httpx$_content[] = {
impl_httpx$_content$$$function__1___init__,
impl_httpx$_content$$$function__2___iter__,
impl_httpx$_content$$$function__3___aiter__,
impl_httpx$_content$$$function__4___init__,
impl_httpx$_content$$$function__5___iter__,
impl_httpx$_content$$$function__6___init__,
impl_httpx$_content$$$function__7___aiter__,
impl_httpx$_content$$$function__8___iter__,
impl_httpx$_content$$$function__9___aiter__,
impl_httpx$_content$$$function__10_encode_content,
impl_httpx$_content$$$function__11_encode_urlencoded_data,
impl_httpx$_content$$$function__12_encode_multipart_data,
impl_httpx$_content$$$function__13_encode_text,
impl_httpx$_content$$$function__14_encode_html,
impl_httpx$_content$$$function__15_encode_json,
impl_httpx$_content$$$function__16_encode_request,
impl_httpx$_content$$$function__17_encode_response,
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

    return Nuitka_Function_GetFunctionState(function, function_table_httpx$_content);
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
        module_httpx$_content,
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
        function_table_httpx$_content,
        sizeof(function_table_httpx$_content) / sizeof(function_impl_code)
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
static char const *module_full_name = "httpx._content";
#endif

// Internal entry point for module code.
PyObject *module_code_httpx$_content(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("httpx$_content");

    // Store the module for future use.
    module_httpx$_content = module;

    moduledict_httpx$_content = MODULE_DICT(module_httpx$_content);

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
        PRINT_STRING("httpx$_content: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("httpx$_content: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("httpx$_content: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "httpx._content" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inithttpx$_content\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_httpx$_content,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_httpx$_content,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_httpx$_content,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_httpx$_content,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_httpx$_content,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_httpx$_content);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_httpx$_content, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_httpx$_content, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_httpx$_content, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_httpx$_content);
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

        UPDATE_STRING_DICT1(moduledict_httpx$_content, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *outline_3_var___class__ = NULL;
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
PyObject *tmp_class_container$class_creation_3__bases = NULL;
PyObject *tmp_class_container$class_creation_3__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_3__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_3__metaclass = NULL;
PyObject *tmp_class_container$class_creation_3__prepared = NULL;
PyObject *tmp_class_container$class_creation_4__bases = NULL;
PyObject *tmp_class_container$class_creation_4__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_4__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_4__metaclass = NULL;
PyObject *tmp_class_container$class_creation_4__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_content;
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
PyObject *locals_httpx$_content$$$class__1_ByteStream_31 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_httpx$_content$$$class__1_ByteStream_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
PyObject *locals_httpx$_content$$$class__2_IteratorByteStream_42 = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_content$$$class__2_IteratorByteStream_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
PyObject *locals_httpx$_content$$$class__3_AsyncIteratorByteStream_67 = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_content$$$class__3_AsyncIteratorByteStream_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
PyObject *locals_httpx$_content$$$class__4_UnattachedStream_92 = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_content$$$class__4_UnattachedStream_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
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
UPDATE_STRING_DICT0(moduledict_httpx$_content, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_httpx$_content, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_httpx$_content = MAKE_MODULE_FRAME(code_objects_a2aca0da1f368cee8b370e42b900b149, module_httpx$_content);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_content);
assert(Py_REFCNT(frame_frame_httpx$_content) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_httpx$_content$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_httpx$_content$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_httpx$_content, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = const_str_plain_inspect;
tmp_globals_arg_value_1 = (PyObject *)moduledict_httpx$_content;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_httpx$_content->m_frame.f_lineno = 3;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_content, (Nuitka_StringObject *)const_str_plain_inspect, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_warnings;
tmp_globals_arg_value_2 = (PyObject *)moduledict_httpx$_content;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_httpx$_content->m_frame.f_lineno = 4;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_json;
tmp_globals_arg_value_3 = (PyObject *)moduledict_httpx$_content;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_dumps_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_httpx$_content->m_frame.f_lineno = 5;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_httpx$_content,
        mod_consts.const_str_plain_dumps,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_dumps);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_json_dumps, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_8 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_8);
tmp_import_from_1__module = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_httpx$_content,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_httpx$_content,
        mod_consts.const_str_plain_AsyncIterable,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_AsyncIterable);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncIterable, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_httpx$_content,
        mod_consts.const_str_plain_AsyncIterator,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_AsyncIterator);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncIterator, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_httpx$_content,
        mod_consts.const_str_plain_Iterable,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_Iterable);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_6 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_httpx$_content,
        mod_consts.const_str_plain_Iterator,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_Iterator);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterator, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_7 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_httpx$_content,
        mod_consts.const_str_plain_Mapping,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_Mapping);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping, tmp_assign_source_14);
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
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f;
tmp_globals_arg_value_4 = (PyObject *)moduledict_httpx$_content;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_urlencode_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_httpx$_content->m_frame.f_lineno = 14;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_httpx$_content,
        mod_consts.const_str_plain_urlencode,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_urlencode);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_urlencode, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain__exceptions;
tmp_globals_arg_value_5 = (PyObject *)moduledict_httpx$_content;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_StreamClosed_str_plain_StreamConsumed_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_httpx$_content->m_frame.f_lineno = 16;
tmp_assign_source_16 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_16;
}
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_9 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_httpx$_content,
        mod_consts.const_str_plain_StreamClosed,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_StreamClosed);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_StreamClosed, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_10 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_httpx$_content,
        mod_consts.const_str_plain_StreamConsumed,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_StreamConsumed);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_StreamConsumed, tmp_assign_source_18);
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
PyObject *tmp_import_name_from_11;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain__multipart;
tmp_globals_arg_value_6 = (PyObject *)moduledict_httpx$_content;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_MultipartStream_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_httpx$_content->m_frame.f_lineno = 17;
tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_httpx$_content,
        mod_consts.const_str_plain_MultipartStream,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_MultipartStream);
}

CHECK_OBJECT(tmp_import_name_from_11);
Py_DECREF(tmp_import_name_from_11);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_MultipartStream, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain__types;
tmp_globals_arg_value_7 = (PyObject *)moduledict_httpx$_content;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_9d7b0dd5056864eefdc2f993e2900dce_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_httpx$_content->m_frame.f_lineno = 18;
tmp_assign_source_20 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_20;
}
// Tried code:
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_12 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_httpx$_content,
        mod_consts.const_str_plain_AsyncByteStream,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_AsyncByteStream);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncByteStream, tmp_assign_source_21);
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
        (PyObject *)moduledict_httpx$_content,
        mod_consts.const_str_plain_RequestContent,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_RequestContent);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestContent, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_14 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_httpx$_content,
        mod_consts.const_str_plain_RequestData,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_RequestData);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestData, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_15 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_httpx$_content,
        mod_consts.const_str_plain_RequestFiles,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_RequestFiles);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestFiles, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_16;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_16 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_httpx$_content,
        mod_consts.const_str_plain_ResponseContent,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_ResponseContent);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseContent, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_17;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_17 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_httpx$_content,
        mod_consts.const_str_plain_SyncByteStream,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_SyncByteStream);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncByteStream, tmp_assign_source_26);
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
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain__utils;
tmp_globals_arg_value_8 = (PyObject *)moduledict_httpx$_content;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_28a0cb370be1fcd45da75e890d37dee9_tuple;
tmp_level_value_8 = const_int_pos_1;
frame_frame_httpx$_content->m_frame.f_lineno = 26;
tmp_assign_source_27 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
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
PyObject *tmp_import_name_from_18;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_18 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_httpx$_content,
        mod_consts.const_str_plain_peek_filelike_length,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_peek_filelike_length);
}

if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_peek_filelike_length, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_19;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_19 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_httpx$_content,
        mod_consts.const_str_plain_primitive_value_to_str,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_primitive_value_to_str);
}

if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_primitive_value_to_str, tmp_assign_source_29);
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
tmp_assign_source_30 = MAKE_LIST1(tstate, mod_consts.const_str_plain_ByteStream);
UPDATE_STRING_DICT1(moduledict_httpx$_content, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_30);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_31;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_httpx$_content$AsyncByteStream(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncByteStream);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 31;

    goto try_except_handler_5;
}
tmp_assign_source_31 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_assign_source_31, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_httpx$_content$SyncByteStream(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SyncByteStream);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 31;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_assign_source_31, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_assign_source_31);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_31;
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_32 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_32;
}
{
PyObject *tmp_assign_source_33;
tmp_assign_source_33 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_33;
}
{
PyObject *tmp_assign_source_34;
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


exception_lineno = 31;

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
tmp_expression_value_1 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_5;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_5;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_34 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_34;
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


exception_lineno = 31;

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
PyObject *tmp_assign_source_35;
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


exception_lineno = 31;

    goto try_except_handler_5;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_ByteStream;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_httpx$_content->m_frame.f_lineno = 31;
tmp_assign_source_35 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_35;
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


exception_lineno = 31;

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
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_9;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_9 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_9, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_5;
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


exception_lineno = 31;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_5;
}
frame_frame_httpx$_content->m_frame.f_lineno = 31;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 31;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_5;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_36;
tmp_assign_source_36 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_36;
}
branch_end_1:;
{
PyObject *tmp_assign_source_37;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_httpx$_content$$$class__1_ByteStream_31 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_a6294a787a9c164c8536b1136773a00c;
tmp_res = PyObject_SetItem(locals_httpx$_content$$$class__1_ByteStream_31, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_plain_ByteStream;
tmp_res = PyObject_SetItem(locals_httpx$_content$$$class__1_ByteStream_31, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_int_pos_31;
tmp_res = PyObject_SetItem(locals_httpx$_content$$$class__1_ByteStream_31, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_7;
}
frame_frame_httpx$_content$$$class__1_ByteStream_2 = MAKE_CLASS_FRAME(tstate, code_objects_5ff08d658f1c161c6e1a2b3846176c41, module_httpx$_content, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_content$$$class__1_ByteStream_2);
assert(Py_REFCNT(frame_frame_httpx$_content$$$class__1_ByteStream_2) == 2);

// Framed code:
{
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_6171d1365e826cd3fee4602d43a383ec);

tmp_dictset_value = MAKE_FUNCTION_httpx$_content$$$function__1___init__(tstate, tmp_annotations_1);

tmp_res = PyObject_SetItem(locals_httpx$_content$$$class__1_ByteStream_31, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_e5b5c5d7069fea32467c0044970d9b64);

tmp_dictset_value = MAKE_FUNCTION_httpx$_content$$$function__2___iter__(tstate, tmp_annotations_2);

tmp_res = PyObject_SetItem(locals_httpx$_content$$$class__1_ByteStream_31, const_str_plain___iter__, tmp_dictset_value);
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
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_70b3e7f37fa1175d2427ad1ec0e8d604);

tmp_dictset_value = MAKE_FUNCTION_httpx$_content$$$function__3___aiter__(tstate, tmp_annotations_3);

tmp_res = PyObject_SetItem(locals_httpx$_content$$$class__1_ByteStream_31, mod_consts.const_str_plain___aiter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_content$$$class__1_ByteStream_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_content$$$class__1_ByteStream_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_content$$$class__1_ByteStream_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_content$$$class__1_ByteStream_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_httpx$_content$$$class__1_ByteStream_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_7;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__stream_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_content$$$class__1_ByteStream_31, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

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


exception_lineno = 31;

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
tmp_res = PyObject_SetItem(locals_httpx$_content$$$class__1_ByteStream_31, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_7;
}
branch_no_3:;
{
PyObject *tmp_assign_source_38;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_ByteStream;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_httpx$_content$$$class__1_ByteStream_31;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_httpx$_content->m_frame.f_lineno = 31;
tmp_assign_source_38 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_7;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_38;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_37 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_37);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_DECREF(locals_httpx$_content$$$class__1_ByteStream_31);
locals_httpx$_content$$$class__1_ByteStream_31 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpx$_content$$$class__1_ByteStream_31);
locals_httpx$_content$$$class__1_ByteStream_31 = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

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
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 31;
goto try_except_handler_5;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_ByteStream, tmp_assign_source_37);
}
goto try_end_5;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
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
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
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
PyObject *tmp_assign_source_39;
PyObject *tmp_tuple_element_5;
tmp_tuple_element_5 = module_var_accessor_httpx$_content$SyncByteStream(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SyncByteStream);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 42;

    goto try_except_handler_8;
}
tmp_assign_source_39 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_39, 0, tmp_tuple_element_5);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_39;
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_40 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_40;
}
{
PyObject *tmp_assign_source_41;
tmp_assign_source_41 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_41;
}
{
PyObject *tmp_assign_source_42;
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


exception_lineno = 42;

    goto try_except_handler_8;
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


exception_lineno = 42;

    goto try_except_handler_8;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_8;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_42 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_42;
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


exception_lineno = 42;

    goto try_except_handler_8;
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
PyObject *tmp_assign_source_43;
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


exception_lineno = 42;

    goto try_except_handler_8;
}
tmp_tuple_element_6 = mod_consts.const_str_plain_IteratorByteStream;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_httpx$_content->m_frame.f_lineno = 42;
tmp_assign_source_43 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_43;
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


exception_lineno = 42;

    goto try_except_handler_8;
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
PyObject *tmp_name_value_10;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_10 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_10, tmp_default_value_2);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_8;
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


exception_lineno = 42;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_8;
}
frame_frame_httpx$_content->m_frame.f_lineno = 42;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 42;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_8;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_44;
tmp_assign_source_44 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_44;
}
branch_end_4:;
{
PyObject *tmp_assign_source_45;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_httpx$_content$$$class__2_IteratorByteStream_42 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_a6294a787a9c164c8536b1136773a00c;
tmp_res = PyObject_SetItem(locals_httpx$_content$$$class__2_IteratorByteStream_42, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_str_plain_IteratorByteStream;
tmp_res = PyObject_SetItem(locals_httpx$_content$$$class__2_IteratorByteStream_42, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_int_pos_42;
tmp_res = PyObject_SetItem(locals_httpx$_content$$$class__2_IteratorByteStream_42, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_10;
}
frame_frame_httpx$_content$$$class__2_IteratorByteStream_3 = MAKE_CLASS_FRAME(tstate, code_objects_34a6ecbfbc23a33f42e923125055851b, module_httpx$_content, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_content$$$class__2_IteratorByteStream_3);
assert(Py_REFCNT(frame_frame_httpx$_content$$$class__2_IteratorByteStream_3) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_int_pos_65536;
tmp_res = PyObject_SetItem(locals_httpx$_content$$$class__2_IteratorByteStream_42, mod_consts.const_str_plain_CHUNK_SIZE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_35a170c4fc12cce82a6a859eeb89b5a2);

tmp_dictset_value = MAKE_FUNCTION_httpx$_content$$$function__4___init__(tstate, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_httpx$_content$$$class__2_IteratorByteStream_42, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_e5b5c5d7069fea32467c0044970d9b64);

tmp_dictset_value = MAKE_FUNCTION_httpx$_content$$$function__5___iter__(tstate, tmp_annotations_5);

tmp_res = PyObject_SetItem(locals_httpx$_content$$$class__2_IteratorByteStream_42, const_str_plain___iter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_content$$$class__2_IteratorByteStream_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_content$$$class__2_IteratorByteStream_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_content$$$class__2_IteratorByteStream_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_content$$$class__2_IteratorByteStream_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_httpx$_content$$$class__2_IteratorByteStream_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_10;
skip_nested_handling_2:;
tmp_dictset_value = mod_consts.const_tuple_0ef259473a1fececb0a4ab85b31cea0d_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_content$$$class__2_IteratorByteStream_42, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_10;
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


exception_lineno = 42;

    goto try_except_handler_10;
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
tmp_res = PyObject_SetItem(locals_httpx$_content$$$class__2_IteratorByteStream_42, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_10;
}
branch_no_6:;
{
PyObject *tmp_assign_source_46;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_4 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_8 = mod_consts.const_str_plain_IteratorByteStream;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = locals_httpx$_content$$$class__2_IteratorByteStream_42;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_httpx$_content->m_frame.f_lineno = 42;
tmp_assign_source_46 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_10;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_46;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_45 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_45);
goto try_return_handler_10;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
Py_DECREF(locals_httpx$_content$$$class__2_IteratorByteStream_42);
locals_httpx$_content$$$class__2_IteratorByteStream_42 = NULL;
goto try_return_handler_9;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpx$_content$$$class__2_IteratorByteStream_42);
locals_httpx$_content$$$class__2_IteratorByteStream_42 = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_9;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 42;
goto try_except_handler_8;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_IteratorByteStream, tmp_assign_source_45);
}
goto try_end_6;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
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
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
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
// Tried code:
{
PyObject *tmp_assign_source_47;
PyObject *tmp_tuple_element_9;
tmp_tuple_element_9 = module_var_accessor_httpx$_content$AsyncByteStream(tstate);
if (unlikely(tmp_tuple_element_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncByteStream);
}

if (tmp_tuple_element_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;

    goto try_except_handler_11;
}
tmp_assign_source_47 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_47, 0, tmp_tuple_element_9);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_47;
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_48 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_48;
}
{
PyObject *tmp_assign_source_49;
tmp_assign_source_49 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_49;
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto try_except_handler_11;
}
tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_13 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_13, tmp_subscript_value_3, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto try_except_handler_11;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto try_except_handler_11;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_50 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_50;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_14 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_14, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto try_except_handler_11;
}
tmp_condition_result_10 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_51;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_10;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_15 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto try_except_handler_11;
}
tmp_tuple_element_10 = mod_consts.const_str_plain_AsyncIteratorByteStream;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_10 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_httpx$_content->m_frame.f_lineno = 67;
tmp_assign_source_51 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_51;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_16 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_16, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto try_except_handler_11;
}
tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
assert(!(tmp_res == -1));
tmp_condition_result_11 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
PyObject *tmp_mod_expr_left_3;
PyObject *tmp_mod_expr_right_3;
PyObject *tmp_tuple_element_11;
PyObject *tmp_expression_value_17;
PyObject *tmp_name_value_11;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_17 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_11 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_11 = BUILTIN_GETATTR(tstate, tmp_expression_value_17, tmp_name_value_11, tmp_default_value_3);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto try_except_handler_11;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_18;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_18 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_18 == NULL));
tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_11);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_11;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto try_except_handler_11;
}
frame_frame_httpx$_content->m_frame.f_lineno = 67;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 67;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_11;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_52;
tmp_assign_source_52 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_52;
}
branch_end_7:;
{
PyObject *tmp_assign_source_53;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_httpx$_content$$$class__3_AsyncIteratorByteStream_67 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_a6294a787a9c164c8536b1136773a00c;
tmp_res = PyObject_SetItem(locals_httpx$_content$$$class__3_AsyncIteratorByteStream_67, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_str_plain_AsyncIteratorByteStream;
tmp_res = PyObject_SetItem(locals_httpx$_content$$$class__3_AsyncIteratorByteStream_67, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_int_pos_67;
tmp_res = PyObject_SetItem(locals_httpx$_content$$$class__3_AsyncIteratorByteStream_67, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto try_except_handler_13;
}
frame_frame_httpx$_content$$$class__3_AsyncIteratorByteStream_4 = MAKE_CLASS_FRAME(tstate, code_objects_53c2b63cef969c95b2f0ec282ae9eca2, module_httpx$_content, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_content$$$class__3_AsyncIteratorByteStream_4);
assert(Py_REFCNT(frame_frame_httpx$_content$$$class__3_AsyncIteratorByteStream_4) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_int_pos_65536;
tmp_res = PyObject_SetItem(locals_httpx$_content$$$class__3_AsyncIteratorByteStream_67, mod_consts.const_str_plain_CHUNK_SIZE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
{
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_15e559020559e50e0fce3aee83ff08d9);

tmp_dictset_value = MAKE_FUNCTION_httpx$_content$$$function__6___init__(tstate, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_httpx$_content$$$class__3_AsyncIteratorByteStream_67, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_70b3e7f37fa1175d2427ad1ec0e8d604);

tmp_dictset_value = MAKE_FUNCTION_httpx$_content$$$function__7___aiter__(tstate, tmp_annotations_7);

tmp_res = PyObject_SetItem(locals_httpx$_content$$$class__3_AsyncIteratorByteStream_67, mod_consts.const_str_plain___aiter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_content$$$class__3_AsyncIteratorByteStream_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_content$$$class__3_AsyncIteratorByteStream_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_content$$$class__3_AsyncIteratorByteStream_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_content$$$class__3_AsyncIteratorByteStream_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_httpx$_content$$$class__3_AsyncIteratorByteStream_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_13;
skip_nested_handling_3:;
tmp_dictset_value = mod_consts.const_tuple_0ef259473a1fececb0a4ab85b31cea0d_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_content$$$class__3_AsyncIteratorByteStream_67, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto try_except_handler_13;
}
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_cmp_expr_left_3 = tmp_class_container$class_creation_3__bases;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_cmp_expr_right_3 = tmp_class_container$class_creation_3__bases_orig;
tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto try_except_handler_13;
}
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_3__bases_orig;
tmp_res = PyObject_SetItem(locals_httpx$_content$$$class__3_AsyncIteratorByteStream_67, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto try_except_handler_13;
}
branch_no_9:;
{
PyObject *tmp_assign_source_54;
PyObject *tmp_called_value_6;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_12;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_6 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_12 = mod_consts.const_str_plain_AsyncIteratorByteStream;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_12 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_12);
tmp_tuple_element_12 = locals_httpx$_content$$$class__3_AsyncIteratorByteStream_67;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_httpx$_content->m_frame.f_lineno = 67;
tmp_assign_source_54 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto try_except_handler_13;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_54;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_53 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_53);
goto try_return_handler_13;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
Py_DECREF(locals_httpx$_content$$$class__3_AsyncIteratorByteStream_67);
locals_httpx$_content$$$class__3_AsyncIteratorByteStream_67 = NULL;
goto try_return_handler_12;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpx$_content$$$class__3_AsyncIteratorByteStream_67);
locals_httpx$_content$$$class__3_AsyncIteratorByteStream_67 = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto try_except_handler_12;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 67;
goto try_except_handler_11;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncIteratorByteStream, tmp_assign_source_53);
}
goto try_end_7;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_3__bases_orig);
tmp_class_container$class_creation_3__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__bases);
tmp_class_container$class_creation_3__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__metaclass);
tmp_class_container$class_creation_3__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__prepared);
tmp_class_container$class_creation_3__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
Py_DECREF(tmp_class_container$class_creation_3__bases_orig);
tmp_class_container$class_creation_3__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
Py_DECREF(tmp_class_container$class_creation_3__bases);
tmp_class_container$class_creation_3__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
Py_DECREF(tmp_class_container$class_creation_3__metaclass);
tmp_class_container$class_creation_3__metaclass = NULL;
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
// Tried code:
{
PyObject *tmp_assign_source_55;
PyObject *tmp_tuple_element_13;
tmp_tuple_element_13 = module_var_accessor_httpx$_content$AsyncByteStream(tstate);
if (unlikely(tmp_tuple_element_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncByteStream);
}

if (tmp_tuple_element_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 92;

    goto try_except_handler_14;
}
tmp_assign_source_55 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_assign_source_55, 0, tmp_tuple_element_13);
tmp_tuple_element_13 = module_var_accessor_httpx$_content$SyncByteStream(tstate);
if (unlikely(tmp_tuple_element_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SyncByteStream);
}

if (tmp_tuple_element_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 92;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM0(tmp_assign_source_55, 1, tmp_tuple_element_13);
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_assign_source_55);
goto try_except_handler_14;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_55;
}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_4 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_56 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_14;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_56;
}
{
PyObject *tmp_assign_source_57;
tmp_assign_source_57 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_57;
}
{
PyObject *tmp_assign_source_58;
PyObject *tmp_metaclass_value_4;
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_4;
PyObject *tmp_type_arg_7;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_14;
}
tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_expression_value_19 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_19, tmp_subscript_value_4, 0);
if (tmp_type_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_14;
}
tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_14;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_4);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_58 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
CHECK_OBJECT(tmp_metaclass_value_4);
Py_DECREF(tmp_metaclass_value_4);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_14;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_58;
}
{
bool tmp_condition_result_14;
PyObject *tmp_expression_value_20;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_20 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_20, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_14;
}
tmp_condition_result_14 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_59;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_21;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_14;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_21 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_14;
}
tmp_tuple_element_14 = mod_consts.const_str_plain_UnattachedStream;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_14 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_httpx$_content->m_frame.f_lineno = 92;
tmp_assign_source_59 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_14;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_59;
}
{
bool tmp_condition_result_15;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_22;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_22 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_22, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_14;
}
tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
assert(!(tmp_res == -1));
tmp_condition_result_15 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_15 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_make_exception_arg_4;
PyObject *tmp_mod_expr_left_4;
PyObject *tmp_mod_expr_right_4;
PyObject *tmp_tuple_element_15;
PyObject *tmp_expression_value_23;
PyObject *tmp_name_value_12;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_23 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_12 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_15 = BUILTIN_GETATTR(tstate, tmp_expression_value_23, tmp_name_value_12, tmp_default_value_4);
if (tmp_tuple_element_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_14;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_24;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_8 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_24 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_24 == NULL));
tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_tuple_element_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_15);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_mod_expr_right_4);
goto try_except_handler_14;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_14;
}
frame_frame_httpx$_content->m_frame.f_lineno = 92;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 92;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_14;
}
branch_no_11:;
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_60;
tmp_assign_source_60 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_60;
}
branch_end_10:;
{
PyObject *tmp_assign_source_61;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_httpx$_content$$$class__4_UnattachedStream_92 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_a6294a787a9c164c8536b1136773a00c;
tmp_res = PyObject_SetItem(locals_httpx$_content$$$class__4_UnattachedStream_92, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_16;
}
tmp_dictset_value = mod_consts.const_str_digest_099898656c967405e3ca974e896882bb;
tmp_res = PyObject_SetItem(locals_httpx$_content$$$class__4_UnattachedStream_92, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_16;
}
tmp_dictset_value = mod_consts.const_str_plain_UnattachedStream;
tmp_res = PyObject_SetItem(locals_httpx$_content$$$class__4_UnattachedStream_92, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_16;
}
tmp_dictset_value = mod_consts.const_int_pos_92;
tmp_res = PyObject_SetItem(locals_httpx$_content$$$class__4_UnattachedStream_92, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_16;
}
frame_frame_httpx$_content$$$class__4_UnattachedStream_5 = MAKE_CLASS_FRAME(tstate, code_objects_5ded8c51e86123cac983ef9ad0fb78b0, module_httpx$_content, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_content$$$class__4_UnattachedStream_5);
assert(Py_REFCNT(frame_frame_httpx$_content$$$class__4_UnattachedStream_5) == 2);

// Framed code:
{
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_e5b5c5d7069fea32467c0044970d9b64);

tmp_dictset_value = MAKE_FUNCTION_httpx$_content$$$function__8___iter__(tstate, tmp_annotations_8);

tmp_res = PyObject_SetItem(locals_httpx$_content$$$class__4_UnattachedStream_92, const_str_plain___iter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_annotations_9;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_70b3e7f37fa1175d2427ad1ec0e8d604);

tmp_dictset_value = MAKE_FUNCTION_httpx$_content$$$function__9___aiter__(tstate, tmp_annotations_9);

tmp_res = PyObject_SetItem(locals_httpx$_content$$$class__4_UnattachedStream_92, mod_consts.const_str_plain___aiter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_content$$$class__4_UnattachedStream_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_content$$$class__4_UnattachedStream_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_content$$$class__4_UnattachedStream_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_content$$$class__4_UnattachedStream_5,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_httpx$_content$$$class__4_UnattachedStream_5);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_16;
skip_nested_handling_4:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_httpx$_content$$$class__4_UnattachedStream_92, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_16;
}
{
nuitka_bool tmp_condition_result_16;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_cmp_expr_left_4 = tmp_class_container$class_creation_4__bases;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_cmp_expr_right_4 = tmp_class_container$class_creation_4__bases_orig;
tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_16;
}
if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_4__bases_orig;
tmp_res = PyObject_SetItem(locals_httpx$_content$$$class__4_UnattachedStream_92, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_16;
}
branch_no_12:;
{
PyObject *tmp_assign_source_62;
PyObject *tmp_called_value_8;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_16;
PyObject *tmp_kwargs_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_called_value_8 = tmp_class_container$class_creation_4__metaclass;
tmp_tuple_element_16 = mod_consts.const_str_plain_UnattachedStream;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_16 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_16);
tmp_tuple_element_16 = locals_httpx$_content$$$class__4_UnattachedStream_92;
PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_httpx$_content->m_frame.f_lineno = 92;
tmp_assign_source_62 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_16;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_62;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_61 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_61);
goto try_return_handler_16;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_16:;
Py_DECREF(locals_httpx$_content$$$class__4_UnattachedStream_92);
locals_httpx$_content$$$class__4_UnattachedStream_92 = NULL;
goto try_return_handler_15;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpx$_content$$$class__4_UnattachedStream_92);
locals_httpx$_content$$$class__4_UnattachedStream_92 = NULL;
// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto try_except_handler_15;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_15:;
CHECK_OBJECT(outline_3_var___class__);
CHECK_OBJECT(outline_3_var___class__);
Py_DECREF(outline_3_var___class__);
outline_3_var___class__ = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 92;
goto try_except_handler_14;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_UnattachedStream, tmp_assign_source_61);
}
goto try_end_8;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_4__bases_orig);
tmp_class_container$class_creation_4__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_4__bases);
tmp_class_container$class_creation_4__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_4__class_decl_dict);
tmp_class_container$class_creation_4__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_4__metaclass);
tmp_class_container$class_creation_4__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_4__prepared);
tmp_class_container$class_creation_4__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
Py_DECREF(tmp_class_container$class_creation_4__bases_orig);
tmp_class_container$class_creation_4__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
Py_DECREF(tmp_class_container$class_creation_4__bases);
tmp_class_container$class_creation_4__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_4__class_decl_dict);
tmp_class_container$class_creation_4__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
Py_DECREF(tmp_class_container$class_creation_4__metaclass);
tmp_class_container$class_creation_4__metaclass = NULL;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_5;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_content, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_content->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_content, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_httpx$_content);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_5:;
{
PyObject *tmp_assign_source_63;
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_ed96d3363f3ba7fcda701e16e2d2e4aa);

tmp_assign_source_63 = MAKE_FUNCTION_httpx$_content$$$function__10_encode_content(tstate, tmp_annotations_10);

UPDATE_STRING_DICT1(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_content, tmp_assign_source_63);
}
{
PyObject *tmp_assign_source_64;
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_9cd693f365eaf113b4c5c709f9263cc2);

tmp_assign_source_64 = MAKE_FUNCTION_httpx$_content$$$function__11_encode_urlencoded_data(tstate, tmp_annotations_11);

UPDATE_STRING_DICT1(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_urlencoded_data, tmp_assign_source_64);
}
{
PyObject *tmp_assign_source_65;
PyObject *tmp_annotations_12;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_6f18b48b1dd8dc04e0d08a8fe5f6e0e0);

tmp_assign_source_65 = MAKE_FUNCTION_httpx$_content$$$function__12_encode_multipart_data(tstate, tmp_annotations_12);

UPDATE_STRING_DICT1(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_multipart_data, tmp_assign_source_65);
}
{
PyObject *tmp_assign_source_66;
PyObject *tmp_annotations_13;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_c25e04b7ffa0dcc842d575fbef50aed2);

tmp_assign_source_66 = MAKE_FUNCTION_httpx$_content$$$function__13_encode_text(tstate, tmp_annotations_13);

UPDATE_STRING_DICT1(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_text, tmp_assign_source_66);
}
{
PyObject *tmp_assign_source_67;
PyObject *tmp_annotations_14;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_77984266c3252ce98b68c48d2bf422f5);

tmp_assign_source_67 = MAKE_FUNCTION_httpx$_content$$$function__14_encode_html(tstate, tmp_annotations_14);

UPDATE_STRING_DICT1(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_html, tmp_assign_source_67);
}
{
PyObject *tmp_assign_source_68;
PyObject *tmp_annotations_15;
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_8eacd9ddccf78b8590a5e83d84fae3ed);

tmp_assign_source_68 = MAKE_FUNCTION_httpx$_content$$$function__15_encode_json(tstate, tmp_annotations_15);

UPDATE_STRING_DICT1(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_json, tmp_assign_source_68);
}
{
PyObject *tmp_assign_source_69;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_16;
tmp_defaults_1 = mod_consts.const_tuple_none_none_none_none_none_tuple;
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_d0d1c355912977cc50b92e8c1debfa42);
Py_INCREF(tmp_defaults_1);

tmp_assign_source_69 = MAKE_FUNCTION_httpx$_content$$$function__16_encode_request(tstate, tmp_defaults_1, tmp_annotations_16);

UPDATE_STRING_DICT1(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_request, tmp_assign_source_69);
}
{
PyObject *tmp_assign_source_70;
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_17;
tmp_defaults_2 = mod_consts.const_tuple_none_none_none_none_tuple;
tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_c3cff02164d4a6fecd72c7c4b5c985be);
Py_INCREF(tmp_defaults_2);

tmp_assign_source_70 = MAKE_FUNCTION_httpx$_content$$$function__17_encode_response(tstate, tmp_defaults_2, tmp_annotations_17);

UPDATE_STRING_DICT1(moduledict_httpx$_content, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_response, tmp_assign_source_70);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("httpx$_content", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "httpx._content" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_httpx$_content);
    return module_httpx$_content;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_content, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("httpx$_content", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

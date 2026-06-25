/* Generated code for Python module 'openai$_streaming'
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



/* The "module_openai$_streaming" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_openai$_streaming;
PyDictObject *moduledict_openai$_streaming;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_response;
PyObject *const_str_plain__cast_to;
PyObject *const_str_plain__client;
PyObject *const_str_plain__make_sse_decoder;
PyObject *const_str_plain__decoder;
PyObject *const_str_plain___stream__;
PyObject *const_str_plain__iterator;
PyObject *const_str_plain___next__;
PyObject *const_str_plain_self;
PyObject *const_str_digest_c93bf231c9b3e62f74e33da59f7bb4a4;
PyObject *const_str_plain_iter_bytes;
PyObject *const_str_plain__iter_events;
PyObject *const_str_digest_a9ceb48bbba786c5160f98f555fb7ab0;
PyObject *const_str_plain_cast;
PyObject *const_str_plain_Any;
PyObject *const_str_plain__process_response_data;
PyObject *const_str_plain_data;
PyObject *const_str_plain_startswith;
PyObject *const_tuple_str_digest_2a7265ac0ae741cbd84807714ce996e0_tuple;
PyObject *const_str_plain_event;
PyObject *const_tuple_str_digest_0fb2bb2e7aeec53e4f924a63ffb9aaf1_tuple;
PyObject *const_str_plain_json;
PyObject *const_str_plain_error;
PyObject *const_str_plain_is_mapping;
PyObject *const_tuple_str_plain_error_tuple;
PyObject *const_tuple_str_plain_message_tuple;
PyObject *const_str_digest_76093b718740cc2a7ad4bb21bfd52bf3;
PyObject *const_str_plain_APIError;
PyObject *const_str_plain_request;
PyObject *const_tuple_str_plain_message_str_plain_request_str_plain_body_tuple;
PyObject *const_str_plain_process_data;
PyObject *const_str_plain_cast_to;
PyObject *const_tuple_str_plain_data_str_plain_cast_to_str_plain_response_tuple;
PyObject *const_str_digest_afd28cae087442373bfa906d4b39d608;
PyObject *const_str_digest_cb355ff40bf0d2197a6dd6eead5f4268;
PyObject *const_str_plain___anext__;
PyObject *const_str_digest_dbb0eb8b269b4770229980b3b63cccb1;
PyObject *const_str_plain___aiter__;
PyObject *const_str_digest_30a4c60226828ec83314dbfd9f41aa20;
PyObject *const_str_plain_aiter_bytes;
PyObject *const_str_digest_544b943bf0a5656feb9215c79bd516c4;
PyObject *const_str_digest_e002acaa3acee18f565e10c2c1f90cf7;
PyObject *const_str_digest_2ea8b76fab2586a90feffe93206262f2;
PyObject *const_str_digest_d361373a8c355a7cf5f651aaacd77b3c;
PyObject *const_str_plain_aclose;
PyObject *const_str_digest_eca2d7a5627ee6a4a84a377b9dbe71b5;
PyObject *const_str_plain__id;
PyObject *const_str_plain__data;
PyObject *const_str_plain__event;
PyObject *const_str_plain__retry;
PyObject *const_str_plain_loads;
PyObject *const_str_digest_dee6658d3f552d8dc3806d4440cf0165;
PyObject *const_str_digest_a637fb200eae49dc87cbe8c0cc133a9b;
PyObject *const_str_digest_21252a0824ff567609dd5454ec43bcde;
PyObject *const_str_plain_id;
PyObject *const_str_digest_8c2db02a6533acdd055c91849eb8f7e0;
PyObject *const_str_plain_retry;
PyObject *const_str_chr_41;
PyObject *const_str_plain__last_event_id;
PyObject *const_str_digest_68988aefbec28ed4657fdf60c2456a03;
PyObject *const_str_plain__iter_chunks;
PyObject *const_str_plain_iterator;
PyObject *const_str_plain_splitlines;
PyObject *const_str_plain_decode;
PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
PyObject *const_str_digest_ebfc2e698e54163c8c70730ab58edaea;
PyObject *const_str_digest_287e28f476709a3035b792b5585d85b3;
PyObject *const_tuple_true_tuple;
PyObject *const_tuple_str_plain_keepends_tuple;
PyObject *const_str_plain_endswith;
PyObject *const_tuple_tuple_d3f047b4bcc23d2655483ec754b5d637_tuple_tuple;
PyObject *const_str_digest_4ef97eea4a4ac3450a222209c9e29aec;
PyObject *const_str_plain__aiter_chunks;
PyObject *const_str_digest_f68742603dc9b566382c9c72e78c5a26;
PyObject *const_str_digest_6768b1289dd1fe8e30c66bd125d11aa5;
PyObject *const_str_plain_ServerSentEvent;
PyObject *const_str_newline;
PyObject *const_tuple_str_plain_event_str_plain_data_str_plain_id_str_plain_retry_tuple;
PyObject *const_tuple_str_chr_58_tuple;
PyObject *const_str_plain_partition;
PyObject *const_tuple_str_space_tuple;
PyObject *const_slice_int_pos_1_none_none;
PyObject *const_str_plain_value;
PyObject *const_str_plain_append;
PyObject *const_str_null;
PyObject *const_tuple_type_TypeError_type_ValueError_tuple;
PyObject *const_str_plain_get_origin;
PyObject *const_str_plain_isclass;
PyObject *const_str_plain_Stream;
PyObject *const_str_plain_AsyncStream;
PyObject *const_str_digest_d6de0b60b02e16def9699dff8552ae57;
PyObject *const_str_plain__base_client;
PyObject *const_tuple_str_plain_Stream_str_plain_AsyncStream_tuple;
PyObject *const_str_plain_extract_type_var_from_base;
PyObject *const_str_digest_61b8423f3b23c4f1978ca4a089646bc1;
PyObject *const_tuple_f333b19f3da0404471b6a945ecca60dd_tuple;
PyObject *const_str_digest_baadd4c19429741fb9242b1210178c75;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_TracebackType;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_Generic;
PyObject *const_str_plain_TypeVar;
PyObject *const_str_plain_Iterator;
PyObject *const_str_plain_AsyncIterator;
PyObject *const_str_plain_typing_extensions;
PyObject *const_tuple_58c4b68b5b28f3a3049efffb237ab59d_tuple;
PyObject *const_str_plain_Self;
PyObject *const_str_plain_Protocol;
PyObject *const_str_plain_TypeGuard;
PyObject *const_str_plain_override;
PyObject *const_str_plain_runtime_checkable;
PyObject *const_str_plain_httpx;
PyObject *const_str_plain__utils;
PyObject *const_tuple_str_plain_is_mapping_str_plain_extract_type_var_from_base_tuple;
PyObject *const_str_plain__exceptions;
PyObject *const_tuple_str_plain_APIError_tuple;
PyObject *const_tuple_str_plain__T_tuple;
PyObject *const_str_plain__T;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_7698e24063a53842307d990d0970ee02;
PyObject *const_str_digest_620a91f3b9c6d3ab883e44fa53b86a70;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_22;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_digest_11df174efb5cc83c4ecfcd61824f025d;
PyObject *const_str_plain_SSEBytesDecoder;
PyObject *const_dict_c275b6ed862be1e7260c244120706863;
PyObject *const_str_digest_4a7645f398fd0a431a4fc76eadb605e7;
PyObject *const_dict_79072ff8c541aea48bbed013b73f2282;
PyObject *const_str_digest_f58e7359b9a50dd2cf935dfdd7f7db52;
PyObject *const_dict_c741a2c409580a81885c389de4eb0853;
PyObject *const_dict_666d3ee8ea4923e58a22b19d9103ed7f;
PyObject *const_dict_71adc2ba5737c82f5bb97b4d3b034ead;
PyObject *const_str_digest_7c8010de651dac2fb35f63531ab36c81;
PyObject *const_dict_b463fd795a8973b8a1c46e48bf79ef09;
PyObject *const_str_digest_9ed394243540bfdf0b1d966917663ec5;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_digest_48b81a776fe61616de1779cb079589cd;
PyObject *const_tuple_e0701f44303cd3e11cb50c027d63552e_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_f2983401b0920f9bd580ce8facef64c4;
PyObject *const_int_pos_123;
PyObject *const_str_digest_e0678d8f77e1015a9c4cef2cb6c55647;
PyObject *const_dict_972037a11018e14a9125dbbbc4a00887;
PyObject *const_str_digest_27f23450c1059f3cad51823d809cf1ec;
PyObject *const_dict_166b48d2c76a018152c9a2746c771069;
PyObject *const_dict_a5f9f94cd63834d1c74824c8ea521f61;
PyObject *const_int_pos_225;
PyObject *const_dict_78503ba202d4261bad01aa6f0e4803ef;
PyObject *const_dict_56e1853e8e0d1ef0942809950d670b70;
PyObject *const_str_digest_370ccd1b473bf2f3071fe6aa3ce7465e;
PyObject *const_dict_fb2aef63cbe899ae3db5a90391a96071;
PyObject *const_str_digest_269bbdeb8ec3e4b00b678e202a639f95;
PyObject *const_str_digest_3a5ade228e6d09b156341eb1decdc4d7;
PyObject *const_dict_4ceb13db20db0a5d6b10c13b92db4345;
PyObject *const_str_digest_5b5689408229bf8ad6fc8084a20399e7;
PyObject *const_dict_e8d16ece775461636da8aedac2f07d6b;
PyObject *const_str_digest_fedbc9fc74cc0850baec1257b2ddf61f;
PyObject *const_dict_649327bbc9f137cd11fab40cb48175a1;
PyObject *const_str_digest_6748702bf4e891b2ec2f994c1f2afef8;
PyObject *const_str_plain___repr__;
PyObject *const_str_digest_9c2147d1bb008d93aad34861a7943760;
PyObject *const_tuple_2a32650cebe4e63166dfc6f650144819_tuple;
PyObject *const_str_plain_SSEDecoder;
PyObject *const_int_pos_266;
PyObject *const_str_digest_e457754874b2ab64235a137685f8363a;
PyObject *const_str_digest_4566cfe3b3f2bec71b1d44adce370e58;
PyObject *const_str_digest_d07907e58b350811dd59b47ecbca299a;
PyObject *const_str_digest_fdc08687acda858ba8549314ad367add;
PyObject *const_dict_2ef6b0b9635cdf1501621512ed986763;
PyObject *const_dict_17fe1a76d688a8c02b0cca9c28e89a5f;
PyObject *const_dict_9a07c45ffb238b48f25e6ac6f3557242;
PyObject *const_dict_2e1dc255f856026798b4553d0a1b2a4a;
PyObject *const_dict_31d74d9eed2fe71a422015ea6763b6f8;
PyObject *const_str_digest_c42c4ac586eab09ad20b05b2ea4b1237;
PyObject *const_tuple_c840aa8364549d5201dd57f687111df1_tuple;
PyObject *const_int_pos_372;
PyObject *const_str_digest_85e120d4bf0e66177f2b429717956083;
PyObject *const_str_digest_35b01d1c7d75d1f57f2d5edfb102d212;
PyObject *const_str_digest_04142f54036cf0041dacca122bb6c604;
PyObject *const_dict_07ca162ce13b945808d6dfeaf91bd26b;
PyObject *const_str_plain_is_stream_class_type;
PyObject *const_dict_3c3750ac9fde487cc312781889be09e2;
PyObject *const_dict_7a8e729178509538912ebe468dcc66d5;
PyObject *const_str_plain_extract_stream_chunk_type;
PyObject *const_str_digest_3d81e01ad3b56b37b76b3bd847334d11;
PyObject *const_str_digest_5b1dfc2b04340be520a204df2c2146c1;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_4358c0b001f2a5005d08907a7929fc87_tuple;
PyObject *const_tuple_str_plain_self_str_plain_item_tuple;
PyObject *const_tuple_ea9128b77fe2e32388bab180658d69d1_tuple;
PyObject *const_tuple_ef13ddf8249e4920a207d952d9ad934e_tuple;
PyObject *const_tuple_8fcf723c0a11b1adef99c4563ed48f00_tuple;
PyObject *const_tuple_b4b7be7cc2ee39c3cf717132b1ac8d60_tuple;
PyObject *const_tuple_str_plain_self_str_plain_sse_tuple;
PyObject *const_tuple_str_plain_self_str_plain_iterator_tuple;
PyObject *const_tuple_a52d25cb45f6b03dba4aa428b9d6efc0_tuple;
PyObject *const_tuple_aa37b9ebfaa84f6fe377af25bd8a7fa9_tuple;
PyObject *const_tuple_2247a4e3ba203f4bc84e6a34c4848c94_tuple;
PyObject *const_tuple_str_plain_typ_str_plain_origin_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[207];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("openai._streaming"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_response);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain__cast_to);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain__client);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain__make_sse_decoder);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain__decoder);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain___stream__);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain__iterator);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain___next__);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_digest_c93bf231c9b3e62f74e33da59f7bb4a4);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_iter_bytes);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain__iter_events);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_a9ceb48bbba786c5160f98f555fb7ab0);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_cast);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain__process_response_data);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_data);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_startswith);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_2a7265ac0ae741cbd84807714ce996e0_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_event);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_0fb2bb2e7aeec53e4f924a63ffb9aaf1_tuple);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_json);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_error);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_mapping);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_error_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_message_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_76093b718740cc2a7ad4bb21bfd52bf3);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_APIError);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_request);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_message_str_plain_request_str_plain_body_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_process_data);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_cast_to);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_data_str_plain_cast_to_str_plain_response_tuple);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_afd28cae087442373bfa906d4b39d608);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_cb355ff40bf0d2197a6dd6eead5f4268);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain___anext__);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_dbb0eb8b269b4770229980b3b63cccb1);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain___aiter__);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_30a4c60226828ec83314dbfd9f41aa20);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_aiter_bytes);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_544b943bf0a5656feb9215c79bd516c4);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_e002acaa3acee18f565e10c2c1f90cf7);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_2ea8b76fab2586a90feffe93206262f2);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_d361373a8c355a7cf5f651aaacd77b3c);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_aclose);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_eca2d7a5627ee6a4a84a377b9dbe71b5);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain__id);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain__data);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain__event);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain__retry);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_loads);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_dee6658d3f552d8dc3806d4440cf0165);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_a637fb200eae49dc87cbe8c0cc133a9b);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_21252a0824ff567609dd5454ec43bcde);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_id);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_8c2db02a6533acdd055c91849eb8f7e0);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_retry);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_chr_41);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain__last_event_id);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_68988aefbec28ed4657fdf60c2456a03);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain__iter_chunks);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_iterator);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_splitlines);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_ebfc2e698e54163c8c70730ab58edaea);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_287e28f476709a3035b792b5585d85b3);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_keepends_tuple);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_endswith);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_tuple_tuple_d3f047b4bcc23d2655483ec754b5d637_tuple_tuple);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_4ef97eea4a4ac3450a222209c9e29aec);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain__aiter_chunks);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_digest_f68742603dc9b566382c9c72e78c5a26);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_6768b1289dd1fe8e30c66bd125d11aa5);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_ServerSentEvent);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_newline);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_event_str_plain_data_str_plain_id_str_plain_retry_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_58_tuple);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_partition);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_str_space_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_none_none);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_value);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_null);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_tuple_type_TypeError_type_ValueError_tuple);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_origin);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_isclass);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_Stream);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncStream);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_d6de0b60b02e16def9699dff8552ae57);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain__base_client);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Stream_str_plain_AsyncStream_tuple);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_extract_type_var_from_base);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_digest_61b8423f3b23c4f1978ca4a089646bc1);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_tuple_f333b19f3da0404471b6a945ecca60dd_tuple);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_digest_baadd4c19429741fb9242b1210178c75);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_TracebackType);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_Generic);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterator);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncIterator);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_tuple_58c4b68b5b28f3a3049efffb237ab59d_tuple);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_Self);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_Protocol);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeGuard);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_override);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_runtime_checkable);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_httpx);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain__utils);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_is_mapping_str_plain_extract_type_var_from_base_tuple);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain__exceptions);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_APIError_tuple);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__T_tuple);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain__T);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_digest_7698e24063a53842307d990d0970ee02);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_digest_620a91f3b9c6d3ab883e44fa53b86a70);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_int_pos_22);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_digest_11df174efb5cc83c4ecfcd61824f025d);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_SSEBytesDecoder);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_dict_c275b6ed862be1e7260c244120706863);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_digest_4a7645f398fd0a431a4fc76eadb605e7);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_dict_79072ff8c541aea48bbed013b73f2282);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_digest_f58e7359b9a50dd2cf935dfdd7f7db52);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_dict_c741a2c409580a81885c389de4eb0853);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_dict_666d3ee8ea4923e58a22b19d9103ed7f);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_dict_71adc2ba5737c82f5bb97b4d3b034ead);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_digest_7c8010de651dac2fb35f63531ab36c81);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_dict_b463fd795a8973b8a1c46e48bf79ef09);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_digest_9ed394243540bfdf0b1d966917663ec5);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_digest_48b81a776fe61616de1779cb079589cd);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_tuple_e0701f44303cd3e11cb50c027d63552e_tuple);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_digest_f2983401b0920f9bd580ce8facef64c4);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_int_pos_123);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_digest_e0678d8f77e1015a9c4cef2cb6c55647);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_dict_972037a11018e14a9125dbbbc4a00887);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_digest_27f23450c1059f3cad51823d809cf1ec);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_dict_166b48d2c76a018152c9a2746c771069);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_dict_a5f9f94cd63834d1c74824c8ea521f61);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_int_pos_225);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_dict_78503ba202d4261bad01aa6f0e4803ef);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_dict_56e1853e8e0d1ef0942809950d670b70);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_digest_370ccd1b473bf2f3071fe6aa3ce7465e);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_digest_269bbdeb8ec3e4b00b678e202a639f95);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_digest_3a5ade228e6d09b156341eb1decdc4d7);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_dict_4ceb13db20db0a5d6b10c13b92db4345);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_digest_5b5689408229bf8ad6fc8084a20399e7);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_digest_fedbc9fc74cc0850baec1257b2ddf61f);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_dict_649327bbc9f137cd11fab40cb48175a1);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_digest_6748702bf4e891b2ec2f994c1f2afef8);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain___repr__);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_digest_9c2147d1bb008d93aad34861a7943760);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_tuple_2a32650cebe4e63166dfc6f650144819_tuple);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain_SSEDecoder);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_int_pos_266);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_digest_e457754874b2ab64235a137685f8363a);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_digest_fdc08687acda858ba8549314ad367add);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_dict_2ef6b0b9635cdf1501621512ed986763);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_dict_17fe1a76d688a8c02b0cca9c28e89a5f);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_dict_9a07c45ffb238b48f25e6ac6f3557242);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_dict_2e1dc255f856026798b4553d0a1b2a4a);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_dict_31d74d9eed2fe71a422015ea6763b6f8);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_digest_c42c4ac586eab09ad20b05b2ea4b1237);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_tuple_c840aa8364549d5201dd57f687111df1_tuple);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_int_pos_372);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_digest_85e120d4bf0e66177f2b429717956083);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_digest_35b01d1c7d75d1f57f2d5edfb102d212);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_digest_04142f54036cf0041dacca122bb6c604);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_dict_07ca162ce13b945808d6dfeaf91bd26b);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_stream_class_type);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_dict_3c3750ac9fde487cc312781889be09e2);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_dict_7a8e729178509538912ebe468dcc66d5);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_plain_extract_stream_chunk_type);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_digest_3d81e01ad3b56b37b76b3bd847334d11);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_digest_5b1dfc2b04340be520a204df2c2146c1);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_tuple_4358c0b001f2a5005d08907a7929fc87_tuple);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_item_tuple);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_tuple_ea9128b77fe2e32388bab180658d69d1_tuple);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_tuple_ef13ddf8249e4920a207d952d9ad934e_tuple);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_tuple_8fcf723c0a11b1adef99c4563ed48f00_tuple);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_tuple_b4b7be7cc2ee39c3cf717132b1ac8d60_tuple);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_sse_tuple);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_iterator_tuple);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_tuple_a52d25cb45f6b03dba4aa428b9d6efc0_tuple);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_tuple_aa37b9ebfaa84f6fe377af25bd8a7fa9_tuple);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_tuple_2247a4e3ba203f4bc84e6a34c4848c94_tuple);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_typ_str_plain_origin_tuple);
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
void checkModuleConstants_openai$_streaming(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain__cast_to));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__cast_to);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain__client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__client);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain__make_sse_decoder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__make_sse_decoder);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain__decoder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__decoder);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain___stream__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___stream__);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain__iterator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__iterator);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain___next__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___next__);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_digest_c93bf231c9b3e62f74e33da59f7bb4a4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c93bf231c9b3e62f74e33da59f7bb4a4);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_iter_bytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_iter_bytes);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain__iter_events));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__iter_events);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_a9ceb48bbba786c5160f98f555fb7ab0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a9ceb48bbba786c5160f98f555fb7ab0);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_cast));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cast);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain__process_response_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__process_response_data);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_data);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_startswith));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_startswith);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_2a7265ac0ae741cbd84807714ce996e0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_2a7265ac0ae741cbd84807714ce996e0_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_event);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_0fb2bb2e7aeec53e4f924a63ffb9aaf1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_0fb2bb2e7aeec53e4f924a63ffb9aaf1_tuple);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_json));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_json);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_error);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_mapping));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_mapping);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_error_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_error_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_message_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_message_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_76093b718740cc2a7ad4bb21bfd52bf3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_76093b718740cc2a7ad4bb21bfd52bf3);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_APIError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_APIError);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_request);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_message_str_plain_request_str_plain_body_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_message_str_plain_request_str_plain_body_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_process_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_process_data);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_cast_to));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cast_to);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_data_str_plain_cast_to_str_plain_response_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_data_str_plain_cast_to_str_plain_response_tuple);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_afd28cae087442373bfa906d4b39d608));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_afd28cae087442373bfa906d4b39d608);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_cb355ff40bf0d2197a6dd6eead5f4268));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cb355ff40bf0d2197a6dd6eead5f4268);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain___anext__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___anext__);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_dbb0eb8b269b4770229980b3b63cccb1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dbb0eb8b269b4770229980b3b63cccb1);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain___aiter__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___aiter__);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_30a4c60226828ec83314dbfd9f41aa20));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_30a4c60226828ec83314dbfd9f41aa20);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_aiter_bytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_aiter_bytes);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_544b943bf0a5656feb9215c79bd516c4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_544b943bf0a5656feb9215c79bd516c4);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_e002acaa3acee18f565e10c2c1f90cf7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e002acaa3acee18f565e10c2c1f90cf7);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_2ea8b76fab2586a90feffe93206262f2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2ea8b76fab2586a90feffe93206262f2);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_d361373a8c355a7cf5f651aaacd77b3c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d361373a8c355a7cf5f651aaacd77b3c);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_aclose));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_aclose);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_eca2d7a5627ee6a4a84a377b9dbe71b5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eca2d7a5627ee6a4a84a377b9dbe71b5);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain__id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__id);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain__data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__data);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain__event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__event);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain__retry));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__retry);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_loads));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_loads);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_dee6658d3f552d8dc3806d4440cf0165));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dee6658d3f552d8dc3806d4440cf0165);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_a637fb200eae49dc87cbe8c0cc133a9b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a637fb200eae49dc87cbe8c0cc133a9b);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_21252a0824ff567609dd5454ec43bcde));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_21252a0824ff567609dd5454ec43bcde);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_id);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_8c2db02a6533acdd055c91849eb8f7e0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8c2db02a6533acdd055c91849eb8f7e0);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_retry));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_retry);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_chr_41));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_41);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain__last_event_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__last_event_id);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_68988aefbec28ed4657fdf60c2456a03));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_68988aefbec28ed4657fdf60c2456a03);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain__iter_chunks));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__iter_chunks);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_iterator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_iterator);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_splitlines));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_splitlines);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decode);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_ebfc2e698e54163c8c70730ab58edaea));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ebfc2e698e54163c8c70730ab58edaea);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_287e28f476709a3035b792b5585d85b3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_287e28f476709a3035b792b5585d85b3);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_keepends_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_keepends_tuple);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_endswith));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_endswith);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_tuple_tuple_d3f047b4bcc23d2655483ec754b5d637_tuple_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_tuple_d3f047b4bcc23d2655483ec754b5d637_tuple_tuple);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_4ef97eea4a4ac3450a222209c9e29aec));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4ef97eea4a4ac3450a222209c9e29aec);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain__aiter_chunks));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__aiter_chunks);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_digest_f68742603dc9b566382c9c72e78c5a26));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f68742603dc9b566382c9c72e78c5a26);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_6768b1289dd1fe8e30c66bd125d11aa5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6768b1289dd1fe8e30c66bd125d11aa5);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_ServerSentEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ServerSentEvent);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_newline));
CHECK_OBJECT_DEEP(mod_consts.const_str_newline);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_event_str_plain_data_str_plain_id_str_plain_retry_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_event_str_plain_data_str_plain_id_str_plain_retry_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_58_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_58_tuple);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_partition));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_partition);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_str_space_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_space_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_none_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_int_pos_1_none_none);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_value);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_null));
CHECK_OBJECT_DEEP(mod_consts.const_str_null);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_tuple_type_TypeError_type_ValueError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_TypeError_type_ValueError_tuple);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_origin);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_isclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isclass);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_Stream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Stream);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncStream);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_d6de0b60b02e16def9699dff8552ae57));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d6de0b60b02e16def9699dff8552ae57);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain__base_client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__base_client);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Stream_str_plain_AsyncStream_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Stream_str_plain_AsyncStream_tuple);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_extract_type_var_from_base));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extract_type_var_from_base);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_digest_61b8423f3b23c4f1978ca4a089646bc1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_61b8423f3b23c4f1978ca4a089646bc1);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_tuple_f333b19f3da0404471b6a945ecca60dd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f333b19f3da0404471b6a945ecca60dd_tuple);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_digest_baadd4c19429741fb9242b1210178c75));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_baadd4c19429741fb9242b1210178c75);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_TracebackType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TracebackType);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_Generic));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Generic);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeVar);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Iterator);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncIterator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncIterator);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_extensions);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_tuple_58c4b68b5b28f3a3049efffb237ab59d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_58c4b68b5b28f3a3049efffb237ab59d_tuple);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_Self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Self);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_Protocol));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Protocol);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeGuard));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeGuard);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_override));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_override);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_runtime_checkable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_runtime_checkable);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_httpx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_httpx);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain__utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__utils);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_is_mapping_str_plain_extract_type_var_from_base_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_is_mapping_str_plain_extract_type_var_from_base_tuple);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain__exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__exceptions);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_APIError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_APIError_tuple);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__T_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__T_tuple);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain__T));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__T);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_digest_7698e24063a53842307d990d0970ee02));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7698e24063a53842307d990d0970ee02);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_digest_620a91f3b9c6d3ab883e44fa53b86a70));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_620a91f3b9c6d3ab883e44fa53b86a70);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_int_pos_22));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_22);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_digest_11df174efb5cc83c4ecfcd61824f025d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_11df174efb5cc83c4ecfcd61824f025d);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_SSEBytesDecoder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SSEBytesDecoder);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_dict_c275b6ed862be1e7260c244120706863));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c275b6ed862be1e7260c244120706863);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_digest_4a7645f398fd0a431a4fc76eadb605e7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4a7645f398fd0a431a4fc76eadb605e7);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_dict_79072ff8c541aea48bbed013b73f2282));
CHECK_OBJECT_DEEP(mod_consts.const_dict_79072ff8c541aea48bbed013b73f2282);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_digest_f58e7359b9a50dd2cf935dfdd7f7db52));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f58e7359b9a50dd2cf935dfdd7f7db52);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_dict_c741a2c409580a81885c389de4eb0853));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c741a2c409580a81885c389de4eb0853);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_dict_666d3ee8ea4923e58a22b19d9103ed7f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_666d3ee8ea4923e58a22b19d9103ed7f);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_dict_71adc2ba5737c82f5bb97b4d3b034ead));
CHECK_OBJECT_DEEP(mod_consts.const_dict_71adc2ba5737c82f5bb97b4d3b034ead);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_digest_7c8010de651dac2fb35f63531ab36c81));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7c8010de651dac2fb35f63531ab36c81);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_dict_b463fd795a8973b8a1c46e48bf79ef09));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b463fd795a8973b8a1c46e48bf79ef09);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_digest_9ed394243540bfdf0b1d966917663ec5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9ed394243540bfdf0b1d966917663ec5);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_digest_48b81a776fe61616de1779cb079589cd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_48b81a776fe61616de1779cb079589cd);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_tuple_e0701f44303cd3e11cb50c027d63552e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e0701f44303cd3e11cb50c027d63552e_tuple);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_digest_f2983401b0920f9bd580ce8facef64c4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f2983401b0920f9bd580ce8facef64c4);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_int_pos_123));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_123);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_digest_e0678d8f77e1015a9c4cef2cb6c55647));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e0678d8f77e1015a9c4cef2cb6c55647);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_dict_972037a11018e14a9125dbbbc4a00887));
CHECK_OBJECT_DEEP(mod_consts.const_dict_972037a11018e14a9125dbbbc4a00887);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_digest_27f23450c1059f3cad51823d809cf1ec));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_27f23450c1059f3cad51823d809cf1ec);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_dict_166b48d2c76a018152c9a2746c771069));
CHECK_OBJECT_DEEP(mod_consts.const_dict_166b48d2c76a018152c9a2746c771069);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_dict_a5f9f94cd63834d1c74824c8ea521f61));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a5f9f94cd63834d1c74824c8ea521f61);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_int_pos_225));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_225);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_dict_78503ba202d4261bad01aa6f0e4803ef));
CHECK_OBJECT_DEEP(mod_consts.const_dict_78503ba202d4261bad01aa6f0e4803ef);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_dict_56e1853e8e0d1ef0942809950d670b70));
CHECK_OBJECT_DEEP(mod_consts.const_dict_56e1853e8e0d1ef0942809950d670b70);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_digest_370ccd1b473bf2f3071fe6aa3ce7465e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_370ccd1b473bf2f3071fe6aa3ce7465e);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071));
CHECK_OBJECT_DEEP(mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_digest_269bbdeb8ec3e4b00b678e202a639f95));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_269bbdeb8ec3e4b00b678e202a639f95);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_digest_3a5ade228e6d09b156341eb1decdc4d7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3a5ade228e6d09b156341eb1decdc4d7);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_dict_4ceb13db20db0a5d6b10c13b92db4345));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4ceb13db20db0a5d6b10c13b92db4345);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_digest_5b5689408229bf8ad6fc8084a20399e7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5b5689408229bf8ad6fc8084a20399e7);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_digest_fedbc9fc74cc0850baec1257b2ddf61f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fedbc9fc74cc0850baec1257b2ddf61f);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_dict_649327bbc9f137cd11fab40cb48175a1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_649327bbc9f137cd11fab40cb48175a1);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_digest_6748702bf4e891b2ec2f994c1f2afef8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6748702bf4e891b2ec2f994c1f2afef8);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain___repr__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___repr__);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_digest_9c2147d1bb008d93aad34861a7943760));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9c2147d1bb008d93aad34861a7943760);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_tuple_2a32650cebe4e63166dfc6f650144819_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2a32650cebe4e63166dfc6f650144819_tuple);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain_SSEDecoder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SSEDecoder);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_int_pos_266));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_266);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_digest_e457754874b2ab64235a137685f8363a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e457754874b2ab64235a137685f8363a);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_digest_fdc08687acda858ba8549314ad367add));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fdc08687acda858ba8549314ad367add);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_dict_2ef6b0b9635cdf1501621512ed986763));
CHECK_OBJECT_DEEP(mod_consts.const_dict_2ef6b0b9635cdf1501621512ed986763);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_dict_17fe1a76d688a8c02b0cca9c28e89a5f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_17fe1a76d688a8c02b0cca9c28e89a5f);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_dict_9a07c45ffb238b48f25e6ac6f3557242));
CHECK_OBJECT_DEEP(mod_consts.const_dict_9a07c45ffb238b48f25e6ac6f3557242);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_dict_2e1dc255f856026798b4553d0a1b2a4a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_2e1dc255f856026798b4553d0a1b2a4a);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_dict_31d74d9eed2fe71a422015ea6763b6f8));
CHECK_OBJECT_DEEP(mod_consts.const_dict_31d74d9eed2fe71a422015ea6763b6f8);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_digest_c42c4ac586eab09ad20b05b2ea4b1237));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c42c4ac586eab09ad20b05b2ea4b1237);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_tuple_c840aa8364549d5201dd57f687111df1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c840aa8364549d5201dd57f687111df1_tuple);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_int_pos_372));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_372);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_digest_85e120d4bf0e66177f2b429717956083));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_85e120d4bf0e66177f2b429717956083);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_digest_35b01d1c7d75d1f57f2d5edfb102d212));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_35b01d1c7d75d1f57f2d5edfb102d212);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_digest_04142f54036cf0041dacca122bb6c604));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_04142f54036cf0041dacca122bb6c604);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_dict_07ca162ce13b945808d6dfeaf91bd26b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_07ca162ce13b945808d6dfeaf91bd26b);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_stream_class_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_stream_class_type);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_dict_3c3750ac9fde487cc312781889be09e2));
CHECK_OBJECT_DEEP(mod_consts.const_dict_3c3750ac9fde487cc312781889be09e2);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_dict_7a8e729178509538912ebe468dcc66d5));
CHECK_OBJECT_DEEP(mod_consts.const_dict_7a8e729178509538912ebe468dcc66d5);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_plain_extract_stream_chunk_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extract_stream_chunk_type);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_digest_3d81e01ad3b56b37b76b3bd847334d11));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3d81e01ad3b56b37b76b3bd847334d11);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_digest_5b1dfc2b04340be520a204df2c2146c1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5b1dfc2b04340be520a204df2c2146c1);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_tuple_4358c0b001f2a5005d08907a7929fc87_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4358c0b001f2a5005d08907a7929fc87_tuple);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_item_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_item_tuple);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_tuple_ea9128b77fe2e32388bab180658d69d1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ea9128b77fe2e32388bab180658d69d1_tuple);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_tuple_ef13ddf8249e4920a207d952d9ad934e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ef13ddf8249e4920a207d952d9ad934e_tuple);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_tuple_8fcf723c0a11b1adef99c4563ed48f00_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8fcf723c0a11b1adef99c4563ed48f00_tuple);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_tuple_b4b7be7cc2ee39c3cf717132b1ac8d60_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b4b7be7cc2ee39c3cf717132b1ac8d60_tuple);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_sse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_sse_tuple);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_iterator_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_iterator_tuple);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_tuple_a52d25cb45f6b03dba4aa428b9d6efc0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a52d25cb45f6b03dba4aa428b9d6efc0_tuple);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_tuple_aa37b9ebfaa84f6fe377af25bd8a7fa9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_aa37b9ebfaa84f6fe377af25bd8a7fa9_tuple);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_tuple_2247a4e3ba203f4bc84e6a34c4848c94_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2247a4e3ba203f4bc84e6a34c4848c94_tuple);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_typ_str_plain_origin_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_typ_str_plain_origin_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 18
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
static PyObject *module_var_accessor_openai$_streaming$APIError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_streaming->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_streaming->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_APIError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_streaming->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_APIError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_APIError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_APIError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_APIError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_APIError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_APIError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_APIError);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_streaming$Any(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_streaming->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_streaming->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_streaming->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_streaming$AsyncStream(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_streaming->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_streaming->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncStream);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_streaming->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncStream);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncStream);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncStream);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_streaming$Generic(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_streaming->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_streaming->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_Generic);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_streaming->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_Generic);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_Generic);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Generic);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_streaming$Protocol(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_streaming->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_streaming->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_Protocol);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_streaming->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Protocol);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Protocol, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Protocol);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Protocol, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_Protocol);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_Protocol);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Protocol);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_streaming$ServerSentEvent(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_streaming->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_streaming->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_ServerSentEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_streaming->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ServerSentEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ServerSentEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ServerSentEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ServerSentEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_ServerSentEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_ServerSentEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ServerSentEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_streaming$Stream(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_streaming->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_streaming->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_Stream);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_streaming->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_Stream);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_Stream);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Stream);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_streaming$TypeVar(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_streaming->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_streaming->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_streaming->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_streaming$_T(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_streaming->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_streaming->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain__T);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_streaming->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain__T);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain__T);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__T);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_streaming$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_streaming->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_streaming->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_streaming->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_streaming$cast(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_streaming->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_streaming->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_streaming->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_streaming$extract_type_var_from_base(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_streaming->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_streaming->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_extract_type_var_from_base);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_streaming->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_extract_type_var_from_base);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_extract_type_var_from_base, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_extract_type_var_from_base);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_extract_type_var_from_base, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_extract_type_var_from_base);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_extract_type_var_from_base);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_extract_type_var_from_base);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_streaming$get_origin(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_streaming->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_streaming->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_get_origin);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_streaming->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_get_origin);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_get_origin);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_origin);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_streaming$inspect(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_streaming->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_streaming->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)const_str_plain_inspect);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_streaming->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)const_str_plain_inspect);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)const_str_plain_inspect);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_inspect);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_streaming$is_mapping(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_streaming->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_streaming->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_is_mapping);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_streaming->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_mapping);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_mapping, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_mapping);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_mapping, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_is_mapping);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_is_mapping);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_is_mapping);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_streaming$json(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_streaming->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_streaming->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_streaming->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_json);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_json, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_json);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_json, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_streaming$override(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_streaming->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_streaming->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_override);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_streaming->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_override);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_override);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_override);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_streaming$runtime_checkable(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_streaming->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_streaming->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_runtime_checkable);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_streaming->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_runtime_checkable);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_runtime_checkable, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_runtime_checkable);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_runtime_checkable, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_runtime_checkable);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_runtime_checkable);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_runtime_checkable);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_e6706d4977884c82f3a88f73bea2feae;
static PyCodeObject *code_objects_87044a223965e5e81b1e77e8990ecc2b;
static PyCodeObject *code_objects_ee3a4fe55db3aeb18b22e5f72233f197;
static PyCodeObject *code_objects_00640cec69ca23b4ca562cd10f88bbec;
static PyCodeObject *code_objects_0e9e210ae1f3be7abbbc6a76085a1448;
static PyCodeObject *code_objects_8e3fbf5f72a157faee9795ded02af632;
static PyCodeObject *code_objects_61c15a88f727e9d818826d377a969c3b;
static PyCodeObject *code_objects_aadf999daf396c92cd53c5b30e6dfdc0;
static PyCodeObject *code_objects_072710bb68cd6e92e1df3726e57d52dc;
static PyCodeObject *code_objects_37e134ec192848f422715e3e22f89c1a;
static PyCodeObject *code_objects_172473309fe70a3438f1a66ef3bdb2e1;
static PyCodeObject *code_objects_d3daf81a9f450fdf48e09f1341330f5d;
static PyCodeObject *code_objects_58d3043a9a3db6107450d63b56779629;
static PyCodeObject *code_objects_f32f979144da1eb995a95ada5520bbf8;
static PyCodeObject *code_objects_7dde98031ba0c648a7bc6347553f5f6a;
static PyCodeObject *code_objects_efd262d4dda4715a348f4f8e94d9b7fd;
static PyCodeObject *code_objects_f297b05458a7f7f19fcfb661d275c272;
static PyCodeObject *code_objects_2bd5d8ac0c76cebb34cbb0e1f9d2fa58;
static PyCodeObject *code_objects_c94ed86dc4e0c16ceee144a281ff25ea;
static PyCodeObject *code_objects_8427ddebe9d174b2e6289475032ad1aa;
static PyCodeObject *code_objects_08f1424e9c8d48917370e98610dc1331;
static PyCodeObject *code_objects_37efdd35198c908a1b62ff9f76a3ae52;
static PyCodeObject *code_objects_5eb4689a95c1d7760e3ec22d2e3895db;
static PyCodeObject *code_objects_9f351fd2b3e071bd8691db645ae8b5fe;
static PyCodeObject *code_objects_8640d8e9a96ba38658031dfbd5f599d1;
static PyCodeObject *code_objects_568d86d8066aea89a991c090030eebe2;
static PyCodeObject *code_objects_7e0001d8e715ec0cc523bb08187985e1;
static PyCodeObject *code_objects_79165ea7f17567038987131137603d33;
static PyCodeObject *code_objects_6e38baee693a818909518e0350cb0a99;
static PyCodeObject *code_objects_6a9d38ce6d37479b46a49fcb0a9aa6ff;
static PyCodeObject *code_objects_0aa970ad1d60f3cfcbaf0da8b2ebe425;
static PyCodeObject *code_objects_41b3eef8244c99c1873e18f465d43fd6;
static PyCodeObject *code_objects_deb8e5a53bedc776817bf1c3078a4d30;
static PyCodeObject *code_objects_130cd6ddd6984388f4fc3b8abf4945ba;
static PyCodeObject *code_objects_ffe661abdc51c59b8a7f524a037458d2;
static PyCodeObject *code_objects_8a0dd120e2701afe114522a1dfbfac9d;
static PyCodeObject *code_objects_f9ca129e9081d84296fa987552443272;
static PyCodeObject *code_objects_744da44ae72be58ea58e4951ea3102e4;
static PyCodeObject *code_objects_549d9cbb1ce5445eb138c4c235f1362f;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_3d81e01ad3b56b37b76b3bd847334d11); CHECK_OBJECT(module_filename_obj);
code_objects_e6706d4977884c82f3a88f73bea2feae = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_5b1dfc2b04340be520a204df2c2146c1, mod_consts.const_str_digest_5b1dfc2b04340be520a204df2c2146c1, NULL, NULL, 0, 0, 0);
code_objects_87044a223965e5e81b1e77e8990ecc2b = MAKE_CODE_OBJECT(module_filename_obj, 123, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_AsyncStream, mod_consts.const_str_plain_AsyncStream, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_ee3a4fe55db3aeb18b22e5f72233f197 = MAKE_CODE_OBJECT(module_filename_obj, 372, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_SSEBytesDecoder, mod_consts.const_str_plain_SSEBytesDecoder, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_00640cec69ca23b4ca562cd10f88bbec = MAKE_CODE_OBJECT(module_filename_obj, 266, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_SSEDecoder, mod_consts.const_str_plain_SSEDecoder, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_0e9e210ae1f3be7abbbc6a76085a1448 = MAKE_CODE_OBJECT(module_filename_obj, 225, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ServerSentEvent, mod_consts.const_str_plain_ServerSentEvent, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_8e3fbf5f72a157faee9795ded02af632 = MAKE_CODE_OBJECT(module_filename_obj, 22, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Stream, mod_consts.const_str_plain_Stream, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_61c15a88f727e9d818826d377a969c3b = MAKE_CODE_OBJECT(module_filename_obj, 205, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___aenter__, mod_consts.const_str_digest_2ea8b76fab2586a90feffe93206262f2, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_aadf999daf396c92cd53c5b30e6dfdc0 = MAKE_CODE_OBJECT(module_filename_obj, 208, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___aexit__, mod_consts.const_str_digest_d361373a8c355a7cf5f651aaacd77b3c, mod_consts.const_tuple_4358c0b001f2a5005d08907a7929fc87_tuple, NULL, 4, 0, 0);
code_objects_072710bb68cd6e92e1df3726e57d52dc = MAKE_CODE_OBJECT(module_filename_obj, 146, CO_ASYNC_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___aiter__, mod_consts.const_str_digest_30a4c60226828ec83314dbfd9f41aa20, mod_consts.const_tuple_str_plain_self_str_plain_item_tuple, NULL, 1, 0, 0);
code_objects_37e134ec192848f422715e3e22f89c1a = MAKE_CODE_OBJECT(module_filename_obj, 143, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___anext__, mod_consts.const_str_digest_dbb0eb8b269b4770229980b3b63cccb1, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_172473309fe70a3438f1a66ef3bdb2e1 = MAKE_CODE_OBJECT(module_filename_obj, 103, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___enter__, mod_consts.const_str_digest_7c8010de651dac2fb35f63531ab36c81, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_d3daf81a9f450fdf48e09f1341330f5d = MAKE_CODE_OBJECT(module_filename_obj, 106, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___exit__, mod_consts.const_str_digest_9ed394243540bfdf0b1d966917663ec5, mod_consts.const_tuple_4358c0b001f2a5005d08907a7929fc87_tuple, NULL, 4, 0, 0);
code_objects_58d3043a9a3db6107450d63b56779629 = MAKE_CODE_OBJECT(module_filename_obj, 130, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_27f23450c1059f3cad51823d809cf1ec, mod_consts.const_tuple_ea9128b77fe2e32388bab180658d69d1_tuple, NULL, 1, 3, 0);
code_objects_f32f979144da1eb995a95ada5520bbf8 = MAKE_CODE_OBJECT(module_filename_obj, 272, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_fdc08687acda858ba8549314ad367add, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_7dde98031ba0c648a7bc6347553f5f6a = MAKE_CODE_OBJECT(module_filename_obj, 226, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_370ccd1b473bf2f3071fe6aa3ce7465e, mod_consts.const_tuple_ef13ddf8249e4920a207d952d9ad934e_tuple, NULL, 1, 4, 0);
code_objects_efd262d4dda4715a348f4f8e94d9b7fd = MAKE_CODE_OBJECT(module_filename_obj, 29, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_4a7645f398fd0a431a4fc76eadb605e7, mod_consts.const_tuple_ea9128b77fe2e32388bab180658d69d1_tuple, NULL, 1, 3, 0);
code_objects_f297b05458a7f7f19fcfb661d275c272 = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___iter__, mod_consts.const_str_digest_c93bf231c9b3e62f74e33da59f7bb4a4, mod_consts.const_tuple_str_plain_self_str_plain_item_tuple, NULL, 1, 0, 0);
code_objects_2bd5d8ac0c76cebb34cbb0e1f9d2fa58 = MAKE_CODE_OBJECT(module_filename_obj, 42, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___next__, mod_consts.const_str_digest_f58e7359b9a50dd2cf935dfdd7f7db52, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_c94ed86dc4e0c16ceee144a281ff25ea = MAKE_CODE_OBJECT(module_filename_obj, 262, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_9c2147d1bb008d93aad34861a7943760, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_8427ddebe9d174b2e6289475032ad1aa = MAKE_CODE_OBJECT(module_filename_obj, 154, CO_ASYNC_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___stream__, mod_consts.const_str_digest_e002acaa3acee18f565e10c2c1f90cf7, mod_consts.const_tuple_8fcf723c0a11b1adef99c4563ed48f00_tuple, NULL, 1, 0, 0);
code_objects_08f1424e9c8d48917370e98610dc1331 = MAKE_CODE_OBJECT(module_filename_obj, 52, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___stream__, mod_consts.const_str_digest_afd28cae087442373bfa906d4b39d608, mod_consts.const_tuple_8fcf723c0a11b1adef99c4563ed48f00_tuple, NULL, 1, 0, 0);
code_objects_37efdd35198c908a1b62ff9f76a3ae52 = MAKE_CODE_OBJECT(module_filename_obj, 310, CO_ASYNC_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__aiter_chunks, mod_consts.const_str_digest_6768b1289dd1fe8e30c66bd125d11aa5, mod_consts.const_tuple_b4b7be7cc2ee39c3cf717132b1ac8d60_tuple, NULL, 2, 0, 0);
code_objects_5eb4689a95c1d7760e3ec22d2e3895db = MAKE_CODE_OBJECT(module_filename_obj, 288, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__iter_chunks, mod_consts.const_str_digest_4ef97eea4a4ac3450a222209c9e29aec, mod_consts.const_tuple_b4b7be7cc2ee39c3cf717132b1ac8d60_tuple, NULL, 2, 0, 0);
code_objects_9f351fd2b3e071bd8691db645ae8b5fe = MAKE_CODE_OBJECT(module_filename_obj, 150, CO_ASYNC_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__iter_events, mod_consts.const_str_digest_544b943bf0a5656feb9215c79bd516c4, mod_consts.const_tuple_str_plain_self_str_plain_sse_tuple, NULL, 1, 0, 0);
code_objects_8640d8e9a96ba38658031dfbd5f599d1 = MAKE_CODE_OBJECT(module_filename_obj, 49, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__iter_events, mod_consts.const_str_digest_a9ceb48bbba786c5160f98f555fb7ab0, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_568d86d8066aea89a991c090030eebe2 = MAKE_CODE_OBJECT(module_filename_obj, 377, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_aiter_bytes, mod_consts.const_str_digest_04142f54036cf0041dacca122bb6c604, mod_consts.const_tuple_str_plain_self_str_plain_iterator_tuple, NULL, 2, 0, 0);
code_objects_7e0001d8e715ec0cc523bb08187985e1 = MAKE_CODE_OBJECT(module_filename_obj, 300, CO_ASYNC_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_aiter_bytes, mod_consts.const_str_digest_f68742603dc9b566382c9c72e78c5a26, mod_consts.const_tuple_a52d25cb45f6b03dba4aa428b9d6efc0_tuple, NULL, 2, 0, 0);
code_objects_79165ea7f17567038987131137603d33 = MAKE_CODE_OBJECT(module_filename_obj, 216, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain_close, mod_consts.const_str_digest_eca2d7a5627ee6a4a84a377b9dbe71b5, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_6e38baee693a818909518e0350cb0a99 = MAKE_CODE_OBJECT(module_filename_obj, 114, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain_close, mod_consts.const_str_digest_48b81a776fe61616de1779cb079589cd, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_6a9d38ce6d37479b46a49fcb0a9aa6ff = MAKE_CODE_OBJECT(module_filename_obj, 255, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_data, mod_consts.const_str_digest_fedbc9fc74cc0850baec1257b2ddf61f, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_0aa970ad1d60f3cfcbaf0da8b2ebe425 = MAKE_CODE_OBJECT(module_filename_obj, 322, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_decode, mod_consts.const_str_digest_c42c4ac586eab09ad20b05b2ea4b1237, mod_consts.const_tuple_aa37b9ebfaa84f6fe377af25bd8a7fa9_tuple, NULL, 2, 0, 0);
code_objects_41b3eef8244c99c1873e18f465d43fd6 = MAKE_CODE_OBJECT(module_filename_obj, 243, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_event, mod_consts.const_str_digest_269bbdeb8ec3e4b00b678e202a639f95, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_deb8e5a53bedc776817bf1c3078a4d30 = MAKE_CODE_OBJECT(module_filename_obj, 388, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_extract_stream_chunk_type, mod_consts.const_str_plain_extract_stream_chunk_type, mod_consts.const_tuple_2247a4e3ba203f4bc84e6a34c4848c94_tuple, NULL, 1, 1, 0);
code_objects_130cd6ddd6984388f4fc3b8abf4945ba = MAKE_CODE_OBJECT(module_filename_obj, 247, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_id, mod_consts.const_str_digest_3a5ade228e6d09b156341eb1decdc4d7, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_ffe661abdc51c59b8a7f524a037458d2 = MAKE_CODE_OBJECT(module_filename_obj, 382, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_stream_class_type, mod_consts.const_str_plain_is_stream_class_type, mod_consts.const_tuple_str_plain_typ_str_plain_origin_tuple, NULL, 1, 0, 0);
code_objects_8a0dd120e2701afe114522a1dfbfac9d = MAKE_CODE_OBJECT(module_filename_obj, 373, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_iter_bytes, mod_consts.const_str_digest_85e120d4bf0e66177f2b429717956083, mod_consts.const_tuple_str_plain_self_str_plain_iterator_tuple, NULL, 2, 0, 0);
code_objects_f9ca129e9081d84296fa987552443272 = MAKE_CODE_OBJECT(module_filename_obj, 278, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_iter_bytes, mod_consts.const_str_digest_ebfc2e698e54163c8c70730ab58edaea, mod_consts.const_tuple_a52d25cb45f6b03dba4aa428b9d6efc0_tuple, NULL, 2, 0, 0);
code_objects_744da44ae72be58ea58e4951ea3102e4 = MAKE_CODE_OBJECT(module_filename_obj, 258, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_json, mod_consts.const_str_digest_6748702bf4e891b2ec2f994c1f2afef8, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_549d9cbb1ce5445eb138c4c235f1362f = MAKE_CODE_OBJECT(module_filename_obj, 251, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_retry, mod_consts.const_str_digest_5b5689408229bf8ad6fc8084a20399e7, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_openai$_streaming$$$function__3___iter__$$$genobj__1___iter__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_openai$_streaming$$$function__4__iter_events$$$genobj__1__iter_events(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_openai$_streaming$$$function__5___stream__$$$genobj__1___stream__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_openai$_streaming$$$function__10___anext__$$$coroutine__1___anext__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_ASYNCGEN_openai$_streaming$$$function__11___aiter__$$$asyncgen__1___aiter__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_ASYNCGEN_openai$_streaming$$$function__12__iter_events$$$asyncgen__1__iter_events(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_ASYNCGEN_openai$_streaming$$$function__13___stream__$$$asyncgen__1___stream__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_openai$_streaming$$$function__14___aenter__$$$coroutine__1___aenter__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_openai$_streaming$$$function__15___aexit__$$$coroutine__1___aexit__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_openai$_streaming$$$function__16_close$$$coroutine__1_close(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_openai$_streaming$$$function__25_iter_bytes$$$genobj__1_iter_bytes(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_openai$_streaming$$$function__26__iter_chunks$$$genobj__1__iter_chunks(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_ASYNCGEN_openai$_streaming$$$function__27_aiter_bytes$$$asyncgen__1_aiter_bytes(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_ASYNCGEN_openai$_streaming$$$function__28__aiter_chunks$$$asyncgen__1__aiter_chunks(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__10___anext__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__11___aiter__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__12__iter_events(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__13___stream__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__14___aenter__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__15___aexit__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__16_close(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__17___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__18_event(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__19_id(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__1___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__20_retry(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__21_data(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__22_json(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__23___repr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__24___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__25_iter_bytes(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__26__iter_chunks(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__27_aiter_bytes(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__28__aiter_chunks(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__29_decode(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__2___next__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__30_iter_bytes(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__31_aiter_bytes(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__32_is_stream_class_type(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__33_extract_stream_chunk_type(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__3___iter__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__4__iter_events(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__5___stream__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__6___enter__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__7___exit__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__8_close(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__9___init__(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_openai$_streaming$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_cast_to = python_pars[1];
PyObject *par_response = python_pars[2];
PyObject *par_client = python_pars[3];
struct Nuitka_FrameObject *frame_frame_openai$_streaming$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_streaming$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_streaming$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_openai$_streaming$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_streaming$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_streaming$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_efd262d4dda4715a348f4f8e94d9b7fd, module_openai$_streaming, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_streaming$$$function__1___init__->m_type_description == NULL);
frame_frame_openai$_streaming$$$function__1___init__ = cache_frame_frame_openai$_streaming$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_streaming$$$function__1___init__);
assert(Py_REFCNT(frame_frame_openai$_streaming$$$function__1___init__) == 2);

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


exception_lineno = 36;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_cast_to);
tmp_assattr_value_2 = par_cast_to;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__cast_to, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_client);
tmp_assattr_value_3 = par_client;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__client, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_called_instance_1;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_client);
tmp_called_instance_1 = par_client;
frame_frame_openai$_streaming$$$function__1___init__->m_frame.f_lineno = 39;
tmp_assattr_value_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__make_sse_decoder);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__decoder, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_called_instance_2;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_openai$_streaming$$$function__1___init__->m_frame.f_lineno = 40;
tmp_assattr_value_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain___stream__);
if (tmp_assattr_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain__iterator, tmp_assattr_value_5);
CHECK_OBJECT(tmp_assattr_value_5);
Py_DECREF(tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_streaming$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_streaming$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_streaming$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_streaming$$$function__1___init__,
    type_description_1,
    par_self,
    par_cast_to,
    par_response,
    par_client
);


// Release cached frame if used for exception.
if (frame_frame_openai$_streaming$$$function__1___init__ == cache_frame_frame_openai$_streaming$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_streaming$$$function__1___init__);
    cache_frame_frame_openai$_streaming$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_openai$_streaming$$$function__1___init__);

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
CHECK_OBJECT(par_cast_to);
Py_DECREF(par_cast_to);
CHECK_OBJECT(par_response);
Py_DECREF(par_response);
CHECK_OBJECT(par_client);
Py_DECREF(par_client);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_cast_to);
Py_DECREF(par_cast_to);
CHECK_OBJECT(par_response);
Py_DECREF(par_response);
CHECK_OBJECT(par_client);
Py_DECREF(par_client);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$_streaming$$$function__2___next__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$_streaming$$$function__2___next__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_streaming$$$function__2___next__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_streaming$$$function__2___next__)) {
    Py_XDECREF(cache_frame_frame_openai$_streaming$$$function__2___next__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_streaming$$$function__2___next__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_streaming$$$function__2___next__ = MAKE_FUNCTION_FRAME(tstate, code_objects_2bd5d8ac0c76cebb34cbb0e1f9d2fa58, module_openai$_streaming, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_streaming$$$function__2___next__->m_type_description == NULL);
frame_frame_openai$_streaming$$$function__2___next__ = cache_frame_frame_openai$_streaming$$$function__2___next__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_streaming$$$function__2___next__);
assert(Py_REFCNT(frame_frame_openai$_streaming$$$function__2___next__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__iterator);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_openai$_streaming$$$function__2___next__->m_frame.f_lineno = 43;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain___next__);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_streaming$$$function__2___next__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_streaming$$$function__2___next__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_streaming$$$function__2___next__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_streaming$$$function__2___next__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$_streaming$$$function__2___next__ == cache_frame_frame_openai$_streaming$$$function__2___next__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_streaming$$$function__2___next__);
    cache_frame_frame_openai$_streaming$$$function__2___next__ = NULL;
}

assertFrameObject(frame_frame_openai$_streaming$$$function__2___next__);

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


static PyObject *impl_openai$_streaming$$$function__3___iter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_GENERATOR_openai$_streaming$$$function__3___iter__$$$genobj__1___iter__(tstate, tmp_closure_1);

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
struct openai$_streaming$$$function__3___iter__$$$genobj__1___iter___locals {
PyObject *var_item;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
};
#endif

static PyObject *openai$_streaming$$$function__3___iter__$$$genobj__1___iter___context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$_streaming$$$function__3___iter__$$$genobj__1___iter___locals *generator_heap = (struct openai$_streaming$$$function__3___iter__$$$genobj__1___iter___locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_item = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_f297b05458a7f7f19fcfb661d275c272, module_openai$_streaming, sizeof(void *)+sizeof(void *));
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
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 46;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__iterator);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 46;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 46;
generator_heap->type_description_1 = "co";
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
generator_heap->type_description_1 = "co";
generator_heap->exception_lineno = 46;
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
    PyObject *old = generator_heap->var_item;
    generator_heap->var_item = tmp_assign_source_3;
    Py_INCREF(generator_heap->var_item);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_item);
tmp_expression_value_2 = generator_heap->var_item;
Py_INCREF(tmp_expression_value_2);
generator->m_yield_return_index = 1;
return tmp_expression_value_2;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 47;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 46;
generator_heap->type_description_1 = "co";
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
    generator_heap->var_item
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

Py_XDECREF(generator_heap->var_item);
generator_heap->var_item = NULL;
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
Py_XDECREF(generator_heap->var_item);
generator_heap->var_item = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_openai$_streaming$$$function__3___iter__$$$genobj__1___iter__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        openai$_streaming$$$function__3___iter__$$$genobj__1___iter___context,
        module_openai$_streaming,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_c93bf231c9b3e62f74e33da59f7bb4a4,
#endif
        code_objects_f297b05458a7f7f19fcfb661d275c272,
        closure,
        1,
#if 1
        sizeof(struct openai$_streaming$$$function__3___iter__$$$genobj__1___iter___locals)
#else
        0
#endif
    );
}


static PyObject *impl_openai$_streaming$$$function__4__iter_events(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_GENERATOR_openai$_streaming$$$function__4__iter_events$$$genobj__1__iter_events(tstate, tmp_closure_1);

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
struct openai$_streaming$$$function__4__iter_events$$$genobj__1__iter_events_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
};
#endif

static PyObject *openai$_streaming$$$function__4__iter_events$$$genobj__1__iter_events_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$_streaming$$$function__4__iter_events$$$genobj__1__iter_events_locals *generator_heap = (struct openai$_streaming$$$function__4__iter_events$$$genobj__1__iter_events_locals *)generator->m_heap_storage;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_8640d8e9a96ba38658031dfbd5f599d1, module_openai$_streaming, sizeof(void *));
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_yieldfrom_result_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 50;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__decoder);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 50;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_iter_bytes);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 50;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 50;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_response);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_1);

generator_heap->exception_lineno = 50;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 50;
tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_iter_bytes);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_1);

generator_heap->exception_lineno = 50;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 50;
tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 50;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
generator->m_yield_from = tmp_expression_value_1;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 50;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_yieldfrom_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yieldfrom_result_1);
Py_DECREF(tmp_yieldfrom_result_1);
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

static PyObject *MAKE_GENERATOR_openai$_streaming$$$function__4__iter_events$$$genobj__1__iter_events(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        openai$_streaming$$$function__4__iter_events$$$genobj__1__iter_events_context,
        module_openai$_streaming,
        mod_consts.const_str_plain__iter_events,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_a9ceb48bbba786c5160f98f555fb7ab0,
#endif
        code_objects_8640d8e9a96ba38658031dfbd5f599d1,
        closure,
        1,
#if 1
        sizeof(struct openai$_streaming$$$function__4__iter_events$$$genobj__1__iter_events_locals)
#else
        0
#endif
    );
}


static PyObject *impl_openai$_streaming$$$function__5___stream__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_GENERATOR_openai$_streaming$$$function__5___stream__$$$genobj__1___stream__(tstate, tmp_closure_1);

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
struct openai$_streaming$$$function__5___stream__$$$genobj__1___stream___locals {
PyObject *var_cast_to;
PyObject *var_response;
PyObject *var_process_data;
PyObject *var_iterator;
PyObject *var_sse;
PyObject *var_data;
PyObject *var_message;
PyObject *var_error;
PyObject *var__sse;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
PyObject *tmp_for_loop_2__for_iterator;
PyObject *tmp_for_loop_2__iter_value;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
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

static PyObject *openai$_streaming$$$function__5___stream__$$$genobj__1___stream___context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$_streaming$$$function__5___stream__$$$genobj__1___stream___locals *generator_heap = (struct openai$_streaming$$$function__5___stream__$$$genobj__1___stream___locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_cast_to = NULL;
generator_heap->var_response = NULL;
generator_heap->var_process_data = NULL;
generator_heap->var_iterator = NULL;
generator_heap->var_sse = NULL;
generator_heap->var_data = NULL;
generator_heap->var_message = NULL;
generator_heap->var_error = NULL;
generator_heap->var__sse = NULL;
generator_heap->tmp_for_loop_1__for_iterator = NULL;
generator_heap->tmp_for_loop_1__iter_value = NULL;
generator_heap->tmp_for_loop_2__for_iterator = NULL;
generator_heap->tmp_for_loop_2__iter_value = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_08f1424e9c8d48917370e98610dc1331, module_openai$_streaming, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_openai$_streaming$cast(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 53;
generator_heap->type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_openai$_streaming$Any(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 53;
generator_heap->type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 53;
generator_heap->type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__cast_to);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 53;
generator_heap->type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 53;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 53;
generator_heap->type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_cast_to == NULL);
generator_heap->var_cast_to = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 54;
generator_heap->type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_response);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 54;
generator_heap->type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_response == NULL);
generator_heap->var_response = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 55;
generator_heap->type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__client);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 55;
generator_heap->type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__process_response_data);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 55;
generator_heap->type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_process_data == NULL);
generator_heap->var_process_data = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 56;
generator_heap->type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_1 = Nuitka_Cell_GET(generator->m_closure[0]);
generator->m_frame->m_frame.f_lineno = 56;
tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__iter_events);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 56;
generator_heap->type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_iterator == NULL);
generator_heap->var_iterator = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(generator_heap->var_iterator);
tmp_iter_arg_1 = generator_heap->var_iterator;
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 58;
generator_heap->type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_5;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_6;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_6 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "cooooooooo";
generator_heap->exception_lineno = 58;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
    generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
tmp_assign_source_7 = generator_heap->tmp_for_loop_1__iter_value;
{
    PyObject *old = generator_heap->var_sse;
    generator_heap->var_sse = tmp_assign_source_7;
    Py_INCREF(generator_heap->var_sse);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(generator_heap->var_sse);
tmp_expression_value_6 = generator_heap->var_sse;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_data);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 59;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_startswith);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 59;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 59;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_2a7265ac0ae741cbd84807714ce996e0_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 59;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_call_result_1);

generator_heap->exception_lineno = 59;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
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
goto loop_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_call_result_2;
int tmp_truth_name_3;
CHECK_OBJECT(generator_heap->var_sse);
tmp_expression_value_7 = generator_heap->var_sse;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_event);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 63;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_attribute_value_1);

generator_heap->exception_lineno = 63;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_and_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 63;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(generator_heap->var_sse);
tmp_expression_value_9 = generator_heap->var_sse;
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_event);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 63;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_startswith);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 63;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 63;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_digest_0fb2bb2e7aeec53e4f924a63ffb9aaf1_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 63;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_call_result_2);

generator_heap->exception_lineno = 63;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_and_right_value_1 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
tmp_condition_result_2 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_2 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(generator_heap->var_sse);
tmp_called_instance_2 = generator_heap->var_sse;
generator->m_frame->m_frame.f_lineno = 64;
tmp_assign_source_8 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_json);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 64;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = generator_heap->var_data;
    generator_heap->var_data = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_3;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_10;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_3;
int tmp_truth_name_4;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_11;
PyObject *tmp_call_result_4;
int tmp_truth_name_5;
CHECK_OBJECT(generator_heap->var_sse);
tmp_expression_value_10 = generator_heap->var_sse;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_event);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 66;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_error;
tmp_and_left_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 66;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 66;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
tmp_called_value_4 = module_var_accessor_openai$_streaming$is_mapping(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_is_mapping);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 66;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(generator_heap->var_data);
tmp_args_element_value_3 = generator_heap->var_data;
generator->m_frame->m_frame.f_lineno = 66;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 66;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_3);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_call_result_3);

generator_heap->exception_lineno = 66;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_and_left_value_3 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 66;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(generator_heap->var_data);
tmp_expression_value_11 = generator_heap->var_data;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, const_str_plain_get);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 66;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 66;
tmp_call_result_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_plain_error_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 66;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_call_result_4);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_call_result_4);

generator_heap->exception_lineno = 66;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_and_right_value_3 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
tmp_and_right_value_2 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_and_right_value_2 = tmp_and_left_value_3;
and_end_3:;
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
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = Py_None;
assert(generator_heap->var_message == NULL);
Py_INCREF(tmp_assign_source_9);
generator_heap->var_message = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(generator_heap->var_data);
tmp_expression_value_12 = generator_heap->var_data;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain_get);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 68;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 68;
tmp_assign_source_10 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts.const_tuple_str_plain_error_tuple);

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 68;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
assert(generator_heap->var_error == NULL);
generator_heap->var_error = tmp_assign_source_10;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_called_value_7;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_4;
int tmp_truth_name_6;
tmp_called_value_7 = module_var_accessor_openai$_streaming$is_mapping(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_is_mapping);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 69;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(generator_heap->var_error);
tmp_args_element_value_4 = generator_heap->var_error;
generator->m_frame->m_frame.f_lineno = 69;
tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_4);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 69;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_call_result_5);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_call_result_5);

generator_heap->exception_lineno = 69;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_4 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(generator_heap->var_error);
tmp_expression_value_13 = generator_heap->var_error;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain_get);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 70;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 70;
tmp_assign_source_11 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_8, mod_consts.const_tuple_str_plain_message_tuple);

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 70;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = generator_heap->var_message;
    assert(old != NULL);
    generator_heap->var_message = tmp_assign_source_11;
    Py_DECREF(old);
}

}
branch_no_4:;
{
bool tmp_condition_result_5;
int tmp_or_left_truth_1;
bool tmp_or_left_value_1;
bool tmp_or_right_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(generator_heap->var_message);
tmp_operand_value_1 = generator_heap->var_message;
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 71;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_or_left_value_1 = (generator_heap->tmp_res == 0) ? true : false;
tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(generator_heap->var_message);
tmp_isinstance_inst_1 = generator_heap->var_message;
tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
generator_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 71;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_operand_value_2 = (generator_heap->tmp_res != 0) ? Py_True : Py_False;
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 71;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_or_right_value_1 = (generator_heap->tmp_res == 0) ? true : false;
tmp_condition_result_5 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_5 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = mod_consts.const_str_digest_76093b718740cc2a7ad4bb21bfd52bf3;
{
    PyObject *old = generator_heap->var_message;
    assert(old != NULL);
    generator_heap->var_message = tmp_assign_source_12;
    Py_INCREF(generator_heap->var_message);
    Py_DECREF(old);
}

}
branch_no_5:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_9;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_1;
tmp_called_value_9 = module_var_accessor_openai$_streaming$APIError(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_APIError);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 74;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(generator_heap->var_message);
tmp_kw_call_value_0_1 = generator_heap->var_message;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 76;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_15 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_response);
if (tmp_expression_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 76;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_request);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 76;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(generator_heap->var_data);
tmp_expression_value_16 = generator_heap->var_data;
tmp_subscript_value_1 = mod_consts.const_str_plain_error;
tmp_kw_call_value_2_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_1);
if (tmp_kw_call_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_kw_call_value_1_1);

generator_heap->exception_lineno = 77;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 74;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

    tmp_raise_type_input_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_9, kw_values, mod_consts.const_tuple_str_plain_message_str_plain_request_str_plain_body_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
CHECK_OBJECT(tmp_kw_call_value_2_1);
Py_DECREF(tmp_kw_call_value_2_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 74;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 74;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
generator_heap->exception_state.exception_value = tmp_raise_type_1;
generator_heap->exception_lineno = 74;
RAISE_EXCEPTION_WITH_VALUE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "cooooooooo";
goto try_except_handler_2;
}
branch_no_3:;
{
PyObject *tmp_expression_value_17;
PyObject *tmp_called_value_10;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_kw_call_value_2_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
if (generator_heap->var_process_data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_process_data);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 80;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}

tmp_called_value_10 = generator_heap->var_process_data;
tmp_dict_key_1 = mod_consts.const_str_plain_data;
CHECK_OBJECT(generator_heap->var_data);
tmp_dict_value_1 = generator_heap->var_data;
tmp_kw_call_value_0_2 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_18;
generator_heap->tmp_res = PyDict_SetItem(tmp_kw_call_value_0_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(generator_heap->tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_event;
CHECK_OBJECT(generator_heap->var_sse);
tmp_expression_value_18 = generator_heap->var_sse;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_event);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 80;
generator_heap->type_description_1 = "cooooooooo";
    goto dict_build_exception_1;
}
generator_heap->tmp_res = PyDict_SetItem(tmp_kw_call_value_0_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(generator_heap->tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_kw_call_value_0_2);
goto try_except_handler_2;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
if (generator_heap->var_cast_to == NULL) {
Py_DECREF(tmp_kw_call_value_0_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_cast_to);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 80;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}

tmp_kw_call_value_1_2 = generator_heap->var_cast_to;
if (generator_heap->var_response == NULL) {
Py_DECREF(tmp_kw_call_value_0_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_response);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 80;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}

tmp_kw_call_value_2_2 = generator_heap->var_response;
generator->m_frame->m_frame.f_lineno = 80;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2};

    tmp_expression_value_17 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_10, kw_values, mod_consts.const_tuple_str_plain_data_str_plain_cast_to_str_plain_response_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_0_2);
if (tmp_expression_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 80;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_10, sizeof(PyObject *), &tmp_kw_call_value_0_2, sizeof(PyObject *), &tmp_dict_key_1, sizeof(PyObject *), &tmp_dict_value_1, sizeof(PyObject *), &tmp_kw_call_value_1_2, sizeof(PyObject *), &tmp_kw_call_value_2_2, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_17;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_10, sizeof(PyObject *), &tmp_kw_call_value_0_2, sizeof(PyObject *), &tmp_dict_key_1, sizeof(PyObject *), &tmp_dict_value_1, sizeof(PyObject *), &tmp_kw_call_value_1_2, sizeof(PyObject *), &tmp_kw_call_value_2_2, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 80;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_instance_3;
CHECK_OBJECT(generator_heap->var_sse);
tmp_called_instance_3 = generator_heap->var_sse;
generator->m_frame->m_frame.f_lineno = 82;
tmp_assign_source_13 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_json);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 82;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = generator_heap->var_data;
    generator_heap->var_data = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_6;
int tmp_and_left_truth_4;
nuitka_bool tmp_and_left_value_4;
nuitka_bool tmp_and_right_value_4;
PyObject *tmp_called_value_11;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_5;
int tmp_truth_name_7;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_19;
PyObject *tmp_call_result_7;
int tmp_truth_name_8;
tmp_called_value_11 = module_var_accessor_openai$_streaming$is_mapping(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_is_mapping);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 83;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(generator_heap->var_data);
tmp_args_element_value_5 = generator_heap->var_data;
generator->m_frame->m_frame.f_lineno = 83;
tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_5);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 83;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_truth_name_7 = CHECK_IF_TRUE(tmp_call_result_6);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_call_result_6);

generator_heap->exception_lineno = 83;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_and_left_value_4 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 83;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
if (tmp_and_left_truth_4 == 1) {
    goto and_right_4;
} else {
    goto and_left_4;
}
and_right_4:;
CHECK_OBJECT(generator_heap->var_data);
tmp_expression_value_19 = generator_heap->var_data;
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, const_str_plain_get);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 83;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 83;
tmp_call_result_7 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_12, mod_consts.const_tuple_str_plain_error_tuple);

CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 83;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_truth_name_8 = CHECK_IF_TRUE(tmp_call_result_7);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_call_result_7);

generator_heap->exception_lineno = 83;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_and_right_value_4 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
tmp_condition_result_6 = tmp_and_right_value_4;
goto and_end_4;
and_left_4:;
tmp_condition_result_6 = tmp_and_left_value_4;
and_end_4:;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = Py_None;
assert(generator_heap->var_message == NULL);
Py_INCREF(tmp_assign_source_14);
generator_heap->var_message = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_20;
CHECK_OBJECT(generator_heap->var_data);
tmp_expression_value_20 = generator_heap->var_data;
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, const_str_plain_get);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 85;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 85;
tmp_assign_source_15 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_13, mod_consts.const_tuple_str_plain_error_tuple);

CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 85;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
assert(generator_heap->var_error == NULL);
generator_heap->var_error = tmp_assign_source_15;
}
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_called_value_14;
PyObject *tmp_call_result_8;
PyObject *tmp_args_element_value_6;
int tmp_truth_name_9;
tmp_called_value_14 = module_var_accessor_openai$_streaming$is_mapping(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_is_mapping);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 86;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(generator_heap->var_error);
tmp_args_element_value_6 = generator_heap->var_error;
generator->m_frame->m_frame.f_lineno = 86;
tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_6);
if (tmp_call_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 86;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_truth_name_9 = CHECK_IF_TRUE(tmp_call_result_8);
if (tmp_truth_name_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_call_result_8);

generator_heap->exception_lineno = 86;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_7 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_8);
Py_DECREF(tmp_call_result_8);
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_21;
CHECK_OBJECT(generator_heap->var_error);
tmp_expression_value_21 = generator_heap->var_error;
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, const_str_plain_get);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 87;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 87;
tmp_assign_source_16 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_15, mod_consts.const_tuple_str_plain_message_tuple);

CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 87;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = generator_heap->var_message;
    assert(old != NULL);
    generator_heap->var_message = tmp_assign_source_16;
    Py_DECREF(old);
}

}
branch_no_7:;
{
bool tmp_condition_result_8;
int tmp_or_left_truth_2;
bool tmp_or_left_value_2;
bool tmp_or_right_value_2;
PyObject *tmp_operand_value_3;
PyObject *tmp_operand_value_4;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
CHECK_OBJECT(generator_heap->var_message);
tmp_operand_value_3 = generator_heap->var_message;
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 88;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_or_left_value_2 = (generator_heap->tmp_res == 0) ? true : false;
tmp_or_left_truth_2 = tmp_or_left_value_2 != false ? 1 : 0;
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(generator_heap->var_message);
tmp_isinstance_inst_2 = generator_heap->var_message;
tmp_isinstance_cls_2 = (PyObject *)&PyUnicode_Type;
generator_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 88;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_operand_value_4 = (generator_heap->tmp_res != 0) ? Py_True : Py_False;
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 88;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_or_right_value_2 = (generator_heap->tmp_res == 0) ? true : false;
tmp_condition_result_8 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_condition_result_8 = tmp_or_left_value_2;
or_end_2:;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = mod_consts.const_str_digest_76093b718740cc2a7ad4bb21bfd52bf3;
{
    PyObject *old = generator_heap->var_message;
    assert(old != NULL);
    generator_heap->var_message = tmp_assign_source_17;
    Py_INCREF(generator_heap->var_message);
    Py_DECREF(old);
}

}
branch_no_8:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_16;
PyObject *tmp_kw_call_value_0_3;
PyObject *tmp_kw_call_value_1_3;
PyObject *tmp_expression_value_22;
PyObject *tmp_expression_value_23;
PyObject *tmp_kw_call_value_2_3;
PyObject *tmp_expression_value_24;
PyObject *tmp_subscript_value_2;
tmp_called_value_16 = module_var_accessor_openai$_streaming$APIError(tstate);
if (unlikely(tmp_called_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_APIError);
}

if (tmp_called_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 91;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(generator_heap->var_message);
tmp_kw_call_value_0_3 = generator_heap->var_message;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 93;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_23 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_response);
if (tmp_expression_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 93;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_kw_call_value_1_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_request);
CHECK_OBJECT(tmp_expression_value_22);
Py_DECREF(tmp_expression_value_22);
if (tmp_kw_call_value_1_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 93;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(generator_heap->var_data);
tmp_expression_value_24 = generator_heap->var_data;
tmp_subscript_value_2 = mod_consts.const_str_plain_error;
tmp_kw_call_value_2_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_24, tmp_subscript_value_2);
if (tmp_kw_call_value_2_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_kw_call_value_1_3);

generator_heap->exception_lineno = 94;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 91;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3, tmp_kw_call_value_2_3};

    tmp_raise_type_input_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_16, kw_values, mod_consts.const_tuple_str_plain_message_str_plain_request_str_plain_body_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_1_3);
Py_DECREF(tmp_kw_call_value_1_3);
CHECK_OBJECT(tmp_kw_call_value_2_3);
Py_DECREF(tmp_kw_call_value_2_3);
if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 91;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 91;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
generator_heap->exception_state.exception_value = tmp_raise_type_2;
generator_heap->exception_lineno = 91;
RAISE_EXCEPTION_WITH_VALUE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "cooooooooo";
goto try_except_handler_2;
}
branch_no_6:;
{
PyObject *tmp_expression_value_25;
PyObject *tmp_called_value_17;
PyObject *tmp_kw_call_value_0_4;
PyObject *tmp_kw_call_value_1_4;
PyObject *tmp_kw_call_value_2_4;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
if (generator_heap->var_process_data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_process_data);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 97;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}

tmp_called_value_17 = generator_heap->var_process_data;
CHECK_OBJECT(generator_heap->var_data);
tmp_kw_call_value_0_4 = generator_heap->var_data;
if (generator_heap->var_cast_to == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_cast_to);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 97;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}

tmp_kw_call_value_1_4 = generator_heap->var_cast_to;
if (generator_heap->var_response == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_response);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 97;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}

tmp_kw_call_value_2_4 = generator_heap->var_response;
generator->m_frame->m_frame.f_lineno = 97;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_4, tmp_kw_call_value_2_4};

    tmp_expression_value_25 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_17, kw_values, mod_consts.const_tuple_str_plain_data_str_plain_cast_to_str_plain_response_tuple);
}

if (tmp_expression_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 97;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_17, sizeof(PyObject *), &tmp_kw_call_value_0_4, sizeof(PyObject *), &tmp_kw_call_value_1_4, sizeof(PyObject *), &tmp_kw_call_value_2_4, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 2;
return tmp_expression_value_25;
yield_return_2:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_17, sizeof(PyObject *), &tmp_kw_call_value_0_4, sizeof(PyObject *), &tmp_kw_call_value_1_4, sizeof(PyObject *), &tmp_kw_call_value_2_4, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 97;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_yield_result_2 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_2);
Py_DECREF(tmp_yield_result_2);
}
branch_end_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 58;
generator_heap->type_description_1 = "cooooooooo";
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
PyObject *tmp_assign_source_18;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(generator_heap->var_iterator);
tmp_iter_arg_2 = generator_heap->var_iterator;
tmp_assign_source_18 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 100;
generator_heap->type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->tmp_for_loop_2__for_iterator == NULL);
generator_heap->tmp_for_loop_2__for_iterator = tmp_assign_source_18;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_19;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
tmp_next_source_2 = generator_heap->tmp_for_loop_2__for_iterator;
tmp_assign_source_19 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_19 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "cooooooooo";
generator_heap->exception_lineno = 100;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_2__iter_value;
    generator_heap->tmp_for_loop_2__iter_value = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_20;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__iter_value);
tmp_assign_source_20 = generator_heap->tmp_for_loop_2__iter_value;
{
    PyObject *old = generator_heap->var__sse;
    generator_heap->var__sse = tmp_assign_source_20;
    Py_INCREF(generator_heap->var__sse);
    Py_XDECREF(old);
}

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 100;
generator_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_3;
}
goto loop_start_2;
loop_end_2:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
generator_heap->tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
generator_heap->tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;

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
    generator_heap->var_cast_to,
    generator_heap->var_response,
    generator_heap->var_process_data,
    generator_heap->var_iterator,
    generator_heap->var_sse,
    generator_heap->var_data,
    generator_heap->var_message,
    generator_heap->var_error,
    generator_heap->var__sse
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
goto try_end_3;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_cast_to);
generator_heap->var_cast_to = NULL;
Py_XDECREF(generator_heap->var_response);
generator_heap->var_response = NULL;
Py_XDECREF(generator_heap->var_process_data);
generator_heap->var_process_data = NULL;
Py_XDECREF(generator_heap->var_iterator);
generator_heap->var_iterator = NULL;
Py_XDECREF(generator_heap->var_sse);
generator_heap->var_sse = NULL;
Py_XDECREF(generator_heap->var_data);
generator_heap->var_data = NULL;
Py_XDECREF(generator_heap->var_message);
generator_heap->var_message = NULL;
Py_XDECREF(generator_heap->var_error);
generator_heap->var_error = NULL;
Py_XDECREF(generator_heap->var__sse);
generator_heap->var__sse = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:
try_end_3:;
Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
generator_heap->tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
generator_heap->tmp_for_loop_2__for_iterator = NULL;
Py_XDECREF(generator_heap->var_cast_to);
generator_heap->var_cast_to = NULL;
Py_XDECREF(generator_heap->var_response);
generator_heap->var_response = NULL;
Py_XDECREF(generator_heap->var_process_data);
generator_heap->var_process_data = NULL;
CHECK_OBJECT(generator_heap->var_iterator);
CHECK_OBJECT(generator_heap->var_iterator);
Py_DECREF(generator_heap->var_iterator);
generator_heap->var_iterator = NULL;
Py_XDECREF(generator_heap->var_sse);
generator_heap->var_sse = NULL;
Py_XDECREF(generator_heap->var_data);
generator_heap->var_data = NULL;
Py_XDECREF(generator_heap->var__sse);
generator_heap->var__sse = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_openai$_streaming$$$function__5___stream__$$$genobj__1___stream__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        openai$_streaming$$$function__5___stream__$$$genobj__1___stream___context,
        module_openai$_streaming,
        mod_consts.const_str_plain___stream__,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_afd28cae087442373bfa906d4b39d608,
#endif
        code_objects_08f1424e9c8d48917370e98610dc1331,
        closure,
        1,
#if 1
        sizeof(struct openai$_streaming$$$function__5___stream__$$$genobj__1___stream___locals)
#else
        0
#endif
    );
}


static PyObject *impl_openai$_streaming$$$function__6___enter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *tmp_return_value = NULL;

    // Actual function body.
CHECK_OBJECT(par_self);
tmp_return_value = par_self;
Py_INCREF(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
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


static PyObject *impl_openai$_streaming$$$function__7___exit__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_exc_type = python_pars[1];
PyObject *par_exc = python_pars[2];
PyObject *par_exc_tb = python_pars[3];
struct Nuitka_FrameObject *frame_frame_openai$_streaming$$$function__7___exit__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_streaming$$$function__7___exit__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_streaming$$$function__7___exit__)) {
    Py_XDECREF(cache_frame_frame_openai$_streaming$$$function__7___exit__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_streaming$$$function__7___exit__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_streaming$$$function__7___exit__ = MAKE_FUNCTION_FRAME(tstate, code_objects_d3daf81a9f450fdf48e09f1341330f5d, module_openai$_streaming, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_streaming$$$function__7___exit__->m_type_description == NULL);
frame_frame_openai$_streaming$$$function__7___exit__ = cache_frame_frame_openai$_streaming$$$function__7___exit__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_streaming$$$function__7___exit__);
assert(Py_REFCNT(frame_frame_openai$_streaming$$$function__7___exit__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_openai$_streaming$$$function__7___exit__->m_frame.f_lineno = 112;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_close);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_streaming$$$function__7___exit__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_streaming$$$function__7___exit__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_streaming$$$function__7___exit__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_streaming$$$function__7___exit__,
    type_description_1,
    par_self,
    par_exc_type,
    par_exc,
    par_exc_tb
);


// Release cached frame if used for exception.
if (frame_frame_openai$_streaming$$$function__7___exit__ == cache_frame_frame_openai$_streaming$$$function__7___exit__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_streaming$$$function__7___exit__);
    cache_frame_frame_openai$_streaming$$$function__7___exit__ = NULL;
}

assertFrameObject(frame_frame_openai$_streaming$$$function__7___exit__);

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
CHECK_OBJECT(par_exc_type);
Py_DECREF(par_exc_type);
CHECK_OBJECT(par_exc);
Py_DECREF(par_exc);
CHECK_OBJECT(par_exc_tb);
Py_DECREF(par_exc_tb);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_exc_type);
Py_DECREF(par_exc_type);
CHECK_OBJECT(par_exc);
Py_DECREF(par_exc);
CHECK_OBJECT(par_exc_tb);
Py_DECREF(par_exc_tb);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$_streaming$$$function__8_close(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$_streaming$$$function__8_close;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_streaming$$$function__8_close = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_streaming$$$function__8_close)) {
    Py_XDECREF(cache_frame_frame_openai$_streaming$$$function__8_close);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_streaming$$$function__8_close == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_streaming$$$function__8_close = MAKE_FUNCTION_FRAME(tstate, code_objects_6e38baee693a818909518e0350cb0a99, module_openai$_streaming, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_streaming$$$function__8_close->m_type_description == NULL);
frame_frame_openai$_streaming$$$function__8_close = cache_frame_frame_openai$_streaming$$$function__8_close;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_streaming$$$function__8_close);
assert(Py_REFCNT(frame_frame_openai$_streaming$$$function__8_close) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_response);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_openai$_streaming$$$function__8_close->m_frame.f_lineno = 120;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_close);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_streaming$$$function__8_close, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_streaming$$$function__8_close->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_streaming$$$function__8_close, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_streaming$$$function__8_close,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$_streaming$$$function__8_close == cache_frame_frame_openai$_streaming$$$function__8_close) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_streaming$$$function__8_close);
    cache_frame_frame_openai$_streaming$$$function__8_close = NULL;
}

assertFrameObject(frame_frame_openai$_streaming$$$function__8_close);

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


static PyObject *impl_openai$_streaming$$$function__9___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_cast_to = python_pars[1];
PyObject *par_response = python_pars[2];
PyObject *par_client = python_pars[3];
struct Nuitka_FrameObject *frame_frame_openai$_streaming$$$function__9___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_streaming$$$function__9___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_streaming$$$function__9___init__)) {
    Py_XDECREF(cache_frame_frame_openai$_streaming$$$function__9___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_streaming$$$function__9___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_streaming$$$function__9___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_58d3043a9a3db6107450d63b56779629, module_openai$_streaming, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_streaming$$$function__9___init__->m_type_description == NULL);
frame_frame_openai$_streaming$$$function__9___init__ = cache_frame_frame_openai$_streaming$$$function__9___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_streaming$$$function__9___init__);
assert(Py_REFCNT(frame_frame_openai$_streaming$$$function__9___init__) == 2);

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


exception_lineno = 137;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_cast_to);
tmp_assattr_value_2 = par_cast_to;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__cast_to, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_client);
tmp_assattr_value_3 = par_client;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__client, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_called_instance_1;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_client);
tmp_called_instance_1 = par_client;
frame_frame_openai$_streaming$$$function__9___init__->m_frame.f_lineno = 140;
tmp_assattr_value_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__make_sse_decoder);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__decoder, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_called_instance_2;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_openai$_streaming$$$function__9___init__->m_frame.f_lineno = 141;
tmp_assattr_value_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain___stream__);
if (tmp_assattr_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain__iterator, tmp_assattr_value_5);
CHECK_OBJECT(tmp_assattr_value_5);
Py_DECREF(tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_streaming$$$function__9___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_streaming$$$function__9___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_streaming$$$function__9___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_streaming$$$function__9___init__,
    type_description_1,
    par_self,
    par_cast_to,
    par_response,
    par_client
);


// Release cached frame if used for exception.
if (frame_frame_openai$_streaming$$$function__9___init__ == cache_frame_frame_openai$_streaming$$$function__9___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_streaming$$$function__9___init__);
    cache_frame_frame_openai$_streaming$$$function__9___init__ = NULL;
}

assertFrameObject(frame_frame_openai$_streaming$$$function__9___init__);

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
CHECK_OBJECT(par_cast_to);
Py_DECREF(par_cast_to);
CHECK_OBJECT(par_response);
Py_DECREF(par_response);
CHECK_OBJECT(par_client);
Py_DECREF(par_client);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_cast_to);
Py_DECREF(par_cast_to);
CHECK_OBJECT(par_response);
Py_DECREF(par_response);
CHECK_OBJECT(par_client);
Py_DECREF(par_client);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$_streaming$$$function__10___anext__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_openai$_streaming$$$function__10___anext__$$$coroutine__1___anext__(tstate, tmp_closure_1);

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
struct openai$_streaming$$$function__10___anext__$$$coroutine__1___anext___locals {
char const *type_description_1;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
};
#endif

static PyObject *openai$_streaming$$$function__10___anext__$$$coroutine__1___anext___context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$_streaming$$$function__10___anext__$$$coroutine__1___anext___locals *coroutine_heap = (struct openai$_streaming$$$function__10___anext__$$$coroutine__1___anext___locals *)coroutine->m_heap_storage;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_37e134ec192848f422715e3e22f89c1a, module_openai$_streaming, sizeof(void *));
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
coroutine->m_frame->m_frame.f_lineno = 144;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 144;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__iterator);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 144;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 144;
tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain___anext__);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 144;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 144;
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


coroutine_heap->exception_lineno = 144;
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

static PyObject *MAKE_COROUTINE_openai$_streaming$$$function__10___anext__$$$coroutine__1___anext__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        openai$_streaming$$$function__10___anext__$$$coroutine__1___anext___context,
        module_openai$_streaming,
        mod_consts.const_str_plain___anext__,
        mod_consts.const_str_digest_dbb0eb8b269b4770229980b3b63cccb1,
        code_objects_37e134ec192848f422715e3e22f89c1a,
        closure,
        1,
#if 1
        sizeof(struct openai$_streaming$$$function__10___anext__$$$coroutine__1___anext___locals)
#else
        0
#endif
    );
}


static PyObject *impl_openai$_streaming$$$function__11___aiter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_ASYNCGEN_openai$_streaming$$$function__11___aiter__$$$asyncgen__1___aiter__(tstate, tmp_closure_1);

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
struct openai$_streaming$$$function__11___aiter__$$$asyncgen__1___aiter___locals {
PyObject *var_item;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
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
};
#endif

static PyObject *openai$_streaming$$$function__11___aiter__$$$asyncgen__1___aiter___context(PyThreadState *tstate, struct Nuitka_AsyncgenObject *asyncgen, PyObject *yield_return_value) {
    CHECK_OBJECT(asyncgen);
    assert(Nuitka_Asyncgen_Check((PyObject *)asyncgen));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$_streaming$$$function__11___aiter__$$$asyncgen__1___aiter___locals *asyncgen_heap = (struct openai$_streaming$$$function__11___aiter__$$$asyncgen__1___aiter___locals *)asyncgen->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(asyncgen->m_yield_return_index) {
case 3: goto yield_return_3;
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
asyncgen_heap->var_item = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_072710bb68cd6e92e1df3726e57d52dc, module_openai$_streaming, sizeof(void *)+sizeof(void *));
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
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_value_value_1;
PyObject *tmp_expression_value_2;
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 147;
asyncgen_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
tmp_value_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__iterator);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 147;
asyncgen_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_MAKE_ITERATOR(tstate, tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 147;
asyncgen_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_value_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 1;
asyncgen->m_yield_from = tmp_expression_value_1;
asyncgen->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_value_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 147;
asyncgen_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = yield_return_value;
assert(asyncgen_heap->tmp_for_loop_1__for_iterator == NULL);
asyncgen_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_1;
}
// Tried code:
loop_start_1:;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_value_value_2;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
tmp_value_value_2 = asyncgen_heap->tmp_for_loop_1__for_iterator;
tmp_expression_value_3 = ASYNC_ITERATOR_NEXT(tstate, tmp_value_value_2);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 147;
asyncgen_heap->type_description_1 = "co";
    goto try_except_handler_3;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_value_value_2, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 2;
asyncgen->m_yield_from = tmp_expression_value_3;
asyncgen->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_value_value_2, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 147;
asyncgen_heap->type_description_1 = "co";
    goto try_except_handler_3;
}
tmp_assign_source_2 = yield_return_value;
{
    PyObject *old = asyncgen_heap->tmp_for_loop_1__iter_value;
    asyncgen_heap->tmp_for_loop_1__iter_value = tmp_assign_source_2;
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
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = asyncgen_heap->exception_keeper_name_1.exception_value;
tmp_cmp_expr_right_1 = PyExc_StopAsyncIteration;
asyncgen_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(asyncgen_heap->tmp_res == -1));
tmp_condition_result_1 = (asyncgen_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
RELEASE_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_keeper_name_1);
goto loop_end_1;
goto branch_end_1;
branch_no_1:;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_1;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_1;

goto try_except_handler_2;
branch_end_1:;
// End of try:
try_end_1:;
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__iter_value);
tmp_assign_source_3 = asyncgen_heap->tmp_for_loop_1__iter_value;
{
    PyObject *old = asyncgen_heap->var_item;
    asyncgen_heap->var_item = tmp_assign_source_3;
    Py_INCREF(asyncgen_heap->var_item);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_4;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(asyncgen_heap->var_item);
tmp_expression_value_4 = asyncgen_heap->var_item;
Py_INCREF(tmp_expression_value_4);
asyncgen->m_yield_return_index = 3;
return tmp_expression_value_4;
yield_return_3:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 148;
asyncgen_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 147;
asyncgen_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
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
    asyncgen_heap->var_item
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
Py_XDECREF(asyncgen_heap->tmp_for_loop_1__iter_value);
asyncgen_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(asyncgen_heap->tmp_for_loop_1__for_iterator);
asyncgen_heap->tmp_for_loop_1__for_iterator = NULL;
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(asyncgen_heap->var_item);
asyncgen_heap->var_item = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
asyncgen_heap->exception_keeper_lineno_3 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_3 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

Py_XDECREF(asyncgen_heap->var_item);
asyncgen_heap->var_item = NULL;
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

static PyObject *MAKE_ASYNCGEN_openai$_streaming$$$function__11___aiter__$$$asyncgen__1___aiter__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Asyncgen_New(
        openai$_streaming$$$function__11___aiter__$$$asyncgen__1___aiter___context,
        module_openai$_streaming,
        mod_consts.const_str_plain___aiter__,
        mod_consts.const_str_digest_30a4c60226828ec83314dbfd9f41aa20,
        code_objects_072710bb68cd6e92e1df3726e57d52dc,
        closure,
        1,
#if 1
        sizeof(struct openai$_streaming$$$function__11___aiter__$$$asyncgen__1___aiter___locals)
#else
        0
#endif
    );
}


static PyObject *impl_openai$_streaming$$$function__12__iter_events(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_ASYNCGEN_openai$_streaming$$$function__12__iter_events$$$asyncgen__1__iter_events(tstate, tmp_closure_1);

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
struct openai$_streaming$$$function__12__iter_events$$$asyncgen__1__iter_events_locals {
PyObject *var_sse;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
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
};
#endif

static PyObject *openai$_streaming$$$function__12__iter_events$$$asyncgen__1__iter_events_context(PyThreadState *tstate, struct Nuitka_AsyncgenObject *asyncgen, PyObject *yield_return_value) {
    CHECK_OBJECT(asyncgen);
    assert(Nuitka_Asyncgen_Check((PyObject *)asyncgen));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$_streaming$$$function__12__iter_events$$$asyncgen__1__iter_events_locals *asyncgen_heap = (struct openai$_streaming$$$function__12__iter_events$$$asyncgen__1__iter_events_locals *)asyncgen->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(asyncgen->m_yield_return_index) {
case 3: goto yield_return_3;
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
asyncgen_heap->var_sse = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_9f351fd2b3e071bd8691db645ae8b5fe, module_openai$_streaming, sizeof(void *)+sizeof(void *));
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
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_value_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_4;
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 151;
asyncgen_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__decoder);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 151;
asyncgen_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_aiter_bytes);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 151;
asyncgen_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 151;
asyncgen_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_response);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_called_value_1);

asyncgen_heap->exception_lineno = 151;
asyncgen_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
asyncgen->m_frame->m_frame.f_lineno = 151;
tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_aiter_bytes);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_called_value_1);

asyncgen_heap->exception_lineno = 151;
asyncgen_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
asyncgen->m_frame->m_frame.f_lineno = 151;
tmp_value_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 151;
asyncgen_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_MAKE_ITERATOR(tstate, tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 151;
asyncgen_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_value_value_1, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 1;
asyncgen->m_yield_from = tmp_expression_value_1;
asyncgen->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_value_value_1, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 151;
asyncgen_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = yield_return_value;
assert(asyncgen_heap->tmp_for_loop_1__for_iterator == NULL);
asyncgen_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_1;
}
// Tried code:
loop_start_1:;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_value_value_2;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
tmp_value_value_2 = asyncgen_heap->tmp_for_loop_1__for_iterator;
tmp_expression_value_5 = ASYNC_ITERATOR_NEXT(tstate, tmp_value_value_2);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 151;
asyncgen_heap->type_description_1 = "co";
    goto try_except_handler_3;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_value_value_2, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 2;
asyncgen->m_yield_from = tmp_expression_value_5;
asyncgen->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_value_value_2, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 151;
asyncgen_heap->type_description_1 = "co";
    goto try_except_handler_3;
}
tmp_assign_source_2 = yield_return_value;
{
    PyObject *old = asyncgen_heap->tmp_for_loop_1__iter_value;
    asyncgen_heap->tmp_for_loop_1__iter_value = tmp_assign_source_2;
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
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = asyncgen_heap->exception_keeper_name_1.exception_value;
tmp_cmp_expr_right_1 = PyExc_StopAsyncIteration;
asyncgen_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(asyncgen_heap->tmp_res == -1));
tmp_condition_result_1 = (asyncgen_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
RELEASE_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_keeper_name_1);
goto loop_end_1;
goto branch_end_1;
branch_no_1:;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_1;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_1;

goto try_except_handler_2;
branch_end_1:;
// End of try:
try_end_1:;
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__iter_value);
tmp_assign_source_3 = asyncgen_heap->tmp_for_loop_1__iter_value;
{
    PyObject *old = asyncgen_heap->var_sse;
    asyncgen_heap->var_sse = tmp_assign_source_3;
    Py_INCREF(asyncgen_heap->var_sse);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_6;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(asyncgen_heap->var_sse);
tmp_expression_value_6 = asyncgen_heap->var_sse;
Py_INCREF(tmp_expression_value_6);
asyncgen->m_yield_return_index = 3;
return tmp_expression_value_6;
yield_return_3:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 152;
asyncgen_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 151;
asyncgen_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
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
    asyncgen_heap->var_sse
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
Py_XDECREF(asyncgen_heap->tmp_for_loop_1__iter_value);
asyncgen_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(asyncgen_heap->tmp_for_loop_1__for_iterator);
asyncgen_heap->tmp_for_loop_1__for_iterator = NULL;
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(asyncgen_heap->var_sse);
asyncgen_heap->var_sse = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
asyncgen_heap->exception_keeper_lineno_3 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_3 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

Py_XDECREF(asyncgen_heap->var_sse);
asyncgen_heap->var_sse = NULL;
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

static PyObject *MAKE_ASYNCGEN_openai$_streaming$$$function__12__iter_events$$$asyncgen__1__iter_events(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Asyncgen_New(
        openai$_streaming$$$function__12__iter_events$$$asyncgen__1__iter_events_context,
        module_openai$_streaming,
        mod_consts.const_str_plain__iter_events,
        mod_consts.const_str_digest_544b943bf0a5656feb9215c79bd516c4,
        code_objects_9f351fd2b3e071bd8691db645ae8b5fe,
        closure,
        1,
#if 1
        sizeof(struct openai$_streaming$$$function__12__iter_events$$$asyncgen__1__iter_events_locals)
#else
        0
#endif
    );
}


static PyObject *impl_openai$_streaming$$$function__13___stream__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_ASYNCGEN_openai$_streaming$$$function__13___stream__$$$asyncgen__1___stream__(tstate, tmp_closure_1);

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
struct openai$_streaming$$$function__13___stream__$$$asyncgen__1___stream___locals {
PyObject *var_cast_to;
PyObject *var_response;
PyObject *var_process_data;
PyObject *var_iterator;
PyObject *var_sse;
PyObject *var_data;
PyObject *var_message;
PyObject *var_error;
PyObject *var__sse;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
PyObject *tmp_for_loop_2__for_iterator;
PyObject *tmp_for_loop_2__iter_value;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
};
#endif

static PyObject *openai$_streaming$$$function__13___stream__$$$asyncgen__1___stream___context(PyThreadState *tstate, struct Nuitka_AsyncgenObject *asyncgen, PyObject *yield_return_value) {
    CHECK_OBJECT(asyncgen);
    assert(Nuitka_Asyncgen_Check((PyObject *)asyncgen));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$_streaming$$$function__13___stream__$$$asyncgen__1___stream___locals *asyncgen_heap = (struct openai$_streaming$$$function__13___stream__$$$asyncgen__1___stream___locals *)asyncgen->m_heap_storage;
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
asyncgen_heap->var_cast_to = NULL;
asyncgen_heap->var_response = NULL;
asyncgen_heap->var_process_data = NULL;
asyncgen_heap->var_iterator = NULL;
asyncgen_heap->var_sse = NULL;
asyncgen_heap->var_data = NULL;
asyncgen_heap->var_message = NULL;
asyncgen_heap->var_error = NULL;
asyncgen_heap->var__sse = NULL;
asyncgen_heap->tmp_for_loop_1__for_iterator = NULL;
asyncgen_heap->tmp_for_loop_1__iter_value = NULL;
asyncgen_heap->tmp_for_loop_2__for_iterator = NULL;
asyncgen_heap->tmp_for_loop_2__iter_value = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_8427ddebe9d174b2e6289475032ad1aa, module_openai$_streaming, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_openai$_streaming$cast(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 155;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_openai$_streaming$Any(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 155;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 155;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__cast_to);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 155;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
asyncgen->m_frame->m_frame.f_lineno = 155;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 155;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
assert(asyncgen_heap->var_cast_to == NULL);
asyncgen_heap->var_cast_to = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 156;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_response);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 156;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
assert(asyncgen_heap->var_response == NULL);
asyncgen_heap->var_response = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 157;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__client);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 157;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__process_response_data);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 157;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
assert(asyncgen_heap->var_process_data == NULL);
asyncgen_heap->var_process_data = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_1;
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 158;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_1 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
asyncgen->m_frame->m_frame.f_lineno = 158;
tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__iter_events);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 158;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
assert(asyncgen_heap->var_iterator == NULL);
asyncgen_heap->var_iterator = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_value_value_1;
CHECK_OBJECT(asyncgen_heap->var_iterator);
tmp_value_value_1 = asyncgen_heap->var_iterator;
tmp_expression_value_5 = ASYNC_MAKE_ITERATOR(tstate, tmp_value_value_1);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 160;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_value_value_1, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 1;
asyncgen->m_yield_from = tmp_expression_value_5;
asyncgen->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_value_value_1, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 160;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = yield_return_value;
assert(asyncgen_heap->tmp_for_loop_1__for_iterator == NULL);
asyncgen_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_5;
}
// Tried code:
loop_start_1:;
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_6;
PyObject *tmp_value_value_2;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
tmp_value_value_2 = asyncgen_heap->tmp_for_loop_1__for_iterator;
tmp_expression_value_6 = ASYNC_ITERATOR_NEXT(tstate, tmp_value_value_2);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 160;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_3;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_value_value_2, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 2;
asyncgen->m_yield_from = tmp_expression_value_6;
asyncgen->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_value_value_2, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 160;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_3;
}
tmp_assign_source_6 = yield_return_value;
{
    PyObject *old = asyncgen_heap->tmp_for_loop_1__iter_value;
    asyncgen_heap->tmp_for_loop_1__iter_value = tmp_assign_source_6;
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
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = asyncgen_heap->exception_keeper_name_1.exception_value;
tmp_cmp_expr_right_1 = PyExc_StopAsyncIteration;
asyncgen_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(asyncgen_heap->tmp_res == -1));
tmp_condition_result_1 = (asyncgen_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
RELEASE_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_keeper_name_1);
goto loop_end_1;
goto branch_end_1;
branch_no_1:;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_1;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_1;

goto try_except_handler_2;
branch_end_1:;
// End of try:
try_end_1:;
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__iter_value);
tmp_assign_source_7 = asyncgen_heap->tmp_for_loop_1__iter_value;
{
    PyObject *old = asyncgen_heap->var_sse;
    asyncgen_heap->var_sse = tmp_assign_source_7;
    Py_INCREF(asyncgen_heap->var_sse);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(asyncgen_heap->var_sse);
tmp_expression_value_8 = asyncgen_heap->var_sse;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_data);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 161;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_startswith);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 161;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
asyncgen->m_frame->m_frame.f_lineno = 161;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_2a7265ac0ae741cbd84807714ce996e0_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 161;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_call_result_1);

asyncgen_heap->exception_lineno = 161;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
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
goto loop_end_1;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_call_result_2;
int tmp_truth_name_3;
CHECK_OBJECT(asyncgen_heap->var_sse);
tmp_expression_value_9 = asyncgen_heap->var_sse;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_event);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 165;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_attribute_value_1);

asyncgen_heap->exception_lineno = 165;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_and_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 165;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(asyncgen_heap->var_sse);
tmp_expression_value_11 = asyncgen_heap->var_sse;
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_event);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 165;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_startswith);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 165;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
asyncgen->m_frame->m_frame.f_lineno = 165;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_digest_0fb2bb2e7aeec53e4f924a63ffb9aaf1_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 165;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_call_result_2);

asyncgen_heap->exception_lineno = 165;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
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
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(asyncgen_heap->var_sse);
tmp_called_instance_2 = asyncgen_heap->var_sse;
asyncgen->m_frame->m_frame.f_lineno = 166;
tmp_assign_source_8 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_json);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 166;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = asyncgen_heap->var_data;
    asyncgen_heap->var_data = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_4;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_12;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_3;
int tmp_truth_name_4;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_13;
PyObject *tmp_call_result_4;
int tmp_truth_name_5;
CHECK_OBJECT(asyncgen_heap->var_sse);
tmp_expression_value_12 = asyncgen_heap->var_sse;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_event);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 168;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_2 = mod_consts.const_str_plain_error;
tmp_and_left_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 168;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 168;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
tmp_called_value_4 = module_var_accessor_openai$_streaming$is_mapping(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_is_mapping);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 168;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(asyncgen_heap->var_data);
tmp_args_element_value_3 = asyncgen_heap->var_data;
asyncgen->m_frame->m_frame.f_lineno = 168;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 168;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_3);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_call_result_3);

asyncgen_heap->exception_lineno = 168;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_and_left_value_3 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 168;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(asyncgen_heap->var_data);
tmp_expression_value_13 = asyncgen_heap->var_data;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain_get);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 168;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
asyncgen->m_frame->m_frame.f_lineno = 168;
tmp_call_result_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_plain_error_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 168;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_call_result_4);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_call_result_4);

asyncgen_heap->exception_lineno = 168;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_and_right_value_3 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
tmp_and_right_value_2 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_and_right_value_2 = tmp_and_left_value_3;
and_end_3:;
tmp_condition_result_4 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_4 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = Py_None;
assert(asyncgen_heap->var_message == NULL);
Py_INCREF(tmp_assign_source_9);
asyncgen_heap->var_message = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(asyncgen_heap->var_data);
tmp_expression_value_14 = asyncgen_heap->var_data;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, const_str_plain_get);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 170;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
asyncgen->m_frame->m_frame.f_lineno = 170;
tmp_assign_source_10 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts.const_tuple_str_plain_error_tuple);

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 170;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
assert(asyncgen_heap->var_error == NULL);
asyncgen_heap->var_error = tmp_assign_source_10;
}
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_called_value_7;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_4;
int tmp_truth_name_6;
tmp_called_value_7 = module_var_accessor_openai$_streaming$is_mapping(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_is_mapping);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 171;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(asyncgen_heap->var_error);
tmp_args_element_value_4 = asyncgen_heap->var_error;
asyncgen->m_frame->m_frame.f_lineno = 171;
tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_4);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 171;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_call_result_5);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_call_result_5);

asyncgen_heap->exception_lineno = 171;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_5 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(asyncgen_heap->var_error);
tmp_expression_value_15 = asyncgen_heap->var_error;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, const_str_plain_get);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 172;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
asyncgen->m_frame->m_frame.f_lineno = 172;
tmp_assign_source_11 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_8, mod_consts.const_tuple_str_plain_message_tuple);

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 172;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = asyncgen_heap->var_message;
    assert(old != NULL);
    asyncgen_heap->var_message = tmp_assign_source_11;
    Py_DECREF(old);
}

}
branch_no_5:;
{
bool tmp_condition_result_6;
int tmp_or_left_truth_1;
bool tmp_or_left_value_1;
bool tmp_or_right_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(asyncgen_heap->var_message);
tmp_operand_value_1 = asyncgen_heap->var_message;
asyncgen_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (asyncgen_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 173;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_or_left_value_1 = (asyncgen_heap->tmp_res == 0) ? true : false;
tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(asyncgen_heap->var_message);
tmp_isinstance_inst_1 = asyncgen_heap->var_message;
tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
asyncgen_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (asyncgen_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 173;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_operand_value_2 = (asyncgen_heap->tmp_res != 0) ? Py_True : Py_False;
asyncgen_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (asyncgen_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 173;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_or_right_value_1 = (asyncgen_heap->tmp_res == 0) ? true : false;
tmp_condition_result_6 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_6 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = mod_consts.const_str_digest_76093b718740cc2a7ad4bb21bfd52bf3;
{
    PyObject *old = asyncgen_heap->var_message;
    assert(old != NULL);
    asyncgen_heap->var_message = tmp_assign_source_12;
    Py_INCREF(asyncgen_heap->var_message);
    Py_DECREF(old);
}

}
branch_no_6:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_9;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_expression_value_16;
PyObject *tmp_expression_value_17;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_expression_value_18;
PyObject *tmp_subscript_value_1;
tmp_called_value_9 = module_var_accessor_openai$_streaming$APIError(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_APIError);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 176;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(asyncgen_heap->var_message);
tmp_kw_call_value_0_1 = asyncgen_heap->var_message;
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 178;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_17 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_response);
if (tmp_expression_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 178;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_request);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 178;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(asyncgen_heap->var_data);
tmp_expression_value_18 = asyncgen_heap->var_data;
tmp_subscript_value_1 = mod_consts.const_str_plain_error;
tmp_kw_call_value_2_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_1);
if (tmp_kw_call_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_kw_call_value_1_1);

asyncgen_heap->exception_lineno = 179;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
asyncgen->m_frame->m_frame.f_lineno = 176;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

    tmp_raise_type_input_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_9, kw_values, mod_consts.const_tuple_str_plain_message_str_plain_request_str_plain_body_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
CHECK_OBJECT(tmp_kw_call_value_2_1);
Py_DECREF(tmp_kw_call_value_2_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 176;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 176;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
asyncgen_heap->exception_state.exception_value = tmp_raise_type_1;
asyncgen_heap->exception_lineno = 176;
RAISE_EXCEPTION_WITH_VALUE(tstate, &asyncgen_heap->exception_state);
asyncgen_heap->type_description_1 = "cooooooooo";
goto try_except_handler_2;
}
branch_no_4:;
{
PyObject *tmp_expression_value_19;
PyObject *tmp_called_value_10;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_kw_call_value_2_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
if (asyncgen_heap->var_process_data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_process_data);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 182;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}

tmp_called_value_10 = asyncgen_heap->var_process_data;
tmp_dict_key_1 = mod_consts.const_str_plain_data;
CHECK_OBJECT(asyncgen_heap->var_data);
tmp_dict_value_1 = asyncgen_heap->var_data;
tmp_kw_call_value_0_2 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_20;
asyncgen_heap->tmp_res = PyDict_SetItem(tmp_kw_call_value_0_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(asyncgen_heap->tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_event;
CHECK_OBJECT(asyncgen_heap->var_sse);
tmp_expression_value_20 = asyncgen_heap->var_sse;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_event);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 182;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto dict_build_exception_1;
}
asyncgen_heap->tmp_res = PyDict_SetItem(tmp_kw_call_value_0_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(asyncgen_heap->tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_kw_call_value_0_2);
goto try_except_handler_2;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
if (asyncgen_heap->var_cast_to == NULL) {
Py_DECREF(tmp_kw_call_value_0_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_cast_to);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 182;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}

tmp_kw_call_value_1_2 = asyncgen_heap->var_cast_to;
if (asyncgen_heap->var_response == NULL) {
Py_DECREF(tmp_kw_call_value_0_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_response);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 182;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}

tmp_kw_call_value_2_2 = asyncgen_heap->var_response;
asyncgen->m_frame->m_frame.f_lineno = 182;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2};

    tmp_expression_value_19 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_10, kw_values, mod_consts.const_tuple_str_plain_data_str_plain_cast_to_str_plain_response_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_0_2);
if (tmp_expression_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 182;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_called_value_10, sizeof(PyObject *), &tmp_kw_call_value_0_2, sizeof(PyObject *), &tmp_dict_key_1, sizeof(PyObject *), &tmp_dict_value_1, sizeof(PyObject *), &tmp_kw_call_value_1_2, sizeof(PyObject *), &tmp_kw_call_value_2_2, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 3;
return tmp_expression_value_19;
yield_return_3:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_called_value_10, sizeof(PyObject *), &tmp_kw_call_value_0_2, sizeof(PyObject *), &tmp_dict_key_1, sizeof(PyObject *), &tmp_dict_value_1, sizeof(PyObject *), &tmp_kw_call_value_1_2, sizeof(PyObject *), &tmp_kw_call_value_2_2, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 182;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_instance_3;
CHECK_OBJECT(asyncgen_heap->var_sse);
tmp_called_instance_3 = asyncgen_heap->var_sse;
asyncgen->m_frame->m_frame.f_lineno = 184;
tmp_assign_source_13 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_json);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 184;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = asyncgen_heap->var_data;
    asyncgen_heap->var_data = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_7;
int tmp_and_left_truth_4;
nuitka_bool tmp_and_left_value_4;
nuitka_bool tmp_and_right_value_4;
PyObject *tmp_called_value_11;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_5;
int tmp_truth_name_7;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_21;
PyObject *tmp_call_result_7;
int tmp_truth_name_8;
tmp_called_value_11 = module_var_accessor_openai$_streaming$is_mapping(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_is_mapping);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 185;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(asyncgen_heap->var_data);
tmp_args_element_value_5 = asyncgen_heap->var_data;
asyncgen->m_frame->m_frame.f_lineno = 185;
tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_5);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 185;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_truth_name_7 = CHECK_IF_TRUE(tmp_call_result_6);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_call_result_6);

asyncgen_heap->exception_lineno = 185;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_and_left_value_4 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 185;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
if (tmp_and_left_truth_4 == 1) {
    goto and_right_4;
} else {
    goto and_left_4;
}
and_right_4:;
CHECK_OBJECT(asyncgen_heap->var_data);
tmp_expression_value_21 = asyncgen_heap->var_data;
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, const_str_plain_get);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 185;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
asyncgen->m_frame->m_frame.f_lineno = 185;
tmp_call_result_7 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_12, mod_consts.const_tuple_str_plain_error_tuple);

CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 185;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_truth_name_8 = CHECK_IF_TRUE(tmp_call_result_7);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_call_result_7);

asyncgen_heap->exception_lineno = 185;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_and_right_value_4 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
tmp_condition_result_7 = tmp_and_right_value_4;
goto and_end_4;
and_left_4:;
tmp_condition_result_7 = tmp_and_left_value_4;
and_end_4:;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = Py_None;
assert(asyncgen_heap->var_message == NULL);
Py_INCREF(tmp_assign_source_14);
asyncgen_heap->var_message = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_22;
CHECK_OBJECT(asyncgen_heap->var_data);
tmp_expression_value_22 = asyncgen_heap->var_data;
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, const_str_plain_get);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 187;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
asyncgen->m_frame->m_frame.f_lineno = 187;
tmp_assign_source_15 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_13, mod_consts.const_tuple_str_plain_error_tuple);

CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 187;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
assert(asyncgen_heap->var_error == NULL);
asyncgen_heap->var_error = tmp_assign_source_15;
}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_called_value_14;
PyObject *tmp_call_result_8;
PyObject *tmp_args_element_value_6;
int tmp_truth_name_9;
tmp_called_value_14 = module_var_accessor_openai$_streaming$is_mapping(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_is_mapping);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 188;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(asyncgen_heap->var_error);
tmp_args_element_value_6 = asyncgen_heap->var_error;
asyncgen->m_frame->m_frame.f_lineno = 188;
tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_6);
if (tmp_call_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 188;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_truth_name_9 = CHECK_IF_TRUE(tmp_call_result_8);
if (tmp_truth_name_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_call_result_8);

asyncgen_heap->exception_lineno = 188;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_8 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_8);
Py_DECREF(tmp_call_result_8);
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_23;
CHECK_OBJECT(asyncgen_heap->var_error);
tmp_expression_value_23 = asyncgen_heap->var_error;
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, const_str_plain_get);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 189;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
asyncgen->m_frame->m_frame.f_lineno = 189;
tmp_assign_source_16 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_15, mod_consts.const_tuple_str_plain_message_tuple);

CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 189;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = asyncgen_heap->var_message;
    assert(old != NULL);
    asyncgen_heap->var_message = tmp_assign_source_16;
    Py_DECREF(old);
}

}
branch_no_8:;
{
bool tmp_condition_result_9;
int tmp_or_left_truth_2;
bool tmp_or_left_value_2;
bool tmp_or_right_value_2;
PyObject *tmp_operand_value_3;
PyObject *tmp_operand_value_4;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
CHECK_OBJECT(asyncgen_heap->var_message);
tmp_operand_value_3 = asyncgen_heap->var_message;
asyncgen_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (asyncgen_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 190;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_or_left_value_2 = (asyncgen_heap->tmp_res == 0) ? true : false;
tmp_or_left_truth_2 = tmp_or_left_value_2 != false ? 1 : 0;
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(asyncgen_heap->var_message);
tmp_isinstance_inst_2 = asyncgen_heap->var_message;
tmp_isinstance_cls_2 = (PyObject *)&PyUnicode_Type;
asyncgen_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (asyncgen_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 190;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_operand_value_4 = (asyncgen_heap->tmp_res != 0) ? Py_True : Py_False;
asyncgen_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
if (asyncgen_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 190;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_or_right_value_2 = (asyncgen_heap->tmp_res == 0) ? true : false;
tmp_condition_result_9 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_condition_result_9 = tmp_or_left_value_2;
or_end_2:;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = mod_consts.const_str_digest_76093b718740cc2a7ad4bb21bfd52bf3;
{
    PyObject *old = asyncgen_heap->var_message;
    assert(old != NULL);
    asyncgen_heap->var_message = tmp_assign_source_17;
    Py_INCREF(asyncgen_heap->var_message);
    Py_DECREF(old);
}

}
branch_no_9:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_16;
PyObject *tmp_kw_call_value_0_3;
PyObject *tmp_kw_call_value_1_3;
PyObject *tmp_expression_value_24;
PyObject *tmp_expression_value_25;
PyObject *tmp_kw_call_value_2_3;
PyObject *tmp_expression_value_26;
PyObject *tmp_subscript_value_2;
tmp_called_value_16 = module_var_accessor_openai$_streaming$APIError(tstate);
if (unlikely(tmp_called_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_APIError);
}

if (tmp_called_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 193;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(asyncgen_heap->var_message);
tmp_kw_call_value_0_3 = asyncgen_heap->var_message;
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 195;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_25 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
tmp_expression_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_response);
if (tmp_expression_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 195;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_kw_call_value_1_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_request);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_kw_call_value_1_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 195;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(asyncgen_heap->var_data);
tmp_expression_value_26 = asyncgen_heap->var_data;
tmp_subscript_value_2 = mod_consts.const_str_plain_error;
tmp_kw_call_value_2_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_26, tmp_subscript_value_2);
if (tmp_kw_call_value_2_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_kw_call_value_1_3);

asyncgen_heap->exception_lineno = 196;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
asyncgen->m_frame->m_frame.f_lineno = 193;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3, tmp_kw_call_value_2_3};

    tmp_raise_type_input_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_16, kw_values, mod_consts.const_tuple_str_plain_message_str_plain_request_str_plain_body_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_1_3);
Py_DECREF(tmp_kw_call_value_1_3);
CHECK_OBJECT(tmp_kw_call_value_2_3);
Py_DECREF(tmp_kw_call_value_2_3);
if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 193;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 193;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
asyncgen_heap->exception_state.exception_value = tmp_raise_type_2;
asyncgen_heap->exception_lineno = 193;
RAISE_EXCEPTION_WITH_VALUE(tstate, &asyncgen_heap->exception_state);
asyncgen_heap->type_description_1 = "cooooooooo";
goto try_except_handler_2;
}
branch_no_7:;
{
PyObject *tmp_expression_value_27;
PyObject *tmp_called_value_17;
PyObject *tmp_kw_call_value_0_4;
PyObject *tmp_kw_call_value_1_4;
PyObject *tmp_kw_call_value_2_4;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
if (asyncgen_heap->var_process_data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_process_data);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 199;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}

tmp_called_value_17 = asyncgen_heap->var_process_data;
CHECK_OBJECT(asyncgen_heap->var_data);
tmp_kw_call_value_0_4 = asyncgen_heap->var_data;
if (asyncgen_heap->var_cast_to == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_cast_to);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 199;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}

tmp_kw_call_value_1_4 = asyncgen_heap->var_cast_to;
if (asyncgen_heap->var_response == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_response);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 199;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}

tmp_kw_call_value_2_4 = asyncgen_heap->var_response;
asyncgen->m_frame->m_frame.f_lineno = 199;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_4, tmp_kw_call_value_2_4};

    tmp_expression_value_27 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_17, kw_values, mod_consts.const_tuple_str_plain_data_str_plain_cast_to_str_plain_response_tuple);
}

if (tmp_expression_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 199;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_called_value_17, sizeof(PyObject *), &tmp_kw_call_value_0_4, sizeof(PyObject *), &tmp_kw_call_value_1_4, sizeof(PyObject *), &tmp_kw_call_value_2_4, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 4;
return tmp_expression_value_27;
yield_return_4:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_called_value_17, sizeof(PyObject *), &tmp_kw_call_value_0_4, sizeof(PyObject *), &tmp_kw_call_value_1_4, sizeof(PyObject *), &tmp_kw_call_value_2_4, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 199;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_yield_result_2 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_2);
Py_DECREF(tmp_yield_result_2);
}
branch_end_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 160;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
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
{
PyObject *tmp_assign_source_18;
PyObject *tmp_expression_value_28;
PyObject *tmp_value_value_3;
CHECK_OBJECT(asyncgen_heap->var_iterator);
tmp_value_value_3 = asyncgen_heap->var_iterator;
tmp_expression_value_28 = ASYNC_MAKE_ITERATOR(tstate, tmp_value_value_3);
if (tmp_expression_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 202;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_value_value_3, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 5;
asyncgen->m_yield_from = tmp_expression_value_28;
asyncgen->m_awaiting = true;
return NULL;

yield_return_5:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_value_value_3, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 202;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_18 = yield_return_value;
assert(asyncgen_heap->tmp_for_loop_2__for_iterator == NULL);
asyncgen_heap->tmp_for_loop_2__for_iterator = tmp_assign_source_18;
}
// Tried code:
loop_start_2:;
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_expression_value_29;
PyObject *tmp_value_value_4;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_2__for_iterator);
tmp_value_value_4 = asyncgen_heap->tmp_for_loop_2__for_iterator;
tmp_expression_value_29 = ASYNC_ITERATOR_NEXT(tstate, tmp_value_value_4);
if (tmp_expression_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 202;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_5;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_value_value_4, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 6;
asyncgen->m_yield_from = tmp_expression_value_29;
asyncgen->m_awaiting = true;
return NULL;

yield_return_6:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_value_value_4, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 202;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_5;
}
tmp_assign_source_19 = yield_return_value;
{
    PyObject *old = asyncgen_heap->tmp_for_loop_2__iter_value;
    asyncgen_heap->tmp_for_loop_2__iter_value = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
asyncgen_heap->exception_keeper_lineno_3 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_3 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

{
bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = asyncgen_heap->exception_keeper_name_3.exception_value;
tmp_cmp_expr_right_3 = PyExc_StopAsyncIteration;
asyncgen_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
assert(!(asyncgen_heap->tmp_res == -1));
tmp_condition_result_10 = (asyncgen_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
RELEASE_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_keeper_name_3);
goto loop_end_2;
goto branch_end_10;
branch_no_10:;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_3;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_3;

goto try_except_handler_4;
branch_end_10:;
// End of try:
try_end_3:;
{
PyObject *tmp_assign_source_20;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_2__iter_value);
tmp_assign_source_20 = asyncgen_heap->tmp_for_loop_2__iter_value;
{
    PyObject *old = asyncgen_heap->var__sse;
    asyncgen_heap->var__sse = tmp_assign_source_20;
    Py_INCREF(asyncgen_heap->var__sse);
    Py_XDECREF(old);
}

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 202;
asyncgen_heap->type_description_1 = "cooooooooo";
    goto try_except_handler_4;
}
goto loop_start_2;
loop_end_2:;
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
asyncgen_heap->exception_keeper_lineno_4 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_4 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

Py_XDECREF(asyncgen_heap->tmp_for_loop_2__iter_value);
asyncgen_heap->tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_2__for_iterator);
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_2__for_iterator);
Py_DECREF(asyncgen_heap->tmp_for_loop_2__for_iterator);
asyncgen_heap->tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_4;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;

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
    asyncgen_heap->var_cast_to,
    asyncgen_heap->var_response,
    asyncgen_heap->var_process_data,
    asyncgen_heap->var_iterator,
    asyncgen_heap->var_sse,
    asyncgen_heap->var_data,
    asyncgen_heap->var_message,
    asyncgen_heap->var_error,
    asyncgen_heap->var__sse
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
Py_XDECREF(asyncgen_heap->tmp_for_loop_2__iter_value);
asyncgen_heap->tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_2__for_iterator);
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_2__for_iterator);
Py_DECREF(asyncgen_heap->tmp_for_loop_2__for_iterator);
asyncgen_heap->tmp_for_loop_2__for_iterator = NULL;
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(asyncgen_heap->var_cast_to);
asyncgen_heap->var_cast_to = NULL;
Py_XDECREF(asyncgen_heap->var_response);
asyncgen_heap->var_response = NULL;
Py_XDECREF(asyncgen_heap->var_process_data);
asyncgen_heap->var_process_data = NULL;
CHECK_OBJECT(asyncgen_heap->var_iterator);
CHECK_OBJECT(asyncgen_heap->var_iterator);
Py_DECREF(asyncgen_heap->var_iterator);
asyncgen_heap->var_iterator = NULL;
Py_XDECREF(asyncgen_heap->var_sse);
asyncgen_heap->var_sse = NULL;
Py_XDECREF(asyncgen_heap->var_data);
asyncgen_heap->var_data = NULL;
Py_XDECREF(asyncgen_heap->var__sse);
asyncgen_heap->var__sse = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
asyncgen_heap->exception_keeper_lineno_5 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_5 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

Py_XDECREF(asyncgen_heap->var_cast_to);
asyncgen_heap->var_cast_to = NULL;
Py_XDECREF(asyncgen_heap->var_response);
asyncgen_heap->var_response = NULL;
Py_XDECREF(asyncgen_heap->var_process_data);
asyncgen_heap->var_process_data = NULL;
Py_XDECREF(asyncgen_heap->var_iterator);
asyncgen_heap->var_iterator = NULL;
Py_XDECREF(asyncgen_heap->var_sse);
asyncgen_heap->var_sse = NULL;
Py_XDECREF(asyncgen_heap->var_data);
asyncgen_heap->var_data = NULL;
Py_XDECREF(asyncgen_heap->var_message);
asyncgen_heap->var_message = NULL;
Py_XDECREF(asyncgen_heap->var_error);
asyncgen_heap->var_error = NULL;
Py_XDECREF(asyncgen_heap->var__sse);
asyncgen_heap->var__sse = NULL;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_5;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_5;

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

static PyObject *MAKE_ASYNCGEN_openai$_streaming$$$function__13___stream__$$$asyncgen__1___stream__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Asyncgen_New(
        openai$_streaming$$$function__13___stream__$$$asyncgen__1___stream___context,
        module_openai$_streaming,
        mod_consts.const_str_plain___stream__,
        mod_consts.const_str_digest_e002acaa3acee18f565e10c2c1f90cf7,
        code_objects_8427ddebe9d174b2e6289475032ad1aa,
        closure,
        1,
#if 1
        sizeof(struct openai$_streaming$$$function__13___stream__$$$asyncgen__1___stream___locals)
#else
        0
#endif
    );
}


static PyObject *impl_openai$_streaming$$$function__14___aenter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_openai$_streaming$$$function__14___aenter__$$$coroutine__1___aenter__(tstate, tmp_closure_1);

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
struct openai$_streaming$$$function__14___aenter__$$$coroutine__1___aenter___locals {
char const *type_description_1;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
};
#endif

static PyObject *openai$_streaming$$$function__14___aenter__$$$coroutine__1___aenter___context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$_streaming$$$function__14___aenter__$$$coroutine__1___aenter___locals *coroutine_heap = (struct openai$_streaming$$$function__14___aenter__$$$coroutine__1___aenter___locals *)coroutine->m_heap_storage;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_61c15a88f727e9d818826d377a969c3b, module_openai$_streaming, sizeof(void *));
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
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 206;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

coroutine_heap->tmp_return_value = Nuitka_Cell_GET(coroutine->m_closure[0]);
Py_INCREF(coroutine_heap->tmp_return_value);
goto frame_return_exit_1;

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

static PyObject *MAKE_COROUTINE_openai$_streaming$$$function__14___aenter__$$$coroutine__1___aenter__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        openai$_streaming$$$function__14___aenter__$$$coroutine__1___aenter___context,
        module_openai$_streaming,
        const_str_plain___aenter__,
        mod_consts.const_str_digest_2ea8b76fab2586a90feffe93206262f2,
        code_objects_61c15a88f727e9d818826d377a969c3b,
        closure,
        1,
#if 1
        sizeof(struct openai$_streaming$$$function__14___aenter__$$$coroutine__1___aenter___locals)
#else
        0
#endif
    );
}


static PyObject *impl_openai$_streaming$$$function__15___aexit__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
PyObject *par_exc_type = python_pars[1];
PyObject *par_exc = python_pars[2];
PyObject *par_exc_tb = python_pars[3];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_self;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_COROUTINE_openai$_streaming$$$function__15___aexit__$$$coroutine__1___aexit__(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_exc_type);
CHECK_OBJECT(par_exc_type);
Py_DECREF(par_exc_type);
par_exc_type = NULL;
CHECK_OBJECT(par_exc);
CHECK_OBJECT(par_exc);
Py_DECREF(par_exc);
par_exc = NULL;
CHECK_OBJECT(par_exc_tb);
CHECK_OBJECT(par_exc_tb);
Py_DECREF(par_exc_tb);
par_exc_tb = NULL;
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
struct openai$_streaming$$$function__15___aexit__$$$coroutine__1___aexit___locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
PyObject *tmp_return_value;
};
#endif

static PyObject *openai$_streaming$$$function__15___aexit__$$$coroutine__1___aexit___context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$_streaming$$$function__15___aexit__$$$coroutine__1___aexit___locals *coroutine_heap = (struct openai$_streaming$$$function__15___aexit__$$$coroutine__1___aexit___locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_aadf999daf396c92cd53c5b30e6dfdc0, module_openai$_streaming, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 214;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 214;
coroutine_heap->type_description_1 = "cNNN";
    goto frame_exception_exit_1;
}

tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine->m_frame->m_frame.f_lineno = 214;
tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_close);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 214;
coroutine_heap->type_description_1 = "cNNN";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 214;
coroutine_heap->type_description_1 = "cNNN";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 214;
coroutine_heap->type_description_1 = "cNNN";
    goto frame_exception_exit_1;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}

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
    coroutine->m_closure[0],
    NULL,
    NULL,
    NULL
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
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_openai$_streaming$$$function__15___aexit__$$$coroutine__1___aexit__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        openai$_streaming$$$function__15___aexit__$$$coroutine__1___aexit___context,
        module_openai$_streaming,
        const_str_plain___aexit__,
        mod_consts.const_str_digest_d361373a8c355a7cf5f651aaacd77b3c,
        code_objects_aadf999daf396c92cd53c5b30e6dfdc0,
        closure,
        1,
#if 1
        sizeof(struct openai$_streaming$$$function__15___aexit__$$$coroutine__1___aexit___locals)
#else
        0
#endif
    );
}


static PyObject *impl_openai$_streaming$$$function__16_close(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_openai$_streaming$$$function__16_close$$$coroutine__1_close(tstate, tmp_closure_1);

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
struct openai$_streaming$$$function__16_close$$$coroutine__1_close_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
PyObject *tmp_return_value;
};
#endif

static PyObject *openai$_streaming$$$function__16_close$$$coroutine__1_close_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$_streaming$$$function__16_close$$$coroutine__1_close_locals *coroutine_heap = (struct openai$_streaming$$$function__16_close$$$coroutine__1_close_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_79165ea7f17567038987131137603d33, module_openai$_streaming, sizeof(void *));
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
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 222;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 222;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_response);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 222;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 222;
tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_aclose);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 222;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 222;
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


coroutine_heap->exception_lineno = 222;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}

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
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_openai$_streaming$$$function__16_close$$$coroutine__1_close(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        openai$_streaming$$$function__16_close$$$coroutine__1_close_context,
        module_openai$_streaming,
        const_str_plain_close,
        mod_consts.const_str_digest_eca2d7a5627ee6a4a84a377b9dbe71b5,
        code_objects_79165ea7f17567038987131137603d33,
        closure,
        1,
#if 1
        sizeof(struct openai$_streaming$$$function__16_close$$$coroutine__1_close_locals)
#else
        0
#endif
    );
}


static PyObject *impl_openai$_streaming$$$function__17___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_event = python_pars[1];
PyObject *par_data = python_pars[2];
PyObject *par_id = python_pars[3];
PyObject *par_retry = python_pars[4];
struct Nuitka_FrameObject *frame_frame_openai$_streaming$$$function__17___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_streaming$$$function__17___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_data);
tmp_cmp_expr_left_1 = par_data;
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
tmp_assign_source_1 = const_str_empty;
{
    PyObject *old = par_data;
    assert(old != NULL);
    par_data = tmp_assign_source_1;
    Py_INCREF(par_data);
    Py_DECREF(old);
}

}
branch_no_1:;
// Tried code:
if (isFrameUnusable(cache_frame_frame_openai$_streaming$$$function__17___init__)) {
    Py_XDECREF(cache_frame_frame_openai$_streaming$$$function__17___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_streaming$$$function__17___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_streaming$$$function__17___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_7dde98031ba0c648a7bc6347553f5f6a, module_openai$_streaming, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_streaming$$$function__17___init__->m_type_description == NULL);
frame_frame_openai$_streaming$$$function__17___init__ = cache_frame_frame_openai$_streaming$$$function__17___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_streaming$$$function__17___init__);
assert(Py_REFCNT(frame_frame_openai$_streaming$$$function__17___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_id);
tmp_assattr_value_1 = par_id;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__id, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_data);
tmp_assattr_value_2 = par_data;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__data, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_event);
tmp_or_left_value_1 = par_event;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_or_right_value_1 = Py_None;
tmp_assattr_value_3 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_assattr_value_3 = tmp_or_left_value_1;
or_end_1:;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__event, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_retry);
tmp_assattr_value_4 = par_retry;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__retry, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_streaming$$$function__17___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_streaming$$$function__17___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_streaming$$$function__17___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_streaming$$$function__17___init__,
    type_description_1,
    par_self,
    par_event,
    par_data,
    par_id,
    par_retry
);


// Release cached frame if used for exception.
if (frame_frame_openai$_streaming$$$function__17___init__ == cache_frame_frame_openai$_streaming$$$function__17___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_streaming$$$function__17___init__);
    cache_frame_frame_openai$_streaming$$$function__17___init__ = NULL;
}

assertFrameObject(frame_frame_openai$_streaming$$$function__17___init__);

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
CHECK_OBJECT(par_data);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
par_data = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_data);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
par_data = NULL;
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
CHECK_OBJECT(par_id);
Py_DECREF(par_id);
CHECK_OBJECT(par_retry);
Py_DECREF(par_retry);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_event);
Py_DECREF(par_event);
CHECK_OBJECT(par_id);
Py_DECREF(par_id);
CHECK_OBJECT(par_retry);
Py_DECREF(par_retry);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$_streaming$$$function__18_event(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$_streaming$$$function__18_event;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_streaming$$$function__18_event = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_streaming$$$function__18_event)) {
    Py_XDECREF(cache_frame_frame_openai$_streaming$$$function__18_event);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_streaming$$$function__18_event == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_streaming$$$function__18_event = MAKE_FUNCTION_FRAME(tstate, code_objects_41b3eef8244c99c1873e18f465d43fd6, module_openai$_streaming, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_streaming$$$function__18_event->m_type_description == NULL);
frame_frame_openai$_streaming$$$function__18_event = cache_frame_frame_openai$_streaming$$$function__18_event;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_streaming$$$function__18_event);
assert(Py_REFCNT(frame_frame_openai$_streaming$$$function__18_event) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__event);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_streaming$$$function__18_event, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_streaming$$$function__18_event->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_streaming$$$function__18_event, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_streaming$$$function__18_event,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$_streaming$$$function__18_event == cache_frame_frame_openai$_streaming$$$function__18_event) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_streaming$$$function__18_event);
    cache_frame_frame_openai$_streaming$$$function__18_event = NULL;
}

assertFrameObject(frame_frame_openai$_streaming$$$function__18_event);

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


static PyObject *impl_openai$_streaming$$$function__19_id(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$_streaming$$$function__19_id;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_streaming$$$function__19_id = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_streaming$$$function__19_id)) {
    Py_XDECREF(cache_frame_frame_openai$_streaming$$$function__19_id);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_streaming$$$function__19_id == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_streaming$$$function__19_id = MAKE_FUNCTION_FRAME(tstate, code_objects_130cd6ddd6984388f4fc3b8abf4945ba, module_openai$_streaming, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_streaming$$$function__19_id->m_type_description == NULL);
frame_frame_openai$_streaming$$$function__19_id = cache_frame_frame_openai$_streaming$$$function__19_id;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_streaming$$$function__19_id);
assert(Py_REFCNT(frame_frame_openai$_streaming$$$function__19_id) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__id);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_streaming$$$function__19_id, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_streaming$$$function__19_id->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_streaming$$$function__19_id, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_streaming$$$function__19_id,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$_streaming$$$function__19_id == cache_frame_frame_openai$_streaming$$$function__19_id) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_streaming$$$function__19_id);
    cache_frame_frame_openai$_streaming$$$function__19_id = NULL;
}

assertFrameObject(frame_frame_openai$_streaming$$$function__19_id);

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


static PyObject *impl_openai$_streaming$$$function__20_retry(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$_streaming$$$function__20_retry;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_streaming$$$function__20_retry = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_streaming$$$function__20_retry)) {
    Py_XDECREF(cache_frame_frame_openai$_streaming$$$function__20_retry);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_streaming$$$function__20_retry == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_streaming$$$function__20_retry = MAKE_FUNCTION_FRAME(tstate, code_objects_549d9cbb1ce5445eb138c4c235f1362f, module_openai$_streaming, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_streaming$$$function__20_retry->m_type_description == NULL);
frame_frame_openai$_streaming$$$function__20_retry = cache_frame_frame_openai$_streaming$$$function__20_retry;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_streaming$$$function__20_retry);
assert(Py_REFCNT(frame_frame_openai$_streaming$$$function__20_retry) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__retry);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_streaming$$$function__20_retry, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_streaming$$$function__20_retry->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_streaming$$$function__20_retry, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_streaming$$$function__20_retry,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$_streaming$$$function__20_retry == cache_frame_frame_openai$_streaming$$$function__20_retry) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_streaming$$$function__20_retry);
    cache_frame_frame_openai$_streaming$$$function__20_retry = NULL;
}

assertFrameObject(frame_frame_openai$_streaming$$$function__20_retry);

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


static PyObject *impl_openai$_streaming$$$function__21_data(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$_streaming$$$function__21_data;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_streaming$$$function__21_data = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_streaming$$$function__21_data)) {
    Py_XDECREF(cache_frame_frame_openai$_streaming$$$function__21_data);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_streaming$$$function__21_data == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_streaming$$$function__21_data = MAKE_FUNCTION_FRAME(tstate, code_objects_6a9d38ce6d37479b46a49fcb0a9aa6ff, module_openai$_streaming, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_streaming$$$function__21_data->m_type_description == NULL);
frame_frame_openai$_streaming$$$function__21_data = cache_frame_frame_openai$_streaming$$$function__21_data;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_streaming$$$function__21_data);
assert(Py_REFCNT(frame_frame_openai$_streaming$$$function__21_data) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__data);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_streaming$$$function__21_data, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_streaming$$$function__21_data->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_streaming$$$function__21_data, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_streaming$$$function__21_data,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$_streaming$$$function__21_data == cache_frame_frame_openai$_streaming$$$function__21_data) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_streaming$$$function__21_data);
    cache_frame_frame_openai$_streaming$$$function__21_data = NULL;
}

assertFrameObject(frame_frame_openai$_streaming$$$function__21_data);

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


static PyObject *impl_openai$_streaming$$$function__22_json(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$_streaming$$$function__22_json;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_streaming$$$function__22_json = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_streaming$$$function__22_json)) {
    Py_XDECREF(cache_frame_frame_openai$_streaming$$$function__22_json);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_streaming$$$function__22_json == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_streaming$$$function__22_json = MAKE_FUNCTION_FRAME(tstate, code_objects_744da44ae72be58ea58e4951ea3102e4, module_openai$_streaming, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_streaming$$$function__22_json->m_type_description == NULL);
frame_frame_openai$_streaming$$$function__22_json = cache_frame_frame_openai$_streaming$$$function__22_json;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_streaming$$$function__22_json);
assert(Py_REFCNT(frame_frame_openai$_streaming$$$function__22_json) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = module_var_accessor_openai$_streaming$json(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_json);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 259;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_loads);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_data);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 259;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_openai$_streaming$$$function__22_json->m_frame.f_lineno = 259;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_streaming$$$function__22_json, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_streaming$$$function__22_json->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_streaming$$$function__22_json, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_streaming$$$function__22_json,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$_streaming$$$function__22_json == cache_frame_frame_openai$_streaming$$$function__22_json) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_streaming$$$function__22_json);
    cache_frame_frame_openai$_streaming$$$function__22_json = NULL;
}

assertFrameObject(frame_frame_openai$_streaming$$$function__22_json);

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


static PyObject *impl_openai$_streaming$$$function__23___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$_streaming$$$function__23___repr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_streaming$$$function__23___repr__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_streaming$$$function__23___repr__)) {
    Py_XDECREF(cache_frame_frame_openai$_streaming$$$function__23___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_streaming$$$function__23___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_streaming$$$function__23___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_c94ed86dc4e0c16ceee144a281ff25ea, module_openai$_streaming, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_streaming$$$function__23___repr__->m_type_description == NULL);
frame_frame_openai$_streaming$$$function__23___repr__ = cache_frame_frame_openai$_streaming$$$function__23___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_streaming$$$function__23___repr__);
assert(Py_REFCNT(frame_frame_openai$_streaming$$$function__23___repr__) == 2);

// Framed code:
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_dee6658d3f552d8dc3806d4440cf0165;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 9);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_format_spec_2;
PyObject *tmp_format_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_format_spec_3;
PyObject *tmp_format_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_event);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
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


exception_lineno = 263;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_a637fb200eae49dc87cbe8c0cc133a9b;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_data);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
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


exception_lineno = 263;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_21252a0824ff567609dd5454ec43bcde;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_id);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
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


exception_lineno = 263;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_8c2db02a6533acdd055c91849eb8f7e0;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 6, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_format_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_retry);
if (tmp_format_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
CHECK_OBJECT(tmp_format_value_4);
Py_DECREF(tmp_format_value_4);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 7, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_41;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 8, tmp_tuple_element_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_streaming$$$function__23___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_streaming$$$function__23___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_streaming$$$function__23___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_streaming$$$function__23___repr__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$_streaming$$$function__23___repr__ == cache_frame_frame_openai$_streaming$$$function__23___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_streaming$$$function__23___repr__);
    cache_frame_frame_openai$_streaming$$$function__23___repr__ = NULL;
}

assertFrameObject(frame_frame_openai$_streaming$$$function__23___repr__);

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


static PyObject *impl_openai$_streaming$$$function__24___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$_streaming$$$function__24___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_streaming$$$function__24___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_streaming$$$function__24___init__)) {
    Py_XDECREF(cache_frame_frame_openai$_streaming$$$function__24___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_streaming$$$function__24___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_streaming$$$function__24___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_f32f979144da1eb995a95ada5520bbf8, module_openai$_streaming, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_streaming$$$function__24___init__->m_type_description == NULL);
frame_frame_openai$_streaming$$$function__24___init__ = cache_frame_frame_openai$_streaming$$$function__24___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_streaming$$$function__24___init__);
assert(Py_REFCNT(frame_frame_openai$_streaming$$$function__24___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__event, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = MAKE_LIST_EMPTY(tstate, 0);
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__data, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__last_event_id, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
tmp_assattr_value_4 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__retry, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_streaming$$$function__24___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_streaming$$$function__24___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_streaming$$$function__24___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_streaming$$$function__24___init__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$_streaming$$$function__24___init__ == cache_frame_frame_openai$_streaming$$$function__24___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_streaming$$$function__24___init__);
    cache_frame_frame_openai$_streaming$$$function__24___init__ = NULL;
}

assertFrameObject(frame_frame_openai$_streaming$$$function__24___init__);

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


static PyObject *impl_openai$_streaming$$$function__25_iter_bytes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_iterator = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_iterator;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_self;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_GENERATOR_openai$_streaming$$$function__25_iter_bytes$$$genobj__1_iter_bytes(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_iterator);
CHECK_OBJECT(par_iterator);
Py_DECREF(par_iterator);
par_iterator = NULL;
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
struct openai$_streaming$$$function__25_iter_bytes$$$genobj__1_iter_bytes_locals {
PyObject *var_chunk;
PyObject *var_raw_line;
PyObject *var_line;
PyObject *var_sse;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
PyObject *tmp_for_loop_2__for_iterator;
PyObject *tmp_for_loop_2__iter_value;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
};
#endif

static PyObject *openai$_streaming$$$function__25_iter_bytes$$$genobj__1_iter_bytes_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$_streaming$$$function__25_iter_bytes$$$genobj__1_iter_bytes_locals *generator_heap = (struct openai$_streaming$$$function__25_iter_bytes$$$genobj__1_iter_bytes_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_chunk = NULL;
generator_heap->var_raw_line = NULL;
generator_heap->var_line = NULL;
generator_heap->var_sse = NULL;
generator_heap->tmp_for_loop_1__for_iterator = NULL;
generator_heap->tmp_for_loop_1__iter_value = NULL;
generator_heap->tmp_for_loop_2__for_iterator = NULL;
generator_heap->tmp_for_loop_2__iter_value = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_f9ca129e9081d84296fa987552443272, module_openai$_streaming, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 280;
generator_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__iter_chunks);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 280;
generator_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_iterator);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 280;
generator_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
generator->m_frame->m_frame.f_lineno = 280;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 280;
generator_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 280;
generator_heap->type_description_1 = "ccoooo";
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
generator_heap->type_description_1 = "ccoooo";
generator_heap->exception_lineno = 280;
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
    PyObject *old = generator_heap->var_chunk;
    generator_heap->var_chunk = tmp_assign_source_3;
    Py_INCREF(generator_heap->var_chunk);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(generator_heap->var_chunk);
tmp_expression_value_2 = generator_heap->var_chunk;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_splitlines);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 282;
generator_heap->type_description_1 = "ccoooo";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 282;
tmp_iter_arg_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 282;
generator_heap->type_description_1 = "ccoooo";
    goto try_except_handler_2;
}
tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 282;
generator_heap->type_description_1 = "ccoooo";
    goto try_except_handler_2;
}
{
    PyObject *old = generator_heap->tmp_for_loop_2__for_iterator;
    generator_heap->tmp_for_loop_2__for_iterator = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_5;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
tmp_next_source_2 = generator_heap->tmp_for_loop_2__for_iterator;
tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_5 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "ccoooo";
generator_heap->exception_lineno = 282;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_2__iter_value;
    generator_heap->tmp_for_loop_2__iter_value = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__iter_value);
tmp_assign_source_6 = generator_heap->tmp_for_loop_2__iter_value;
{
    PyObject *old = generator_heap->var_raw_line;
    generator_heap->var_raw_line = tmp_assign_source_6;
    Py_INCREF(generator_heap->var_raw_line);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(generator_heap->var_raw_line);
tmp_expression_value_3 = generator_heap->var_raw_line;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_decode);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 283;
generator_heap->type_description_1 = "ccoooo";
    goto try_except_handler_3;
}
generator->m_frame->m_frame.f_lineno = 283;
tmp_assign_source_7 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 283;
generator_heap->type_description_1 = "ccoooo";
    goto try_except_handler_3;
}
{
    PyObject *old = generator_heap->var_line;
    generator_heap->var_line = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 284;
generator_heap->type_description_1 = "ccoooo";
    goto try_except_handler_3;
}

tmp_expression_value_4 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_decode);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 284;
generator_heap->type_description_1 = "ccoooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(generator_heap->var_line);
tmp_args_element_value_2 = generator_heap->var_line;
generator->m_frame->m_frame.f_lineno = 284;
tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 284;
generator_heap->type_description_1 = "ccoooo";
    goto try_except_handler_3;
}
{
    PyObject *old = generator_heap->var_sse;
    generator_heap->var_sse = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(generator_heap->var_sse);
tmp_truth_name_1 = CHECK_IF_TRUE(generator_heap->var_sse);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 285;
generator_heap->type_description_1 = "ccoooo";
    goto try_except_handler_3;
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
PyObject *tmp_expression_value_5;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_sse);
tmp_expression_value_5 = generator_heap->var_sse;
Py_INCREF(tmp_expression_value_5);
generator->m_yield_return_index = 1;
return tmp_expression_value_5;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 286;
generator_heap->type_description_1 = "ccoooo";
    goto try_except_handler_3;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 282;
generator_heap->type_description_1 = "ccoooo";
    goto try_except_handler_3;
}
goto loop_start_2;
loop_end_2:;
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
generator_heap->tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
generator_heap->tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
try_end_1:;
Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
generator_heap->tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
generator_heap->tmp_for_loop_2__for_iterator = NULL;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 280;
generator_heap->type_description_1 = "ccoooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;

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
    generator->m_closure[1],
    generator->m_closure[0],
    generator_heap->var_chunk,
    generator_heap->var_raw_line,
    generator_heap->var_line,
    generator_heap->var_sse
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
goto try_end_3;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_chunk);
generator_heap->var_chunk = NULL;
Py_XDECREF(generator_heap->var_raw_line);
generator_heap->var_raw_line = NULL;
Py_XDECREF(generator_heap->var_line);
generator_heap->var_line = NULL;
Py_XDECREF(generator_heap->var_sse);
generator_heap->var_sse = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:
try_end_3:;
Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
Py_XDECREF(generator_heap->var_chunk);
generator_heap->var_chunk = NULL;
Py_XDECREF(generator_heap->var_raw_line);
generator_heap->var_raw_line = NULL;
Py_XDECREF(generator_heap->var_line);
generator_heap->var_line = NULL;
Py_XDECREF(generator_heap->var_sse);
generator_heap->var_sse = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_openai$_streaming$$$function__25_iter_bytes$$$genobj__1_iter_bytes(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        openai$_streaming$$$function__25_iter_bytes$$$genobj__1_iter_bytes_context,
        module_openai$_streaming,
        mod_consts.const_str_plain_iter_bytes,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_ebfc2e698e54163c8c70730ab58edaea,
#endif
        code_objects_f9ca129e9081d84296fa987552443272,
        closure,
        2,
#if 1
        sizeof(struct openai$_streaming$$$function__25_iter_bytes$$$genobj__1_iter_bytes_locals)
#else
        0
#endif
    );
}


static PyObject *impl_openai$_streaming$$$function__26__iter_chunks(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_CellObject *par_iterator = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_iterator;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = Nuitka_Cell_New0(par_self);
tmp_return_value = MAKE_GENERATOR_openai$_streaming$$$function__26__iter_chunks$$$genobj__1__iter_chunks(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_iterator);
CHECK_OBJECT(par_iterator);
Py_DECREF(par_iterator);
par_iterator = NULL;
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
struct openai$_streaming$$$function__26__iter_chunks$$$genobj__1__iter_chunks_locals {
PyObject *var_data;
PyObject *var_chunk;
PyObject *var_line;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
PyObject *tmp_for_loop_2__for_iterator;
PyObject *tmp_for_loop_2__iter_value;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
};
#endif

static PyObject *openai$_streaming$$$function__26__iter_chunks$$$genobj__1__iter_chunks_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$_streaming$$$function__26__iter_chunks$$$genobj__1__iter_chunks_locals *generator_heap = (struct openai$_streaming$$$function__26__iter_chunks$$$genobj__1__iter_chunks_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_data = NULL;
generator_heap->var_chunk = NULL;
generator_heap->var_line = NULL;
generator_heap->tmp_for_loop_1__for_iterator = NULL;
generator_heap->tmp_for_loop_1__iter_value = NULL;
generator_heap->tmp_for_loop_2__for_iterator = NULL;
generator_heap->tmp_for_loop_2__iter_value = NULL;
generator_heap->type_description_1 = NULL;
generator_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
generator_heap->exception_lineno = 0;

    // Actual generator function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = const_bytes_empty;
assert(generator_heap->var_data == NULL);
Py_INCREF(tmp_assign_source_1);
generator_heap->var_data = tmp_assign_source_1;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_5eb4689a95c1d7760e3ec22d2e3895db, module_openai$_streaming, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_iterator);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 291;
generator_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}

tmp_iter_arg_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 291;
generator_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_2;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_3;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "ccooo";
generator_heap->exception_lineno = 291;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
    generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
tmp_assign_source_4 = generator_heap->tmp_for_loop_1__iter_value;
{
    PyObject *old = generator_heap->var_chunk;
    generator_heap->var_chunk = tmp_assign_source_4;
    Py_INCREF(generator_heap->var_chunk);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(generator_heap->var_chunk);
tmp_expression_value_1 = generator_heap->var_chunk;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_splitlines);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 292;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 292;
tmp_iter_arg_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0), mod_consts.const_tuple_str_plain_keepends_tuple);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 292;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_2;
}
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 292;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_2;
}
{
    PyObject *old = generator_heap->tmp_for_loop_2__for_iterator;
    generator_heap->tmp_for_loop_2__for_iterator = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_6;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
tmp_next_source_2 = generator_heap->tmp_for_loop_2__for_iterator;
tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_6 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "ccooo";
generator_heap->exception_lineno = 292;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_2__iter_value;
    generator_heap->tmp_for_loop_2__iter_value = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__iter_value);
tmp_assign_source_7 = generator_heap->tmp_for_loop_2__iter_value;
{
    PyObject *old = generator_heap->var_line;
    generator_heap->var_line = tmp_assign_source_7;
    Py_INCREF(generator_heap->var_line);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
if (generator_heap->var_data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 293;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_3;
}

tmp_iadd_expr_left_1 = generator_heap->var_data;
CHECK_OBJECT(generator_heap->var_line);
tmp_iadd_expr_right_1 = generator_heap->var_line;
generator_heap->tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (generator_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 293;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_3;
}
tmp_assign_source_8 = tmp_iadd_expr_left_1;
generator_heap->var_data = tmp_assign_source_8;

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(generator_heap->var_data);
tmp_expression_value_2 = generator_heap->var_data;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_endswith);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 294;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_3;
}
generator->m_frame->m_frame.f_lineno = 294;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_tuple_d3f047b4bcc23d2655483ec754b5d637_tuple_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 294;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_3;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_call_result_1);

generator_heap->exception_lineno = 294;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_3;
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
PyObject *tmp_expression_value_3;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_data);
tmp_expression_value_3 = generator_heap->var_data;
Py_INCREF(tmp_expression_value_3);
generator->m_yield_return_index = 1;
return tmp_expression_value_3;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 295;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_3;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = const_bytes_empty;
{
    PyObject *old = generator_heap->var_data;
    assert(old != NULL);
    generator_heap->var_data = tmp_assign_source_9;
    Py_INCREF(generator_heap->var_data);
    Py_DECREF(old);
}

}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 292;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_3;
}
goto loop_start_2;
loop_end_2:;
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
generator_heap->tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
generator_heap->tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
try_end_1:;
Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
generator_heap->tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
generator_heap->tmp_for_loop_2__for_iterator = NULL;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 291;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_2;
if (generator_heap->var_data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 297;
generator_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_2 = CHECK_IF_TRUE(generator_heap->var_data);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 297;
generator_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_expression_value_4;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
if (generator_heap->var_data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 298;
generator_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = generator_heap->var_data;
Py_INCREF(tmp_expression_value_4);
generator->m_yield_return_index = 2;
return tmp_expression_value_4;
yield_return_2:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 298;
generator_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
tmp_yield_result_2 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_2);
Py_DECREF(tmp_yield_result_2);
}
branch_no_2:;

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
    generator->m_closure[1],
    generator->m_closure[0],
    generator_heap->var_data,
    generator_heap->var_chunk,
    generator_heap->var_line
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
goto try_end_3;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_data);
generator_heap->var_data = NULL;
Py_XDECREF(generator_heap->var_chunk);
generator_heap->var_chunk = NULL;
Py_XDECREF(generator_heap->var_line);
generator_heap->var_line = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:
try_end_3:;
Py_XDECREF(generator_heap->var_data);
generator_heap->var_data = NULL;
Py_XDECREF(generator_heap->var_chunk);
generator_heap->var_chunk = NULL;
Py_XDECREF(generator_heap->var_line);
generator_heap->var_line = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_openai$_streaming$$$function__26__iter_chunks$$$genobj__1__iter_chunks(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        openai$_streaming$$$function__26__iter_chunks$$$genobj__1__iter_chunks_context,
        module_openai$_streaming,
        mod_consts.const_str_plain__iter_chunks,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_4ef97eea4a4ac3450a222209c9e29aec,
#endif
        code_objects_5eb4689a95c1d7760e3ec22d2e3895db,
        closure,
        2,
#if 1
        sizeof(struct openai$_streaming$$$function__26__iter_chunks$$$genobj__1__iter_chunks_locals)
#else
        0
#endif
    );
}


static PyObject *impl_openai$_streaming$$$function__27_aiter_bytes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_iterator = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_iterator;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_self;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_ASYNCGEN_openai$_streaming$$$function__27_aiter_bytes$$$asyncgen__1_aiter_bytes(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_iterator);
CHECK_OBJECT(par_iterator);
Py_DECREF(par_iterator);
par_iterator = NULL;
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
struct openai$_streaming$$$function__27_aiter_bytes$$$asyncgen__1_aiter_bytes_locals {
PyObject *var_chunk;
PyObject *var_raw_line;
PyObject *var_line;
PyObject *var_sse;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
PyObject *tmp_for_loop_2__for_iterator;
PyObject *tmp_for_loop_2__iter_value;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
};
#endif

static PyObject *openai$_streaming$$$function__27_aiter_bytes$$$asyncgen__1_aiter_bytes_context(PyThreadState *tstate, struct Nuitka_AsyncgenObject *asyncgen, PyObject *yield_return_value) {
    CHECK_OBJECT(asyncgen);
    assert(Nuitka_Asyncgen_Check((PyObject *)asyncgen));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$_streaming$$$function__27_aiter_bytes$$$asyncgen__1_aiter_bytes_locals *asyncgen_heap = (struct openai$_streaming$$$function__27_aiter_bytes$$$asyncgen__1_aiter_bytes_locals *)asyncgen->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(asyncgen->m_yield_return_index) {
case 3: goto yield_return_3;
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
asyncgen_heap->var_chunk = NULL;
asyncgen_heap->var_raw_line = NULL;
asyncgen_heap->var_line = NULL;
asyncgen_heap->var_sse = NULL;
asyncgen_heap->tmp_for_loop_1__for_iterator = NULL;
asyncgen_heap->tmp_for_loop_1__iter_value = NULL;
asyncgen_heap->tmp_for_loop_2__for_iterator = NULL;
asyncgen_heap->tmp_for_loop_2__iter_value = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_7e0001d8e715ec0cc523bb08187985e1, module_openai$_streaming, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_value_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(asyncgen->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 302;
asyncgen_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(asyncgen->m_closure[1]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__aiter_chunks);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 302;
asyncgen_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_iterator);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 302;
asyncgen_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
asyncgen->m_frame->m_frame.f_lineno = 302;
tmp_value_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 302;
asyncgen_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_MAKE_ITERATOR(tstate, tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 302;
asyncgen_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_value_value_1, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 1;
asyncgen->m_yield_from = tmp_expression_value_1;
asyncgen->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_value_value_1, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 302;
asyncgen_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = yield_return_value;
assert(asyncgen_heap->tmp_for_loop_1__for_iterator == NULL);
asyncgen_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_1;
}
// Tried code:
loop_start_1:;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_value_value_2;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
tmp_value_value_2 = asyncgen_heap->tmp_for_loop_1__for_iterator;
tmp_expression_value_3 = ASYNC_ITERATOR_NEXT(tstate, tmp_value_value_2);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 302;
asyncgen_heap->type_description_1 = "ccoooo";
    goto try_except_handler_3;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_value_value_2, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 2;
asyncgen->m_yield_from = tmp_expression_value_3;
asyncgen->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_value_value_2, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 302;
asyncgen_heap->type_description_1 = "ccoooo";
    goto try_except_handler_3;
}
tmp_assign_source_2 = yield_return_value;
{
    PyObject *old = asyncgen_heap->tmp_for_loop_1__iter_value;
    asyncgen_heap->tmp_for_loop_1__iter_value = tmp_assign_source_2;
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
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = asyncgen_heap->exception_keeper_name_1.exception_value;
tmp_cmp_expr_right_1 = PyExc_StopAsyncIteration;
asyncgen_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(asyncgen_heap->tmp_res == -1));
tmp_condition_result_1 = (asyncgen_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
RELEASE_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_keeper_name_1);
goto loop_end_1;
goto branch_end_1;
branch_no_1:;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_1;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_1;

goto try_except_handler_2;
branch_end_1:;
// End of try:
try_end_1:;
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__iter_value);
tmp_assign_source_3 = asyncgen_heap->tmp_for_loop_1__iter_value;
{
    PyObject *old = asyncgen_heap->var_chunk;
    asyncgen_heap->var_chunk = tmp_assign_source_3;
    Py_INCREF(asyncgen_heap->var_chunk);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(asyncgen_heap->var_chunk);
tmp_expression_value_4 = asyncgen_heap->var_chunk;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_splitlines);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 304;
asyncgen_heap->type_description_1 = "ccoooo";
    goto try_except_handler_2;
}
asyncgen->m_frame->m_frame.f_lineno = 304;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 304;
asyncgen_heap->type_description_1 = "ccoooo";
    goto try_except_handler_2;
}
tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 304;
asyncgen_heap->type_description_1 = "ccoooo";
    goto try_except_handler_2;
}
{
    PyObject *old = asyncgen_heap->tmp_for_loop_2__for_iterator;
    asyncgen_heap->tmp_for_loop_2__for_iterator = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_5;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_2__for_iterator);
tmp_next_source_1 = asyncgen_heap->tmp_for_loop_2__for_iterator;
tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_5 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
asyncgen_heap->type_description_1 = "ccoooo";
asyncgen_heap->exception_lineno = 304;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = asyncgen_heap->tmp_for_loop_2__iter_value;
    asyncgen_heap->tmp_for_loop_2__iter_value = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_2__iter_value);
tmp_assign_source_6 = asyncgen_heap->tmp_for_loop_2__iter_value;
{
    PyObject *old = asyncgen_heap->var_raw_line;
    asyncgen_heap->var_raw_line = tmp_assign_source_6;
    Py_INCREF(asyncgen_heap->var_raw_line);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(asyncgen_heap->var_raw_line);
tmp_expression_value_5 = asyncgen_heap->var_raw_line;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_decode);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 305;
asyncgen_heap->type_description_1 = "ccoooo";
    goto try_except_handler_4;
}
asyncgen->m_frame->m_frame.f_lineno = 305;
tmp_assign_source_7 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 305;
asyncgen_heap->type_description_1 = "ccoooo";
    goto try_except_handler_4;
}
{
    PyObject *old = asyncgen_heap->var_line;
    asyncgen_heap->var_line = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_2;
if (Nuitka_Cell_GET(asyncgen->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 306;
asyncgen_heap->type_description_1 = "ccoooo";
    goto try_except_handler_4;
}

tmp_expression_value_6 = Nuitka_Cell_GET(asyncgen->m_closure[1]);
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_decode);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 306;
asyncgen_heap->type_description_1 = "ccoooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(asyncgen_heap->var_line);
tmp_args_element_value_2 = asyncgen_heap->var_line;
asyncgen->m_frame->m_frame.f_lineno = 306;
tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 306;
asyncgen_heap->type_description_1 = "ccoooo";
    goto try_except_handler_4;
}
{
    PyObject *old = asyncgen_heap->var_sse;
    asyncgen_heap->var_sse = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(asyncgen_heap->var_sse);
tmp_truth_name_1 = CHECK_IF_TRUE(asyncgen_heap->var_sse);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 307;
asyncgen_heap->type_description_1 = "ccoooo";
    goto try_except_handler_4;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_expression_value_7;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(asyncgen_heap->var_sse);
tmp_expression_value_7 = asyncgen_heap->var_sse;
Py_INCREF(tmp_expression_value_7);
asyncgen->m_yield_return_index = 3;
return tmp_expression_value_7;
yield_return_3:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 308;
asyncgen_heap->type_description_1 = "ccoooo";
    goto try_except_handler_4;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
branch_no_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 304;
asyncgen_heap->type_description_1 = "ccoooo";
    goto try_except_handler_4;
}
goto loop_start_2;
loop_end_2:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
asyncgen_heap->exception_keeper_lineno_2 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_2 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

Py_XDECREF(asyncgen_heap->tmp_for_loop_2__iter_value);
asyncgen_heap->tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_2__for_iterator);
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_2__for_iterator);
Py_DECREF(asyncgen_heap->tmp_for_loop_2__for_iterator);
asyncgen_heap->tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_2;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
try_end_2:;
Py_XDECREF(asyncgen_heap->tmp_for_loop_2__iter_value);
asyncgen_heap->tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_2__for_iterator);
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_2__for_iterator);
Py_DECREF(asyncgen_heap->tmp_for_loop_2__for_iterator);
asyncgen_heap->tmp_for_loop_2__for_iterator = NULL;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 302;
asyncgen_heap->type_description_1 = "ccoooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
asyncgen_heap->exception_keeper_lineno_3 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_3 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

Py_XDECREF(asyncgen_heap->tmp_for_loop_1__iter_value);
asyncgen_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(asyncgen_heap->tmp_for_loop_1__for_iterator);
asyncgen_heap->tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_3;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;

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
    asyncgen->m_closure[1],
    asyncgen->m_closure[0],
    asyncgen_heap->var_chunk,
    asyncgen_heap->var_raw_line,
    asyncgen_heap->var_line,
    asyncgen_heap->var_sse
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
Py_XDECREF(asyncgen_heap->tmp_for_loop_1__iter_value);
asyncgen_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(asyncgen_heap->tmp_for_loop_1__for_iterator);
asyncgen_heap->tmp_for_loop_1__for_iterator = NULL;
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(asyncgen_heap->var_chunk);
asyncgen_heap->var_chunk = NULL;
Py_XDECREF(asyncgen_heap->var_raw_line);
asyncgen_heap->var_raw_line = NULL;
Py_XDECREF(asyncgen_heap->var_line);
asyncgen_heap->var_line = NULL;
Py_XDECREF(asyncgen_heap->var_sse);
asyncgen_heap->var_sse = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
asyncgen_heap->exception_keeper_lineno_4 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_4 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

Py_XDECREF(asyncgen_heap->var_chunk);
asyncgen_heap->var_chunk = NULL;
Py_XDECREF(asyncgen_heap->var_raw_line);
asyncgen_heap->var_raw_line = NULL;
Py_XDECREF(asyncgen_heap->var_line);
asyncgen_heap->var_line = NULL;
Py_XDECREF(asyncgen_heap->var_sse);
asyncgen_heap->var_sse = NULL;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_4;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_4;

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

static PyObject *MAKE_ASYNCGEN_openai$_streaming$$$function__27_aiter_bytes$$$asyncgen__1_aiter_bytes(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Asyncgen_New(
        openai$_streaming$$$function__27_aiter_bytes$$$asyncgen__1_aiter_bytes_context,
        module_openai$_streaming,
        mod_consts.const_str_plain_aiter_bytes,
        mod_consts.const_str_digest_f68742603dc9b566382c9c72e78c5a26,
        code_objects_7e0001d8e715ec0cc523bb08187985e1,
        closure,
        2,
#if 1
        sizeof(struct openai$_streaming$$$function__27_aiter_bytes$$$asyncgen__1_aiter_bytes_locals)
#else
        0
#endif
    );
}


static PyObject *impl_openai$_streaming$$$function__28__aiter_chunks(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_CellObject *par_iterator = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_iterator;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_ASYNCGEN_openai$_streaming$$$function__28__aiter_chunks$$$asyncgen__1__aiter_chunks(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_iterator);
CHECK_OBJECT(par_iterator);
Py_DECREF(par_iterator);
par_iterator = NULL;
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
struct openai$_streaming$$$function__28__aiter_chunks$$$asyncgen__1__aiter_chunks_locals {
PyObject *var_data;
PyObject *var_chunk;
PyObject *var_line;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
PyObject *tmp_for_loop_2__for_iterator;
PyObject *tmp_for_loop_2__iter_value;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
};
#endif

static PyObject *openai$_streaming$$$function__28__aiter_chunks$$$asyncgen__1__aiter_chunks_context(PyThreadState *tstate, struct Nuitka_AsyncgenObject *asyncgen, PyObject *yield_return_value) {
    CHECK_OBJECT(asyncgen);
    assert(Nuitka_Asyncgen_Check((PyObject *)asyncgen));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$_streaming$$$function__28__aiter_chunks$$$asyncgen__1__aiter_chunks_locals *asyncgen_heap = (struct openai$_streaming$$$function__28__aiter_chunks$$$asyncgen__1__aiter_chunks_locals *)asyncgen->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(asyncgen->m_yield_return_index) {
case 4: goto yield_return_4;
case 3: goto yield_return_3;
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
asyncgen_heap->var_data = NULL;
asyncgen_heap->var_chunk = NULL;
asyncgen_heap->var_line = NULL;
asyncgen_heap->tmp_for_loop_1__for_iterator = NULL;
asyncgen_heap->tmp_for_loop_1__iter_value = NULL;
asyncgen_heap->tmp_for_loop_2__for_iterator = NULL;
asyncgen_heap->tmp_for_loop_2__iter_value = NULL;
asyncgen_heap->type_description_1 = NULL;
asyncgen_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
asyncgen_heap->exception_lineno = 0;

    // Actual asyncgen body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = const_bytes_empty;
assert(asyncgen_heap->var_data == NULL);
Py_INCREF(tmp_assign_source_1);
asyncgen_heap->var_data = tmp_assign_source_1;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_37efdd35198c908a1b62ff9f76a3ae52, module_openai$_streaming, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_value_value_1;
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_iterator);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 313;
asyncgen_heap->type_description_1 = "Ncooo";
    goto frame_exception_exit_1;
}

tmp_value_value_1 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
tmp_expression_value_1 = ASYNC_MAKE_ITERATOR(tstate, tmp_value_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 313;
asyncgen_heap->type_description_1 = "Ncooo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_value_value_1, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 1;
asyncgen->m_yield_from = tmp_expression_value_1;
asyncgen->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_value_value_1, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 313;
asyncgen_heap->type_description_1 = "Ncooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = yield_return_value;
assert(asyncgen_heap->tmp_for_loop_1__for_iterator == NULL);
asyncgen_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_2;
}
// Tried code:
loop_start_1:;
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_value_value_2;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
tmp_value_value_2 = asyncgen_heap->tmp_for_loop_1__for_iterator;
tmp_expression_value_2 = ASYNC_ITERATOR_NEXT(tstate, tmp_value_value_2);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 313;
asyncgen_heap->type_description_1 = "Ncooo";
    goto try_except_handler_3;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_value_value_2, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 2;
asyncgen->m_yield_from = tmp_expression_value_2;
asyncgen->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_value_value_2, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 313;
asyncgen_heap->type_description_1 = "Ncooo";
    goto try_except_handler_3;
}
tmp_assign_source_3 = yield_return_value;
{
    PyObject *old = asyncgen_heap->tmp_for_loop_1__iter_value;
    asyncgen_heap->tmp_for_loop_1__iter_value = tmp_assign_source_3;
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
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = asyncgen_heap->exception_keeper_name_1.exception_value;
tmp_cmp_expr_right_1 = PyExc_StopAsyncIteration;
asyncgen_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(asyncgen_heap->tmp_res == -1));
tmp_condition_result_1 = (asyncgen_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
RELEASE_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_keeper_name_1);
goto loop_end_1;
goto branch_end_1;
branch_no_1:;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_1;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_1;

goto try_except_handler_2;
branch_end_1:;
// End of try:
try_end_1:;
{
PyObject *tmp_assign_source_4;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__iter_value);
tmp_assign_source_4 = asyncgen_heap->tmp_for_loop_1__iter_value;
{
    PyObject *old = asyncgen_heap->var_chunk;
    asyncgen_heap->var_chunk = tmp_assign_source_4;
    Py_INCREF(asyncgen_heap->var_chunk);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(asyncgen_heap->var_chunk);
tmp_expression_value_3 = asyncgen_heap->var_chunk;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_splitlines);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 314;
asyncgen_heap->type_description_1 = "Ncooo";
    goto try_except_handler_2;
}
asyncgen->m_frame->m_frame.f_lineno = 314;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0), mod_consts.const_tuple_str_plain_keepends_tuple);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 314;
asyncgen_heap->type_description_1 = "Ncooo";
    goto try_except_handler_2;
}
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 314;
asyncgen_heap->type_description_1 = "Ncooo";
    goto try_except_handler_2;
}
{
    PyObject *old = asyncgen_heap->tmp_for_loop_2__for_iterator;
    asyncgen_heap->tmp_for_loop_2__for_iterator = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_6;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_2__for_iterator);
tmp_next_source_1 = asyncgen_heap->tmp_for_loop_2__for_iterator;
tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_6 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
asyncgen_heap->type_description_1 = "Ncooo";
asyncgen_heap->exception_lineno = 314;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = asyncgen_heap->tmp_for_loop_2__iter_value;
    asyncgen_heap->tmp_for_loop_2__iter_value = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_2__iter_value);
tmp_assign_source_7 = asyncgen_heap->tmp_for_loop_2__iter_value;
{
    PyObject *old = asyncgen_heap->var_line;
    asyncgen_heap->var_line = tmp_assign_source_7;
    Py_INCREF(asyncgen_heap->var_line);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
if (asyncgen_heap->var_data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 315;
asyncgen_heap->type_description_1 = "Ncooo";
    goto try_except_handler_4;
}

tmp_iadd_expr_left_1 = asyncgen_heap->var_data;
CHECK_OBJECT(asyncgen_heap->var_line);
tmp_iadd_expr_right_1 = asyncgen_heap->var_line;
asyncgen_heap->tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (asyncgen_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 315;
asyncgen_heap->type_description_1 = "Ncooo";
    goto try_except_handler_4;
}
tmp_assign_source_8 = tmp_iadd_expr_left_1;
asyncgen_heap->var_data = tmp_assign_source_8;

}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(asyncgen_heap->var_data);
tmp_expression_value_4 = asyncgen_heap->var_data;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_endswith);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 316;
asyncgen_heap->type_description_1 = "Ncooo";
    goto try_except_handler_4;
}
asyncgen->m_frame->m_frame.f_lineno = 316;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_tuple_d3f047b4bcc23d2655483ec754b5d637_tuple_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 316;
asyncgen_heap->type_description_1 = "Ncooo";
    goto try_except_handler_4;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_call_result_1);

asyncgen_heap->exception_lineno = 316;
asyncgen_heap->type_description_1 = "Ncooo";
    goto try_except_handler_4;
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
PyObject *tmp_expression_value_5;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(asyncgen_heap->var_data);
tmp_expression_value_5 = asyncgen_heap->var_data;
Py_INCREF(tmp_expression_value_5);
asyncgen->m_yield_return_index = 3;
return tmp_expression_value_5;
yield_return_3:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 317;
asyncgen_heap->type_description_1 = "Ncooo";
    goto try_except_handler_4;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = const_bytes_empty;
{
    PyObject *old = asyncgen_heap->var_data;
    assert(old != NULL);
    asyncgen_heap->var_data = tmp_assign_source_9;
    Py_INCREF(asyncgen_heap->var_data);
    Py_DECREF(old);
}

}
branch_no_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 314;
asyncgen_heap->type_description_1 = "Ncooo";
    goto try_except_handler_4;
}
goto loop_start_2;
loop_end_2:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
asyncgen_heap->exception_keeper_lineno_2 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_2 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

Py_XDECREF(asyncgen_heap->tmp_for_loop_2__iter_value);
asyncgen_heap->tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_2__for_iterator);
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_2__for_iterator);
Py_DECREF(asyncgen_heap->tmp_for_loop_2__for_iterator);
asyncgen_heap->tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_2;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
try_end_2:;
Py_XDECREF(asyncgen_heap->tmp_for_loop_2__iter_value);
asyncgen_heap->tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_2__for_iterator);
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_2__for_iterator);
Py_DECREF(asyncgen_heap->tmp_for_loop_2__for_iterator);
asyncgen_heap->tmp_for_loop_2__for_iterator = NULL;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 313;
asyncgen_heap->type_description_1 = "Ncooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
asyncgen_heap->exception_keeper_lineno_3 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_3 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

Py_XDECREF(asyncgen_heap->tmp_for_loop_1__iter_value);
asyncgen_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(asyncgen_heap->tmp_for_loop_1__for_iterator);
asyncgen_heap->tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_3;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
Py_XDECREF(asyncgen_heap->tmp_for_loop_1__iter_value);
asyncgen_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(asyncgen_heap->tmp_for_loop_1__for_iterator);
asyncgen_heap->tmp_for_loop_1__for_iterator = NULL;
{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_2;
if (asyncgen_heap->var_data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 319;
asyncgen_heap->type_description_1 = "Ncooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_2 = CHECK_IF_TRUE(asyncgen_heap->var_data);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 319;
asyncgen_heap->type_description_1 = "Ncooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_expression_value_6;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
if (asyncgen_heap->var_data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 320;
asyncgen_heap->type_description_1 = "Ncooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_6 = asyncgen_heap->var_data;
Py_INCREF(tmp_expression_value_6);
asyncgen->m_yield_return_index = 4;
return tmp_expression_value_6;
yield_return_4:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 320;
asyncgen_heap->type_description_1 = "Ncooo";
    goto frame_exception_exit_1;
}
tmp_yield_result_2 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_2);
Py_DECREF(tmp_yield_result_2);
}
branch_no_3:;

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
    NULL,
    asyncgen->m_closure[0],
    asyncgen_heap->var_data,
    asyncgen_heap->var_chunk,
    asyncgen_heap->var_line
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
Py_XDECREF(asyncgen_heap->var_data);
asyncgen_heap->var_data = NULL;
Py_XDECREF(asyncgen_heap->var_chunk);
asyncgen_heap->var_chunk = NULL;
Py_XDECREF(asyncgen_heap->var_line);
asyncgen_heap->var_line = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
asyncgen_heap->exception_keeper_lineno_4 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_4 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

Py_XDECREF(asyncgen_heap->var_data);
asyncgen_heap->var_data = NULL;
Py_XDECREF(asyncgen_heap->var_chunk);
asyncgen_heap->var_chunk = NULL;
Py_XDECREF(asyncgen_heap->var_line);
asyncgen_heap->var_line = NULL;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_4;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_4;

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

static PyObject *MAKE_ASYNCGEN_openai$_streaming$$$function__28__aiter_chunks$$$asyncgen__1__aiter_chunks(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Asyncgen_New(
        openai$_streaming$$$function__28__aiter_chunks$$$asyncgen__1__aiter_chunks_context,
        module_openai$_streaming,
        mod_consts.const_str_plain__aiter_chunks,
        mod_consts.const_str_digest_6768b1289dd1fe8e30c66bd125d11aa5,
        code_objects_37efdd35198c908a1b62ff9f76a3ae52,
        closure,
        1,
#if 1
        sizeof(struct openai$_streaming$$$function__28__aiter_chunks$$$asyncgen__1__aiter_chunks_locals)
#else
        0
#endif
    );
}


static PyObject *impl_openai$_streaming$$$function__29_decode(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_line = python_pars[1];
PyObject *var_sse = NULL;
PyObject *var_fieldname = NULL;
PyObject *var__ = NULL;
PyObject *var_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_openai$_streaming$$$function__29_decode;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_streaming$$$function__29_decode = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_openai$_streaming$$$function__29_decode)) {
    Py_XDECREF(cache_frame_frame_openai$_streaming$$$function__29_decode);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_streaming$$$function__29_decode == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_streaming$$$function__29_decode = MAKE_FUNCTION_FRAME(tstate, code_objects_0aa970ad1d60f3cfcbaf0da8b2ebe425, module_openai$_streaming, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_streaming$$$function__29_decode->m_type_description == NULL);
frame_frame_openai$_streaming$$$function__29_decode = cache_frame_frame_openai$_streaming$$$function__29_decode;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_streaming$$$function__29_decode);
assert(Py_REFCNT(frame_frame_openai$_streaming$$$function__29_decode) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_line);
tmp_operand_value_1 = par_line;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
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
bool tmp_condition_result_2;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_1;
int tmp_and_left_truth_2;
bool tmp_and_left_value_2;
bool tmp_and_right_value_2;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_2;
int tmp_and_left_truth_3;
bool tmp_and_left_value_3;
bool tmp_and_right_value_3;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__event);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res == 0) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_operand_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__data);
if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = (tmp_res == 0) ? true : false;
tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_operand_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__last_event_id);
if (tmp_operand_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
CHECK_OBJECT(tmp_operand_value_4);
Py_DECREF(tmp_operand_value_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_3 = (tmp_res == 0) ? true : false;
tmp_and_left_truth_3 = tmp_and_left_value_3 != false ? 1 : 0;
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__retry);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_and_right_value_3 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_expression_value_8;
tmp_called_value_1 = module_var_accessor_openai$_streaming$ServerSentEvent(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ServerSentEvent);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 329;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__event);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_str_arg_value_1 = mod_consts.const_str_newline;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_iterable_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__data);
if (tmp_iterable_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 331;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_1_1 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 331;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_kw_call_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__last_event_id);
if (tmp_kw_call_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);

exception_lineno = 332;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_kw_call_value_3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__retry);
if (tmp_kw_call_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_2_1);

exception_lineno = 333;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$_streaming$$$function__29_decode->m_frame.f_lineno = 329;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_event_str_plain_data_str_plain_id_str_plain_retry_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
CHECK_OBJECT(tmp_kw_call_value_2_1);
Py_DECREF(tmp_kw_call_value_2_1);
CHECK_OBJECT(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_3_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_sse == NULL);
var_sse = tmp_assign_source_1;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__event, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = MAKE_LIST_EMPTY(tstate, 0);
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__data, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__retry, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 339;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
CHECK_OBJECT(var_sse);
tmp_return_value = var_sse;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_9;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_line);
tmp_expression_value_9 = par_line;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_startswith);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$_streaming$$$function__29_decode->m_frame.f_lineno = 343;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_chr_58_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 343;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_3:;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(par_line);
tmp_expression_value_10 = par_line;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_partition);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
frame_frame_openai$_streaming$$$function__29_decode->m_frame.f_lineno = 346;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_chr_58_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "oooooo";
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
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 346;
type_description_1 = "oooooo";
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
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 346;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 346;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_3 == NULL);
tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 346;
type_description_1 = "oooooo";
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
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;
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
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
assert(var_fieldname == NULL);
Py_INCREF(tmp_assign_source_6);
var_fieldname = tmp_assign_source_6;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
assert(var__ == NULL);
Py_INCREF(tmp_assign_source_7);
var__ = tmp_assign_source_7;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_3;
assert(var_value == NULL);
Py_INCREF(tmp_assign_source_8);
var_value = tmp_assign_source_8;
}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_11;
PyObject *tmp_call_result_2;
int tmp_truth_name_2;
CHECK_OBJECT(var_value);
tmp_expression_value_11 = var_value;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_startswith);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$_streaming$$$function__29_decode->m_frame.f_lineno = 348;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_space_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 348;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_value);
tmp_expression_value_12 = var_value;
tmp_subscript_value_1 = mod_consts.const_slice_int_pos_1_none_none;
tmp_assign_source_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_value;
    assert(old != NULL);
    var_value = tmp_assign_source_9;
    Py_DECREF(old);
}

}
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_fieldname);
tmp_cmp_expr_left_2 = var_fieldname;
tmp_cmp_expr_right_2 = mod_consts.const_str_plain_event;
tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
type_description_1 = "oooooo";
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
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
if (var_value == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_value);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 352;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_value_4 = var_value;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__event, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_5;
branch_no_5:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_fieldname);
tmp_cmp_expr_left_3 = var_fieldname;
tmp_cmp_expr_right_3 = mod_consts.const_str_plain_data;
tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_14 = par_self;
tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain__data);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_append);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (var_value == NULL) {
Py_DECREF(tmp_called_value_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_value);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 354;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = var_value;
frame_frame_openai$_streaming$$$function__29_decode->m_frame.f_lineno = 354;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
goto branch_end_6;
branch_no_6:;
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_fieldname);
tmp_cmp_expr_left_4 = var_fieldname;
tmp_cmp_expr_right_4 = mod_consts.const_str_plain_id;
tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = mod_consts.const_str_null;
if (var_value == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_value);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 356;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_right_5 = var_value;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
if (var_value == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_value);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 359;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_value_5 = var_value;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain__last_event_id, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(var_fieldname);
tmp_cmp_expr_left_6 = var_fieldname;
tmp_cmp_expr_right_6 = mod_consts.const_str_plain_retry;
tmp_condition_result_9 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
// Tried code:
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_int_arg_1;
PyObject *tmp_assattr_target_6;
if (var_value == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_value);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 362;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}

tmp_int_arg_1 = var_value;
tmp_assattr_value_6 = PyNumber_Int(tmp_int_arg_1);
if (tmp_assattr_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain__retry, tmp_assattr_value_6);
CHECK_OBJECT(tmp_assattr_value_6);
Py_DECREF(tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_streaming$$$function__29_decode, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_streaming$$$function__29_decode, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
tmp_cmp_expr_left_7 = EXC_TYPE(tstate);
tmp_cmp_expr_right_7 = mod_consts.const_tuple_type_TypeError_type_ValueError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
tmp_condition_result_10 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 361;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_openai$_streaming$$$function__29_decode->m_frame)) {
        frame_frame_openai$_streaming$$$function__29_decode->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooo";
goto try_except_handler_5;
branch_no_10:;
goto try_end_4;
// Exception handler code:
try_except_handler_5:;
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
branch_no_9:;
branch_end_7:;
branch_end_6:;
branch_end_5:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_streaming$$$function__29_decode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_streaming$$$function__29_decode->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_streaming$$$function__29_decode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_streaming$$$function__29_decode,
    type_description_1,
    par_self,
    par_line,
    var_sse,
    var_fieldname,
    var__,
    var_value
);


// Release cached frame if used for exception.
if (frame_frame_openai$_streaming$$$function__29_decode == cache_frame_frame_openai$_streaming$$$function__29_decode) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_streaming$$$function__29_decode);
    cache_frame_frame_openai$_streaming$$$function__29_decode = NULL;
}

assertFrameObject(frame_frame_openai$_streaming$$$function__29_decode);

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
Py_XDECREF(var_sse);
var_sse = NULL;
Py_XDECREF(var_fieldname);
var_fieldname = NULL;
Py_XDECREF(var__);
var__ = NULL;
Py_XDECREF(var_value);
var_value = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_sse);
var_sse = NULL;
Py_XDECREF(var_fieldname);
var_fieldname = NULL;
Py_XDECREF(var__);
var__ = NULL;
Py_XDECREF(var_value);
var_value = NULL;
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
CHECK_OBJECT(par_line);
Py_DECREF(par_line);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_line);
Py_DECREF(par_line);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$_streaming$$$function__32_is_stream_class_type(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_typ = python_pars[0];
PyObject *var_origin = NULL;
struct Nuitka_FrameObject *frame_frame_openai$_streaming$$$function__32_is_stream_class_type;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_streaming$$$function__32_is_stream_class_type = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_openai$_streaming$$$function__32_is_stream_class_type)) {
    Py_XDECREF(cache_frame_frame_openai$_streaming$$$function__32_is_stream_class_type);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_streaming$$$function__32_is_stream_class_type == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_streaming$$$function__32_is_stream_class_type = MAKE_FUNCTION_FRAME(tstate, code_objects_ffe661abdc51c59b8a7f524a037458d2, module_openai$_streaming, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_streaming$$$function__32_is_stream_class_type->m_type_description == NULL);
frame_frame_openai$_streaming$$$function__32_is_stream_class_type = cache_frame_frame_openai$_streaming$$$function__32_is_stream_class_type;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_streaming$$$function__32_is_stream_class_type);
assert(Py_REFCNT(frame_frame_openai$_streaming$$$function__32_is_stream_class_type) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_openai$_streaming$get_origin(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_origin);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 384;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_typ);
tmp_args_element_value_1 = par_typ;
frame_frame_openai$_streaming$$$function__32_is_stream_class_type->m_frame.f_lineno = 384;
tmp_or_left_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 384;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 384;
type_description_1 = "oo";
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
CHECK_OBJECT(par_typ);
tmp_or_right_value_1 = par_typ;
Py_INCREF(tmp_or_right_value_1);
tmp_assign_source_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_assign_source_1 = tmp_or_left_value_1;
or_end_1:;
assert(var_origin == NULL);
var_origin = tmp_assign_source_1;
}
{
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_issubclass_cls_1;
PyObject *tmp_issubclass_classes_1;
PyObject *tmp_tuple_element_1;
tmp_called_instance_1 = module_var_accessor_openai$_streaming$inspect(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 385;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_origin);
tmp_args_element_value_2 = var_origin;
frame_frame_openai$_streaming$$$function__32_is_stream_class_type->m_frame.f_lineno = 385;
tmp_and_left_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_isclass, tmp_args_element_value_2);
if (tmp_and_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 385;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_1);

exception_lineno = 385;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(tmp_and_left_value_1);
Py_DECREF(tmp_and_left_value_1);
CHECK_OBJECT(var_origin);
tmp_issubclass_cls_1 = var_origin;
tmp_tuple_element_1 = module_var_accessor_openai$_streaming$Stream(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Stream);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 385;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_issubclass_classes_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_issubclass_classes_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_openai$_streaming$AsyncStream(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncStream);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 385;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_issubclass_classes_1, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_issubclass_classes_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_1, tmp_issubclass_classes_1);
CHECK_OBJECT(tmp_issubclass_classes_1);
Py_DECREF(tmp_issubclass_classes_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 385;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res != 0) ? Py_True : Py_False;
Py_INCREF(tmp_and_right_value_1);
tmp_return_value = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_streaming$$$function__32_is_stream_class_type, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_streaming$$$function__32_is_stream_class_type->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_streaming$$$function__32_is_stream_class_type, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_streaming$$$function__32_is_stream_class_type,
    type_description_1,
    par_typ,
    var_origin
);


// Release cached frame if used for exception.
if (frame_frame_openai$_streaming$$$function__32_is_stream_class_type == cache_frame_frame_openai$_streaming$$$function__32_is_stream_class_type) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_streaming$$$function__32_is_stream_class_type);
    cache_frame_frame_openai$_streaming$$$function__32_is_stream_class_type = NULL;
}

assertFrameObject(frame_frame_openai$_streaming$$$function__32_is_stream_class_type);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_origin);
CHECK_OBJECT(var_origin);
Py_DECREF(var_origin);
var_origin = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_origin);
var_origin = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_typ);
Py_DECREF(par_typ);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_typ);
Py_DECREF(par_typ);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$_streaming$$$function__33_extract_stream_chunk_type(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_stream_cls = python_pars[0];
PyObject *par_failure_message = python_pars[1];
PyObject *var_Stream = NULL;
PyObject *var_AsyncStream = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_openai$_streaming$$$function__33_extract_stream_chunk_type;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_streaming$$$function__33_extract_stream_chunk_type = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_openai$_streaming$$$function__33_extract_stream_chunk_type)) {
    Py_XDECREF(cache_frame_frame_openai$_streaming$$$function__33_extract_stream_chunk_type);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_streaming$$$function__33_extract_stream_chunk_type == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_streaming$$$function__33_extract_stream_chunk_type = MAKE_FUNCTION_FRAME(tstate, code_objects_deb8e5a53bedc776817bf1c3078a4d30, module_openai$_streaming, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_streaming$$$function__33_extract_stream_chunk_type->m_type_description == NULL);
frame_frame_openai$_streaming$$$function__33_extract_stream_chunk_type = cache_frame_frame_openai$_streaming$$$function__33_extract_stream_chunk_type;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_streaming$$$function__33_extract_stream_chunk_type);
assert(Py_REFCNT(frame_frame_openai$_streaming$$$function__33_extract_stream_chunk_type) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain__base_client;
tmp_globals_arg_value_1 = (PyObject *)moduledict_openai$_streaming;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Stream_str_plain_AsyncStream_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_openai$_streaming$$$function__33_extract_stream_chunk_type->m_frame.f_lineno = 403;
tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 403;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_openai$_streaming,
        mod_consts.const_str_plain_Stream,
        const_int_0
    );
} else {
    tmp_assign_source_2 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Stream);
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 403;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(var_Stream == NULL);
var_Stream = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_openai$_streaming,
        mod_consts.const_str_plain_AsyncStream,
        const_int_0
    );
} else {
    tmp_assign_source_3 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_AsyncStream);
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 403;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(var_AsyncStream == NULL);
var_AsyncStream = tmp_assign_source_3;
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
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
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kw_call_dict_value_2_1;
tmp_called_value_1 = module_var_accessor_openai$_streaming$extract_type_var_from_base(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_extract_type_var_from_base);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 405;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_stream_cls);
tmp_kw_call_arg_value_0_1 = par_stream_cls;
tmp_kw_call_dict_value_0_1 = const_int_0;
tmp_called_value_2 = module_var_accessor_openai$_streaming$cast(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 408;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_61b8423f3b23c4f1978ca4a089646bc1;
CHECK_OBJECT(var_Stream);
tmp_tuple_element_1 = var_Stream;
tmp_args_element_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_element_value_2, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_AsyncStream);
tmp_tuple_element_1 = var_AsyncStream;
PyTuple_SET_ITEM0(tmp_args_element_value_2, 1, tmp_tuple_element_1);
frame_frame_openai$_streaming$$$function__33_extract_stream_chunk_type->m_frame.f_lineno = 408;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_kw_call_dict_value_1_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 408;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_failure_message);
tmp_kw_call_dict_value_2_1 = par_failure_message;
frame_frame_openai$_streaming$$$function__33_extract_stream_chunk_type->m_frame.f_lineno = 405;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_f333b19f3da0404471b6a945ecca60dd_tuple);
}

CHECK_OBJECT(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 405;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_streaming$$$function__33_extract_stream_chunk_type, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_streaming$$$function__33_extract_stream_chunk_type->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_streaming$$$function__33_extract_stream_chunk_type, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_streaming$$$function__33_extract_stream_chunk_type,
    type_description_1,
    par_stream_cls,
    par_failure_message,
    var_Stream,
    var_AsyncStream
);


// Release cached frame if used for exception.
if (frame_frame_openai$_streaming$$$function__33_extract_stream_chunk_type == cache_frame_frame_openai$_streaming$$$function__33_extract_stream_chunk_type) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_streaming$$$function__33_extract_stream_chunk_type);
    cache_frame_frame_openai$_streaming$$$function__33_extract_stream_chunk_type = NULL;
}

assertFrameObject(frame_frame_openai$_streaming$$$function__33_extract_stream_chunk_type);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_Stream);
CHECK_OBJECT(var_Stream);
Py_DECREF(var_Stream);
var_Stream = NULL;
CHECK_OBJECT(var_AsyncStream);
CHECK_OBJECT(var_AsyncStream);
Py_DECREF(var_AsyncStream);
var_AsyncStream = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_Stream);
var_Stream = NULL;
Py_XDECREF(var_AsyncStream);
var_AsyncStream = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_stream_cls);
Py_DECREF(par_stream_cls);
CHECK_OBJECT(par_failure_message);
Py_DECREF(par_failure_message);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_stream_cls);
Py_DECREF(par_stream_cls);
CHECK_OBJECT(par_failure_message);
Py_DECREF(par_failure_message);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__10___anext__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_streaming$$$function__10___anext__,
        mod_consts.const_str_plain___anext__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_dbb0eb8b269b4770229980b3b63cccb1,
#endif
        code_objects_37e134ec192848f422715e3e22f89c1a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_streaming,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__11___aiter__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_streaming$$$function__11___aiter__,
        mod_consts.const_str_plain___aiter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_30a4c60226828ec83314dbfd9f41aa20,
#endif
        code_objects_072710bb68cd6e92e1df3726e57d52dc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_streaming,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__12__iter_events(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_streaming$$$function__12__iter_events,
        mod_consts.const_str_plain__iter_events,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_544b943bf0a5656feb9215c79bd516c4,
#endif
        code_objects_9f351fd2b3e071bd8691db645ae8b5fe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_streaming,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__13___stream__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_streaming$$$function__13___stream__,
        mod_consts.const_str_plain___stream__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e002acaa3acee18f565e10c2c1f90cf7,
#endif
        code_objects_8427ddebe9d174b2e6289475032ad1aa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_streaming,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__14___aenter__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_streaming$$$function__14___aenter__,
        const_str_plain___aenter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2ea8b76fab2586a90feffe93206262f2,
#endif
        code_objects_61c15a88f727e9d818826d377a969c3b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_streaming,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__15___aexit__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_streaming$$$function__15___aexit__,
        const_str_plain___aexit__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d361373a8c355a7cf5f651aaacd77b3c,
#endif
        code_objects_aadf999daf396c92cd53c5b30e6dfdc0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_streaming,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__16_close(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_streaming$$$function__16_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_eca2d7a5627ee6a4a84a377b9dbe71b5,
#endif
        code_objects_79165ea7f17567038987131137603d33,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_streaming,
        mod_consts.const_str_digest_cb355ff40bf0d2197a6dd6eead5f4268,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__17___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_streaming$$$function__17___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_370ccd1b473bf2f3071fe6aa3ce7465e,
#endif
        code_objects_7dde98031ba0c648a7bc6347553f5f6a,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$_streaming,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__18_event(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_streaming$$$function__18_event,
        mod_consts.const_str_plain_event,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_269bbdeb8ec3e4b00b678e202a639f95,
#endif
        code_objects_41b3eef8244c99c1873e18f465d43fd6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_streaming,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__19_id(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_streaming$$$function__19_id,
        mod_consts.const_str_plain_id,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3a5ade228e6d09b156341eb1decdc4d7,
#endif
        code_objects_130cd6ddd6984388f4fc3b8abf4945ba,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_streaming,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__1___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_streaming$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4a7645f398fd0a431a4fc76eadb605e7,
#endif
        code_objects_efd262d4dda4715a348f4f8e94d9b7fd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_streaming,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__20_retry(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_streaming$$$function__20_retry,
        mod_consts.const_str_plain_retry,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5b5689408229bf8ad6fc8084a20399e7,
#endif
        code_objects_549d9cbb1ce5445eb138c4c235f1362f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_streaming,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__21_data(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_streaming$$$function__21_data,
        mod_consts.const_str_plain_data,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fedbc9fc74cc0850baec1257b2ddf61f,
#endif
        code_objects_6a9d38ce6d37479b46a49fcb0a9aa6ff,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_streaming,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__22_json(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_streaming$$$function__22_json,
        mod_consts.const_str_plain_json,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6748702bf4e891b2ec2f994c1f2afef8,
#endif
        code_objects_744da44ae72be58ea58e4951ea3102e4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_streaming,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__23___repr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_streaming$$$function__23___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9c2147d1bb008d93aad34861a7943760,
#endif
        code_objects_c94ed86dc4e0c16ceee144a281ff25ea,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_streaming,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__24___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_streaming$$$function__24___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fdc08687acda858ba8549314ad367add,
#endif
        code_objects_f32f979144da1eb995a95ada5520bbf8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_streaming,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__25_iter_bytes(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_streaming$$$function__25_iter_bytes,
        mod_consts.const_str_plain_iter_bytes,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ebfc2e698e54163c8c70730ab58edaea,
#endif
        code_objects_f9ca129e9081d84296fa987552443272,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_streaming,
        mod_consts.const_str_digest_68988aefbec28ed4657fdf60c2456a03,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__26__iter_chunks(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_streaming$$$function__26__iter_chunks,
        mod_consts.const_str_plain__iter_chunks,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4ef97eea4a4ac3450a222209c9e29aec,
#endif
        code_objects_5eb4689a95c1d7760e3ec22d2e3895db,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_streaming,
        mod_consts.const_str_digest_287e28f476709a3035b792b5585d85b3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__27_aiter_bytes(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_streaming$$$function__27_aiter_bytes,
        mod_consts.const_str_plain_aiter_bytes,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f68742603dc9b566382c9c72e78c5a26,
#endif
        code_objects_7e0001d8e715ec0cc523bb08187985e1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_streaming,
        mod_consts.const_str_digest_68988aefbec28ed4657fdf60c2456a03,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__28__aiter_chunks(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_streaming$$$function__28__aiter_chunks,
        mod_consts.const_str_plain__aiter_chunks,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6768b1289dd1fe8e30c66bd125d11aa5,
#endif
        code_objects_37efdd35198c908a1b62ff9f76a3ae52,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_streaming,
        mod_consts.const_str_digest_287e28f476709a3035b792b5585d85b3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__29_decode(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_streaming$$$function__29_decode,
        mod_consts.const_str_plain_decode,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c42c4ac586eab09ad20b05b2ea4b1237,
#endif
        code_objects_0aa970ad1d60f3cfcbaf0da8b2ebe425,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_streaming,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__2___next__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_streaming$$$function__2___next__,
        mod_consts.const_str_plain___next__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f58e7359b9a50dd2cf935dfdd7f7db52,
#endif
        code_objects_2bd5d8ac0c76cebb34cbb0e1f9d2fa58,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_streaming,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__30_iter_bytes(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_iter_bytes,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_85e120d4bf0e66177f2b429717956083,
#endif
        code_objects_8a0dd120e2701afe114522a1dfbfac9d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_streaming,
        mod_consts.const_str_digest_68988aefbec28ed4657fdf60c2456a03,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__31_aiter_bytes(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_aiter_bytes,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_04142f54036cf0041dacca122bb6c604,
#endif
        code_objects_568d86d8066aea89a991c090030eebe2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_streaming,
        mod_consts.const_str_digest_35b01d1c7d75d1f57f2d5edfb102d212,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__32_is_stream_class_type(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_streaming$$$function__32_is_stream_class_type,
        mod_consts.const_str_plain_is_stream_class_type,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ffe661abdc51c59b8a7f524a037458d2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_streaming,
        mod_consts.const_str_digest_d6de0b60b02e16def9699dff8552ae57,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__33_extract_stream_chunk_type(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_streaming$$$function__33_extract_stream_chunk_type,
        mod_consts.const_str_plain_extract_stream_chunk_type,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_deb8e5a53bedc776817bf1c3078a4d30,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$_streaming,
        mod_consts.const_str_digest_baadd4c19429741fb9242b1210178c75,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__3___iter__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_streaming$$$function__3___iter__,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c93bf231c9b3e62f74e33da59f7bb4a4,
#endif
        code_objects_f297b05458a7f7f19fcfb661d275c272,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_streaming,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__4__iter_events(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_streaming$$$function__4__iter_events,
        mod_consts.const_str_plain__iter_events,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a9ceb48bbba786c5160f98f555fb7ab0,
#endif
        code_objects_8640d8e9a96ba38658031dfbd5f599d1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_streaming,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__5___stream__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_streaming$$$function__5___stream__,
        mod_consts.const_str_plain___stream__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_afd28cae087442373bfa906d4b39d608,
#endif
        code_objects_08f1424e9c8d48917370e98610dc1331,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_streaming,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__6___enter__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_streaming$$$function__6___enter__,
        const_str_plain___enter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7c8010de651dac2fb35f63531ab36c81,
#endif
        code_objects_172473309fe70a3438f1a66ef3bdb2e1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_streaming,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__7___exit__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_streaming$$$function__7___exit__,
        const_str_plain___exit__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9ed394243540bfdf0b1d966917663ec5,
#endif
        code_objects_d3daf81a9f450fdf48e09f1341330f5d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_streaming,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__8_close(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_streaming$$$function__8_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_48b81a776fe61616de1779cb079589cd,
#endif
        code_objects_6e38baee693a818909518e0350cb0a99,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_streaming,
        mod_consts.const_str_digest_cb355ff40bf0d2197a6dd6eead5f4268,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_streaming$$$function__9___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_streaming$$$function__9___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_27f23450c1059f3cad51823d809cf1ec,
#endif
        code_objects_58d3043a9a3db6107450d63b56779629,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_streaming,
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

static function_impl_code const function_table_openai$_streaming[] = {
impl_openai$_streaming$$$function__1___init__,
impl_openai$_streaming$$$function__2___next__,
impl_openai$_streaming$$$function__3___iter__,
impl_openai$_streaming$$$function__4__iter_events,
impl_openai$_streaming$$$function__5___stream__,
impl_openai$_streaming$$$function__6___enter__,
impl_openai$_streaming$$$function__7___exit__,
impl_openai$_streaming$$$function__8_close,
impl_openai$_streaming$$$function__9___init__,
impl_openai$_streaming$$$function__10___anext__,
impl_openai$_streaming$$$function__11___aiter__,
impl_openai$_streaming$$$function__12__iter_events,
impl_openai$_streaming$$$function__13___stream__,
impl_openai$_streaming$$$function__14___aenter__,
impl_openai$_streaming$$$function__15___aexit__,
impl_openai$_streaming$$$function__16_close,
impl_openai$_streaming$$$function__17___init__,
impl_openai$_streaming$$$function__18_event,
impl_openai$_streaming$$$function__19_id,
impl_openai$_streaming$$$function__20_retry,
impl_openai$_streaming$$$function__21_data,
impl_openai$_streaming$$$function__22_json,
impl_openai$_streaming$$$function__23___repr__,
impl_openai$_streaming$$$function__24___init__,
impl_openai$_streaming$$$function__25_iter_bytes,
impl_openai$_streaming$$$function__26__iter_chunks,
impl_openai$_streaming$$$function__27_aiter_bytes,
impl_openai$_streaming$$$function__28__aiter_chunks,
impl_openai$_streaming$$$function__29_decode,
impl_openai$_streaming$$$function__32_is_stream_class_type,
impl_openai$_streaming$$$function__33_extract_stream_chunk_type,
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

    return Nuitka_Function_GetFunctionState(function, function_table_openai$_streaming);
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
        module_openai$_streaming,
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
        function_table_openai$_streaming,
        sizeof(function_table_openai$_streaming) / sizeof(function_impl_code)
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
static char const *module_full_name = "openai._streaming";
#endif

// Internal entry point for module code.
PyObject *module_code_openai$_streaming(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("openai$_streaming");

    // Store the module for future use.
    module_openai$_streaming = module;

    moduledict_openai$_streaming = MODULE_DICT(module_openai$_streaming);

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
        PRINT_STRING("openai$_streaming: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("openai$_streaming: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("openai$_streaming: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "openai._streaming" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initopenai$_streaming\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_openai$_streaming,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_openai$_streaming,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_openai$_streaming,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_openai$_streaming,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_openai$_streaming,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_openai$_streaming);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_openai$_streaming, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_openai$_streaming, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_openai$_streaming, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_openai$_streaming);
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

        UPDATE_STRING_DICT1(moduledict_openai$_streaming, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *outline_3_var___class__ = NULL;
PyObject *outline_4_var___class__ = NULL;
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
PyObject *tmp_class_container$class_creation_5__bases = NULL;
PyObject *tmp_class_container$class_creation_5__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_5__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_5__metaclass = NULL;
PyObject *tmp_class_container$class_creation_5__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
struct Nuitka_FrameObject *frame_frame_openai$_streaming;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_openai$_streaming$$$class__1_Stream_22 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_openai$_streaming$$$class__1_Stream_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
PyObject *locals_openai$_streaming$$$class__2_AsyncStream_123 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$_streaming$$$class__2_AsyncStream_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
PyObject *locals_openai$_streaming$$$class__3_ServerSentEvent_225 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$_streaming$$$class__3_ServerSentEvent_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
PyObject *locals_openai$_streaming$$$class__4_SSEDecoder_266 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$_streaming$$$class__4_SSEDecoder_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
PyObject *locals_openai$_streaming$$$class__5_SSEBytesDecoder_372 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$_streaming$$$class__5_SSEBytesDecoder_6;
NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_openai$_streaming, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_openai$_streaming, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_openai$_streaming = MAKE_MODULE_FRAME(code_objects_e6706d4977884c82f3a88f73bea2feae, module_openai$_streaming);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_streaming);
assert(Py_REFCNT(frame_frame_openai$_streaming) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_openai$_streaming$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_openai$_streaming$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_openai$_streaming, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_json;
tmp_globals_arg_value_1 = (PyObject *)moduledict_openai$_streaming;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_openai$_streaming->m_frame.f_lineno = 4;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_json, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = const_str_plain_inspect;
tmp_globals_arg_value_2 = (PyObject *)moduledict_openai$_streaming;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_openai$_streaming->m_frame.f_lineno = 5;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_streaming, (Nuitka_StringObject *)const_str_plain_inspect, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_1;
tmp_import_name_from_1 = IMPORT_HARD_TYPES();
assert(!(tmp_import_name_from_1 == NULL));
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_openai$_streaming,
        mod_consts.const_str_plain_TracebackType,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_TracebackType);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_TracebackType, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_8 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_8);
tmp_import_from_1__module = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = Py_False;
UPDATE_STRING_DICT0(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_9);
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
        (PyObject *)moduledict_openai$_streaming,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_10);
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
        (PyObject *)moduledict_openai$_streaming,
        mod_consts.const_str_plain_Generic,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Generic);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_Generic, tmp_assign_source_11);
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
        (PyObject *)moduledict_openai$_streaming,
        mod_consts.const_str_plain_TypeVar,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_TypeVar);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar, tmp_assign_source_12);
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
        (PyObject *)moduledict_openai$_streaming,
        mod_consts.const_str_plain_Iterator,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_Iterator);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterator, tmp_assign_source_13);
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
        (PyObject *)moduledict_openai$_streaming,
        mod_consts.const_str_plain_AsyncIterator,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_AsyncIterator);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncIterator, tmp_assign_source_14);
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
        (PyObject *)moduledict_openai$_streaming,
        mod_consts.const_str_plain_cast,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_cast);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_cast, tmp_assign_source_15);
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
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_typing_extensions;
tmp_globals_arg_value_3 = (PyObject *)moduledict_openai$_streaming;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_58c4b68b5b28f3a3049efffb237ab59d_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_openai$_streaming->m_frame.f_lineno = 8;
tmp_assign_source_16 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_16;
}
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_8 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_openai$_streaming,
        mod_consts.const_str_plain_Self,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_Self);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_Self, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_9 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_openai$_streaming,
        mod_consts.const_str_plain_Protocol,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_Protocol);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_Protocol, tmp_assign_source_18);
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
        (PyObject *)moduledict_openai$_streaming,
        mod_consts.const_str_plain_TypeGuard,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_TypeGuard);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeGuard, tmp_assign_source_19);
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
        (PyObject *)moduledict_openai$_streaming,
        mod_consts.const_str_plain_override,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_override);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_override, tmp_assign_source_20);
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
        (PyObject *)moduledict_openai$_streaming,
        mod_consts.const_str_plain_get_origin,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_get_origin);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_get_origin, tmp_assign_source_21);
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
        (PyObject *)moduledict_openai$_streaming,
        mod_consts.const_str_plain_runtime_checkable,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_runtime_checkable);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_runtime_checkable, tmp_assign_source_22);
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
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_httpx;
tmp_globals_arg_value_4 = (PyObject *)moduledict_openai$_streaming;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = Py_None;
tmp_level_value_4 = const_int_0;
frame_frame_openai$_streaming->m_frame.f_lineno = 10;
tmp_assign_source_23 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_httpx, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain__utils;
tmp_globals_arg_value_5 = (PyObject *)moduledict_openai$_streaming;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_is_mapping_str_plain_extract_type_var_from_base_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_openai$_streaming->m_frame.f_lineno = 12;
tmp_assign_source_24 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_24;
}
// Tried code:
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_14 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_openai$_streaming,
        mod_consts.const_str_plain_is_mapping,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_is_mapping);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_is_mapping, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_15 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_openai$_streaming,
        mod_consts.const_str_plain_extract_type_var_from_base,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_extract_type_var_from_base);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_extract_type_var_from_base, tmp_assign_source_26);
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
PyObject *tmp_import_name_from_16;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain__exceptions;
tmp_globals_arg_value_6 = (PyObject *)moduledict_openai$_streaming;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_APIError_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_openai$_streaming->m_frame.f_lineno = 13;
tmp_import_name_from_16 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_openai$_streaming,
        mod_consts.const_str_plain_APIError,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_APIError);
}

CHECK_OBJECT(tmp_import_name_from_16);
Py_DECREF(tmp_import_name_from_16);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_APIError, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_openai$_streaming$TypeVar(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeVar);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 19;

    goto frame_exception_exit_1;
}
frame_frame_openai$_streaming->m_frame.f_lineno = 19;
tmp_assign_source_28 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain__T_tuple);

if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain__T, tmp_assign_source_28);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_29;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
tmp_expression_value_1 = module_var_accessor_openai$_streaming$Generic(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Generic);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 22;

    goto try_except_handler_4;
}
tmp_subscript_value_1 = module_var_accessor_openai$_streaming$_T(tstate);
assert(!(tmp_subscript_value_1 == NULL));
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_4;
}
tmp_assign_source_29 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_29, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_29;
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_30 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_30;
}
{
PyObject *tmp_assign_source_31;
tmp_assign_source_31 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_31;
}
{
PyObject *tmp_assign_source_32;
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


exception_lineno = 22;

    goto try_except_handler_4;
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


exception_lineno = 22;

    goto try_except_handler_4;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_4;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_32 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_32;
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


exception_lineno = 22;

    goto try_except_handler_4;
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
PyObject *tmp_assign_source_33;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_4 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_4;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_Stream;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_openai$_streaming->m_frame.f_lineno = 22;
tmp_assign_source_33 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_33;
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


exception_lineno = 22;

    goto try_except_handler_4;
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
PyObject *tmp_name_value_7;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_7 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_7, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_4;
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


exception_lineno = 22;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_4;
}
frame_frame_openai$_streaming->m_frame.f_lineno = 22;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 22;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_4;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_34;
tmp_assign_source_34 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_34;
}
branch_end_1:;
{
PyObject *tmp_assign_source_35;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_openai$_streaming$$$class__1_Stream_22 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_7698e24063a53842307d990d0970ee02;
tmp_res = PyObject_SetItem(locals_openai$_streaming$$$class__1_Stream_22, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_digest_620a91f3b9c6d3ab883e44fa53b86a70;
tmp_res = PyObject_SetItem(locals_openai$_streaming$$$class__1_Stream_22, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_plain_Stream;
tmp_res = PyObject_SetItem(locals_openai$_streaming$$$class__1_Stream_22, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_int_pos_22;
tmp_res = PyObject_SetItem(locals_openai$_streaming$$$class__1_Stream_22, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_6;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$_streaming$$$class__1_Stream_22, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_6;
}
frame_frame_openai$_streaming$$$class__1_Stream_2 = MAKE_CLASS_FRAME(tstate, code_objects_8e3fbf5f72a157faee9795ded02af632, module_openai$_streaming, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_streaming$$$class__1_Stream_2);
assert(Py_REFCNT(frame_frame_openai$_streaming$$$class__1_Stream_2) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_11df174efb5cc83c4ecfcd61824f025d;
tmp_ass_subscribed_1 = PyObject_GetItem(locals_openai$_streaming$$$class__1_Stream_22, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 25;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_response;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_str_plain_SSEBytesDecoder;
tmp_ass_subscribed_2 = PyObject_GetItem(locals_openai$_streaming$$$class__1_Stream_22, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 27;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain__decoder;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_c275b6ed862be1e7260c244120706863);

tmp_dictset_value = MAKE_FUNCTION_openai$_streaming$$$function__1___init__(tstate, tmp_annotations_1);

tmp_res = PyObject_SetItem(locals_openai$_streaming$$$class__1_Stream_22, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_79072ff8c541aea48bbed013b73f2282);

tmp_dictset_value = MAKE_FUNCTION_openai$_streaming$$$function__2___next__(tstate, tmp_annotations_2);

tmp_res = PyObject_SetItem(locals_openai$_streaming$$$class__1_Stream_22, mod_consts.const_str_plain___next__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_c741a2c409580a81885c389de4eb0853);

tmp_dictset_value = MAKE_FUNCTION_openai$_streaming$$$function__3___iter__(tstate, tmp_annotations_3);

tmp_res = PyObject_SetItem(locals_openai$_streaming$$$class__1_Stream_22, const_str_plain___iter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_666d3ee8ea4923e58a22b19d9103ed7f);

tmp_dictset_value = MAKE_FUNCTION_openai$_streaming$$$function__4__iter_events(tstate, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_openai$_streaming$$$class__1_Stream_22, mod_consts.const_str_plain__iter_events, tmp_dictset_value);
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
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_c741a2c409580a81885c389de4eb0853);

tmp_dictset_value = MAKE_FUNCTION_openai$_streaming$$$function__5___stream__(tstate, tmp_annotations_5);

tmp_res = PyObject_SetItem(locals_openai$_streaming$$$class__1_Stream_22, mod_consts.const_str_plain___stream__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_71adc2ba5737c82f5bb97b4d3b034ead);

tmp_dictset_value = MAKE_FUNCTION_openai$_streaming$$$function__6___enter__(tstate, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_openai$_streaming$$$class__1_Stream_22, const_str_plain___enter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_b463fd795a8973b8a1c46e48bf79ef09);

tmp_dictset_value = MAKE_FUNCTION_openai$_streaming$$$function__7___exit__(tstate, tmp_annotations_7);

tmp_res = PyObject_SetItem(locals_openai$_streaming$$$class__1_Stream_22, const_str_plain___exit__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_openai$_streaming$$$function__8_close(tstate, tmp_annotations_8);

tmp_res = PyObject_SetItem(locals_openai$_streaming$$$class__1_Stream_22, const_str_plain_close, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_streaming$$$class__1_Stream_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_streaming$$$class__1_Stream_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_streaming$$$class__1_Stream_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_streaming$$$class__1_Stream_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_openai$_streaming$$$class__1_Stream_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_6;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_e0701f44303cd3e11cb50c027d63552e_tuple;
tmp_res = PyObject_SetItem(locals_openai$_streaming$$$class__1_Stream_22, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_6;
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


exception_lineno = 22;

    goto try_except_handler_6;
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
tmp_res = PyObject_SetItem(locals_openai$_streaming$$$class__1_Stream_22, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_6;
}
branch_no_3:;
{
PyObject *tmp_assign_source_36;
PyObject *tmp_called_value_3;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_Stream;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_openai$_streaming$$$class__1_Stream_22;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_openai$_streaming->m_frame.f_lineno = 22;
tmp_assign_source_36 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_6;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_36;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_35 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_35);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_DECREF(locals_openai$_streaming$$$class__1_Stream_22);
locals_openai$_streaming$$$class__1_Stream_22 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$_streaming$$$class__1_Stream_22);
locals_openai$_streaming$$$class__1_Stream_22 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 22;
goto try_except_handler_4;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_Stream, tmp_assign_source_35);
}
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
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
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
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
PyObject *tmp_assign_source_37;
PyObject *tmp_tuple_element_5;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_3;
tmp_expression_value_8 = module_var_accessor_openai$_streaming$Generic(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Generic);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 123;

    goto try_except_handler_7;
}
tmp_subscript_value_3 = module_var_accessor_openai$_streaming$_T(tstate);
if (unlikely(tmp_subscript_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__T);
}

if (tmp_subscript_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 123;

    goto try_except_handler_7;
}
tmp_tuple_element_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_3);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto try_except_handler_7;
}
tmp_assign_source_37 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_37, 0, tmp_tuple_element_5);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_37;
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_38 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_38;
}
{
PyObject *tmp_assign_source_39;
tmp_assign_source_39 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_39;
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto try_except_handler_7;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_9 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_4, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto try_except_handler_7;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto try_except_handler_7;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_40 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_40;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_10 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto try_except_handler_7;
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
PyObject *tmp_assign_source_41;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto try_except_handler_7;
}
tmp_tuple_element_6 = mod_consts.const_str_plain_AsyncStream;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_openai$_streaming->m_frame.f_lineno = 123;
tmp_assign_source_41 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_41;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_12 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_12, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto try_except_handler_7;
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
PyObject *tmp_expression_value_13;
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_13 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_8 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_13, tmp_name_value_8, tmp_default_value_2);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto try_except_handler_7;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_14;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_14 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_14 == NULL));
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto try_except_handler_7;
}
frame_frame_openai$_streaming->m_frame.f_lineno = 123;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 123;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_7;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_42;
tmp_assign_source_42 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_42;
}
branch_end_4:;
{
PyObject *tmp_assign_source_43;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_openai$_streaming$$$class__2_AsyncStream_123 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_7698e24063a53842307d990d0970ee02;
tmp_res = PyObject_SetItem(locals_openai$_streaming$$$class__2_AsyncStream_123, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_digest_f2983401b0920f9bd580ce8facef64c4;
tmp_res = PyObject_SetItem(locals_openai$_streaming$$$class__2_AsyncStream_123, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_plain_AsyncStream;
tmp_res = PyObject_SetItem(locals_openai$_streaming$$$class__2_AsyncStream_123, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_int_pos_123;
tmp_res = PyObject_SetItem(locals_openai$_streaming$$$class__2_AsyncStream_123, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto try_except_handler_9;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$_streaming$$$class__2_AsyncStream_123, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto try_except_handler_9;
}
frame_frame_openai$_streaming$$$class__2_AsyncStream_3 = MAKE_CLASS_FRAME(tstate, code_objects_87044a223965e5e81b1e77e8990ecc2b, module_openai$_streaming, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_streaming$$$class__2_AsyncStream_3);
assert(Py_REFCNT(frame_frame_openai$_streaming$$$class__2_AsyncStream_3) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_ass_subvalue_3 = mod_consts.const_str_digest_11df174efb5cc83c4ecfcd61824f025d;
tmp_ass_subscribed_3 = PyObject_GetItem(locals_openai$_streaming$$$class__2_AsyncStream_123, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 126;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_3 = mod_consts.const_str_plain_response;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subscribed_3);
Py_DECREF(tmp_ass_subscribed_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
tmp_ass_subvalue_4 = mod_consts.const_str_digest_e0678d8f77e1015a9c4cef2cb6c55647;
tmp_ass_subscribed_4 = PyObject_GetItem(locals_openai$_streaming$$$class__2_AsyncStream_123, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 128;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_4 = mod_consts.const_str_plain__decoder;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
CHECK_OBJECT(tmp_ass_subscribed_4);
Py_DECREF(tmp_ass_subscribed_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_9;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_972037a11018e14a9125dbbbc4a00887);

tmp_dictset_value = MAKE_FUNCTION_openai$_streaming$$$function__9___init__(tstate, tmp_annotations_9);

tmp_res = PyObject_SetItem(locals_openai$_streaming$$$class__2_AsyncStream_123, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_79072ff8c541aea48bbed013b73f2282);

tmp_dictset_value = MAKE_FUNCTION_openai$_streaming$$$function__10___anext__(tstate, tmp_annotations_10);

tmp_res = PyObject_SetItem(locals_openai$_streaming$$$class__2_AsyncStream_123, mod_consts.const_str_plain___anext__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_166b48d2c76a018152c9a2746c771069);

tmp_dictset_value = MAKE_FUNCTION_openai$_streaming$$$function__11___aiter__(tstate, tmp_annotations_11);

tmp_res = PyObject_SetItem(locals_openai$_streaming$$$class__2_AsyncStream_123, mod_consts.const_str_plain___aiter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_12;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_a5f9f94cd63834d1c74824c8ea521f61);

tmp_dictset_value = MAKE_FUNCTION_openai$_streaming$$$function__12__iter_events(tstate, tmp_annotations_12);

tmp_res = PyObject_SetItem(locals_openai$_streaming$$$class__2_AsyncStream_123, mod_consts.const_str_plain__iter_events, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_13;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_166b48d2c76a018152c9a2746c771069);

tmp_dictset_value = MAKE_FUNCTION_openai$_streaming$$$function__13___stream__(tstate, tmp_annotations_13);

tmp_res = PyObject_SetItem(locals_openai$_streaming$$$class__2_AsyncStream_123, mod_consts.const_str_plain___stream__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_14;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_71adc2ba5737c82f5bb97b4d3b034ead);

tmp_dictset_value = MAKE_FUNCTION_openai$_streaming$$$function__14___aenter__(tstate, tmp_annotations_14);

tmp_res = PyObject_SetItem(locals_openai$_streaming$$$class__2_AsyncStream_123, const_str_plain___aenter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_15;
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_b463fd795a8973b8a1c46e48bf79ef09);

tmp_dictset_value = MAKE_FUNCTION_openai$_streaming$$$function__15___aexit__(tstate, tmp_annotations_15);

tmp_res = PyObject_SetItem(locals_openai$_streaming$$$class__2_AsyncStream_123, const_str_plain___aexit__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_16;
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_openai$_streaming$$$function__16_close(tstate, tmp_annotations_16);

tmp_res = PyObject_SetItem(locals_openai$_streaming$$$class__2_AsyncStream_123, const_str_plain_close, tmp_dictset_value);
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_3:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_streaming$$$class__2_AsyncStream_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_streaming$$$class__2_AsyncStream_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_streaming$$$class__2_AsyncStream_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_streaming$$$class__2_AsyncStream_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_openai$_streaming$$$class__2_AsyncStream_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_9;
skip_nested_handling_2:;
tmp_dictset_value = mod_consts.const_tuple_e0701f44303cd3e11cb50c027d63552e_tuple;
tmp_res = PyObject_SetItem(locals_openai$_streaming$$$class__2_AsyncStream_123, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto try_except_handler_9;
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


exception_lineno = 123;

    goto try_except_handler_9;
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
tmp_res = PyObject_SetItem(locals_openai$_streaming$$$class__2_AsyncStream_123, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto try_except_handler_9;
}
branch_no_6:;
{
PyObject *tmp_assign_source_44;
PyObject *tmp_called_value_5;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_5 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_8 = mod_consts.const_str_plain_AsyncStream;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = locals_openai$_streaming$$$class__2_AsyncStream_123;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_openai$_streaming->m_frame.f_lineno = 123;
tmp_assign_source_44 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto try_except_handler_9;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_44;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_43 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_43);
goto try_return_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_DECREF(locals_openai$_streaming$$$class__2_AsyncStream_123);
locals_openai$_streaming$$$class__2_AsyncStream_123 = NULL;
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$_streaming$$$class__2_AsyncStream_123);
locals_openai$_streaming$$$class__2_AsyncStream_123 = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_8;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 123;
goto try_except_handler_7;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncStream, tmp_assign_source_43);
}
goto try_end_5;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
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
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
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
PyObject *tmp_assign_source_45;
tmp_assign_source_45 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_45;
}
{
PyObject *tmp_assign_source_46;
tmp_assign_source_46 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_46;
}
// Tried code:
{
PyObject *tmp_assign_source_47;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_openai$_streaming$$$class__3_ServerSentEvent_225 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
tmp_dictset_value = mod_consts.const_str_digest_7698e24063a53842307d990d0970ee02;
tmp_result = DICT_SET_ITEM(locals_openai$_streaming$$$class__3_ServerSentEvent_225, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_ServerSentEvent;
tmp_result = DICT_SET_ITEM(locals_openai$_streaming$$$class__3_ServerSentEvent_225, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_225;
tmp_result = DICT_SET_ITEM(locals_openai$_streaming$$$class__3_ServerSentEvent_225, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_17;
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_78503ba202d4261bad01aa6f0e4803ef);
tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_56e1853e8e0d1ef0942809950d670b70);

tmp_dictset_value = MAKE_FUNCTION_openai$_streaming$$$function__17___init__(tstate, tmp_kw_defaults_1, tmp_annotations_17);

tmp_result = DICT_SET_ITEM(locals_openai$_streaming$$$class__3_ServerSentEvent_225, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
// Tried code:
// Tried code:
frame_frame_openai$_streaming$$$class__3_ServerSentEvent_4 = MAKE_CLASS_FRAME(tstate, code_objects_0e9e210ae1f3be7abbbc6a76085a1448, module_openai$_streaming, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_streaming$$$class__3_ServerSentEvent_4);
assert(Py_REFCNT(frame_frame_openai$_streaming$$$class__3_ServerSentEvent_4) == 2);

// Framed code:
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_18;
tmp_called_value_6 = (PyObject *)&PyProperty_Type;
tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071);

tmp_args_element_value_1 = MAKE_FUNCTION_openai$_streaming$$$function__18_event(tstate, tmp_annotations_18);

frame_frame_openai$_streaming$$$class__3_ServerSentEvent_4->m_frame.f_lineno = 242;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_result = DICT_SET_ITEM(locals_openai$_streaming$$$class__3_ServerSentEvent_225, mod_consts.const_str_plain_event, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_19;
tmp_called_value_7 = (PyObject *)&PyProperty_Type;
tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071);

tmp_args_element_value_2 = MAKE_FUNCTION_openai$_streaming$$$function__19_id(tstate, tmp_annotations_19);

frame_frame_openai$_streaming$$$class__3_ServerSentEvent_4->m_frame.f_lineno = 246;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_result = DICT_SET_ITEM(locals_openai$_streaming$$$class__3_ServerSentEvent_225, mod_consts.const_str_plain_id, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_3;
PyObject *tmp_annotations_20;
tmp_called_value_8 = (PyObject *)&PyProperty_Type;
tmp_annotations_20 = DICT_COPY(tstate, mod_consts.const_dict_4ceb13db20db0a5d6b10c13b92db4345);

tmp_args_element_value_3 = MAKE_FUNCTION_openai$_streaming$$$function__20_retry(tstate, tmp_annotations_20);

frame_frame_openai$_streaming$$$class__3_ServerSentEvent_4->m_frame.f_lineno = 250;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_result = DICT_SET_ITEM(locals_openai$_streaming$$$class__3_ServerSentEvent_225, mod_consts.const_str_plain_retry, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_4;
PyObject *tmp_annotations_21;
tmp_called_value_9 = (PyObject *)&PyProperty_Type;
tmp_annotations_21 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_4 = MAKE_FUNCTION_openai$_streaming$$$function__21_data(tstate, tmp_annotations_21);

frame_frame_openai$_streaming$$$class__3_ServerSentEvent_4->m_frame.f_lineno = 254;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_result = DICT_SET_ITEM(locals_openai$_streaming$$$class__3_ServerSentEvent_225, mod_consts.const_str_plain_data, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_22;
tmp_annotations_22 = DICT_COPY(tstate, mod_consts.const_dict_649327bbc9f137cd11fab40cb48175a1);

tmp_dictset_value = MAKE_FUNCTION_openai$_streaming$$$function__22_json(tstate, tmp_annotations_22);

tmp_result = DICT_SET_ITEM(locals_openai$_streaming$$$class__3_ServerSentEvent_225, mod_consts.const_str_plain_json, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_5;
PyObject *tmp_annotations_23;
tmp_called_value_10 = module_var_accessor_openai$_streaming$override(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_override);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 261;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_annotations_23 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_5 = MAKE_FUNCTION_openai$_streaming$$$function__23___repr__(tstate, tmp_annotations_23);

frame_frame_openai$_streaming$$$class__3_ServerSentEvent_4->m_frame.f_lineno = 261;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_result = DICT_SET_ITEM(locals_openai$_streaming$$$class__3_ServerSentEvent_225, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_streaming$$$class__3_ServerSentEvent_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_streaming$$$class__3_ServerSentEvent_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_streaming$$$class__3_ServerSentEvent_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_streaming$$$class__3_ServerSentEvent_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_openai$_streaming$$$class__3_ServerSentEvent_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_12;
skip_nested_handling_3:;
tmp_dictset_value = mod_consts.const_tuple_2a32650cebe4e63166dfc6f650144819_tuple;
tmp_result = DICT_SET_ITEM(locals_openai$_streaming$$$class__3_ServerSentEvent_225, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_48;
PyObject *tmp_called_value_11;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_9;
PyObject *tmp_kwargs_value_5;
tmp_called_value_11 = (PyObject *)&PyType_Type;
tmp_tuple_element_9 = mod_consts.const_str_plain_ServerSentEvent;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_9);
tmp_tuple_element_9 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_9);
tmp_tuple_element_9 = locals_openai$_streaming$$$class__3_ServerSentEvent_225;
PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_openai$_streaming->m_frame.f_lineno = 225;
tmp_assign_source_48 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;

    goto try_except_handler_12;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_48;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_47 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_47);
goto try_return_handler_12;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
Py_DECREF(locals_openai$_streaming$$$class__3_ServerSentEvent_225);
locals_openai$_streaming$$$class__3_ServerSentEvent_225 = NULL;
goto try_return_handler_11;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$_streaming$$$class__3_ServerSentEvent_225);
locals_openai$_streaming$$$class__3_ServerSentEvent_225 = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_11;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 225;
goto try_except_handler_10;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_ServerSentEvent, tmp_assign_source_47);
}
goto try_end_6;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
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
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
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
PyObject *tmp_assign_source_49;
tmp_assign_source_49 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_49;
}
{
PyObject *tmp_assign_source_50;
tmp_assign_source_50 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_50;
}
// Tried code:
{
PyObject *tmp_assign_source_51;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_openai$_streaming$$$class__4_SSEDecoder_266 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
tmp_dictset_value = mod_consts.const_str_digest_7698e24063a53842307d990d0970ee02;
tmp_result = DICT_SET_ITEM(locals_openai$_streaming$$$class__4_SSEDecoder_266, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_SSEDecoder;
tmp_result = DICT_SET_ITEM(locals_openai$_streaming$$$class__4_SSEDecoder_266, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_266;
tmp_result = DICT_SET_ITEM(locals_openai$_streaming$$$class__4_SSEDecoder_266, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_result = DICT_SET_ITEM(locals_openai$_streaming$$$class__4_SSEDecoder_266, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_openai$_streaming$$$class__4_SSEDecoder_5 = MAKE_CLASS_FRAME(tstate, code_objects_00640cec69ca23b4ca562cd10f88bbec, module_openai$_streaming, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_streaming$$$class__4_SSEDecoder_5);
assert(Py_REFCNT(frame_frame_openai$_streaming$$$class__4_SSEDecoder_5) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_ass_subscript_5;
tmp_ass_subvalue_5 = mod_consts.const_str_digest_e457754874b2ab64235a137685f8363a;
tmp_ass_subscribed_5 = DICT_GET_ITEM0(tstate, locals_openai$_streaming$$$class__4_SSEDecoder_266, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 267;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_ass_subscribed_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscript_5 = mod_consts.const_str_plain__data;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_ass_subvalue_6;
PyObject *tmp_ass_subscribed_6;
PyObject *tmp_ass_subscript_6;
tmp_ass_subvalue_6 = mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58;
tmp_ass_subscribed_6 = DICT_GET_ITEM0(tstate, locals_openai$_streaming$$$class__4_SSEDecoder_266, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 268;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_ass_subscribed_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscript_6 = mod_consts.const_str_plain__event;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_ass_subvalue_7;
PyObject *tmp_ass_subscribed_7;
PyObject *tmp_ass_subscript_7;
tmp_ass_subvalue_7 = mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a;
tmp_ass_subscribed_7 = DICT_GET_ITEM0(tstate, locals_openai$_streaming$$$class__4_SSEDecoder_266, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 269;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_ass_subscribed_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscript_7 = mod_consts.const_str_plain__retry;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_ass_subvalue_8;
PyObject *tmp_ass_subscribed_8;
PyObject *tmp_ass_subscript_8;
tmp_ass_subvalue_8 = mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58;
tmp_ass_subscribed_8 = DICT_GET_ITEM0(tstate, locals_openai$_streaming$$$class__4_SSEDecoder_266, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 270;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_ass_subscribed_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscript_8 = mod_consts.const_str_plain__last_event_id;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_streaming$$$class__4_SSEDecoder_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_streaming$$$class__4_SSEDecoder_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_streaming$$$class__4_SSEDecoder_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_streaming$$$class__4_SSEDecoder_5,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_openai$_streaming$$$class__4_SSEDecoder_5);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_15;
skip_nested_handling_4:;
{
PyObject *tmp_annotations_24;
tmp_annotations_24 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_openai$_streaming$$$function__24___init__(tstate, tmp_annotations_24);

tmp_result = DICT_SET_ITEM(locals_openai$_streaming$$$class__4_SSEDecoder_266, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_25;
tmp_annotations_25 = DICT_COPY(tstate, mod_consts.const_dict_2ef6b0b9635cdf1501621512ed986763);

tmp_dictset_value = MAKE_FUNCTION_openai$_streaming$$$function__25_iter_bytes(tstate, tmp_annotations_25);

tmp_result = DICT_SET_ITEM(locals_openai$_streaming$$$class__4_SSEDecoder_266, mod_consts.const_str_plain_iter_bytes, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_26;
tmp_annotations_26 = DICT_COPY(tstate, mod_consts.const_dict_17fe1a76d688a8c02b0cca9c28e89a5f);

tmp_dictset_value = MAKE_FUNCTION_openai$_streaming$$$function__26__iter_chunks(tstate, tmp_annotations_26);

tmp_result = DICT_SET_ITEM(locals_openai$_streaming$$$class__4_SSEDecoder_266, mod_consts.const_str_plain__iter_chunks, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_27;
tmp_annotations_27 = DICT_COPY(tstate, mod_consts.const_dict_9a07c45ffb238b48f25e6ac6f3557242);

tmp_dictset_value = MAKE_FUNCTION_openai$_streaming$$$function__27_aiter_bytes(tstate, tmp_annotations_27);

tmp_result = DICT_SET_ITEM(locals_openai$_streaming$$$class__4_SSEDecoder_266, mod_consts.const_str_plain_aiter_bytes, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_28;
tmp_annotations_28 = DICT_COPY(tstate, mod_consts.const_dict_2e1dc255f856026798b4553d0a1b2a4a);

tmp_dictset_value = MAKE_FUNCTION_openai$_streaming$$$function__28__aiter_chunks(tstate, tmp_annotations_28);

tmp_result = DICT_SET_ITEM(locals_openai$_streaming$$$class__4_SSEDecoder_266, mod_consts.const_str_plain__aiter_chunks, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_29;
tmp_annotations_29 = DICT_COPY(tstate, mod_consts.const_dict_31d74d9eed2fe71a422015ea6763b6f8);

tmp_dictset_value = MAKE_FUNCTION_openai$_streaming$$$function__29_decode(tstate, tmp_annotations_29);

tmp_result = DICT_SET_ITEM(locals_openai$_streaming$$$class__4_SSEDecoder_266, mod_consts.const_str_plain_decode, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_c840aa8364549d5201dd57f687111df1_tuple;
tmp_result = DICT_SET_ITEM(locals_openai$_streaming$$$class__4_SSEDecoder_266, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_52;
PyObject *tmp_called_value_12;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_10;
PyObject *tmp_kwargs_value_6;
tmp_called_value_12 = (PyObject *)&PyType_Type;
tmp_tuple_element_10 = mod_consts.const_str_plain_SSEDecoder;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_10);
tmp_tuple_element_10 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_10);
tmp_tuple_element_10 = locals_openai$_streaming$$$class__4_SSEDecoder_266;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_openai$_streaming->m_frame.f_lineno = 266;
tmp_assign_source_52 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto try_except_handler_15;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_52;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_51 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_51);
goto try_return_handler_15;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_15:;
Py_DECREF(locals_openai$_streaming$$$class__4_SSEDecoder_266);
locals_openai$_streaming$$$class__4_SSEDecoder_266 = NULL;
goto try_return_handler_14;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$_streaming$$$class__4_SSEDecoder_266);
locals_openai$_streaming$$$class__4_SSEDecoder_266 = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto try_except_handler_14;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
CHECK_OBJECT(outline_3_var___class__);
CHECK_OBJECT(outline_3_var___class__);
Py_DECREF(outline_3_var___class__);
outline_3_var___class__ = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 266;
goto try_except_handler_13;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_SSEDecoder, tmp_assign_source_51);
}
goto try_end_7;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
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
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
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
// Tried code:
{
PyObject *tmp_assign_source_53;
PyObject *tmp_tuple_element_11;
tmp_tuple_element_11 = module_var_accessor_openai$_streaming$Protocol(tstate);
if (unlikely(tmp_tuple_element_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Protocol);
}

if (tmp_tuple_element_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 372;

    goto try_except_handler_16;
}
tmp_assign_source_53 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_53, 0, tmp_tuple_element_11);
assert(tmp_class_container$class_creation_5__bases_orig == NULL);
tmp_class_container$class_creation_5__bases_orig = tmp_assign_source_53;
}
{
PyObject *tmp_assign_source_54;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_5__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_54 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;

    goto try_except_handler_16;
}
assert(tmp_class_container$class_creation_5__bases == NULL);
tmp_class_container$class_creation_5__bases = tmp_assign_source_54;
}
{
PyObject *tmp_assign_source_55;
tmp_assign_source_55 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__class_decl_dict == NULL);
tmp_class_container$class_creation_5__class_decl_dict = tmp_assign_source_55;
}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_5;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_5__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;

    goto try_except_handler_16;
}
tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_expression_value_15 = tmp_class_container$class_creation_5__bases;
tmp_subscript_value_5 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_15, tmp_subscript_value_5, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;

    goto try_except_handler_16;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;

    goto try_except_handler_16;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_5__bases;
tmp_assign_source_56 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;

    goto try_except_handler_16;
}
assert(tmp_class_container$class_creation_5__metaclass == NULL);
tmp_class_container$class_creation_5__metaclass = tmp_assign_source_56;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_16 = tmp_class_container$class_creation_5__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_16, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;

    goto try_except_handler_16;
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
PyObject *tmp_assign_source_57;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_17;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_12;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_17 = tmp_class_container$class_creation_5__metaclass;
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;

    goto try_except_handler_16;
}
tmp_tuple_element_12 = mod_consts.const_str_plain_SSEBytesDecoder;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_12 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_openai$_streaming->m_frame.f_lineno = 372;
tmp_assign_source_57 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;

    goto try_except_handler_16;
}
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_57;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_18;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_expression_value_18 = tmp_class_container$class_creation_5__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_18, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;

    goto try_except_handler_16;
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
PyObject *tmp_tuple_element_13;
PyObject *tmp_expression_value_19;
PyObject *tmp_name_value_9;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_19 = tmp_class_container$class_creation_5__metaclass;
tmp_name_value_9 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_13 = BUILTIN_GETATTR(tstate, tmp_expression_value_19, tmp_name_value_9, tmp_default_value_3);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;

    goto try_except_handler_16;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_20;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_5__prepared;
tmp_expression_value_20 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_20 == NULL));
tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_20);
Py_DECREF(tmp_expression_value_20);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_13);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_16;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;

    goto try_except_handler_16;
}
frame_frame_openai$_streaming->m_frame.f_lineno = 372;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 372;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_16;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_58;
tmp_assign_source_58 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_58;
}
branch_end_7:;
{
PyObject *tmp_assign_source_59;
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_6;
tmp_called_value_14 = module_var_accessor_openai$_streaming$runtime_checkable(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_runtime_checkable);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 371;

    goto try_except_handler_16;
}
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_set_locals_5 = tmp_class_container$class_creation_5__prepared;
locals_openai$_streaming$$$class__5_SSEBytesDecoder_372 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_7698e24063a53842307d990d0970ee02;
tmp_res = PyObject_SetItem(locals_openai$_streaming$$$class__5_SSEBytesDecoder_372, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;

    goto try_except_handler_18;
}
tmp_dictset_value = mod_consts.const_str_plain_SSEBytesDecoder;
tmp_res = PyObject_SetItem(locals_openai$_streaming$$$class__5_SSEBytesDecoder_372, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;

    goto try_except_handler_18;
}
tmp_dictset_value = mod_consts.const_int_pos_372;
tmp_res = PyObject_SetItem(locals_openai$_streaming$$$class__5_SSEBytesDecoder_372, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;

    goto try_except_handler_18;
}
frame_frame_openai$_streaming$$$class__5_SSEBytesDecoder_6 = MAKE_CLASS_FRAME(tstate, code_objects_ee3a4fe55db3aeb18b22e5f72233f197, module_openai$_streaming, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_streaming$$$class__5_SSEBytesDecoder_6);
assert(Py_REFCNT(frame_frame_openai$_streaming$$$class__5_SSEBytesDecoder_6) == 2);

// Framed code:
{
PyObject *tmp_annotations_30;
tmp_annotations_30 = DICT_COPY(tstate, mod_consts.const_dict_2ef6b0b9635cdf1501621512ed986763);

tmp_dictset_value = MAKE_FUNCTION_openai$_streaming$$$function__30_iter_bytes(tstate, tmp_annotations_30);

tmp_res = PyObject_SetItem(locals_openai$_streaming$$$class__5_SSEBytesDecoder_372, mod_consts.const_str_plain_iter_bytes, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 373;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
}
{
PyObject *tmp_annotations_31;
tmp_annotations_31 = DICT_COPY(tstate, mod_consts.const_dict_9a07c45ffb238b48f25e6ac6f3557242);

tmp_dictset_value = MAKE_FUNCTION_openai$_streaming$$$function__31_aiter_bytes(tstate, tmp_annotations_31);

tmp_res = PyObject_SetItem(locals_openai$_streaming$$$class__5_SSEBytesDecoder_372, mod_consts.const_str_plain_aiter_bytes, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_streaming$$$class__5_SSEBytesDecoder_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_streaming$$$class__5_SSEBytesDecoder_6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_streaming$$$class__5_SSEBytesDecoder_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_streaming$$$class__5_SSEBytesDecoder_6,
    type_description_2,
    outline_4_var___class__
);



assertFrameObject(frame_frame_openai$_streaming$$$class__5_SSEBytesDecoder_6);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_5;
frame_no_exception_5:;
goto skip_nested_handling_5;
nested_frame_exit_5:;

goto try_except_handler_18;
skip_nested_handling_5:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$_streaming$$$class__5_SSEBytesDecoder_372, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;

    goto try_except_handler_18;
}
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_cmp_expr_left_3 = tmp_class_container$class_creation_5__bases;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_cmp_expr_right_3 = tmp_class_container$class_creation_5__bases_orig;
tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;

    goto try_except_handler_18;
}
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_5__bases_orig;
tmp_res = PyObject_SetItem(locals_openai$_streaming$$$class__5_SSEBytesDecoder_372, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;

    goto try_except_handler_18;
}
branch_no_9:;
{
PyObject *tmp_assign_source_60;
PyObject *tmp_called_value_15;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_14;
PyObject *tmp_kwargs_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_called_value_15 = tmp_class_container$class_creation_5__metaclass;
tmp_tuple_element_14 = mod_consts.const_str_plain_SSEBytesDecoder;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_14 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_14);
tmp_tuple_element_14 = locals_openai$_streaming$$$class__5_SSEBytesDecoder_372;
PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_openai$_streaming->m_frame.f_lineno = 372;
tmp_assign_source_60 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;

    goto try_except_handler_18;
}
assert(outline_4_var___class__ == NULL);
outline_4_var___class__ = tmp_assign_source_60;
}
CHECK_OBJECT(outline_4_var___class__);
tmp_args_element_value_6 = outline_4_var___class__;
Py_INCREF(tmp_args_element_value_6);
goto try_return_handler_18;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_18:;
Py_DECREF(locals_openai$_streaming$$$class__5_SSEBytesDecoder_372);
locals_openai$_streaming$$$class__5_SSEBytesDecoder_372 = NULL;
goto try_return_handler_17;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$_streaming$$$class__5_SSEBytesDecoder_372);
locals_openai$_streaming$$$class__5_SSEBytesDecoder_372 = NULL;
// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto try_except_handler_17;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_17:;
CHECK_OBJECT(outline_4_var___class__);
CHECK_OBJECT(outline_4_var___class__);
Py_DECREF(outline_4_var___class__);
outline_4_var___class__ = NULL;
goto outline_result_10;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto outline_exception_5;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_5:;
exception_lineno = 372;
goto try_except_handler_16;
outline_result_10:;
frame_frame_openai$_streaming->m_frame.f_lineno = 371;
tmp_assign_source_59 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;

    goto try_except_handler_16;
}
UPDATE_STRING_DICT1(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_SSEBytesDecoder, tmp_assign_source_59);
}
goto try_end_8;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_5__bases_orig);
tmp_class_container$class_creation_5__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__bases);
tmp_class_container$class_creation_5__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_container$class_creation_5__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__metaclass);
tmp_class_container$class_creation_5__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__prepared);
tmp_class_container$class_creation_5__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
Py_DECREF(tmp_class_container$class_creation_5__bases_orig);
tmp_class_container$class_creation_5__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
Py_DECREF(tmp_class_container$class_creation_5__bases);
tmp_class_container$class_creation_5__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_container$class_creation_5__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
Py_DECREF(tmp_class_container$class_creation_5__metaclass);
tmp_class_container$class_creation_5__metaclass = NULL;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_6;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_streaming, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_streaming->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_streaming, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_openai$_streaming);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_6:;
{
PyObject *tmp_assign_source_61;
PyObject *tmp_annotations_32;
tmp_annotations_32 = DICT_COPY(tstate, mod_consts.const_dict_07ca162ce13b945808d6dfeaf91bd26b);

tmp_assign_source_61 = MAKE_FUNCTION_openai$_streaming$$$function__32_is_stream_class_type(tstate, tmp_annotations_32);

UPDATE_STRING_DICT1(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_is_stream_class_type, tmp_assign_source_61);
}
{
PyObject *tmp_assign_source_62;
PyObject *tmp_kw_defaults_2;
PyObject *tmp_annotations_33;
tmp_kw_defaults_2 = DICT_COPY(tstate, mod_consts.const_dict_3c3750ac9fde487cc312781889be09e2);
tmp_annotations_33 = DICT_COPY(tstate, mod_consts.const_dict_7a8e729178509538912ebe468dcc66d5);

tmp_assign_source_62 = MAKE_FUNCTION_openai$_streaming$$$function__33_extract_stream_chunk_type(tstate, tmp_kw_defaults_2, tmp_annotations_33);

UPDATE_STRING_DICT1(moduledict_openai$_streaming, (Nuitka_StringObject *)mod_consts.const_str_plain_extract_stream_chunk_type, tmp_assign_source_62);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("openai$_streaming", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "openai._streaming" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_openai$_streaming);
    return module_openai$_streaming;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$_streaming, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("openai$_streaming", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

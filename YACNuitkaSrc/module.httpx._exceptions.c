/* Generated code for Python module 'httpx$_exceptions'
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



/* The "module_httpx$_exceptions" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_httpx$_exceptions;
PyDictObject *moduledict_httpx$_exceptions;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain__request;
PyObject *const_str_digest_752ef3511d947d984bab0d72ecf1b0df;
PyObject *const_str_plain_request;
PyObject *const_str_plain_response;
PyObject *const_tuple_str_digest_e3e8646c47287a480015a757df73d7ea_tuple;
PyObject *const_tuple_str_digest_4ca15a1db623de35fbffe911e675c0d3_tuple;
PyObject *const_tuple_str_digest_915bbd849aadc1dc46825d3623a4b154_tuple;
PyObject *const_tuple_str_digest_6632d40f71abc8aac9f5c67db3297996_tuple;
PyObject *const_str_digest_a8e17ece41c7971a4d4b38316c2f2501;
PyObject *const_str_plain_RequestError;
PyObject *const_str_plain_request_context;
PyObject *const_str_digest_1b5abd99ac998d7eca84e7722c0a956b;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_contextlib;
PyObject *const_str_plain_typing;
PyObject *const_list_fe1d11562e72d125e9c9ed7b6590b2ef_list;
PyObject *const_tuple_type_Exception_tuple;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_HTTPError;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_f49f37ecb12db2b9a869fd11ee8982d4;
PyObject *const_str_digest_97c5ab54f7c2655622ca707bf2cb692c;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_74;
PyObject *const_str_plain___firstlineno__;
PyObject *const_dict_f5ccb293b0370d17e642a35e4d2af9f5;
PyObject *const_str_digest_222267f1febf39c1ef1e61ba01762676;
PyObject *const_str_plain_property;
PyObject *const_dict_576eecb6872cd78f32199d47aead33d3;
PyObject *const_str_digest_5f329d1414244dc10c293dc8be34e31d;
PyObject *const_str_plain_setter;
PyObject *const_dict_f8c409c4d84bb9d9d5363c59aef4fd3d;
PyObject *const_tuple_str_plain__request_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_b4dfc8d797e5c6435ec2a536d23d7215;
PyObject *const_int_pos_107;
PyObject *const_dict_6e20e68c6ca47e1feec5edbc3f8295d0;
PyObject *const_dict_e6313f991fa807cb5aa68c3b08ad57f8;
PyObject *const_str_digest_02d7a9258b08750dd91ed5e916d12d0c;
PyObject *const_str_plain_TransportError;
PyObject *const_str_digest_df8b6d506ec894fdee1670813e509f35;
PyObject *const_int_pos_123;
PyObject *const_str_plain_TimeoutException;
PyObject *const_str_digest_3b56c11f484335b7a837949527440161;
PyObject *const_int_pos_132;
PyObject *const_str_plain_ConnectTimeout;
PyObject *const_str_digest_161a2dba1ab6f8e4b22d2ee8d8fc8c6f;
PyObject *const_int_pos_140;
PyObject *const_str_plain_ReadTimeout;
PyObject *const_str_digest_abc02579cfe21e552fbf75191c0cb3fb;
PyObject *const_int_pos_146;
PyObject *const_str_plain_WriteTimeout;
PyObject *const_str_digest_c5f31fc2189649892e9543d59e3ebb07;
PyObject *const_int_pos_152;
PyObject *const_str_plain_PoolTimeout;
PyObject *const_str_digest_958bee624d2b10b56b24187cfed672f9;
PyObject *const_int_pos_158;
PyObject *const_str_plain_NetworkError;
PyObject *const_str_digest_ee6461dfab67b5e667f6f0fd0f48d8e7;
PyObject *const_int_pos_167;
PyObject *const_str_plain_ReadError;
PyObject *const_str_digest_ac09e72075e93a375f51ddfd7a9c8a27;
PyObject *const_int_pos_175;
PyObject *const_str_plain_WriteError;
PyObject *const_str_digest_41a8abec3c2ab213f657161378a20683;
PyObject *const_int_pos_181;
PyObject *const_str_plain_ConnectError;
PyObject *const_str_digest_c58935f0a35d2ca436707f40f3a8503e;
PyObject *const_int_pos_187;
PyObject *const_str_plain_CloseError;
PyObject *const_str_digest_88792d50f73d3cfaed63c81841ff4cd2;
PyObject *const_int_pos_193;
PyObject *const_str_plain_ProxyError;
PyObject *const_str_digest_8b0369ee6052d74f878bcd8232b9ba95;
PyObject *const_int_pos_202;
PyObject *const_str_plain_UnsupportedProtocol;
PyObject *const_str_digest_d2f6accaf4f7ada55cbebaa7fcb25dc4;
PyObject *const_int_pos_208;
PyObject *const_str_plain_ProtocolError;
PyObject *const_str_digest_8da6f92b174dd49fa840397cd51a1e02;
PyObject *const_int_pos_216;
PyObject *const_str_plain_LocalProtocolError;
PyObject *const_str_digest_d59c0843f8e1a77a20628bd0b9f5b907;
PyObject *const_int_pos_222;
PyObject *const_str_plain_RemoteProtocolError;
PyObject *const_str_digest_0284d270d7f57bd47e0145cc2275024a;
PyObject *const_int_pos_232;
PyObject *const_str_plain_DecodingError;
PyObject *const_str_digest_bb65cb552ab0cd75e903a0f01dc9643a;
PyObject *const_int_pos_243;
PyObject *const_str_plain_TooManyRedirects;
PyObject *const_str_digest_cb463857f72ab38cf1fcdd9a8d48462f;
PyObject *const_int_pos_249;
PyObject *const_str_plain_HTTPStatusError;
PyObject *const_str_digest_bc6d545608197f3a1864b22a98b06fb2;
PyObject *const_int_pos_258;
PyObject *const_dict_607f416d07ad4640d7268867474e49af;
PyObject *const_str_digest_fb63004ed610d46269fbcb85f8dcec4e;
PyObject *const_tuple_str_plain_request_str_plain_response_tuple;
PyObject *const_str_plain_InvalidURL;
PyObject *const_str_digest_bc69b941a9a3dc4e3df8d10948b02a1f;
PyObject *const_int_pos_271;
PyObject *const_str_digest_f34b9278e8353bd84f5a440dc6550870;
PyObject *const_str_plain_CookieConflict;
PyObject *const_str_digest_797162745aa73bf4e1daff89b3355384;
PyObject *const_int_pos_280;
PyObject *const_str_digest_86d61947da3b80dc441df1ea8527cb58;
PyObject *const_tuple_type_RuntimeError_tuple;
PyObject *const_str_plain_StreamError;
PyObject *const_str_digest_d6812a09f1d20c9e113031fb8df8483c;
PyObject *const_int_pos_297;
PyObject *const_str_digest_5147bfc0642872b9b6ae425b93005cf0;
PyObject *const_str_plain_StreamConsumed;
PyObject *const_str_digest_8fea20daf99542bbd1a6bad7bb77ce3e;
PyObject *const_int_pos_309;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_digest_da7d03386a0ab69670f1cc5c1f667787;
PyObject *const_str_plain_StreamClosed;
PyObject *const_str_digest_34ff024d729b507530ebb1db924cbcc2;
PyObject *const_int_pos_327;
PyObject *const_str_digest_c4e5a4b83158b8215b845893e7f30c10;
PyObject *const_str_plain_ResponseNotRead;
PyObject *const_str_digest_8b661f57fe8291f868b0f49608214bfe;
PyObject *const_int_pos_340;
PyObject *const_str_digest_bfd1476f85f225d4afe8e4c49b4c5b13;
PyObject *const_str_plain_RequestNotRead;
PyObject *const_str_digest_c966b1f1e1a46929495f3b9d21304ad5;
PyObject *const_int_pos_353;
PyObject *const_str_digest_84fc71f4502df68f6739bdc687ef4c04;
PyObject *const_str_plain_contextmanager;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_bab236a8c7848c15b5bcd785773aece0;
PyObject *const_str_digest_84c69ff1726e17bf1f885c9bb1941719;
PyObject *const_str_digest_d59bc438d6acb5003ec5ed6a8cbc1614;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_message_str_plain___class___tuple;
PyObject *const_tuple_c753333ca3aa5899d7fb2c2b8ab45553_tuple;
PyObject *const_tuple_42f5878bab642f1e2e7b6cd54bbb6fc7_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_request_tuple;
PyObject *const_tuple_str_plain_request_str_plain_exc_tuple;
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
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("httpx._exceptions"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain__request);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_digest_752ef3511d947d984bab0d72ecf1b0df);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_request);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_response);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e3e8646c47287a480015a757df73d7ea_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_4ca15a1db623de35fbffe911e675c0d3_tuple);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_915bbd849aadc1dc46825d3623a4b154_tuple);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_6632d40f71abc8aac9f5c67db3297996_tuple);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_a8e17ece41c7971a4d4b38316c2f2501);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_RequestError);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_request_context);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_1b5abd99ac998d7eca84e7722c0a956b);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_list_fe1d11562e72d125e9c9ed7b6590b2ef_list);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_type_Exception_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPError);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_f49f37ecb12db2b9a869fd11ee8982d4);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_97c5ab54f7c2655622ca707bf2cb692c);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_int_pos_74);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_dict_f5ccb293b0370d17e642a35e4d2af9f5);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_digest_222267f1febf39c1ef1e61ba01762676);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_dict_576eecb6872cd78f32199d47aead33d3);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_5f329d1414244dc10c293dc8be34e31d);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_setter);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_dict_f8c409c4d84bb9d9d5363c59aef4fd3d);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__request_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_b4dfc8d797e5c6435ec2a536d23d7215);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_int_pos_107);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_dict_6e20e68c6ca47e1feec5edbc3f8295d0);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_dict_e6313f991fa807cb5aa68c3b08ad57f8);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_02d7a9258b08750dd91ed5e916d12d0c);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_TransportError);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_df8b6d506ec894fdee1670813e509f35);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_int_pos_123);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_TimeoutException);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_3b56c11f484335b7a837949527440161);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_int_pos_132);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectTimeout);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_161a2dba1ab6f8e4b22d2ee8d8fc8c6f);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_int_pos_140);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReadTimeout);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_abc02579cfe21e552fbf75191c0cb3fb);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_int_pos_146);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_WriteTimeout);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_c5f31fc2189649892e9543d59e3ebb07);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_int_pos_152);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_PoolTimeout);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_958bee624d2b10b56b24187cfed672f9);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_int_pos_158);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_NetworkError);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_ee6461dfab67b5e667f6f0fd0f48d8e7);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_int_pos_167);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReadError);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_ac09e72075e93a375f51ddfd7a9c8a27);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_int_pos_175);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_WriteError);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_41a8abec3c2ab213f657161378a20683);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_int_pos_181);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectError);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_c58935f0a35d2ca436707f40f3a8503e);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_int_pos_187);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_CloseError);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_88792d50f73d3cfaed63c81841ff4cd2);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_int_pos_193);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_ProxyError);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_8b0369ee6052d74f878bcd8232b9ba95);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_int_pos_202);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_UnsupportedProtocol);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_d2f6accaf4f7ada55cbebaa7fcb25dc4);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_int_pos_208);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_ProtocolError);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_digest_8da6f92b174dd49fa840397cd51a1e02);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_int_pos_216);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_LocalProtocolError);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_d59c0843f8e1a77a20628bd0b9f5b907);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_int_pos_222);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_RemoteProtocolError);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_0284d270d7f57bd47e0145cc2275024a);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_int_pos_232);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_DecodingError);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_bb65cb552ab0cd75e903a0f01dc9643a);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_int_pos_243);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_TooManyRedirects);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_digest_cb463857f72ab38cf1fcdd9a8d48462f);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_int_pos_249);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPStatusError);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_bc6d545608197f3a1864b22a98b06fb2);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_int_pos_258);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_dict_607f416d07ad4640d7268867474e49af);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_digest_fb63004ed610d46269fbcb85f8dcec4e);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_request_str_plain_response_tuple);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidURL);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_digest_bc69b941a9a3dc4e3df8d10948b02a1f);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_int_pos_271);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_digest_f34b9278e8353bd84f5a440dc6550870);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_CookieConflict);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_797162745aa73bf4e1daff89b3355384);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_int_pos_280);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_digest_86d61947da3b80dc441df1ea8527cb58);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_tuple_type_RuntimeError_tuple);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_StreamError);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_digest_d6812a09f1d20c9e113031fb8df8483c);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_int_pos_297);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_digest_5147bfc0642872b9b6ae425b93005cf0);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_StreamConsumed);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_digest_8fea20daf99542bbd1a6bad7bb77ce3e);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_int_pos_309);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_digest_da7d03386a0ab69670f1cc5c1f667787);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_StreamClosed);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_digest_34ff024d729b507530ebb1db924cbcc2);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_int_pos_327);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_digest_c4e5a4b83158b8215b845893e7f30c10);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseNotRead);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_8b661f57fe8291f868b0f49608214bfe);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_int_pos_340);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_digest_bfd1476f85f225d4afe8e4c49b4c5b13);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_RequestNotRead);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_digest_c966b1f1e1a46929495f3b9d21304ad5);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_int_pos_353);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_digest_84fc71f4502df68f6739bdc687ef4c04);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextmanager);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_dict_bab236a8c7848c15b5bcd785773aece0);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_digest_84c69ff1726e17bf1f885c9bb1941719);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_digest_d59bc438d6acb5003ec5ed6a8cbc1614);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_message_str_plain___class___tuple);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_tuple_c753333ca3aa5899d7fb2c2b8ab45553_tuple);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_tuple_42f5878bab642f1e2e7b6cd54bbb6fc7_tuple);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_request_tuple);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_request_str_plain_exc_tuple);
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
void checkModuleConstants_httpx$_exceptions(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain__request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__request);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_digest_752ef3511d947d984bab0d72ecf1b0df));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_752ef3511d947d984bab0d72ecf1b0df);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_request);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e3e8646c47287a480015a757df73d7ea_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_e3e8646c47287a480015a757df73d7ea_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_4ca15a1db623de35fbffe911e675c0d3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_4ca15a1db623de35fbffe911e675c0d3_tuple);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_915bbd849aadc1dc46825d3623a4b154_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_915bbd849aadc1dc46825d3623a4b154_tuple);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_6632d40f71abc8aac9f5c67db3297996_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_6632d40f71abc8aac9f5c67db3297996_tuple);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_a8e17ece41c7971a4d4b38316c2f2501));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a8e17ece41c7971a4d4b38316c2f2501);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_RequestError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RequestError);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_request_context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_request_context);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_1b5abd99ac998d7eca84e7722c0a956b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1b5abd99ac998d7eca84e7722c0a956b);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_contextlib);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_list_fe1d11562e72d125e9c9ed7b6590b2ef_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_fe1d11562e72d125e9c9ed7b6590b2ef_list);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_type_Exception_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_Exception_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HTTPError);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_f49f37ecb12db2b9a869fd11ee8982d4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f49f37ecb12db2b9a869fd11ee8982d4);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_97c5ab54f7c2655622ca707bf2cb692c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_97c5ab54f7c2655622ca707bf2cb692c);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_int_pos_74));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_74);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_dict_f5ccb293b0370d17e642a35e4d2af9f5));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f5ccb293b0370d17e642a35e4d2af9f5);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_digest_222267f1febf39c1ef1e61ba01762676));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_222267f1febf39c1ef1e61ba01762676);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_property);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_dict_576eecb6872cd78f32199d47aead33d3));
CHECK_OBJECT_DEEP(mod_consts.const_dict_576eecb6872cd78f32199d47aead33d3);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_5f329d1414244dc10c293dc8be34e31d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5f329d1414244dc10c293dc8be34e31d);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_setter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_setter);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_dict_f8c409c4d84bb9d9d5363c59aef4fd3d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f8c409c4d84bb9d9d5363c59aef4fd3d);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__request_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__request_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_b4dfc8d797e5c6435ec2a536d23d7215));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b4dfc8d797e5c6435ec2a536d23d7215);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_int_pos_107));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_107);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_dict_6e20e68c6ca47e1feec5edbc3f8295d0));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6e20e68c6ca47e1feec5edbc3f8295d0);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_dict_e6313f991fa807cb5aa68c3b08ad57f8));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e6313f991fa807cb5aa68c3b08ad57f8);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_02d7a9258b08750dd91ed5e916d12d0c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_02d7a9258b08750dd91ed5e916d12d0c);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_TransportError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TransportError);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_df8b6d506ec894fdee1670813e509f35));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_df8b6d506ec894fdee1670813e509f35);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_int_pos_123));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_123);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_TimeoutException));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TimeoutException);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_3b56c11f484335b7a837949527440161));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3b56c11f484335b7a837949527440161);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_int_pos_132));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_132);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectTimeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConnectTimeout);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_161a2dba1ab6f8e4b22d2ee8d8fc8c6f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_161a2dba1ab6f8e4b22d2ee8d8fc8c6f);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_int_pos_140));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_140);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReadTimeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ReadTimeout);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_abc02579cfe21e552fbf75191c0cb3fb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_abc02579cfe21e552fbf75191c0cb3fb);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_int_pos_146));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_146);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_WriteTimeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WriteTimeout);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_c5f31fc2189649892e9543d59e3ebb07));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c5f31fc2189649892e9543d59e3ebb07);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_int_pos_152));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_152);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_PoolTimeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PoolTimeout);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_958bee624d2b10b56b24187cfed672f9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_958bee624d2b10b56b24187cfed672f9);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_int_pos_158));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_158);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_NetworkError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NetworkError);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_ee6461dfab67b5e667f6f0fd0f48d8e7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ee6461dfab67b5e667f6f0fd0f48d8e7);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_int_pos_167));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_167);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReadError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ReadError);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_ac09e72075e93a375f51ddfd7a9c8a27));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ac09e72075e93a375f51ddfd7a9c8a27);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_int_pos_175));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_175);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_WriteError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WriteError);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_41a8abec3c2ab213f657161378a20683));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_41a8abec3c2ab213f657161378a20683);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_int_pos_181));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_181);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConnectError);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_c58935f0a35d2ca436707f40f3a8503e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c58935f0a35d2ca436707f40f3a8503e);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_int_pos_187));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_187);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_CloseError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CloseError);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_88792d50f73d3cfaed63c81841ff4cd2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_88792d50f73d3cfaed63c81841ff4cd2);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_int_pos_193));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_193);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_ProxyError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ProxyError);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_8b0369ee6052d74f878bcd8232b9ba95));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8b0369ee6052d74f878bcd8232b9ba95);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_int_pos_202));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_202);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_UnsupportedProtocol));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UnsupportedProtocol);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_d2f6accaf4f7ada55cbebaa7fcb25dc4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d2f6accaf4f7ada55cbebaa7fcb25dc4);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_int_pos_208));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_208);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_ProtocolError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ProtocolError);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_digest_8da6f92b174dd49fa840397cd51a1e02));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8da6f92b174dd49fa840397cd51a1e02);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_int_pos_216));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_216);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_LocalProtocolError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LocalProtocolError);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_d59c0843f8e1a77a20628bd0b9f5b907));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d59c0843f8e1a77a20628bd0b9f5b907);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_int_pos_222));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_222);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_RemoteProtocolError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RemoteProtocolError);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_0284d270d7f57bd47e0145cc2275024a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0284d270d7f57bd47e0145cc2275024a);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_int_pos_232));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_232);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_DecodingError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DecodingError);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_bb65cb552ab0cd75e903a0f01dc9643a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bb65cb552ab0cd75e903a0f01dc9643a);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_int_pos_243));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_243);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_TooManyRedirects));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TooManyRedirects);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_digest_cb463857f72ab38cf1fcdd9a8d48462f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cb463857f72ab38cf1fcdd9a8d48462f);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_int_pos_249));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_249);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPStatusError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HTTPStatusError);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_bc6d545608197f3a1864b22a98b06fb2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bc6d545608197f3a1864b22a98b06fb2);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_int_pos_258));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_258);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_dict_607f416d07ad4640d7268867474e49af));
CHECK_OBJECT_DEEP(mod_consts.const_dict_607f416d07ad4640d7268867474e49af);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_digest_fb63004ed610d46269fbcb85f8dcec4e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fb63004ed610d46269fbcb85f8dcec4e);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_request_str_plain_response_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_request_str_plain_response_tuple);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidURL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidURL);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_digest_bc69b941a9a3dc4e3df8d10948b02a1f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bc69b941a9a3dc4e3df8d10948b02a1f);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_int_pos_271));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_271);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_digest_f34b9278e8353bd84f5a440dc6550870));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f34b9278e8353bd84f5a440dc6550870);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_CookieConflict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CookieConflict);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_797162745aa73bf4e1daff89b3355384));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_797162745aa73bf4e1daff89b3355384);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_int_pos_280));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_280);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_digest_86d61947da3b80dc441df1ea8527cb58));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_86d61947da3b80dc441df1ea8527cb58);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_tuple_type_RuntimeError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_RuntimeError_tuple);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_StreamError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StreamError);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_digest_d6812a09f1d20c9e113031fb8df8483c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d6812a09f1d20c9e113031fb8df8483c);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_int_pos_297));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_297);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_digest_5147bfc0642872b9b6ae425b93005cf0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5147bfc0642872b9b6ae425b93005cf0);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_StreamConsumed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StreamConsumed);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_digest_8fea20daf99542bbd1a6bad7bb77ce3e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8fea20daf99542bbd1a6bad7bb77ce3e);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_int_pos_309));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_309);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_digest_da7d03386a0ab69670f1cc5c1f667787));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_da7d03386a0ab69670f1cc5c1f667787);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_StreamClosed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StreamClosed);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_digest_34ff024d729b507530ebb1db924cbcc2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_34ff024d729b507530ebb1db924cbcc2);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_int_pos_327));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_327);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_digest_c4e5a4b83158b8215b845893e7f30c10));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c4e5a4b83158b8215b845893e7f30c10);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseNotRead));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseNotRead);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_8b661f57fe8291f868b0f49608214bfe));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8b661f57fe8291f868b0f49608214bfe);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_int_pos_340));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_340);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_digest_bfd1476f85f225d4afe8e4c49b4c5b13));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bfd1476f85f225d4afe8e4c49b4c5b13);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_RequestNotRead));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RequestNotRead);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_digest_c966b1f1e1a46929495f3b9d21304ad5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c966b1f1e1a46929495f3b9d21304ad5);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_int_pos_353));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_353);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_digest_84fc71f4502df68f6739bdc687ef4c04));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_84fc71f4502df68f6739bdc687ef4c04);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextmanager));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_contextmanager);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_dict_bab236a8c7848c15b5bcd785773aece0));
CHECK_OBJECT_DEEP(mod_consts.const_dict_bab236a8c7848c15b5bcd785773aece0);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_digest_84c69ff1726e17bf1f885c9bb1941719));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_84c69ff1726e17bf1f885c9bb1941719);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_digest_d59bc438d6acb5003ec5ed6a8cbc1614));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d59bc438d6acb5003ec5ed6a8cbc1614);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_message_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_message_str_plain___class___tuple);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_tuple_c753333ca3aa5899d7fb2c2b8ab45553_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c753333ca3aa5899d7fb2c2b8ab45553_tuple);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_tuple_42f5878bab642f1e2e7b6cd54bbb6fc7_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_42f5878bab642f1e2e7b6cd54bbb6fc7_tuple);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_request_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_request_tuple);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_request_str_plain_exc_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_request_str_plain_exc_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 9
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
static PyObject *module_var_accessor_httpx$_exceptions$HTTPError(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_exceptions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_exceptions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_exceptions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HTTPError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HTTPError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HTTPError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HTTPError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPError);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_exceptions$NetworkError(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_exceptions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_exceptions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_NetworkError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_exceptions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NetworkError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NetworkError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NetworkError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NetworkError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_NetworkError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_NetworkError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_NetworkError);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_exceptions$ProtocolError(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_exceptions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_exceptions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_ProtocolError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_exceptions->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_ProtocolError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_ProtocolError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ProtocolError);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_exceptions$RequestError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_exceptions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_exceptions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_exceptions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RequestError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RequestError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RequestError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RequestError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestError);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_exceptions$StreamError(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_exceptions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_exceptions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_StreamError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_exceptions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_StreamError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_StreamError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_StreamError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_StreamError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_StreamError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_StreamError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_StreamError);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_exceptions$TimeoutException(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_exceptions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_exceptions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_TimeoutException);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_exceptions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TimeoutException);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TimeoutException, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TimeoutException);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TimeoutException, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_TimeoutException);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_TimeoutException);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TimeoutException);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_exceptions$TransportError(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_exceptions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_exceptions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_TransportError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_exceptions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TransportError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TransportError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TransportError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TransportError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_TransportError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_TransportError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TransportError);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_exceptions$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_exceptions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_exceptions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_exceptions->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_exceptions$contextlib(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_exceptions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_exceptions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_exceptions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_contextlib);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_contextlib, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_contextlib);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_contextlib, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_dc352be0f72c8d318bb5aa5ef222dff0;
static PyCodeObject *code_objects_984b67f5110439dff40d3943970951f6;
static PyCodeObject *code_objects_737f208d150d2f1cf25506f356252175;
static PyCodeObject *code_objects_e5dd598901a2ef605b3f4cf7a7140551;
static PyCodeObject *code_objects_0a40fcb171d7ef5d989b4130a0d4102e;
static PyCodeObject *code_objects_e2655e6d59f5a89cb61904c4be29160c;
static PyCodeObject *code_objects_26d1931c906d67d3385ce25db05eb29c;
static PyCodeObject *code_objects_1fc1d8577441b38470c40f979da4eea8;
static PyCodeObject *code_objects_868551132bbd5aa6f7a6d9e156e414f2;
static PyCodeObject *code_objects_a5ac04193c252056e3e6b0fb53e25bd4;
static PyCodeObject *code_objects_474ad1947c0e9c0f97c283b814b5934d;
static PyCodeObject *code_objects_eedebab2d124c29cbe905171f4400961;
static PyCodeObject *code_objects_c2a2fb02e33f576073548f3cd03702a4;
static PyCodeObject *code_objects_f8021e7b4fe23bf9569b71abfa953b1a;
static PyCodeObject *code_objects_66531f765c6f69df64752f12685299ae;
static PyCodeObject *code_objects_f10c0309d621b9b685333071d421306d;
static PyCodeObject *code_objects_2ce482703d6ae4cea114b5cf7c04567f;
static PyCodeObject *code_objects_4d713996ef3a76babc25bf2d731c5cd5;
static PyCodeObject *code_objects_7f6567c2fec62bc7d20a83dafc4339e1;
static PyCodeObject *code_objects_eb7f7e0c4e7550174e3407cdb267e11e;
static PyCodeObject *code_objects_906ce11921f3b0d0093e293d900545e5;
static PyCodeObject *code_objects_7cfa254661355ced47cab6212d47c45f;
static PyCodeObject *code_objects_b7c512b0e9b4fbbe0e0806d0ab36bbfc;
static PyCodeObject *code_objects_943c5a9afc775d7a82418d129f3e54cb;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_84c69ff1726e17bf1f885c9bb1941719); CHECK_OBJECT(module_filename_obj);
code_objects_dc352be0f72c8d318bb5aa5ef222dff0 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_d59bc438d6acb5003ec5ed6a8cbc1614, mod_consts.const_str_digest_d59bc438d6acb5003ec5ed6a8cbc1614, NULL, NULL, 0, 0, 0);
code_objects_984b67f5110439dff40d3943970951f6 = MAKE_CODE_OBJECT(module_filename_obj, 280, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_CookieConflict, mod_consts.const_str_plain_CookieConflict, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_737f208d150d2f1cf25506f356252175 = MAKE_CODE_OBJECT(module_filename_obj, 74, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_HTTPError, mod_consts.const_str_plain_HTTPError, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_e5dd598901a2ef605b3f4cf7a7140551 = MAKE_CODE_OBJECT(module_filename_obj, 258, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_HTTPStatusError, mod_consts.const_str_plain_HTTPStatusError, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_0a40fcb171d7ef5d989b4130a0d4102e = MAKE_CODE_OBJECT(module_filename_obj, 271, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_InvalidURL, mod_consts.const_str_plain_InvalidURL, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_e2655e6d59f5a89cb61904c4be29160c = MAKE_CODE_OBJECT(module_filename_obj, 107, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_RequestError, mod_consts.const_str_plain_RequestError, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_26d1931c906d67d3385ce25db05eb29c = MAKE_CODE_OBJECT(module_filename_obj, 353, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_RequestNotRead, mod_consts.const_str_plain_RequestNotRead, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_1fc1d8577441b38470c40f979da4eea8 = MAKE_CODE_OBJECT(module_filename_obj, 340, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ResponseNotRead, mod_consts.const_str_plain_ResponseNotRead, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_868551132bbd5aa6f7a6d9e156e414f2 = MAKE_CODE_OBJECT(module_filename_obj, 327, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_StreamClosed, mod_consts.const_str_plain_StreamClosed, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_a5ac04193c252056e3e6b0fb53e25bd4 = MAKE_CODE_OBJECT(module_filename_obj, 309, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_StreamConsumed, mod_consts.const_str_plain_StreamConsumed, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_474ad1947c0e9c0f97c283b814b5934d = MAKE_CODE_OBJECT(module_filename_obj, 297, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_StreamError, mod_consts.const_str_plain_StreamError, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_eedebab2d124c29cbe905171f4400961 = MAKE_CODE_OBJECT(module_filename_obj, 287, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_86d61947da3b80dc441df1ea8527cb58, mod_consts.const_tuple_str_plain_self_str_plain_message_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 2, 0, 0);
code_objects_c2a2fb02e33f576073548f3cd03702a4 = MAKE_CODE_OBJECT(module_filename_obj, 92, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_222267f1febf39c1ef1e61ba01762676, mod_consts.const_tuple_str_plain_self_str_plain_message_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 2, 0, 0);
code_objects_f8021e7b4fe23bf9569b71abfa953b1a = MAKE_CODE_OBJECT(module_filename_obj, 265, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_fb63004ed610d46269fbcb85f8dcec4e, mod_consts.const_tuple_c753333ca3aa5899d7fb2c2b8ab45553_tuple, mod_consts.const_tuple_str_plain___class___tuple, 2, 2, 0);
code_objects_66531f765c6f69df64752f12685299ae = MAKE_CODE_OBJECT(module_filename_obj, 276, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_f34b9278e8353bd84f5a440dc6550870, mod_consts.const_tuple_str_plain_self_str_plain_message_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 2, 0, 0);
code_objects_f10c0309d621b9b685333071d421306d = MAKE_CODE_OBJECT(module_filename_obj, 112, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_02d7a9258b08750dd91ed5e916d12d0c, mod_consts.const_tuple_42f5878bab642f1e2e7b6cd54bbb6fc7_tuple, mod_consts.const_tuple_str_plain___class___tuple, 2, 1, 0);
code_objects_2ce482703d6ae4cea114b5cf7c04567f = MAKE_CODE_OBJECT(module_filename_obj, 358, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_84fc71f4502df68f6739bdc687ef4c04, mod_consts.const_tuple_str_plain_self_str_plain_message_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 0, 0);
code_objects_4d713996ef3a76babc25bf2d731c5cd5 = MAKE_CODE_OBJECT(module_filename_obj, 345, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_bfd1476f85f225d4afe8e4c49b4c5b13, mod_consts.const_tuple_str_plain_self_str_plain_message_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 0, 0);
code_objects_7f6567c2fec62bc7d20a83dafc4339e1 = MAKE_CODE_OBJECT(module_filename_obj, 333, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_c4e5a4b83158b8215b845893e7f30c10, mod_consts.const_tuple_str_plain_self_str_plain_message_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 0, 0);
code_objects_eb7f7e0c4e7550174e3407cdb267e11e = MAKE_CODE_OBJECT(module_filename_obj, 315, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_da7d03386a0ab69670f1cc5c1f667787, mod_consts.const_tuple_str_plain_self_str_plain_message_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 0, 0);
code_objects_906ce11921f3b0d0093e293d900545e5 = MAKE_CODE_OBJECT(module_filename_obj, 305, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_5147bfc0642872b9b6ae425b93005cf0, mod_consts.const_tuple_str_plain_self_str_plain_message_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 2, 0, 0);
code_objects_7cfa254661355ced47cab6212d47c45f = MAKE_CODE_OBJECT(module_filename_obj, 97, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_request, mod_consts.const_str_digest_5f329d1414244dc10c293dc8be34e31d, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_b7c512b0e9b4fbbe0e0806d0ab36bbfc = MAKE_CODE_OBJECT(module_filename_obj, 103, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_request, mod_consts.const_str_digest_5f329d1414244dc10c293dc8be34e31d, mod_consts.const_tuple_str_plain_self_str_plain_request_tuple, NULL, 2, 0, 0);
code_objects_943c5a9afc775d7a82418d129f3e54cb = MAKE_CODE_OBJECT(module_filename_obj, 367, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_request_context, mod_consts.const_str_plain_request_context, mod_consts.const_tuple_str_plain_request_str_plain_exc_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_httpx$_exceptions$$$function__13_request_context$$$genobj__1_request_context(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__10___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__11___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__12___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__13_request_context(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__1___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__2_request(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__3_request(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__4___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__5___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__6___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__7___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__8___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__9___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_httpx$_exceptions$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_message = python_pars[1];
struct Nuitka_FrameObject *frame_frame_httpx$_exceptions$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_exceptions$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_exceptions$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_httpx$_exceptions$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_exceptions$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_exceptions$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_c2a2fb02e33f576073548f3cd03702a4, module_httpx$_exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_exceptions$$$function__1___init__->m_type_description == NULL);
frame_frame_httpx$_exceptions$$$function__1___init__ = cache_frame_frame_httpx$_exceptions$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_exceptions$$$function__1___init__);
assert(Py_REFCNT(frame_frame_httpx$_exceptions$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 93;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_httpx$_exceptions, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_message);
tmp_args_element_value_1 = par_message;
frame_frame_httpx$_exceptions$$$function__1___init__->m_frame.f_lineno = 93;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, const_str_plain___init__, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooc";
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
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__request, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_exceptions$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_exceptions$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_exceptions$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_exceptions$$$function__1___init__,
    type_description_1,
    par_self,
    par_message,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_exceptions$$$function__1___init__ == cache_frame_frame_httpx$_exceptions$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_exceptions$$$function__1___init__);
    cache_frame_frame_httpx$_exceptions$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_httpx$_exceptions$$$function__1___init__);

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
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_message);
Py_DECREF(par_message);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_exceptions$$$function__2_request(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_httpx$_exceptions$$$function__2_request;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_exceptions$$$function__2_request = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_exceptions$$$function__2_request)) {
    Py_XDECREF(cache_frame_frame_httpx$_exceptions$$$function__2_request);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_exceptions$$$function__2_request == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_exceptions$$$function__2_request = MAKE_FUNCTION_FRAME(tstate, code_objects_7cfa254661355ced47cab6212d47c45f, module_httpx$_exceptions, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_exceptions$$$function__2_request->m_type_description == NULL);
frame_frame_httpx$_exceptions$$$function__2_request = cache_frame_frame_httpx$_exceptions$$$function__2_request;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_exceptions$$$function__2_request);
assert(Py_REFCNT(frame_frame_httpx$_exceptions$$$function__2_request) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__request);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
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
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_752ef3511d947d984bab0d72ecf1b0df;
frame_frame_httpx$_exceptions$$$function__2_request->m_frame.f_lineno = 99;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 99;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__request);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_exceptions$$$function__2_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_exceptions$$$function__2_request->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_exceptions$$$function__2_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_exceptions$$$function__2_request,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_exceptions$$$function__2_request == cache_frame_frame_httpx$_exceptions$$$function__2_request) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_exceptions$$$function__2_request);
    cache_frame_frame_httpx$_exceptions$$$function__2_request = NULL;
}

assertFrameObject(frame_frame_httpx$_exceptions$$$function__2_request);

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


static PyObject *impl_httpx$_exceptions$$$function__3_request(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_request = python_pars[1];
struct Nuitka_FrameObject *frame_frame_httpx$_exceptions$$$function__3_request;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_exceptions$$$function__3_request = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_exceptions$$$function__3_request)) {
    Py_XDECREF(cache_frame_frame_httpx$_exceptions$$$function__3_request);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_exceptions$$$function__3_request == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_exceptions$$$function__3_request = MAKE_FUNCTION_FRAME(tstate, code_objects_b7c512b0e9b4fbbe0e0806d0ab36bbfc, module_httpx$_exceptions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_exceptions$$$function__3_request->m_type_description == NULL);
frame_frame_httpx$_exceptions$$$function__3_request = cache_frame_frame_httpx$_exceptions$$$function__3_request;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_exceptions$$$function__3_request);
assert(Py_REFCNT(frame_frame_httpx$_exceptions$$$function__3_request) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_request);
tmp_assattr_value_1 = par_request;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__request, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_exceptions$$$function__3_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_exceptions$$$function__3_request->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_exceptions$$$function__3_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_exceptions$$$function__3_request,
    type_description_1,
    par_self,
    par_request
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_exceptions$$$function__3_request == cache_frame_frame_httpx$_exceptions$$$function__3_request) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_exceptions$$$function__3_request);
    cache_frame_frame_httpx$_exceptions$$$function__3_request = NULL;
}

assertFrameObject(frame_frame_httpx$_exceptions$$$function__3_request);

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
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_exceptions$$$function__4___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_message = python_pars[1];
PyObject *par_request = python_pars[2];
struct Nuitka_FrameObject *frame_frame_httpx$_exceptions$$$function__4___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_exceptions$$$function__4___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_exceptions$$$function__4___init__)) {
    Py_XDECREF(cache_frame_frame_httpx$_exceptions$$$function__4___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_exceptions$$$function__4___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_exceptions$$$function__4___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_f10c0309d621b9b685333071d421306d, module_httpx$_exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_exceptions$$$function__4___init__->m_type_description == NULL);
frame_frame_httpx$_exceptions$$$function__4___init__ = cache_frame_frame_httpx$_exceptions$$$function__4___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_exceptions$$$function__4___init__);
assert(Py_REFCNT(frame_frame_httpx$_exceptions$$$function__4___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 113;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_httpx$_exceptions, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_message);
tmp_args_element_value_1 = par_message;
frame_frame_httpx$_exceptions$$$function__4___init__->m_frame.f_lineno = 113;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, const_str_plain___init__, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_request);
tmp_assattr_value_1 = par_request;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__request, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_exceptions$$$function__4___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_exceptions$$$function__4___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_exceptions$$$function__4___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_exceptions$$$function__4___init__,
    type_description_1,
    par_self,
    par_message,
    par_request,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_exceptions$$$function__4___init__ == cache_frame_frame_httpx$_exceptions$$$function__4___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_exceptions$$$function__4___init__);
    cache_frame_frame_httpx$_exceptions$$$function__4___init__ = NULL;
}

assertFrameObject(frame_frame_httpx$_exceptions$$$function__4___init__);

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
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_exceptions$$$function__5___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_message = python_pars[1];
PyObject *par_request = python_pars[2];
PyObject *par_response = python_pars[3];
struct Nuitka_FrameObject *frame_frame_httpx$_exceptions$$$function__5___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_exceptions$$$function__5___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_exceptions$$$function__5___init__)) {
    Py_XDECREF(cache_frame_frame_httpx$_exceptions$$$function__5___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_exceptions$$$function__5___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_exceptions$$$function__5___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_f8021e7b4fe23bf9569b71abfa953b1a, module_httpx$_exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_exceptions$$$function__5___init__->m_type_description == NULL);
frame_frame_httpx$_exceptions$$$function__5___init__ = cache_frame_frame_httpx$_exceptions$$$function__5___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_exceptions$$$function__5___init__);
assert(Py_REFCNT(frame_frame_httpx$_exceptions$$$function__5___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 266;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_httpx$_exceptions, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_message);
tmp_args_element_value_1 = par_message;
frame_frame_httpx$_exceptions$$$function__5___init__->m_frame.f_lineno = 266;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, const_str_plain___init__, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_request);
tmp_assattr_value_1 = par_request;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_request, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_response);
tmp_assattr_value_2 = par_response;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_response, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "ooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_exceptions$$$function__5___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_exceptions$$$function__5___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_exceptions$$$function__5___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_exceptions$$$function__5___init__,
    type_description_1,
    par_self,
    par_message,
    par_request,
    par_response,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_exceptions$$$function__5___init__ == cache_frame_frame_httpx$_exceptions$$$function__5___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_exceptions$$$function__5___init__);
    cache_frame_frame_httpx$_exceptions$$$function__5___init__ = NULL;
}

assertFrameObject(frame_frame_httpx$_exceptions$$$function__5___init__);

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
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_response);
Py_DECREF(par_response);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_response);
Py_DECREF(par_response);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_exceptions$$$function__6___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_message = python_pars[1];
struct Nuitka_FrameObject *frame_frame_httpx$_exceptions$$$function__6___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_exceptions$$$function__6___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_exceptions$$$function__6___init__)) {
    Py_XDECREF(cache_frame_frame_httpx$_exceptions$$$function__6___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_exceptions$$$function__6___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_exceptions$$$function__6___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_66531f765c6f69df64752f12685299ae, module_httpx$_exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_exceptions$$$function__6___init__->m_type_description == NULL);
frame_frame_httpx$_exceptions$$$function__6___init__ = cache_frame_frame_httpx$_exceptions$$$function__6___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_exceptions$$$function__6___init__);
assert(Py_REFCNT(frame_frame_httpx$_exceptions$$$function__6___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 277;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_httpx$_exceptions, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_message);
tmp_args_element_value_1 = par_message;
frame_frame_httpx$_exceptions$$$function__6___init__->m_frame.f_lineno = 277;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, const_str_plain___init__, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "ooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_exceptions$$$function__6___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_exceptions$$$function__6___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_exceptions$$$function__6___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_exceptions$$$function__6___init__,
    type_description_1,
    par_self,
    par_message,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_exceptions$$$function__6___init__ == cache_frame_frame_httpx$_exceptions$$$function__6___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_exceptions$$$function__6___init__);
    cache_frame_frame_httpx$_exceptions$$$function__6___init__ = NULL;
}

assertFrameObject(frame_frame_httpx$_exceptions$$$function__6___init__);

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
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_message);
Py_DECREF(par_message);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_exceptions$$$function__7___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_message = python_pars[1];
struct Nuitka_FrameObject *frame_frame_httpx$_exceptions$$$function__7___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_exceptions$$$function__7___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_exceptions$$$function__7___init__)) {
    Py_XDECREF(cache_frame_frame_httpx$_exceptions$$$function__7___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_exceptions$$$function__7___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_exceptions$$$function__7___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_eedebab2d124c29cbe905171f4400961, module_httpx$_exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_exceptions$$$function__7___init__->m_type_description == NULL);
frame_frame_httpx$_exceptions$$$function__7___init__ = cache_frame_frame_httpx$_exceptions$$$function__7___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_exceptions$$$function__7___init__);
assert(Py_REFCNT(frame_frame_httpx$_exceptions$$$function__7___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 288;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_httpx$_exceptions, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_message);
tmp_args_element_value_1 = par_message;
frame_frame_httpx$_exceptions$$$function__7___init__->m_frame.f_lineno = 288;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, const_str_plain___init__, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_1 = "ooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_exceptions$$$function__7___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_exceptions$$$function__7___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_exceptions$$$function__7___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_exceptions$$$function__7___init__,
    type_description_1,
    par_self,
    par_message,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_exceptions$$$function__7___init__ == cache_frame_frame_httpx$_exceptions$$$function__7___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_exceptions$$$function__7___init__);
    cache_frame_frame_httpx$_exceptions$$$function__7___init__ = NULL;
}

assertFrameObject(frame_frame_httpx$_exceptions$$$function__7___init__);

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
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_message);
Py_DECREF(par_message);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_exceptions$$$function__8___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_message = python_pars[1];
struct Nuitka_FrameObject *frame_frame_httpx$_exceptions$$$function__8___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_exceptions$$$function__8___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_exceptions$$$function__8___init__)) {
    Py_XDECREF(cache_frame_frame_httpx$_exceptions$$$function__8___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_exceptions$$$function__8___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_exceptions$$$function__8___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_906ce11921f3b0d0093e293d900545e5, module_httpx$_exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_exceptions$$$function__8___init__->m_type_description == NULL);
frame_frame_httpx$_exceptions$$$function__8___init__ = cache_frame_frame_httpx$_exceptions$$$function__8___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_exceptions$$$function__8___init__);
assert(Py_REFCNT(frame_frame_httpx$_exceptions$$$function__8___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 306;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_httpx$_exceptions, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_message);
tmp_args_element_value_1 = par_message;
frame_frame_httpx$_exceptions$$$function__8___init__->m_frame.f_lineno = 306;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, const_str_plain___init__, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "ooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_exceptions$$$function__8___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_exceptions$$$function__8___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_exceptions$$$function__8___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_exceptions$$$function__8___init__,
    type_description_1,
    par_self,
    par_message,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_exceptions$$$function__8___init__ == cache_frame_frame_httpx$_exceptions$$$function__8___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_exceptions$$$function__8___init__);
    cache_frame_frame_httpx$_exceptions$$$function__8___init__ = NULL;
}

assertFrameObject(frame_frame_httpx$_exceptions$$$function__8___init__);

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
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_message);
Py_DECREF(par_message);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_exceptions$$$function__9___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_httpx$_exceptions$$$function__9___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_exceptions$$$function__9___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_exceptions$$$function__9___init__)) {
    Py_XDECREF(cache_frame_frame_httpx$_exceptions$$$function__9___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_exceptions$$$function__9___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_exceptions$$$function__9___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_eb7f7e0c4e7550174e3407cdb267e11e, module_httpx$_exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_exceptions$$$function__9___init__->m_type_description == NULL);
frame_frame_httpx$_exceptions$$$function__9___init__ = cache_frame_frame_httpx$_exceptions$$$function__9___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_exceptions$$$function__9___init__);
assert(Py_REFCNT(frame_frame_httpx$_exceptions$$$function__9___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 324;
type_description_1 = "oNc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_httpx$_exceptions, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "oNc";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_exceptions$$$function__9___init__->m_frame.f_lineno = 324;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    const_str_plain___init__,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_e3e8646c47287a480015a757df73d7ea_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "oNc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_exceptions$$$function__9___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_exceptions$$$function__9___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_exceptions$$$function__9___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_exceptions$$$function__9___init__,
    type_description_1,
    par_self,
    NULL,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_exceptions$$$function__9___init__ == cache_frame_frame_httpx$_exceptions$$$function__9___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_exceptions$$$function__9___init__);
    cache_frame_frame_httpx$_exceptions$$$function__9___init__ = NULL;
}

assertFrameObject(frame_frame_httpx$_exceptions$$$function__9___init__);

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


static PyObject *impl_httpx$_exceptions$$$function__10___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_httpx$_exceptions$$$function__10___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_exceptions$$$function__10___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_exceptions$$$function__10___init__)) {
    Py_XDECREF(cache_frame_frame_httpx$_exceptions$$$function__10___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_exceptions$$$function__10___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_exceptions$$$function__10___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_7f6567c2fec62bc7d20a83dafc4339e1, module_httpx$_exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_exceptions$$$function__10___init__->m_type_description == NULL);
frame_frame_httpx$_exceptions$$$function__10___init__ = cache_frame_frame_httpx$_exceptions$$$function__10___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_exceptions$$$function__10___init__);
assert(Py_REFCNT(frame_frame_httpx$_exceptions$$$function__10___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 337;
type_description_1 = "oNc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_httpx$_exceptions, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "oNc";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_exceptions$$$function__10___init__->m_frame.f_lineno = 337;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    const_str_plain___init__,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_4ca15a1db623de35fbffe911e675c0d3_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "oNc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_exceptions$$$function__10___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_exceptions$$$function__10___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_exceptions$$$function__10___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_exceptions$$$function__10___init__,
    type_description_1,
    par_self,
    NULL,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_exceptions$$$function__10___init__ == cache_frame_frame_httpx$_exceptions$$$function__10___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_exceptions$$$function__10___init__);
    cache_frame_frame_httpx$_exceptions$$$function__10___init__ = NULL;
}

assertFrameObject(frame_frame_httpx$_exceptions$$$function__10___init__);

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


static PyObject *impl_httpx$_exceptions$$$function__11___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_httpx$_exceptions$$$function__11___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_exceptions$$$function__11___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_exceptions$$$function__11___init__)) {
    Py_XDECREF(cache_frame_frame_httpx$_exceptions$$$function__11___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_exceptions$$$function__11___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_exceptions$$$function__11___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_4d713996ef3a76babc25bf2d731c5cd5, module_httpx$_exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_exceptions$$$function__11___init__->m_type_description == NULL);
frame_frame_httpx$_exceptions$$$function__11___init__ = cache_frame_frame_httpx$_exceptions$$$function__11___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_exceptions$$$function__11___init__);
assert(Py_REFCNT(frame_frame_httpx$_exceptions$$$function__11___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 350;
type_description_1 = "oNc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_httpx$_exceptions, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_1 = "oNc";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_exceptions$$$function__11___init__->m_frame.f_lineno = 350;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    const_str_plain___init__,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_915bbd849aadc1dc46825d3623a4b154_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_1 = "oNc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_exceptions$$$function__11___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_exceptions$$$function__11___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_exceptions$$$function__11___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_exceptions$$$function__11___init__,
    type_description_1,
    par_self,
    NULL,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_exceptions$$$function__11___init__ == cache_frame_frame_httpx$_exceptions$$$function__11___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_exceptions$$$function__11___init__);
    cache_frame_frame_httpx$_exceptions$$$function__11___init__ = NULL;
}

assertFrameObject(frame_frame_httpx$_exceptions$$$function__11___init__);

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


static PyObject *impl_httpx$_exceptions$$$function__12___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_httpx$_exceptions$$$function__12___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_exceptions$$$function__12___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_exceptions$$$function__12___init__)) {
    Py_XDECREF(cache_frame_frame_httpx$_exceptions$$$function__12___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_exceptions$$$function__12___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_exceptions$$$function__12___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_2ce482703d6ae4cea114b5cf7c04567f, module_httpx$_exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_exceptions$$$function__12___init__->m_type_description == NULL);
frame_frame_httpx$_exceptions$$$function__12___init__ = cache_frame_frame_httpx$_exceptions$$$function__12___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_exceptions$$$function__12___init__);
assert(Py_REFCNT(frame_frame_httpx$_exceptions$$$function__12___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 363;
type_description_1 = "oNc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_httpx$_exceptions, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_1 = "oNc";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_exceptions$$$function__12___init__->m_frame.f_lineno = 363;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    const_str_plain___init__,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_6632d40f71abc8aac9f5c67db3297996_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_1 = "oNc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_exceptions$$$function__12___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_exceptions$$$function__12___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_exceptions$$$function__12___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_exceptions$$$function__12___init__,
    type_description_1,
    par_self,
    NULL,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_exceptions$$$function__12___init__ == cache_frame_frame_httpx$_exceptions$$$function__12___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_exceptions$$$function__12___init__);
    cache_frame_frame_httpx$_exceptions$$$function__12___init__ = NULL;
}

assertFrameObject(frame_frame_httpx$_exceptions$$$function__12___init__);

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


static PyObject *impl_httpx$_exceptions$$$function__13_request_context(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_request = Nuitka_Cell_New1(python_pars[0]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_request;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_GENERATOR_httpx$_exceptions$$$function__13_request_context$$$genobj__1_request_context(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_request);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
par_request = NULL;
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
struct httpx$_exceptions$$$function__13_request_context$$$genobj__1_request_context_locals {
PyObject *var_exc;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
};
#endif

static PyObject *httpx$_exceptions$$$function__13_request_context$$$genobj__1_request_context_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct httpx$_exceptions$$$function__13_request_context$$$genobj__1_request_context_locals *generator_heap = (struct httpx$_exceptions$$$function__13_request_context$$$genobj__1_request_context_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_exc = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_943c5a9afc775d7a82418d129f3e54cb, module_httpx$_exceptions, sizeof(void *)+sizeof(void *));
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
{
PyObject *tmp_expression_value_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_expression_value_1 = Py_None;
Py_INCREF(tmp_expression_value_1);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 375;
generator_heap->type_description_1 = "co";
    goto try_except_handler_1;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
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
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = module_var_accessor_httpx$_exceptions$RequestError(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_RequestError);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 376;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 376;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
tmp_condition_result_1 = (generator_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_1); 
assert(generator_heap->var_exc == NULL);
Py_INCREF(tmp_assign_source_1);
generator_heap->var_exc = tmp_assign_source_1;
}
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 377;
generator_heap->type_description_1 = "co";
    goto try_except_handler_3;
}

tmp_cmp_expr_left_2 = Nuitka_Cell_GET(generator->m_closure[0]);
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
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 378;
generator_heap->type_description_1 = "co";
    goto try_except_handler_3;
}

tmp_assattr_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
CHECK_OBJECT(generator_heap->var_exc);
tmp_assattr_target_1 = generator_heap->var_exc;
generator_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_request, tmp_assattr_value_1);
if (generator_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 378;
generator_heap->type_description_1 = "co";
    goto try_except_handler_3;
}
}
branch_no_2:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
CHECK_OBJECT(generator_heap->var_exc);
tmp_raise_type_input_1 = generator_heap->var_exc;
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 379;
generator_heap->type_description_1 = "co";
    goto try_except_handler_3;
}
generator_heap->exception_state.exception_value = tmp_raise_type_1;
generator_heap->exception_lineno = 379;
RAISE_EXCEPTION_WITH_VALUE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "co";
goto try_except_handler_3;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_exc);
generator_heap->var_exc = NULL;

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
goto branch_end_1;
branch_no_1:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 374;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "co";
goto try_except_handler_2;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
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
goto function_exception_exit;
frame_no_exception_1:;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_httpx$_exceptions$$$function__13_request_context$$$genobj__1_request_context(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        httpx$_exceptions$$$function__13_request_context$$$genobj__1_request_context_context,
        module_httpx$_exceptions,
        mod_consts.const_str_plain_request_context,
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        code_objects_943c5a9afc775d7a82418d129f3e54cb,
        closure,
        1,
#if 1
        sizeof(struct httpx$_exceptions$$$function__13_request_context$$$genobj__1_request_context_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__10___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_exceptions$$$function__10___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c4e5a4b83158b8215b845893e7f30c10,
#endif
        code_objects_7f6567c2fec62bc7d20a83dafc4339e1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_exceptions,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__11___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_exceptions$$$function__11___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_bfd1476f85f225d4afe8e4c49b4c5b13,
#endif
        code_objects_4d713996ef3a76babc25bf2d731c5cd5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_exceptions,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__12___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_exceptions$$$function__12___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_84fc71f4502df68f6739bdc687ef4c04,
#endif
        code_objects_2ce482703d6ae4cea114b5cf7c04567f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_exceptions,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__13_request_context(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_exceptions$$$function__13_request_context,
        mod_consts.const_str_plain_request_context,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_943c5a9afc775d7a82418d129f3e54cb,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_exceptions,
        mod_consts.const_str_digest_a8e17ece41c7971a4d4b38316c2f2501,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__1___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_exceptions$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_222267f1febf39c1ef1e61ba01762676,
#endif
        code_objects_c2a2fb02e33f576073548f3cd03702a4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_exceptions,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__2_request(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_exceptions$$$function__2_request,
        mod_consts.const_str_plain_request,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5f329d1414244dc10c293dc8be34e31d,
#endif
        code_objects_7cfa254661355ced47cab6212d47c45f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__3_request(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_exceptions$$$function__3_request,
        mod_consts.const_str_plain_request,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5f329d1414244dc10c293dc8be34e31d,
#endif
        code_objects_b7c512b0e9b4fbbe0e0806d0ab36bbfc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__4___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_exceptions$$$function__4___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_02d7a9258b08750dd91ed5e916d12d0c,
#endif
        code_objects_f10c0309d621b9b685333071d421306d,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_httpx$_exceptions,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__5___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_exceptions$$$function__5___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fb63004ed610d46269fbcb85f8dcec4e,
#endif
        code_objects_f8021e7b4fe23bf9569b71abfa953b1a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_exceptions,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__6___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_exceptions$$$function__6___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f34b9278e8353bd84f5a440dc6550870,
#endif
        code_objects_66531f765c6f69df64752f12685299ae,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_exceptions,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__7___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_exceptions$$$function__7___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_86d61947da3b80dc441df1ea8527cb58,
#endif
        code_objects_eedebab2d124c29cbe905171f4400961,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_exceptions,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__8___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_exceptions$$$function__8___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5147bfc0642872b9b6ae425b93005cf0,
#endif
        code_objects_906ce11921f3b0d0093e293d900545e5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_exceptions,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__9___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_exceptions$$$function__9___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_da7d03386a0ab69670f1cc5c1f667787,
#endif
        code_objects_eb7f7e0c4e7550174e3407cdb267e11e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_exceptions,
        NULL,
        closure,
        1
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

static function_impl_code const function_table_httpx$_exceptions[] = {
impl_httpx$_exceptions$$$function__1___init__,
impl_httpx$_exceptions$$$function__2_request,
impl_httpx$_exceptions$$$function__3_request,
impl_httpx$_exceptions$$$function__4___init__,
impl_httpx$_exceptions$$$function__5___init__,
impl_httpx$_exceptions$$$function__6___init__,
impl_httpx$_exceptions$$$function__7___init__,
impl_httpx$_exceptions$$$function__8___init__,
impl_httpx$_exceptions$$$function__9___init__,
impl_httpx$_exceptions$$$function__10___init__,
impl_httpx$_exceptions$$$function__11___init__,
impl_httpx$_exceptions$$$function__12___init__,
impl_httpx$_exceptions$$$function__13_request_context,
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

    return Nuitka_Function_GetFunctionState(function, function_table_httpx$_exceptions);
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
        module_httpx$_exceptions,
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
        function_table_httpx$_exceptions,
        sizeof(function_table_httpx$_exceptions) / sizeof(function_impl_code)
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
static char const *module_full_name = "httpx._exceptions";
#endif

// Internal entry point for module code.
PyObject *module_code_httpx$_exceptions(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("httpx$_exceptions");

    // Store the module for future use.
    module_httpx$_exceptions = module;

    moduledict_httpx$_exceptions = MODULE_DICT(module_httpx$_exceptions);

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
        PRINT_STRING("httpx$_exceptions: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("httpx$_exceptions: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("httpx$_exceptions: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "httpx._exceptions" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inithttpx$_exceptions\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_httpx$_exceptions,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_httpx$_exceptions,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_httpx$_exceptions,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_httpx$_exceptions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_httpx$_exceptions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_httpx$_exceptions);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_httpx$_exceptions, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_httpx$_exceptions, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_httpx$_exceptions, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_httpx$_exceptions);
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

        UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_CellObject *outline_0_var___class__ = NULL;
struct Nuitka_CellObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *outline_3_var___class__ = NULL;
PyObject *outline_4_var___class__ = NULL;
PyObject *outline_5_var___class__ = NULL;
PyObject *outline_6_var___class__ = NULL;
PyObject *outline_7_var___class__ = NULL;
PyObject *outline_8_var___class__ = NULL;
PyObject *outline_9_var___class__ = NULL;
PyObject *outline_10_var___class__ = NULL;
PyObject *outline_11_var___class__ = NULL;
PyObject *outline_12_var___class__ = NULL;
PyObject *outline_13_var___class__ = NULL;
PyObject *outline_14_var___class__ = NULL;
PyObject *outline_15_var___class__ = NULL;
PyObject *outline_16_var___class__ = NULL;
PyObject *outline_17_var___class__ = NULL;
PyObject *outline_18_var___class__ = NULL;
PyObject *outline_19_var___class__ = NULL;
struct Nuitka_CellObject *outline_20_var___class__ = NULL;
struct Nuitka_CellObject *outline_21_var___class__ = NULL;
struct Nuitka_CellObject *outline_22_var___class__ = NULL;
struct Nuitka_CellObject *outline_23_var___class__ = NULL;
struct Nuitka_CellObject *outline_24_var___class__ = NULL;
struct Nuitka_CellObject *outline_25_var___class__ = NULL;
struct Nuitka_CellObject *outline_26_var___class__ = NULL;
struct Nuitka_CellObject *outline_27_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_10__bases = NULL;
PyObject *tmp_class_container$class_creation_10__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_10__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_10__metaclass = NULL;
PyObject *tmp_class_container$class_creation_10__prepared = NULL;
PyObject *tmp_class_container$class_creation_11__bases = NULL;
PyObject *tmp_class_container$class_creation_11__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_11__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_11__metaclass = NULL;
PyObject *tmp_class_container$class_creation_11__prepared = NULL;
PyObject *tmp_class_container$class_creation_12__bases = NULL;
PyObject *tmp_class_container$class_creation_12__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_12__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_12__metaclass = NULL;
PyObject *tmp_class_container$class_creation_12__prepared = NULL;
PyObject *tmp_class_container$class_creation_13__bases = NULL;
PyObject *tmp_class_container$class_creation_13__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_13__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_13__metaclass = NULL;
PyObject *tmp_class_container$class_creation_13__prepared = NULL;
PyObject *tmp_class_container$class_creation_14__bases = NULL;
PyObject *tmp_class_container$class_creation_14__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_14__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_14__metaclass = NULL;
PyObject *tmp_class_container$class_creation_14__prepared = NULL;
PyObject *tmp_class_container$class_creation_15__bases = NULL;
PyObject *tmp_class_container$class_creation_15__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_15__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_15__metaclass = NULL;
PyObject *tmp_class_container$class_creation_15__prepared = NULL;
PyObject *tmp_class_container$class_creation_16__bases = NULL;
PyObject *tmp_class_container$class_creation_16__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_16__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_16__metaclass = NULL;
PyObject *tmp_class_container$class_creation_16__prepared = NULL;
PyObject *tmp_class_container$class_creation_17__bases = NULL;
PyObject *tmp_class_container$class_creation_17__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_17__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_17__metaclass = NULL;
PyObject *tmp_class_container$class_creation_17__prepared = NULL;
PyObject *tmp_class_container$class_creation_18__bases = NULL;
PyObject *tmp_class_container$class_creation_18__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_18__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_18__metaclass = NULL;
PyObject *tmp_class_container$class_creation_18__prepared = NULL;
PyObject *tmp_class_container$class_creation_19__bases = NULL;
PyObject *tmp_class_container$class_creation_19__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_19__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_19__metaclass = NULL;
PyObject *tmp_class_container$class_creation_19__prepared = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_20__bases = NULL;
PyObject *tmp_class_container$class_creation_20__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_20__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_20__metaclass = NULL;
PyObject *tmp_class_container$class_creation_20__prepared = NULL;
PyObject *tmp_class_container$class_creation_21__bases = NULL;
PyObject *tmp_class_container$class_creation_21__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_21__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_21__metaclass = NULL;
PyObject *tmp_class_container$class_creation_21__prepared = NULL;
PyObject *tmp_class_container$class_creation_22__bases = NULL;
PyObject *tmp_class_container$class_creation_22__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_22__metaclass = NULL;
PyObject *tmp_class_container$class_creation_22__prepared = NULL;
PyObject *tmp_class_container$class_creation_23__bases = NULL;
PyObject *tmp_class_container$class_creation_23__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_23__metaclass = NULL;
PyObject *tmp_class_container$class_creation_23__prepared = NULL;
PyObject *tmp_class_container$class_creation_24__bases = NULL;
PyObject *tmp_class_container$class_creation_24__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_24__metaclass = NULL;
PyObject *tmp_class_container$class_creation_24__prepared = NULL;
PyObject *tmp_class_container$class_creation_25__bases = NULL;
PyObject *tmp_class_container$class_creation_25__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_25__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_25__metaclass = NULL;
PyObject *tmp_class_container$class_creation_25__prepared = NULL;
PyObject *tmp_class_container$class_creation_26__bases = NULL;
PyObject *tmp_class_container$class_creation_26__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_26__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_26__metaclass = NULL;
PyObject *tmp_class_container$class_creation_26__prepared = NULL;
PyObject *tmp_class_container$class_creation_27__bases = NULL;
PyObject *tmp_class_container$class_creation_27__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_27__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_27__metaclass = NULL;
PyObject *tmp_class_container$class_creation_27__prepared = NULL;
PyObject *tmp_class_container$class_creation_28__bases = NULL;
PyObject *tmp_class_container$class_creation_28__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_28__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_28__metaclass = NULL;
PyObject *tmp_class_container$class_creation_28__prepared = NULL;
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
PyObject *tmp_class_container$class_creation_5__bases = NULL;
PyObject *tmp_class_container$class_creation_5__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_5__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_5__metaclass = NULL;
PyObject *tmp_class_container$class_creation_5__prepared = NULL;
PyObject *tmp_class_container$class_creation_6__bases = NULL;
PyObject *tmp_class_container$class_creation_6__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_6__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_6__metaclass = NULL;
PyObject *tmp_class_container$class_creation_6__prepared = NULL;
PyObject *tmp_class_container$class_creation_7__bases = NULL;
PyObject *tmp_class_container$class_creation_7__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_7__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_7__metaclass = NULL;
PyObject *tmp_class_container$class_creation_7__prepared = NULL;
PyObject *tmp_class_container$class_creation_8__bases = NULL;
PyObject *tmp_class_container$class_creation_8__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_8__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_8__metaclass = NULL;
PyObject *tmp_class_container$class_creation_8__prepared = NULL;
PyObject *tmp_class_container$class_creation_9__bases = NULL;
PyObject *tmp_class_container$class_creation_9__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_9__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_9__metaclass = NULL;
PyObject *tmp_class_container$class_creation_9__prepared = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_exceptions;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_httpx$_exceptions$$$class__1_HTTPError_74 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_httpx$_exceptions$$$class__1_HTTPError_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *locals_httpx$_exceptions$$$class__2_RequestError_107 = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_exceptions$$$class__2_RequestError_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
PyObject *locals_httpx$_exceptions$$$class__3_TransportError_123 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
PyObject *locals_httpx$_exceptions$$$class__4_TimeoutException_132 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
PyObject *locals_httpx$_exceptions$$$class__5_ConnectTimeout_140 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
PyObject *locals_httpx$_exceptions$$$class__6_ReadTimeout_146 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
PyObject *locals_httpx$_exceptions$$$class__7_WriteTimeout_152 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
PyObject *locals_httpx$_exceptions$$$class__8_PoolTimeout_158 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_23;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_24;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
PyObject *locals_httpx$_exceptions$$$class__9_NetworkError_167 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_25;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_26;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_27;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
PyObject *locals_httpx$_exceptions$$$class__10_ReadError_175 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_28;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_29;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_30;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
PyObject *locals_httpx$_exceptions$$$class__11_WriteError_181 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_31;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_32;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_33;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
PyObject *locals_httpx$_exceptions$$$class__12_ConnectError_187 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_34;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_35;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_36;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
PyObject *locals_httpx$_exceptions$$$class__13_CloseError_193 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_37;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_38;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_39;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
PyObject *locals_httpx$_exceptions$$$class__14_ProxyError_202 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_40;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_41;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_42;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
PyObject *locals_httpx$_exceptions$$$class__15_UnsupportedProtocol_208 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_43;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_44;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_45;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
PyObject *locals_httpx$_exceptions$$$class__16_ProtocolError_216 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_46;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_47;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_48;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;
PyObject *locals_httpx$_exceptions$$$class__17_LocalProtocolError_222 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_49;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_49;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_50;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_50;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_51;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_51;
PyObject *locals_httpx$_exceptions$$$class__18_RemoteProtocolError_232 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_52;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_52;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_53;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_53;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_54;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_54;
PyObject *locals_httpx$_exceptions$$$class__19_DecodingError_243 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_55;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_55;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_56;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_56;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_57;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_57;
PyObject *locals_httpx$_exceptions$$$class__20_TooManyRedirects_249 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_58;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_58;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_59;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_59;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_60;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_60;
PyObject *locals_httpx$_exceptions$$$class__21_HTTPStatusError_258 = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_exceptions$$$class__21_HTTPStatusError_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_61;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_61;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_62;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_62;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_63;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_63;
PyObject *locals_httpx$_exceptions$$$class__22_InvalidURL_271 = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_exceptions$$$class__22_InvalidURL_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_64;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_64;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_65;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_65;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_66;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_66;
PyObject *locals_httpx$_exceptions$$$class__23_CookieConflict_280 = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_exceptions$$$class__23_CookieConflict_6;
NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_67;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_67;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_68;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_68;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_69;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_69;
PyObject *locals_httpx$_exceptions$$$class__24_StreamError_297 = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_exceptions$$$class__24_StreamError_7;
NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_70;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_70;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_71;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_71;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_72;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_72;
PyObject *locals_httpx$_exceptions$$$class__25_StreamConsumed_309 = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_exceptions$$$class__25_StreamConsumed_8;
NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_73;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_73;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_74;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_74;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_75;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_75;
PyObject *locals_httpx$_exceptions$$$class__26_StreamClosed_327 = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_exceptions$$$class__26_StreamClosed_9;
NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_76;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_76;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_77;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_77;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_78;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_78;
PyObject *locals_httpx$_exceptions$$$class__27_ResponseNotRead_340 = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_exceptions$$$class__27_ResponseNotRead_10;
NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_79;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_79;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_80;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_80;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_81;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_81;
PyObject *locals_httpx$_exceptions$$$class__28_RequestNotRead_353 = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_exceptions$$$class__28_RequestNotRead_11;
NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_82;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_82;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_83;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_83;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_84;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_84;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_1b5abd99ac998d7eca84e7722c0a956b;
UPDATE_STRING_DICT0(moduledict_httpx$_exceptions, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_httpx$_exceptions, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_httpx$_exceptions = MAKE_MODULE_FRAME(code_objects_dc352be0f72c8d318bb5aa5ef222dff0, module_httpx$_exceptions);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_exceptions);
assert(Py_REFCNT(frame_frame_httpx$_exceptions) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_httpx$_exceptions$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_httpx$_exceptions$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_httpx$_exceptions, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_contextlib;
tmp_globals_arg_value_1 = (PyObject *)moduledict_httpx$_exceptions;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 36;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_typing, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = LIST_COPY(tstate, mod_consts.const_list_fe1d11562e72d125e9c9ed7b6590b2ef_list);
UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_7);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_direct_call_arg1_1;
tmp_direct_call_arg1_1 = mod_consts.const_tuple_type_Exception_tuple;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_8 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
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


exception_lineno = 74;

    goto try_except_handler_1;
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


exception_lineno = 74;

    goto try_except_handler_1;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_10 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_10;
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


exception_lineno = 74;

    goto try_except_handler_1;
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
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_1;
}
tmp_tuple_element_1 = mod_consts.const_str_plain_HTTPError;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_1 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 74;
tmp_assign_source_11 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_11;
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


exception_lineno = 74;

    goto try_except_handler_1;
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
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_2;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_2 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_2, tmp_default_value_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_1;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_6 == NULL));
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_1;
}
frame_frame_httpx$_exceptions->m_frame.f_lineno = 74;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 74;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_12;
}
branch_end_1:;
{
PyObject *tmp_assign_source_13;
outline_0_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_httpx$_exceptions$$$class__1_HTTPError_74 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_f49f37ecb12db2b9a869fd11ee8982d4;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__1_HTTPError_74, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_digest_97c5ab54f7c2655622ca707bf2cb692c;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__1_HTTPError_74, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_plain_HTTPError;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__1_HTTPError_74, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_int_pos_74;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__1_HTTPError_74, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_3;
}
frame_frame_httpx$_exceptions$$$class__1_HTTPError_2 = MAKE_CLASS_FRAME(tstate, code_objects_737f208d150d2f1cf25506f356252175, module_httpx$_exceptions, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_exceptions$$$class__1_HTTPError_2);
assert(Py_REFCNT(frame_frame_httpx$_exceptions$$$class__1_HTTPError_2) == 2);

// Framed code:
{
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_f5ccb293b0370d17e642a35e4d2af9f5);
tmp_closure_1[0] = outline_0_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_httpx$_exceptions$$$function__1___init__(tstate, tmp_annotations_1, tmp_closure_1);

tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__1_HTTPError_74, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_2;
tmp_called_value_2 = PyObject_GetItem(locals_httpx$_exceptions$$$class__1_HTTPError_74, mod_consts.const_str_plain_property);

if (tmp_called_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_2 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_576eecb6872cd78f32199d47aead33d3);

tmp_args_element_value_1 = MAKE_FUNCTION_httpx$_exceptions$$$function__2_request(tstate, tmp_annotations_2);

frame_frame_httpx$_exceptions$$$class__1_HTTPError_2->m_frame.f_lineno = 96;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__1_HTTPError_74, mod_consts.const_str_plain_request, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_3;
tmp_called_instance_1 = PyObject_GetItem(locals_httpx$_exceptions$$$class__1_HTTPError_74, mod_consts.const_str_plain_request);

if (unlikely(tmp_called_instance_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_request);

exception_lineno = 102;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_f8c409c4d84bb9d9d5363c59aef4fd3d);

tmp_args_element_value_2 = MAKE_FUNCTION_httpx$_exceptions$$$function__3_request(tstate, tmp_annotations_3);

frame_frame_httpx$_exceptions$$$class__1_HTTPError_2->m_frame.f_lineno = 102;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_setter, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__1_HTTPError_74, mod_consts.const_str_plain_request, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_2 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_exceptions$$$class__1_HTTPError_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_exceptions$$$class__1_HTTPError_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_exceptions$$$class__1_HTTPError_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_exceptions$$$class__1_HTTPError_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_httpx$_exceptions$$$class__1_HTTPError_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_3;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__request_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__1_HTTPError_74, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_3;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_1__bases;
tmp_cmp_expr_right_1 = mod_consts.const_tuple_type_Exception_tuple;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_3;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_dictset_value = mod_consts.const_tuple_type_Exception_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__1_HTTPError_74, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_3;
}
branch_no_3:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_3;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_3 = mod_consts.const_str_plain_HTTPError;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_3 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = locals_httpx$_exceptions$$$class__1_HTTPError_74;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 74;
tmp_assign_source_14 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_3;
}
assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
Nuitka_Cell_SET(outline_0_var___class__, tmp_assign_source_14);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
tmp_assign_source_13 = Nuitka_Cell_GET(outline_0_var___class__);
Py_INCREF(tmp_assign_source_13);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_httpx$_exceptions$$$class__1_HTTPError_74);
locals_httpx$_exceptions$$$class__1_HTTPError_74 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpx$_exceptions$$$class__1_HTTPError_74);
locals_httpx$_exceptions$$$class__1_HTTPError_74 = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 74;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPError, tmp_assign_source_13);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_1__bases);
tmp_class_container$class_creation_1__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__metaclass);
tmp_class_container$class_creation_1__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__prepared);
tmp_class_container$class_creation_1__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
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
PyObject *tmp_assign_source_15;
PyObject *tmp_tuple_element_4;
tmp_tuple_element_4 = module_var_accessor_httpx$_exceptions$HTTPError(tstate);
if (unlikely(tmp_tuple_element_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HTTPError);
}

if (tmp_tuple_element_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 107;

    goto try_except_handler_4;
}
tmp_assign_source_15 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_15, 0, tmp_tuple_element_4);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_16 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_16;
}
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_17;
}
{
PyObject *tmp_assign_source_18;
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


exception_lineno = 107;

    goto try_except_handler_4;
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


exception_lineno = 107;

    goto try_except_handler_4;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_4;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_18 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_18;
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


exception_lineno = 107;

    goto try_except_handler_4;
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
PyObject *tmp_assign_source_19;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_4;
}
tmp_tuple_element_5 = mod_consts.const_str_plain_RequestError;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_5 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 107;
tmp_assign_source_19 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_19;
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


exception_lineno = 107;

    goto try_except_handler_4;
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
PyObject *tmp_expression_value_11;
PyObject *tmp_name_value_3;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_3 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_6 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_3, tmp_default_value_2);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_4;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_12;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_12 == NULL));
tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_6);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_4;
}
frame_frame_httpx$_exceptions->m_frame.f_lineno = 107;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 107;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_4;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_20;
}
branch_end_4:;
{
PyObject *tmp_assign_source_21;
outline_1_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_httpx$_exceptions$$$class__2_RequestError_107 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_f49f37ecb12db2b9a869fd11ee8982d4;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__2_RequestError_107, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_digest_b4dfc8d797e5c6435ec2a536d23d7215;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__2_RequestError_107, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_plain_RequestError;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__2_RequestError_107, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_int_pos_107;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__2_RequestError_107, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_6;
}
frame_frame_httpx$_exceptions$$$class__2_RequestError_3 = MAKE_CLASS_FRAME(tstate, code_objects_e2655e6d59f5a89cb61904c4be29160c, module_httpx$_exceptions, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_exceptions$$$class__2_RequestError_3);
assert(Py_REFCNT(frame_frame_httpx$_exceptions$$$class__2_RequestError_3) == 2);

// Framed code:
{
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_4;
struct Nuitka_CellObject *tmp_closure_2[1];
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_6e20e68c6ca47e1feec5edbc3f8295d0);
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_e6313f991fa807cb5aa68c3b08ad57f8);
tmp_closure_2[0] = outline_1_var___class__;
Py_INCREF(tmp_closure_2[0]);
tmp_dictset_value = MAKE_FUNCTION_httpx$_exceptions$$$function__4___init__(tstate, tmp_kw_defaults_1, tmp_annotations_4, tmp_closure_2);

tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__2_RequestError_107, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_exceptions$$$class__2_RequestError_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_exceptions$$$class__2_RequestError_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_exceptions$$$class__2_RequestError_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_exceptions$$$class__2_RequestError_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_httpx$_exceptions$$$class__2_RequestError_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_6;
skip_nested_handling_2:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__request_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__2_RequestError_107, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_6;
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


exception_lineno = 107;

    goto try_except_handler_6;
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
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__2_RequestError_107, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_6;
}
branch_no_6:;
{
PyObject *tmp_assign_source_22;
PyObject *tmp_called_value_5;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_7;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_5 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_7 = mod_consts.const_str_plain_RequestError;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_7 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_7);
tmp_tuple_element_7 = locals_httpx$_exceptions$$$class__2_RequestError_107;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 107;
tmp_assign_source_22 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_6;
}
assert(Nuitka_Cell_GET(outline_1_var___class__) == NULL);
Nuitka_Cell_SET(outline_1_var___class__, tmp_assign_source_22);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_1_var___class__));
tmp_assign_source_21 = Nuitka_Cell_GET(outline_1_var___class__);
Py_INCREF(tmp_assign_source_21);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_DECREF(locals_httpx$_exceptions$$$class__2_RequestError_107);
locals_httpx$_exceptions$$$class__2_RequestError_107 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpx$_exceptions$$$class__2_RequestError_107);
locals_httpx$_exceptions$$$class__2_RequestError_107 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 107;
goto try_except_handler_4;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestError, tmp_assign_source_21);
}
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
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
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
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
PyObject *tmp_assign_source_23;
PyObject *tmp_tuple_element_8;
tmp_tuple_element_8 = module_var_accessor_httpx$_exceptions$RequestError(tstate);
if (unlikely(tmp_tuple_element_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RequestError);
}

if (tmp_tuple_element_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 123;

    goto try_except_handler_7;
}
tmp_assign_source_23 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_23, 0, tmp_tuple_element_8);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_23;
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_24 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_24;
}
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_25;
}
{
PyObject *tmp_assign_source_26;
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


exception_lineno = 123;

    goto try_except_handler_7;
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


exception_lineno = 123;

    goto try_except_handler_7;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto try_except_handler_7;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_26 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_26;
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


exception_lineno = 123;

    goto try_except_handler_7;
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
PyObject *tmp_assign_source_27;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_9;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_15 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto try_except_handler_7;
}
tmp_tuple_element_9 = mod_consts.const_str_plain_TransportError;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_9 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 123;
tmp_assign_source_27 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_27;
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


exception_lineno = 123;

    goto try_except_handler_7;
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
PyObject *tmp_tuple_element_10;
PyObject *tmp_expression_value_17;
PyObject *tmp_name_value_4;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_17 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_4 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_10 = BUILTIN_GETATTR(tstate, tmp_expression_value_17, tmp_name_value_4, tmp_default_value_3);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto try_except_handler_7;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_18;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_18 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_18 == NULL));
tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_10);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto try_except_handler_7;
}
frame_frame_httpx$_exceptions->m_frame.f_lineno = 123;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 123;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_7;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_28;
}
branch_end_7:;
{
PyObject *tmp_assign_source_29;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_httpx$_exceptions$$$class__3_TransportError_123 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_f49f37ecb12db2b9a869fd11ee8982d4;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__3_TransportError_123, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_digest_df8b6d506ec894fdee1670813e509f35;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__3_TransportError_123, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_plain_TransportError;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__3_TransportError_123, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_int_pos_123;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__3_TransportError_123, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto try_except_handler_9;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__3_TransportError_123, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto try_except_handler_9;
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


exception_lineno = 123;

    goto try_except_handler_9;
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
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__3_TransportError_123, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto try_except_handler_9;
}
branch_no_9:;
{
PyObject *tmp_assign_source_30;
PyObject *tmp_called_value_7;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_11;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_7 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_11 = mod_consts.const_str_plain_TransportError;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_11 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_11);
tmp_tuple_element_11 = locals_httpx$_exceptions$$$class__3_TransportError_123;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 123;
tmp_assign_source_30 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto try_except_handler_9;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_30;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_29 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_29);
goto try_return_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_DECREF(locals_httpx$_exceptions$$$class__3_TransportError_123);
locals_httpx$_exceptions$$$class__3_TransportError_123 = NULL;
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpx$_exceptions$$$class__3_TransportError_123);
locals_httpx$_exceptions$$$class__3_TransportError_123 = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_8;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 123;
goto try_except_handler_7;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_TransportError, tmp_assign_source_29);
}
goto try_end_3;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
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
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
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
PyObject *tmp_assign_source_31;
PyObject *tmp_tuple_element_12;
tmp_tuple_element_12 = module_var_accessor_httpx$_exceptions$TransportError(tstate);
if (unlikely(tmp_tuple_element_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TransportError);
}

if (tmp_tuple_element_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 132;

    goto try_except_handler_10;
}
tmp_assign_source_31 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_31, 0, tmp_tuple_element_12);
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_31;
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_4 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_32 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_32;
}
{
PyObject *tmp_assign_source_33;
tmp_assign_source_33 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_33;
}
{
PyObject *tmp_assign_source_34;
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


exception_lineno = 132;

    goto try_except_handler_10;
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


exception_lineno = 132;

    goto try_except_handler_10;
}
tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto try_except_handler_10;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_4);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_34 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
CHECK_OBJECT(tmp_metaclass_value_4);
Py_DECREF(tmp_metaclass_value_4);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_34;
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


exception_lineno = 132;

    goto try_except_handler_10;
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
PyObject *tmp_assign_source_35;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_21;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_13;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_21 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto try_except_handler_10;
}
tmp_tuple_element_13 = mod_consts.const_str_plain_TimeoutException;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_13 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 132;
tmp_assign_source_35 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_35;
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


exception_lineno = 132;

    goto try_except_handler_10;
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
PyObject *tmp_tuple_element_14;
PyObject *tmp_expression_value_23;
PyObject *tmp_name_value_5;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_23 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_5 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_14 = BUILTIN_GETATTR(tstate, tmp_expression_value_23, tmp_name_value_5, tmp_default_value_4);
if (tmp_tuple_element_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto try_except_handler_10;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_24;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_8 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_24 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_24 == NULL));
tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_tuple_element_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_14);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_mod_expr_right_4);
goto try_except_handler_10;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto try_except_handler_10;
}
frame_frame_httpx$_exceptions->m_frame.f_lineno = 132;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 132;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_10;
}
branch_no_11:;
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_36;
tmp_assign_source_36 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_36;
}
branch_end_10:;
{
PyObject *tmp_assign_source_37;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_httpx$_exceptions$$$class__4_TimeoutException_132 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_f49f37ecb12db2b9a869fd11ee8982d4;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__4_TimeoutException_132, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_str_digest_3b56c11f484335b7a837949527440161;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__4_TimeoutException_132, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_str_plain_TimeoutException;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__4_TimeoutException_132, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_int_pos_132;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__4_TimeoutException_132, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto try_except_handler_12;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__4_TimeoutException_132, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto try_except_handler_12;
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


exception_lineno = 132;

    goto try_except_handler_12;
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
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__4_TimeoutException_132, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto try_except_handler_12;
}
branch_no_12:;
{
PyObject *tmp_assign_source_38;
PyObject *tmp_called_value_9;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_15;
PyObject *tmp_kwargs_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_called_value_9 = tmp_class_container$class_creation_4__metaclass;
tmp_tuple_element_15 = mod_consts.const_str_plain_TimeoutException;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_15 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_15);
tmp_tuple_element_15 = locals_httpx$_exceptions$$$class__4_TimeoutException_132;
PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 132;
tmp_assign_source_38 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto try_except_handler_12;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_38;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_37 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_37);
goto try_return_handler_12;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
Py_DECREF(locals_httpx$_exceptions$$$class__4_TimeoutException_132);
locals_httpx$_exceptions$$$class__4_TimeoutException_132 = NULL;
goto try_return_handler_11;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpx$_exceptions$$$class__4_TimeoutException_132);
locals_httpx$_exceptions$$$class__4_TimeoutException_132 = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_11;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
CHECK_OBJECT(outline_3_var___class__);
CHECK_OBJECT(outline_3_var___class__);
Py_DECREF(outline_3_var___class__);
outline_3_var___class__ = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 132;
goto try_except_handler_10;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_TimeoutException, tmp_assign_source_37);
}
goto try_end_4;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
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
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
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
{
PyObject *tmp_outline_return_value_5;
// Tried code:
{
PyObject *tmp_assign_source_39;
PyObject *tmp_tuple_element_16;
tmp_tuple_element_16 = module_var_accessor_httpx$_exceptions$TimeoutException(tstate);
if (unlikely(tmp_tuple_element_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TimeoutException);
}

if (tmp_tuple_element_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 140;

    goto try_except_handler_13;
}
tmp_assign_source_39 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_39, 0, tmp_tuple_element_16);
assert(tmp_class_container$class_creation_5__bases_orig == NULL);
tmp_class_container$class_creation_5__bases_orig = tmp_assign_source_39;
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_direct_call_arg1_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_direct_call_arg1_5 = tmp_class_container$class_creation_5__bases_orig;
Py_INCREF(tmp_direct_call_arg1_5);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_5};
    tmp_assign_source_40 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_5__bases == NULL);
tmp_class_container$class_creation_5__bases = tmp_assign_source_40;
}
{
PyObject *tmp_assign_source_41;
tmp_assign_source_41 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__class_decl_dict == NULL);
tmp_class_container$class_creation_5__class_decl_dict = tmp_assign_source_41;
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_metaclass_value_5;
nuitka_bool tmp_condition_result_17;
int tmp_truth_name_5;
PyObject *tmp_type_arg_9;
PyObject *tmp_expression_value_25;
PyObject *tmp_subscript_value_5;
PyObject *tmp_bases_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_container$class_creation_5__bases);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;

    goto try_except_handler_13;
}
tmp_condition_result_17 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_5;
} else {
    goto condexpr_false_5;
}
condexpr_true_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_expression_value_25 = tmp_class_container$class_creation_5__bases;
tmp_subscript_value_5 = const_int_0;
tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_25, tmp_subscript_value_5, 0);
if (tmp_type_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;

    goto try_except_handler_13;
}
tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
CHECK_OBJECT(tmp_type_arg_9);
Py_DECREF(tmp_type_arg_9);
if (tmp_metaclass_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;

    goto try_except_handler_13;
}
goto condexpr_end_5;
condexpr_false_5:;
tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_5);
condexpr_end_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_bases_value_5 = tmp_class_container$class_creation_5__bases;
tmp_assign_source_42 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
CHECK_OBJECT(tmp_metaclass_value_5);
Py_DECREF(tmp_metaclass_value_5);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_5__metaclass == NULL);
tmp_class_container$class_creation_5__metaclass = tmp_assign_source_42;
}
{
bool tmp_condition_result_18;
PyObject *tmp_expression_value_26;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_26 = tmp_class_container$class_creation_5__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_26, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;

    goto try_except_handler_13;
}
tmp_condition_result_18 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_18 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_assign_source_43;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_27;
PyObject *tmp_args_value_9;
PyObject *tmp_tuple_element_17;
PyObject *tmp_kwargs_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_27 = tmp_class_container$class_creation_5__metaclass;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;

    goto try_except_handler_13;
}
tmp_tuple_element_17 = mod_consts.const_str_plain_ConnectTimeout;
tmp_args_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_17 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_9 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 140;
tmp_assign_source_43 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_9, tmp_kwargs_value_9);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_value_9);
Py_DECREF(tmp_args_value_9);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_43;
}
{
bool tmp_condition_result_19;
PyObject *tmp_operand_value_5;
PyObject *tmp_expression_value_28;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_expression_value_28 = tmp_class_container$class_creation_5__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_28, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;

    goto try_except_handler_13;
}
tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
assert(!(tmp_res == -1));
tmp_condition_result_19 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_19 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_raise_type_5;
PyObject *tmp_make_exception_arg_5;
PyObject *tmp_mod_expr_left_5;
PyObject *tmp_mod_expr_right_5;
PyObject *tmp_tuple_element_18;
PyObject *tmp_expression_value_29;
PyObject *tmp_name_value_6;
PyObject *tmp_default_value_5;
tmp_mod_expr_left_5 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_29 = tmp_class_container$class_creation_5__metaclass;
tmp_name_value_6 = const_str_plain___name__;
tmp_default_value_5 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_18 = BUILTIN_GETATTR(tstate, tmp_expression_value_29, tmp_name_value_6, tmp_default_value_5);
if (tmp_tuple_element_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;

    goto try_except_handler_13;
}
tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_30;
PyObject *tmp_type_arg_10;
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_18);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_type_arg_10 = tmp_class_container$class_creation_5__prepared;
tmp_expression_value_30 = BUILTIN_TYPE1(tmp_type_arg_10);
assert(!(tmp_expression_value_30 == NULL));
tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
if (tmp_tuple_element_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_18);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_mod_expr_right_5);
goto try_except_handler_13;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_make_exception_arg_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
CHECK_OBJECT(tmp_mod_expr_right_5);
Py_DECREF(tmp_mod_expr_right_5);
if (tmp_make_exception_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;

    goto try_except_handler_13;
}
frame_frame_httpx$_exceptions->m_frame.f_lineno = 140;
tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_5);
CHECK_OBJECT(tmp_make_exception_arg_5);
Py_DECREF(tmp_make_exception_arg_5);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 140;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_13;
}
branch_no_14:;
goto branch_end_13;
branch_no_13:;
{
PyObject *tmp_assign_source_44;
tmp_assign_source_44 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_44;
}
branch_end_13:;
{
PyObject *tmp_assign_source_45;
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_set_locals_5 = tmp_class_container$class_creation_5__prepared;
locals_httpx$_exceptions$$$class__5_ConnectTimeout_140 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_f49f37ecb12db2b9a869fd11ee8982d4;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__5_ConnectTimeout_140, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_str_digest_161a2dba1ab6f8e4b22d2ee8d8fc8c6f;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__5_ConnectTimeout_140, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_str_plain_ConnectTimeout;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__5_ConnectTimeout_140, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_int_pos_140;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__5_ConnectTimeout_140, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;

    goto try_except_handler_15;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__5_ConnectTimeout_140, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;

    goto try_except_handler_15;
}
{
nuitka_bool tmp_condition_result_20;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_cmp_expr_left_5 = tmp_class_container$class_creation_5__bases;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_cmp_expr_right_5 = tmp_class_container$class_creation_5__bases_orig;
tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;

    goto try_except_handler_15;
}
if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_5__bases_orig;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__5_ConnectTimeout_140, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;

    goto try_except_handler_15;
}
branch_no_15:;
{
PyObject *tmp_assign_source_46;
PyObject *tmp_called_value_11;
PyObject *tmp_args_value_10;
PyObject *tmp_tuple_element_19;
PyObject *tmp_kwargs_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_called_value_11 = tmp_class_container$class_creation_5__metaclass;
tmp_tuple_element_19 = mod_consts.const_str_plain_ConnectTimeout;
tmp_args_value_10 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_19);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_19 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_19);
tmp_tuple_element_19 = locals_httpx$_exceptions$$$class__5_ConnectTimeout_140;
PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_19);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_10 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 140;
tmp_assign_source_46 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_10, tmp_kwargs_value_10);
CHECK_OBJECT(tmp_args_value_10);
Py_DECREF(tmp_args_value_10);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;

    goto try_except_handler_15;
}
assert(outline_4_var___class__ == NULL);
outline_4_var___class__ = tmp_assign_source_46;
}
CHECK_OBJECT(outline_4_var___class__);
tmp_assign_source_45 = outline_4_var___class__;
Py_INCREF(tmp_assign_source_45);
goto try_return_handler_15;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_15:;
Py_DECREF(locals_httpx$_exceptions$$$class__5_ConnectTimeout_140);
locals_httpx$_exceptions$$$class__5_ConnectTimeout_140 = NULL;
goto try_return_handler_14;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpx$_exceptions$$$class__5_ConnectTimeout_140);
locals_httpx$_exceptions$$$class__5_ConnectTimeout_140 = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto try_except_handler_14;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
CHECK_OBJECT(outline_4_var___class__);
CHECK_OBJECT(outline_4_var___class__);
Py_DECREF(outline_4_var___class__);
outline_4_var___class__ = NULL;
goto outline_result_10;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto outline_exception_5;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_5:;
exception_lineno = 140;
goto try_except_handler_13;
outline_result_10:;
UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectTimeout, tmp_assign_source_45);
}
goto try_end_5;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
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
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
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
{
PyObject *tmp_outline_return_value_6;
// Tried code:
{
PyObject *tmp_assign_source_47;
PyObject *tmp_tuple_element_20;
tmp_tuple_element_20 = module_var_accessor_httpx$_exceptions$TimeoutException(tstate);
if (unlikely(tmp_tuple_element_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TimeoutException);
}

if (tmp_tuple_element_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 146;

    goto try_except_handler_16;
}
tmp_assign_source_47 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_47, 0, tmp_tuple_element_20);
assert(tmp_class_container$class_creation_6__bases_orig == NULL);
tmp_class_container$class_creation_6__bases_orig = tmp_assign_source_47;
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_direct_call_arg1_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_direct_call_arg1_6 = tmp_class_container$class_creation_6__bases_orig;
Py_INCREF(tmp_direct_call_arg1_6);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_6};
    tmp_assign_source_48 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_16;
}
assert(tmp_class_container$class_creation_6__bases == NULL);
tmp_class_container$class_creation_6__bases = tmp_assign_source_48;
}
{
PyObject *tmp_assign_source_49;
tmp_assign_source_49 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__class_decl_dict == NULL);
tmp_class_container$class_creation_6__class_decl_dict = tmp_assign_source_49;
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_metaclass_value_6;
nuitka_bool tmp_condition_result_21;
int tmp_truth_name_6;
PyObject *tmp_type_arg_11;
PyObject *tmp_expression_value_31;
PyObject *tmp_subscript_value_6;
PyObject *tmp_bases_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_container$class_creation_6__bases);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_16;
}
tmp_condition_result_21 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_6;
} else {
    goto condexpr_false_6;
}
condexpr_true_6:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_expression_value_31 = tmp_class_container$class_creation_6__bases;
tmp_subscript_value_6 = const_int_0;
tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_31, tmp_subscript_value_6, 0);
if (tmp_type_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_16;
}
tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
CHECK_OBJECT(tmp_type_arg_11);
Py_DECREF(tmp_type_arg_11);
if (tmp_metaclass_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_16;
}
goto condexpr_end_6;
condexpr_false_6:;
tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_6);
condexpr_end_6:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_bases_value_6 = tmp_class_container$class_creation_6__bases;
tmp_assign_source_50 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
CHECK_OBJECT(tmp_metaclass_value_6);
Py_DECREF(tmp_metaclass_value_6);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_16;
}
assert(tmp_class_container$class_creation_6__metaclass == NULL);
tmp_class_container$class_creation_6__metaclass = tmp_assign_source_50;
}
{
bool tmp_condition_result_22;
PyObject *tmp_expression_value_32;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_32 = tmp_class_container$class_creation_6__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_32, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_16;
}
tmp_condition_result_22 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_22 != false) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
{
PyObject *tmp_assign_source_51;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_33;
PyObject *tmp_args_value_11;
PyObject *tmp_tuple_element_21;
PyObject *tmp_kwargs_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_33 = tmp_class_container$class_creation_6__metaclass;
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_16;
}
tmp_tuple_element_21 = mod_consts.const_str_plain_ReadTimeout;
tmp_args_value_11 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_21);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_21 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_21);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_11 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 146;
tmp_assign_source_51 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_11, tmp_kwargs_value_11);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_value_11);
Py_DECREF(tmp_args_value_11);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_16;
}
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_51;
}
{
bool tmp_condition_result_23;
PyObject *tmp_operand_value_6;
PyObject *tmp_expression_value_34;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_expression_value_34 = tmp_class_container$class_creation_6__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_34, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_16;
}
tmp_operand_value_6 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
assert(!(tmp_res == -1));
tmp_condition_result_23 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_23 != false) {
    goto branch_yes_17;
} else {
    goto branch_no_17;
}
}
branch_yes_17:;
{
PyObject *tmp_raise_type_6;
PyObject *tmp_make_exception_arg_6;
PyObject *tmp_mod_expr_left_6;
PyObject *tmp_mod_expr_right_6;
PyObject *tmp_tuple_element_22;
PyObject *tmp_expression_value_35;
PyObject *tmp_name_value_7;
PyObject *tmp_default_value_6;
tmp_mod_expr_left_6 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_35 = tmp_class_container$class_creation_6__metaclass;
tmp_name_value_7 = const_str_plain___name__;
tmp_default_value_6 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_22 = BUILTIN_GETATTR(tstate, tmp_expression_value_35, tmp_name_value_7, tmp_default_value_6);
if (tmp_tuple_element_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_16;
}
tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_36;
PyObject *tmp_type_arg_12;
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_22);
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_type_arg_12 = tmp_class_container$class_creation_6__prepared;
tmp_expression_value_36 = BUILTIN_TYPE1(tmp_type_arg_12);
assert(!(tmp_expression_value_36 == NULL));
tmp_tuple_element_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_36);
Py_DECREF(tmp_expression_value_36);
if (tmp_tuple_element_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_22);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_mod_expr_right_6);
goto try_except_handler_16;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_make_exception_arg_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
CHECK_OBJECT(tmp_mod_expr_right_6);
Py_DECREF(tmp_mod_expr_right_6);
if (tmp_make_exception_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_16;
}
frame_frame_httpx$_exceptions->m_frame.f_lineno = 146;
tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_6);
CHECK_OBJECT(tmp_make_exception_arg_6);
Py_DECREF(tmp_make_exception_arg_6);
assert(!(tmp_raise_type_6 == NULL));
exception_state.exception_value = tmp_raise_type_6;
exception_lineno = 146;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_16;
}
branch_no_17:;
goto branch_end_16;
branch_no_16:;
{
PyObject *tmp_assign_source_52;
tmp_assign_source_52 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_52;
}
branch_end_16:;
{
PyObject *tmp_assign_source_53;
{
PyObject *tmp_set_locals_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_set_locals_6 = tmp_class_container$class_creation_6__prepared;
locals_httpx$_exceptions$$$class__6_ReadTimeout_146 = tmp_set_locals_6;
Py_INCREF(tmp_set_locals_6);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_f49f37ecb12db2b9a869fd11ee8982d4;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__6_ReadTimeout_146, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_18;
}
tmp_dictset_value = mod_consts.const_str_digest_abc02579cfe21e552fbf75191c0cb3fb;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__6_ReadTimeout_146, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_18;
}
tmp_dictset_value = mod_consts.const_str_plain_ReadTimeout;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__6_ReadTimeout_146, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_18;
}
tmp_dictset_value = mod_consts.const_int_pos_146;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__6_ReadTimeout_146, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_18;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__6_ReadTimeout_146, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_18;
}
{
nuitka_bool tmp_condition_result_24;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_cmp_expr_left_6 = tmp_class_container$class_creation_6__bases;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_cmp_expr_right_6 = tmp_class_container$class_creation_6__bases_orig;
tmp_condition_result_24 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_18;
}
if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_6__bases_orig;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__6_ReadTimeout_146, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_18;
}
branch_no_18:;
{
PyObject *tmp_assign_source_54;
PyObject *tmp_called_value_13;
PyObject *tmp_args_value_12;
PyObject *tmp_tuple_element_23;
PyObject *tmp_kwargs_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_called_value_13 = tmp_class_container$class_creation_6__metaclass;
tmp_tuple_element_23 = mod_consts.const_str_plain_ReadTimeout;
tmp_args_value_12 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_23);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_23 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_23);
tmp_tuple_element_23 = locals_httpx$_exceptions$$$class__6_ReadTimeout_146;
PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_23);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_12 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 146;
tmp_assign_source_54 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_12, tmp_kwargs_value_12);
CHECK_OBJECT(tmp_args_value_12);
Py_DECREF(tmp_args_value_12);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_18;
}
assert(outline_5_var___class__ == NULL);
outline_5_var___class__ = tmp_assign_source_54;
}
CHECK_OBJECT(outline_5_var___class__);
tmp_assign_source_53 = outline_5_var___class__;
Py_INCREF(tmp_assign_source_53);
goto try_return_handler_18;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_18:;
Py_DECREF(locals_httpx$_exceptions$$$class__6_ReadTimeout_146);
locals_httpx$_exceptions$$$class__6_ReadTimeout_146 = NULL;
goto try_return_handler_17;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpx$_exceptions$$$class__6_ReadTimeout_146);
locals_httpx$_exceptions$$$class__6_ReadTimeout_146 = NULL;
// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto try_except_handler_17;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_17:;
CHECK_OBJECT(outline_5_var___class__);
CHECK_OBJECT(outline_5_var___class__);
Py_DECREF(outline_5_var___class__);
outline_5_var___class__ = NULL;
goto outline_result_12;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto outline_exception_6;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_6:;
exception_lineno = 146;
goto try_except_handler_16;
outline_result_12:;
UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadTimeout, tmp_assign_source_53);
}
goto try_end_6;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_6__bases_orig);
tmp_class_container$class_creation_6__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__bases);
tmp_class_container$class_creation_6__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__class_decl_dict);
tmp_class_container$class_creation_6__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__metaclass);
tmp_class_container$class_creation_6__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__prepared);
tmp_class_container$class_creation_6__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
Py_DECREF(tmp_class_container$class_creation_6__bases_orig);
tmp_class_container$class_creation_6__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
Py_DECREF(tmp_class_container$class_creation_6__bases);
tmp_class_container$class_creation_6__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_6__class_decl_dict);
tmp_class_container$class_creation_6__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
Py_DECREF(tmp_class_container$class_creation_6__metaclass);
tmp_class_container$class_creation_6__metaclass = NULL;
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
{
PyObject *tmp_outline_return_value_7;
// Tried code:
{
PyObject *tmp_assign_source_55;
PyObject *tmp_tuple_element_24;
tmp_tuple_element_24 = module_var_accessor_httpx$_exceptions$TimeoutException(tstate);
if (unlikely(tmp_tuple_element_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TimeoutException);
}

if (tmp_tuple_element_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 152;

    goto try_except_handler_19;
}
tmp_assign_source_55 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_55, 0, tmp_tuple_element_24);
assert(tmp_class_container$class_creation_7__bases_orig == NULL);
tmp_class_container$class_creation_7__bases_orig = tmp_assign_source_55;
}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_direct_call_arg1_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
tmp_direct_call_arg1_7 = tmp_class_container$class_creation_7__bases_orig;
Py_INCREF(tmp_direct_call_arg1_7);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_7};
    tmp_assign_source_56 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;

    goto try_except_handler_19;
}
assert(tmp_class_container$class_creation_7__bases == NULL);
tmp_class_container$class_creation_7__bases = tmp_assign_source_56;
}
{
PyObject *tmp_assign_source_57;
tmp_assign_source_57 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__class_decl_dict == NULL);
tmp_class_container$class_creation_7__class_decl_dict = tmp_assign_source_57;
}
{
PyObject *tmp_assign_source_58;
PyObject *tmp_metaclass_value_7;
nuitka_bool tmp_condition_result_25;
int tmp_truth_name_7;
PyObject *tmp_type_arg_13;
PyObject *tmp_expression_value_37;
PyObject *tmp_subscript_value_7;
PyObject *tmp_bases_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_container$class_creation_7__bases);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;

    goto try_except_handler_19;
}
tmp_condition_result_25 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_7;
} else {
    goto condexpr_false_7;
}
condexpr_true_7:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_expression_value_37 = tmp_class_container$class_creation_7__bases;
tmp_subscript_value_7 = const_int_0;
tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_37, tmp_subscript_value_7, 0);
if (tmp_type_arg_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;

    goto try_except_handler_19;
}
tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
CHECK_OBJECT(tmp_type_arg_13);
Py_DECREF(tmp_type_arg_13);
if (tmp_metaclass_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;

    goto try_except_handler_19;
}
goto condexpr_end_7;
condexpr_false_7:;
tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_7);
condexpr_end_7:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_bases_value_7 = tmp_class_container$class_creation_7__bases;
tmp_assign_source_58 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
CHECK_OBJECT(tmp_metaclass_value_7);
Py_DECREF(tmp_metaclass_value_7);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;

    goto try_except_handler_19;
}
assert(tmp_class_container$class_creation_7__metaclass == NULL);
tmp_class_container$class_creation_7__metaclass = tmp_assign_source_58;
}
{
bool tmp_condition_result_26;
PyObject *tmp_expression_value_38;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_38 = tmp_class_container$class_creation_7__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_38, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;

    goto try_except_handler_19;
}
tmp_condition_result_26 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_26 != false) {
    goto branch_yes_19;
} else {
    goto branch_no_19;
}
}
branch_yes_19:;
{
PyObject *tmp_assign_source_59;
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_39;
PyObject *tmp_args_value_13;
PyObject *tmp_tuple_element_25;
PyObject *tmp_kwargs_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_39 = tmp_class_container$class_creation_7__metaclass;
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;

    goto try_except_handler_19;
}
tmp_tuple_element_25 = mod_consts.const_str_plain_WriteTimeout;
tmp_args_value_13 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_25);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_tuple_element_25 = tmp_class_container$class_creation_7__bases;
PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_25);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_13 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 152;
tmp_assign_source_59 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_13, tmp_kwargs_value_13);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_value_13);
Py_DECREF(tmp_args_value_13);
if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;

    goto try_except_handler_19;
}
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_59;
}
{
bool tmp_condition_result_27;
PyObject *tmp_operand_value_7;
PyObject *tmp_expression_value_40;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_expression_value_40 = tmp_class_container$class_creation_7__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_40, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;

    goto try_except_handler_19;
}
tmp_operand_value_7 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
assert(!(tmp_res == -1));
tmp_condition_result_27 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_27 != false) {
    goto branch_yes_20;
} else {
    goto branch_no_20;
}
}
branch_yes_20:;
{
PyObject *tmp_raise_type_7;
PyObject *tmp_make_exception_arg_7;
PyObject *tmp_mod_expr_left_7;
PyObject *tmp_mod_expr_right_7;
PyObject *tmp_tuple_element_26;
PyObject *tmp_expression_value_41;
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_7;
tmp_mod_expr_left_7 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_41 = tmp_class_container$class_creation_7__metaclass;
tmp_name_value_8 = const_str_plain___name__;
tmp_default_value_7 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_26 = BUILTIN_GETATTR(tstate, tmp_expression_value_41, tmp_name_value_8, tmp_default_value_7);
if (tmp_tuple_element_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;

    goto try_except_handler_19;
}
tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_42;
PyObject *tmp_type_arg_14;
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_26);
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_type_arg_14 = tmp_class_container$class_creation_7__prepared;
tmp_expression_value_42 = BUILTIN_TYPE1(tmp_type_arg_14);
assert(!(tmp_expression_value_42 == NULL));
tmp_tuple_element_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_42);
Py_DECREF(tmp_expression_value_42);
if (tmp_tuple_element_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;

    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_26);
}
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_mod_expr_right_7);
goto try_except_handler_19;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
tmp_make_exception_arg_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
CHECK_OBJECT(tmp_mod_expr_right_7);
Py_DECREF(tmp_mod_expr_right_7);
if (tmp_make_exception_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;

    goto try_except_handler_19;
}
frame_frame_httpx$_exceptions->m_frame.f_lineno = 152;
tmp_raise_type_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_7);
CHECK_OBJECT(tmp_make_exception_arg_7);
Py_DECREF(tmp_make_exception_arg_7);
assert(!(tmp_raise_type_7 == NULL));
exception_state.exception_value = tmp_raise_type_7;
exception_lineno = 152;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_19;
}
branch_no_20:;
goto branch_end_19;
branch_no_19:;
{
PyObject *tmp_assign_source_60;
tmp_assign_source_60 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_60;
}
branch_end_19:;
{
PyObject *tmp_assign_source_61;
{
PyObject *tmp_set_locals_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_set_locals_7 = tmp_class_container$class_creation_7__prepared;
locals_httpx$_exceptions$$$class__7_WriteTimeout_152 = tmp_set_locals_7;
Py_INCREF(tmp_set_locals_7);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_f49f37ecb12db2b9a869fd11ee8982d4;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__7_WriteTimeout_152, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;

    goto try_except_handler_21;
}
tmp_dictset_value = mod_consts.const_str_digest_c5f31fc2189649892e9543d59e3ebb07;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__7_WriteTimeout_152, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;

    goto try_except_handler_21;
}
tmp_dictset_value = mod_consts.const_str_plain_WriteTimeout;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__7_WriteTimeout_152, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;

    goto try_except_handler_21;
}
tmp_dictset_value = mod_consts.const_int_pos_152;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__7_WriteTimeout_152, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;

    goto try_except_handler_21;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__7_WriteTimeout_152, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;

    goto try_except_handler_21;
}
{
nuitka_bool tmp_condition_result_28;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_cmp_expr_left_7 = tmp_class_container$class_creation_7__bases;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
tmp_cmp_expr_right_7 = tmp_class_container$class_creation_7__bases_orig;
tmp_condition_result_28 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_condition_result_28 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;

    goto try_except_handler_21;
}
if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
    goto branch_yes_21;
} else {
    goto branch_no_21;
}
}
branch_yes_21:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_7__bases_orig;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__7_WriteTimeout_152, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;

    goto try_except_handler_21;
}
branch_no_21:;
{
PyObject *tmp_assign_source_62;
PyObject *tmp_called_value_15;
PyObject *tmp_args_value_14;
PyObject *tmp_tuple_element_27;
PyObject *tmp_kwargs_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_called_value_15 = tmp_class_container$class_creation_7__metaclass;
tmp_tuple_element_27 = mod_consts.const_str_plain_WriteTimeout;
tmp_args_value_14 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_27);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_tuple_element_27 = tmp_class_container$class_creation_7__bases;
PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_27);
tmp_tuple_element_27 = locals_httpx$_exceptions$$$class__7_WriteTimeout_152;
PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_27);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_14 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 152;
tmp_assign_source_62 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_14, tmp_kwargs_value_14);
CHECK_OBJECT(tmp_args_value_14);
Py_DECREF(tmp_args_value_14);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;

    goto try_except_handler_21;
}
assert(outline_6_var___class__ == NULL);
outline_6_var___class__ = tmp_assign_source_62;
}
CHECK_OBJECT(outline_6_var___class__);
tmp_assign_source_61 = outline_6_var___class__;
Py_INCREF(tmp_assign_source_61);
goto try_return_handler_21;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_21:;
Py_DECREF(locals_httpx$_exceptions$$$class__7_WriteTimeout_152);
locals_httpx$_exceptions$$$class__7_WriteTimeout_152 = NULL;
goto try_return_handler_20;
// Exception handler code:
try_except_handler_21:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpx$_exceptions$$$class__7_WriteTimeout_152);
locals_httpx$_exceptions$$$class__7_WriteTimeout_152 = NULL;
// Re-raise.
exception_state = exception_keeper_name_19;
exception_lineno = exception_keeper_lineno_19;

goto try_except_handler_20;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_20:;
CHECK_OBJECT(outline_6_var___class__);
CHECK_OBJECT(outline_6_var___class__);
Py_DECREF(outline_6_var___class__);
outline_6_var___class__ = NULL;
goto outline_result_14;
// Exception handler code:
try_except_handler_20:;
exception_keeper_lineno_20 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_20 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_20;
exception_lineno = exception_keeper_lineno_20;

goto outline_exception_7;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_7:;
exception_lineno = 152;
goto try_except_handler_19;
outline_result_14:;
UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_WriteTimeout, tmp_assign_source_61);
}
goto try_end_7;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_21 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_21 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_7__bases_orig);
tmp_class_container$class_creation_7__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_7__bases);
tmp_class_container$class_creation_7__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_7__class_decl_dict);
tmp_class_container$class_creation_7__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_7__metaclass);
tmp_class_container$class_creation_7__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_7__prepared);
tmp_class_container$class_creation_7__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_21;
exception_lineno = exception_keeper_lineno_21;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
Py_DECREF(tmp_class_container$class_creation_7__bases_orig);
tmp_class_container$class_creation_7__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
Py_DECREF(tmp_class_container$class_creation_7__bases);
tmp_class_container$class_creation_7__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_7__class_decl_dict);
tmp_class_container$class_creation_7__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
Py_DECREF(tmp_class_container$class_creation_7__metaclass);
tmp_class_container$class_creation_7__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
Py_DECREF(tmp_class_container$class_creation_7__prepared);
tmp_class_container$class_creation_7__prepared = NULL;
tmp_outline_return_value_7 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_7);
goto outline_result_13;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_13:;
CHECK_OBJECT(tmp_outline_return_value_7);
Py_DECREF(tmp_outline_return_value_7);
}
{
PyObject *tmp_outline_return_value_8;
// Tried code:
{
PyObject *tmp_assign_source_63;
PyObject *tmp_tuple_element_28;
tmp_tuple_element_28 = module_var_accessor_httpx$_exceptions$TimeoutException(tstate);
if (unlikely(tmp_tuple_element_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TimeoutException);
}

if (tmp_tuple_element_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 158;

    goto try_except_handler_22;
}
tmp_assign_source_63 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_63, 0, tmp_tuple_element_28);
assert(tmp_class_container$class_creation_8__bases_orig == NULL);
tmp_class_container$class_creation_8__bases_orig = tmp_assign_source_63;
}
{
PyObject *tmp_assign_source_64;
PyObject *tmp_direct_call_arg1_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_direct_call_arg1_8 = tmp_class_container$class_creation_8__bases_orig;
Py_INCREF(tmp_direct_call_arg1_8);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_8};
    tmp_assign_source_64 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_22;
}
assert(tmp_class_container$class_creation_8__bases == NULL);
tmp_class_container$class_creation_8__bases = tmp_assign_source_64;
}
{
PyObject *tmp_assign_source_65;
tmp_assign_source_65 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_8__class_decl_dict == NULL);
tmp_class_container$class_creation_8__class_decl_dict = tmp_assign_source_65;
}
{
PyObject *tmp_assign_source_66;
PyObject *tmp_metaclass_value_8;
nuitka_bool tmp_condition_result_29;
int tmp_truth_name_8;
PyObject *tmp_type_arg_15;
PyObject *tmp_expression_value_43;
PyObject *tmp_subscript_value_8;
PyObject *tmp_bases_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_container$class_creation_8__bases);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_22;
}
tmp_condition_result_29 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_8;
} else {
    goto condexpr_false_8;
}
condexpr_true_8:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_expression_value_43 = tmp_class_container$class_creation_8__bases;
tmp_subscript_value_8 = const_int_0;
tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_43, tmp_subscript_value_8, 0);
if (tmp_type_arg_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_22;
}
tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
CHECK_OBJECT(tmp_type_arg_15);
Py_DECREF(tmp_type_arg_15);
if (tmp_metaclass_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_22;
}
goto condexpr_end_8;
condexpr_false_8:;
tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_8);
condexpr_end_8:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_bases_value_8 = tmp_class_container$class_creation_8__bases;
tmp_assign_source_66 = SELECT_METACLASS(tstate, tmp_metaclass_value_8, tmp_bases_value_8);
CHECK_OBJECT(tmp_metaclass_value_8);
Py_DECREF(tmp_metaclass_value_8);
if (tmp_assign_source_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_22;
}
assert(tmp_class_container$class_creation_8__metaclass == NULL);
tmp_class_container$class_creation_8__metaclass = tmp_assign_source_66;
}
{
bool tmp_condition_result_30;
PyObject *tmp_expression_value_44;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_44 = tmp_class_container$class_creation_8__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_44, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_22;
}
tmp_condition_result_30 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_30 != false) {
    goto branch_yes_22;
} else {
    goto branch_no_22;
}
}
branch_yes_22:;
{
PyObject *tmp_assign_source_67;
PyObject *tmp_called_value_16;
PyObject *tmp_expression_value_45;
PyObject *tmp_args_value_15;
PyObject *tmp_tuple_element_29;
PyObject *tmp_kwargs_value_15;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_45 = tmp_class_container$class_creation_8__metaclass;
tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_22;
}
tmp_tuple_element_29 = mod_consts.const_str_plain_PoolTimeout;
tmp_args_value_15 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_29);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_29 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_29);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_15 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 158;
tmp_assign_source_67 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_15, tmp_kwargs_value_15);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
CHECK_OBJECT(tmp_args_value_15);
Py_DECREF(tmp_args_value_15);
if (tmp_assign_source_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_22;
}
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_67;
}
{
bool tmp_condition_result_31;
PyObject *tmp_operand_value_8;
PyObject *tmp_expression_value_46;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_expression_value_46 = tmp_class_container$class_creation_8__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_46, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_22;
}
tmp_operand_value_8 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
assert(!(tmp_res == -1));
tmp_condition_result_31 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_31 != false) {
    goto branch_yes_23;
} else {
    goto branch_no_23;
}
}
branch_yes_23:;
{
PyObject *tmp_raise_type_8;
PyObject *tmp_make_exception_arg_8;
PyObject *tmp_mod_expr_left_8;
PyObject *tmp_mod_expr_right_8;
PyObject *tmp_tuple_element_30;
PyObject *tmp_expression_value_47;
PyObject *tmp_name_value_9;
PyObject *tmp_default_value_8;
tmp_mod_expr_left_8 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_47 = tmp_class_container$class_creation_8__metaclass;
tmp_name_value_9 = const_str_plain___name__;
tmp_default_value_8 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_30 = BUILTIN_GETATTR(tstate, tmp_expression_value_47, tmp_name_value_9, tmp_default_value_8);
if (tmp_tuple_element_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_22;
}
tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_48;
PyObject *tmp_type_arg_16;
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_30);
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_type_arg_16 = tmp_class_container$class_creation_8__prepared;
tmp_expression_value_48 = BUILTIN_TYPE1(tmp_type_arg_16);
assert(!(tmp_expression_value_48 == NULL));
tmp_tuple_element_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_48);
Py_DECREF(tmp_expression_value_48);
if (tmp_tuple_element_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_30);
}
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_mod_expr_right_8);
goto try_except_handler_22;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
tmp_make_exception_arg_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
CHECK_OBJECT(tmp_mod_expr_right_8);
Py_DECREF(tmp_mod_expr_right_8);
if (tmp_make_exception_arg_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_22;
}
frame_frame_httpx$_exceptions->m_frame.f_lineno = 158;
tmp_raise_type_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_8);
CHECK_OBJECT(tmp_make_exception_arg_8);
Py_DECREF(tmp_make_exception_arg_8);
assert(!(tmp_raise_type_8 == NULL));
exception_state.exception_value = tmp_raise_type_8;
exception_lineno = 158;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_22;
}
branch_no_23:;
goto branch_end_22;
branch_no_22:;
{
PyObject *tmp_assign_source_68;
tmp_assign_source_68 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_68;
}
branch_end_22:;
{
PyObject *tmp_assign_source_69;
{
PyObject *tmp_set_locals_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_set_locals_8 = tmp_class_container$class_creation_8__prepared;
locals_httpx$_exceptions$$$class__8_PoolTimeout_158 = tmp_set_locals_8;
Py_INCREF(tmp_set_locals_8);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_f49f37ecb12db2b9a869fd11ee8982d4;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__8_PoolTimeout_158, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_24;
}
tmp_dictset_value = mod_consts.const_str_digest_958bee624d2b10b56b24187cfed672f9;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__8_PoolTimeout_158, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_24;
}
tmp_dictset_value = mod_consts.const_str_plain_PoolTimeout;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__8_PoolTimeout_158, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_24;
}
tmp_dictset_value = mod_consts.const_int_pos_158;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__8_PoolTimeout_158, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_24;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__8_PoolTimeout_158, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_24;
}
{
nuitka_bool tmp_condition_result_32;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_cmp_expr_left_8 = tmp_class_container$class_creation_8__bases;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_cmp_expr_right_8 = tmp_class_container$class_creation_8__bases_orig;
tmp_condition_result_32 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
if (tmp_condition_result_32 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_24;
}
if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
    goto branch_yes_24;
} else {
    goto branch_no_24;
}
}
branch_yes_24:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_8__bases_orig;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__8_PoolTimeout_158, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_24;
}
branch_no_24:;
{
PyObject *tmp_assign_source_70;
PyObject *tmp_called_value_17;
PyObject *tmp_args_value_16;
PyObject *tmp_tuple_element_31;
PyObject *tmp_kwargs_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_called_value_17 = tmp_class_container$class_creation_8__metaclass;
tmp_tuple_element_31 = mod_consts.const_str_plain_PoolTimeout;
tmp_args_value_16 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_31);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_31 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_31);
tmp_tuple_element_31 = locals_httpx$_exceptions$$$class__8_PoolTimeout_158;
PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_31);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_16 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 158;
tmp_assign_source_70 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_16, tmp_kwargs_value_16);
CHECK_OBJECT(tmp_args_value_16);
Py_DECREF(tmp_args_value_16);
if (tmp_assign_source_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_24;
}
assert(outline_7_var___class__ == NULL);
outline_7_var___class__ = tmp_assign_source_70;
}
CHECK_OBJECT(outline_7_var___class__);
tmp_assign_source_69 = outline_7_var___class__;
Py_INCREF(tmp_assign_source_69);
goto try_return_handler_24;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_24:;
Py_DECREF(locals_httpx$_exceptions$$$class__8_PoolTimeout_158);
locals_httpx$_exceptions$$$class__8_PoolTimeout_158 = NULL;
goto try_return_handler_23;
// Exception handler code:
try_except_handler_24:;
exception_keeper_lineno_22 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_22 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpx$_exceptions$$$class__8_PoolTimeout_158);
locals_httpx$_exceptions$$$class__8_PoolTimeout_158 = NULL;
// Re-raise.
exception_state = exception_keeper_name_22;
exception_lineno = exception_keeper_lineno_22;

goto try_except_handler_23;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_23:;
CHECK_OBJECT(outline_7_var___class__);
CHECK_OBJECT(outline_7_var___class__);
Py_DECREF(outline_7_var___class__);
outline_7_var___class__ = NULL;
goto outline_result_16;
// Exception handler code:
try_except_handler_23:;
exception_keeper_lineno_23 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_23 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_23;
exception_lineno = exception_keeper_lineno_23;

goto outline_exception_8;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_8:;
exception_lineno = 158;
goto try_except_handler_22;
outline_result_16:;
UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_PoolTimeout, tmp_assign_source_69);
}
goto try_end_8;
// Exception handler code:
try_except_handler_22:;
exception_keeper_lineno_24 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_24 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_8__bases_orig);
tmp_class_container$class_creation_8__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_8__bases);
tmp_class_container$class_creation_8__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_8__class_decl_dict);
tmp_class_container$class_creation_8__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_8__metaclass);
tmp_class_container$class_creation_8__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_8__prepared);
tmp_class_container$class_creation_8__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_24;
exception_lineno = exception_keeper_lineno_24;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
Py_DECREF(tmp_class_container$class_creation_8__bases_orig);
tmp_class_container$class_creation_8__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
Py_DECREF(tmp_class_container$class_creation_8__bases);
tmp_class_container$class_creation_8__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_8__class_decl_dict);
tmp_class_container$class_creation_8__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
Py_DECREF(tmp_class_container$class_creation_8__metaclass);
tmp_class_container$class_creation_8__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
Py_DECREF(tmp_class_container$class_creation_8__prepared);
tmp_class_container$class_creation_8__prepared = NULL;
tmp_outline_return_value_8 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_8);
goto outline_result_15;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_15:;
CHECK_OBJECT(tmp_outline_return_value_8);
Py_DECREF(tmp_outline_return_value_8);
}
{
PyObject *tmp_outline_return_value_9;
// Tried code:
{
PyObject *tmp_assign_source_71;
PyObject *tmp_tuple_element_32;
tmp_tuple_element_32 = module_var_accessor_httpx$_exceptions$TransportError(tstate);
if (unlikely(tmp_tuple_element_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TransportError);
}

if (tmp_tuple_element_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 167;

    goto try_except_handler_25;
}
tmp_assign_source_71 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_71, 0, tmp_tuple_element_32);
assert(tmp_class_container$class_creation_9__bases_orig == NULL);
tmp_class_container$class_creation_9__bases_orig = tmp_assign_source_71;
}
{
PyObject *tmp_assign_source_72;
PyObject *tmp_direct_call_arg1_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
tmp_direct_call_arg1_9 = tmp_class_container$class_creation_9__bases_orig;
Py_INCREF(tmp_direct_call_arg1_9);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_9};
    tmp_assign_source_72 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_72 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_25;
}
assert(tmp_class_container$class_creation_9__bases == NULL);
tmp_class_container$class_creation_9__bases = tmp_assign_source_72;
}
{
PyObject *tmp_assign_source_73;
tmp_assign_source_73 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_9__class_decl_dict == NULL);
tmp_class_container$class_creation_9__class_decl_dict = tmp_assign_source_73;
}
{
PyObject *tmp_assign_source_74;
PyObject *tmp_metaclass_value_9;
nuitka_bool tmp_condition_result_33;
int tmp_truth_name_9;
PyObject *tmp_type_arg_17;
PyObject *tmp_expression_value_49;
PyObject *tmp_subscript_value_9;
PyObject *tmp_bases_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_truth_name_9 = CHECK_IF_TRUE(tmp_class_container$class_creation_9__bases);
if (tmp_truth_name_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_25;
}
tmp_condition_result_33 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_9;
} else {
    goto condexpr_false_9;
}
condexpr_true_9:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_expression_value_49 = tmp_class_container$class_creation_9__bases;
tmp_subscript_value_9 = const_int_0;
tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_49, tmp_subscript_value_9, 0);
if (tmp_type_arg_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_25;
}
tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_17);
CHECK_OBJECT(tmp_type_arg_17);
Py_DECREF(tmp_type_arg_17);
if (tmp_metaclass_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_25;
}
goto condexpr_end_9;
condexpr_false_9:;
tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_9);
condexpr_end_9:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_bases_value_9 = tmp_class_container$class_creation_9__bases;
tmp_assign_source_74 = SELECT_METACLASS(tstate, tmp_metaclass_value_9, tmp_bases_value_9);
CHECK_OBJECT(tmp_metaclass_value_9);
Py_DECREF(tmp_metaclass_value_9);
if (tmp_assign_source_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_25;
}
assert(tmp_class_container$class_creation_9__metaclass == NULL);
tmp_class_container$class_creation_9__metaclass = tmp_assign_source_74;
}
{
bool tmp_condition_result_34;
PyObject *tmp_expression_value_50;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_50 = tmp_class_container$class_creation_9__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_50, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_25;
}
tmp_condition_result_34 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_34 != false) {
    goto branch_yes_25;
} else {
    goto branch_no_25;
}
}
branch_yes_25:;
{
PyObject *tmp_assign_source_75;
PyObject *tmp_called_value_18;
PyObject *tmp_expression_value_51;
PyObject *tmp_args_value_17;
PyObject *tmp_tuple_element_33;
PyObject *tmp_kwargs_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_51 = tmp_class_container$class_creation_9__metaclass;
tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_25;
}
tmp_tuple_element_33 = mod_consts.const_str_plain_NetworkError;
tmp_args_value_17 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_33);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_tuple_element_33 = tmp_class_container$class_creation_9__bases;
PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_33);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_kwargs_value_17 = tmp_class_container$class_creation_9__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 167;
tmp_assign_source_75 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_17, tmp_kwargs_value_17);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
CHECK_OBJECT(tmp_args_value_17);
Py_DECREF(tmp_args_value_17);
if (tmp_assign_source_75 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_25;
}
assert(tmp_class_container$class_creation_9__prepared == NULL);
tmp_class_container$class_creation_9__prepared = tmp_assign_source_75;
}
{
bool tmp_condition_result_35;
PyObject *tmp_operand_value_9;
PyObject *tmp_expression_value_52;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_expression_value_52 = tmp_class_container$class_creation_9__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_52, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_25;
}
tmp_operand_value_9 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
assert(!(tmp_res == -1));
tmp_condition_result_35 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_35 != false) {
    goto branch_yes_26;
} else {
    goto branch_no_26;
}
}
branch_yes_26:;
{
PyObject *tmp_raise_type_9;
PyObject *tmp_make_exception_arg_9;
PyObject *tmp_mod_expr_left_9;
PyObject *tmp_mod_expr_right_9;
PyObject *tmp_tuple_element_34;
PyObject *tmp_expression_value_53;
PyObject *tmp_name_value_10;
PyObject *tmp_default_value_9;
tmp_mod_expr_left_9 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_53 = tmp_class_container$class_creation_9__metaclass;
tmp_name_value_10 = const_str_plain___name__;
tmp_default_value_9 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_34 = BUILTIN_GETATTR(tstate, tmp_expression_value_53, tmp_name_value_10, tmp_default_value_9);
if (tmp_tuple_element_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_25;
}
tmp_mod_expr_right_9 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_54;
PyObject *tmp_type_arg_18;
PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_34);
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_type_arg_18 = tmp_class_container$class_creation_9__prepared;
tmp_expression_value_54 = BUILTIN_TYPE1(tmp_type_arg_18);
assert(!(tmp_expression_value_54 == NULL));
tmp_tuple_element_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_54);
Py_DECREF(tmp_expression_value_54);
if (tmp_tuple_element_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_34);
}
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_mod_expr_right_9);
goto try_except_handler_25;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;
tmp_make_exception_arg_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
CHECK_OBJECT(tmp_mod_expr_right_9);
Py_DECREF(tmp_mod_expr_right_9);
if (tmp_make_exception_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_25;
}
frame_frame_httpx$_exceptions->m_frame.f_lineno = 167;
tmp_raise_type_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_9);
CHECK_OBJECT(tmp_make_exception_arg_9);
Py_DECREF(tmp_make_exception_arg_9);
assert(!(tmp_raise_type_9 == NULL));
exception_state.exception_value = tmp_raise_type_9;
exception_lineno = 167;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_25;
}
branch_no_26:;
goto branch_end_25;
branch_no_25:;
{
PyObject *tmp_assign_source_76;
tmp_assign_source_76 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_9__prepared == NULL);
tmp_class_container$class_creation_9__prepared = tmp_assign_source_76;
}
branch_end_25:;
{
PyObject *tmp_assign_source_77;
{
PyObject *tmp_set_locals_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_set_locals_9 = tmp_class_container$class_creation_9__prepared;
locals_httpx$_exceptions$$$class__9_NetworkError_167 = tmp_set_locals_9;
Py_INCREF(tmp_set_locals_9);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_f49f37ecb12db2b9a869fd11ee8982d4;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__9_NetworkError_167, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_27;
}
tmp_dictset_value = mod_consts.const_str_digest_ee6461dfab67b5e667f6f0fd0f48d8e7;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__9_NetworkError_167, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_27;
}
tmp_dictset_value = mod_consts.const_str_plain_NetworkError;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__9_NetworkError_167, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_27;
}
tmp_dictset_value = mod_consts.const_int_pos_167;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__9_NetworkError_167, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_27;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__9_NetworkError_167, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_27;
}
{
nuitka_bool tmp_condition_result_36;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_cmp_expr_left_9 = tmp_class_container$class_creation_9__bases;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
tmp_cmp_expr_right_9 = tmp_class_container$class_creation_9__bases_orig;
tmp_condition_result_36 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
if (tmp_condition_result_36 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_27;
}
if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
    goto branch_yes_27;
} else {
    goto branch_no_27;
}
}
branch_yes_27:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_9__bases_orig;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__9_NetworkError_167, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_27;
}
branch_no_27:;
{
PyObject *tmp_assign_source_78;
PyObject *tmp_called_value_19;
PyObject *tmp_args_value_18;
PyObject *tmp_tuple_element_35;
PyObject *tmp_kwargs_value_18;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_called_value_19 = tmp_class_container$class_creation_9__metaclass;
tmp_tuple_element_35 = mod_consts.const_str_plain_NetworkError;
tmp_args_value_18 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_35);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_tuple_element_35 = tmp_class_container$class_creation_9__bases;
PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_35);
tmp_tuple_element_35 = locals_httpx$_exceptions$$$class__9_NetworkError_167;
PyTuple_SET_ITEM0(tmp_args_value_18, 2, tmp_tuple_element_35);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_kwargs_value_18 = tmp_class_container$class_creation_9__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 167;
tmp_assign_source_78 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_18, tmp_kwargs_value_18);
CHECK_OBJECT(tmp_args_value_18);
Py_DECREF(tmp_args_value_18);
if (tmp_assign_source_78 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_27;
}
assert(outline_8_var___class__ == NULL);
outline_8_var___class__ = tmp_assign_source_78;
}
CHECK_OBJECT(outline_8_var___class__);
tmp_assign_source_77 = outline_8_var___class__;
Py_INCREF(tmp_assign_source_77);
goto try_return_handler_27;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_27:;
Py_DECREF(locals_httpx$_exceptions$$$class__9_NetworkError_167);
locals_httpx$_exceptions$$$class__9_NetworkError_167 = NULL;
goto try_return_handler_26;
// Exception handler code:
try_except_handler_27:;
exception_keeper_lineno_25 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_25 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpx$_exceptions$$$class__9_NetworkError_167);
locals_httpx$_exceptions$$$class__9_NetworkError_167 = NULL;
// Re-raise.
exception_state = exception_keeper_name_25;
exception_lineno = exception_keeper_lineno_25;

goto try_except_handler_26;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_26:;
CHECK_OBJECT(outline_8_var___class__);
CHECK_OBJECT(outline_8_var___class__);
Py_DECREF(outline_8_var___class__);
outline_8_var___class__ = NULL;
goto outline_result_18;
// Exception handler code:
try_except_handler_26:;
exception_keeper_lineno_26 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_26 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_26;
exception_lineno = exception_keeper_lineno_26;

goto outline_exception_9;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_9:;
exception_lineno = 167;
goto try_except_handler_25;
outline_result_18:;
UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_NetworkError, tmp_assign_source_77);
}
goto try_end_9;
// Exception handler code:
try_except_handler_25:;
exception_keeper_lineno_27 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_27 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_9__bases_orig);
tmp_class_container$class_creation_9__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_9__bases);
tmp_class_container$class_creation_9__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_9__class_decl_dict);
tmp_class_container$class_creation_9__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_9__metaclass);
tmp_class_container$class_creation_9__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_9__prepared);
tmp_class_container$class_creation_9__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_27;
exception_lineno = exception_keeper_lineno_27;

goto frame_exception_exit_1;
// End of try:
try_end_9:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
Py_DECREF(tmp_class_container$class_creation_9__bases_orig);
tmp_class_container$class_creation_9__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
Py_DECREF(tmp_class_container$class_creation_9__bases);
tmp_class_container$class_creation_9__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_9__class_decl_dict);
tmp_class_container$class_creation_9__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
Py_DECREF(tmp_class_container$class_creation_9__metaclass);
tmp_class_container$class_creation_9__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
Py_DECREF(tmp_class_container$class_creation_9__prepared);
tmp_class_container$class_creation_9__prepared = NULL;
tmp_outline_return_value_9 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_9);
goto outline_result_17;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_17:;
CHECK_OBJECT(tmp_outline_return_value_9);
Py_DECREF(tmp_outline_return_value_9);
}
{
PyObject *tmp_outline_return_value_10;
// Tried code:
{
PyObject *tmp_assign_source_79;
PyObject *tmp_tuple_element_36;
tmp_tuple_element_36 = module_var_accessor_httpx$_exceptions$NetworkError(tstate);
if (unlikely(tmp_tuple_element_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NetworkError);
}

if (tmp_tuple_element_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 175;

    goto try_except_handler_28;
}
tmp_assign_source_79 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_79, 0, tmp_tuple_element_36);
assert(tmp_class_container$class_creation_10__bases_orig == NULL);
tmp_class_container$class_creation_10__bases_orig = tmp_assign_source_79;
}
{
PyObject *tmp_assign_source_80;
PyObject *tmp_direct_call_arg1_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
tmp_direct_call_arg1_10 = tmp_class_container$class_creation_10__bases_orig;
Py_INCREF(tmp_direct_call_arg1_10);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_10};
    tmp_assign_source_80 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_80 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;

    goto try_except_handler_28;
}
assert(tmp_class_container$class_creation_10__bases == NULL);
tmp_class_container$class_creation_10__bases = tmp_assign_source_80;
}
{
PyObject *tmp_assign_source_81;
tmp_assign_source_81 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_10__class_decl_dict == NULL);
tmp_class_container$class_creation_10__class_decl_dict = tmp_assign_source_81;
}
{
PyObject *tmp_assign_source_82;
PyObject *tmp_metaclass_value_10;
nuitka_bool tmp_condition_result_37;
int tmp_truth_name_10;
PyObject *tmp_type_arg_19;
PyObject *tmp_expression_value_55;
PyObject *tmp_subscript_value_10;
PyObject *tmp_bases_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_truth_name_10 = CHECK_IF_TRUE(tmp_class_container$class_creation_10__bases);
if (tmp_truth_name_10 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;

    goto try_except_handler_28;
}
tmp_condition_result_37 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_10;
} else {
    goto condexpr_false_10;
}
condexpr_true_10:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_expression_value_55 = tmp_class_container$class_creation_10__bases;
tmp_subscript_value_10 = const_int_0;
tmp_type_arg_19 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_55, tmp_subscript_value_10, 0);
if (tmp_type_arg_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;

    goto try_except_handler_28;
}
tmp_metaclass_value_10 = BUILTIN_TYPE1(tmp_type_arg_19);
CHECK_OBJECT(tmp_type_arg_19);
Py_DECREF(tmp_type_arg_19);
if (tmp_metaclass_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;

    goto try_except_handler_28;
}
goto condexpr_end_10;
condexpr_false_10:;
tmp_metaclass_value_10 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_10);
condexpr_end_10:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_bases_value_10 = tmp_class_container$class_creation_10__bases;
tmp_assign_source_82 = SELECT_METACLASS(tstate, tmp_metaclass_value_10, tmp_bases_value_10);
CHECK_OBJECT(tmp_metaclass_value_10);
Py_DECREF(tmp_metaclass_value_10);
if (tmp_assign_source_82 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;

    goto try_except_handler_28;
}
assert(tmp_class_container$class_creation_10__metaclass == NULL);
tmp_class_container$class_creation_10__metaclass = tmp_assign_source_82;
}
{
bool tmp_condition_result_38;
PyObject *tmp_expression_value_56;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_56 = tmp_class_container$class_creation_10__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_56, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;

    goto try_except_handler_28;
}
tmp_condition_result_38 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_38 != false) {
    goto branch_yes_28;
} else {
    goto branch_no_28;
}
}
branch_yes_28:;
{
PyObject *tmp_assign_source_83;
PyObject *tmp_called_value_20;
PyObject *tmp_expression_value_57;
PyObject *tmp_args_value_19;
PyObject *tmp_tuple_element_37;
PyObject *tmp_kwargs_value_19;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_57 = tmp_class_container$class_creation_10__metaclass;
tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;

    goto try_except_handler_28;
}
tmp_tuple_element_37 = mod_consts.const_str_plain_ReadError;
tmp_args_value_19 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_37);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_tuple_element_37 = tmp_class_container$class_creation_10__bases;
PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_37);
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
tmp_kwargs_value_19 = tmp_class_container$class_creation_10__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 175;
tmp_assign_source_83 = CALL_FUNCTION(tstate, tmp_called_value_20, tmp_args_value_19, tmp_kwargs_value_19);
CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
CHECK_OBJECT(tmp_args_value_19);
Py_DECREF(tmp_args_value_19);
if (tmp_assign_source_83 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;

    goto try_except_handler_28;
}
assert(tmp_class_container$class_creation_10__prepared == NULL);
tmp_class_container$class_creation_10__prepared = tmp_assign_source_83;
}
{
bool tmp_condition_result_39;
PyObject *tmp_operand_value_10;
PyObject *tmp_expression_value_58;
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_expression_value_58 = tmp_class_container$class_creation_10__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_58, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;

    goto try_except_handler_28;
}
tmp_operand_value_10 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_10);
assert(!(tmp_res == -1));
tmp_condition_result_39 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_39 != false) {
    goto branch_yes_29;
} else {
    goto branch_no_29;
}
}
branch_yes_29:;
{
PyObject *tmp_raise_type_10;
PyObject *tmp_make_exception_arg_10;
PyObject *tmp_mod_expr_left_10;
PyObject *tmp_mod_expr_right_10;
PyObject *tmp_tuple_element_38;
PyObject *tmp_expression_value_59;
PyObject *tmp_name_value_11;
PyObject *tmp_default_value_10;
tmp_mod_expr_left_10 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_59 = tmp_class_container$class_creation_10__metaclass;
tmp_name_value_11 = const_str_plain___name__;
tmp_default_value_10 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_38 = BUILTIN_GETATTR(tstate, tmp_expression_value_59, tmp_name_value_11, tmp_default_value_10);
if (tmp_tuple_element_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;

    goto try_except_handler_28;
}
tmp_mod_expr_right_10 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_60;
PyObject *tmp_type_arg_20;
PyTuple_SET_ITEM(tmp_mod_expr_right_10, 0, tmp_tuple_element_38);
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_type_arg_20 = tmp_class_container$class_creation_10__prepared;
tmp_expression_value_60 = BUILTIN_TYPE1(tmp_type_arg_20);
assert(!(tmp_expression_value_60 == NULL));
tmp_tuple_element_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_60);
Py_DECREF(tmp_expression_value_60);
if (tmp_tuple_element_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;

    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_10, 1, tmp_tuple_element_38);
}
goto tuple_build_no_exception_10;
// Exception handling pass through code for tuple_build:
tuple_build_exception_10:;
Py_DECREF(tmp_mod_expr_right_10);
goto try_except_handler_28;
// Finished with no exception for tuple_build:
tuple_build_no_exception_10:;
tmp_make_exception_arg_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_10, tmp_mod_expr_right_10);
CHECK_OBJECT(tmp_mod_expr_right_10);
Py_DECREF(tmp_mod_expr_right_10);
if (tmp_make_exception_arg_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;

    goto try_except_handler_28;
}
frame_frame_httpx$_exceptions->m_frame.f_lineno = 175;
tmp_raise_type_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_10);
CHECK_OBJECT(tmp_make_exception_arg_10);
Py_DECREF(tmp_make_exception_arg_10);
assert(!(tmp_raise_type_10 == NULL));
exception_state.exception_value = tmp_raise_type_10;
exception_lineno = 175;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_28;
}
branch_no_29:;
goto branch_end_28;
branch_no_28:;
{
PyObject *tmp_assign_source_84;
tmp_assign_source_84 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_10__prepared == NULL);
tmp_class_container$class_creation_10__prepared = tmp_assign_source_84;
}
branch_end_28:;
{
PyObject *tmp_assign_source_85;
{
PyObject *tmp_set_locals_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_set_locals_10 = tmp_class_container$class_creation_10__prepared;
locals_httpx$_exceptions$$$class__10_ReadError_175 = tmp_set_locals_10;
Py_INCREF(tmp_set_locals_10);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_f49f37ecb12db2b9a869fd11ee8982d4;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__10_ReadError_175, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;

    goto try_except_handler_30;
}
tmp_dictset_value = mod_consts.const_str_digest_ac09e72075e93a375f51ddfd7a9c8a27;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__10_ReadError_175, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;

    goto try_except_handler_30;
}
tmp_dictset_value = mod_consts.const_str_plain_ReadError;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__10_ReadError_175, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;

    goto try_except_handler_30;
}
tmp_dictset_value = mod_consts.const_int_pos_175;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__10_ReadError_175, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;

    goto try_except_handler_30;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__10_ReadError_175, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;

    goto try_except_handler_30;
}
{
nuitka_bool tmp_condition_result_40;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_cmp_expr_left_10 = tmp_class_container$class_creation_10__bases;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
tmp_cmp_expr_right_10 = tmp_class_container$class_creation_10__bases_orig;
tmp_condition_result_40 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
if (tmp_condition_result_40 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;

    goto try_except_handler_30;
}
if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
    goto branch_yes_30;
} else {
    goto branch_no_30;
}
}
branch_yes_30:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_10__bases_orig;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__10_ReadError_175, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;

    goto try_except_handler_30;
}
branch_no_30:;
{
PyObject *tmp_assign_source_86;
PyObject *tmp_called_value_21;
PyObject *tmp_args_value_20;
PyObject *tmp_tuple_element_39;
PyObject *tmp_kwargs_value_20;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_called_value_21 = tmp_class_container$class_creation_10__metaclass;
tmp_tuple_element_39 = mod_consts.const_str_plain_ReadError;
tmp_args_value_20 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_39);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_tuple_element_39 = tmp_class_container$class_creation_10__bases;
PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_39);
tmp_tuple_element_39 = locals_httpx$_exceptions$$$class__10_ReadError_175;
PyTuple_SET_ITEM0(tmp_args_value_20, 2, tmp_tuple_element_39);
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
tmp_kwargs_value_20 = tmp_class_container$class_creation_10__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 175;
tmp_assign_source_86 = CALL_FUNCTION(tstate, tmp_called_value_21, tmp_args_value_20, tmp_kwargs_value_20);
CHECK_OBJECT(tmp_args_value_20);
Py_DECREF(tmp_args_value_20);
if (tmp_assign_source_86 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;

    goto try_except_handler_30;
}
assert(outline_9_var___class__ == NULL);
outline_9_var___class__ = tmp_assign_source_86;
}
CHECK_OBJECT(outline_9_var___class__);
tmp_assign_source_85 = outline_9_var___class__;
Py_INCREF(tmp_assign_source_85);
goto try_return_handler_30;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_30:;
Py_DECREF(locals_httpx$_exceptions$$$class__10_ReadError_175);
locals_httpx$_exceptions$$$class__10_ReadError_175 = NULL;
goto try_return_handler_29;
// Exception handler code:
try_except_handler_30:;
exception_keeper_lineno_28 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_28 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpx$_exceptions$$$class__10_ReadError_175);
locals_httpx$_exceptions$$$class__10_ReadError_175 = NULL;
// Re-raise.
exception_state = exception_keeper_name_28;
exception_lineno = exception_keeper_lineno_28;

goto try_except_handler_29;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_29:;
CHECK_OBJECT(outline_9_var___class__);
CHECK_OBJECT(outline_9_var___class__);
Py_DECREF(outline_9_var___class__);
outline_9_var___class__ = NULL;
goto outline_result_20;
// Exception handler code:
try_except_handler_29:;
exception_keeper_lineno_29 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_29 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_29;
exception_lineno = exception_keeper_lineno_29;

goto outline_exception_10;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_10:;
exception_lineno = 175;
goto try_except_handler_28;
outline_result_20:;
UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadError, tmp_assign_source_85);
}
goto try_end_10;
// Exception handler code:
try_except_handler_28:;
exception_keeper_lineno_30 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_30 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_10__bases_orig);
tmp_class_container$class_creation_10__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_10__bases);
tmp_class_container$class_creation_10__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_10__class_decl_dict);
tmp_class_container$class_creation_10__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_10__metaclass);
tmp_class_container$class_creation_10__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_10__prepared);
tmp_class_container$class_creation_10__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_30;
exception_lineno = exception_keeper_lineno_30;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
Py_DECREF(tmp_class_container$class_creation_10__bases_orig);
tmp_class_container$class_creation_10__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
Py_DECREF(tmp_class_container$class_creation_10__bases);
tmp_class_container$class_creation_10__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_10__class_decl_dict);
tmp_class_container$class_creation_10__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
Py_DECREF(tmp_class_container$class_creation_10__metaclass);
tmp_class_container$class_creation_10__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
Py_DECREF(tmp_class_container$class_creation_10__prepared);
tmp_class_container$class_creation_10__prepared = NULL;
tmp_outline_return_value_10 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_10);
goto outline_result_19;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_19:;
CHECK_OBJECT(tmp_outline_return_value_10);
Py_DECREF(tmp_outline_return_value_10);
}
{
PyObject *tmp_outline_return_value_11;
// Tried code:
{
PyObject *tmp_assign_source_87;
PyObject *tmp_tuple_element_40;
tmp_tuple_element_40 = module_var_accessor_httpx$_exceptions$NetworkError(tstate);
if (unlikely(tmp_tuple_element_40 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NetworkError);
}

if (tmp_tuple_element_40 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 181;

    goto try_except_handler_31;
}
tmp_assign_source_87 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_87, 0, tmp_tuple_element_40);
assert(tmp_class_container$class_creation_11__bases_orig == NULL);
tmp_class_container$class_creation_11__bases_orig = tmp_assign_source_87;
}
{
PyObject *tmp_assign_source_88;
PyObject *tmp_direct_call_arg1_11;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
tmp_direct_call_arg1_11 = tmp_class_container$class_creation_11__bases_orig;
Py_INCREF(tmp_direct_call_arg1_11);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_11};
    tmp_assign_source_88 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_88 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;

    goto try_except_handler_31;
}
assert(tmp_class_container$class_creation_11__bases == NULL);
tmp_class_container$class_creation_11__bases = tmp_assign_source_88;
}
{
PyObject *tmp_assign_source_89;
tmp_assign_source_89 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_11__class_decl_dict == NULL);
tmp_class_container$class_creation_11__class_decl_dict = tmp_assign_source_89;
}
{
PyObject *tmp_assign_source_90;
PyObject *tmp_metaclass_value_11;
nuitka_bool tmp_condition_result_41;
int tmp_truth_name_11;
PyObject *tmp_type_arg_21;
PyObject *tmp_expression_value_61;
PyObject *tmp_subscript_value_11;
PyObject *tmp_bases_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_truth_name_11 = CHECK_IF_TRUE(tmp_class_container$class_creation_11__bases);
if (tmp_truth_name_11 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;

    goto try_except_handler_31;
}
tmp_condition_result_41 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_41 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_11;
} else {
    goto condexpr_false_11;
}
condexpr_true_11:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_expression_value_61 = tmp_class_container$class_creation_11__bases;
tmp_subscript_value_11 = const_int_0;
tmp_type_arg_21 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_61, tmp_subscript_value_11, 0);
if (tmp_type_arg_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;

    goto try_except_handler_31;
}
tmp_metaclass_value_11 = BUILTIN_TYPE1(tmp_type_arg_21);
CHECK_OBJECT(tmp_type_arg_21);
Py_DECREF(tmp_type_arg_21);
if (tmp_metaclass_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;

    goto try_except_handler_31;
}
goto condexpr_end_11;
condexpr_false_11:;
tmp_metaclass_value_11 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_11);
condexpr_end_11:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_bases_value_11 = tmp_class_container$class_creation_11__bases;
tmp_assign_source_90 = SELECT_METACLASS(tstate, tmp_metaclass_value_11, tmp_bases_value_11);
CHECK_OBJECT(tmp_metaclass_value_11);
Py_DECREF(tmp_metaclass_value_11);
if (tmp_assign_source_90 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;

    goto try_except_handler_31;
}
assert(tmp_class_container$class_creation_11__metaclass == NULL);
tmp_class_container$class_creation_11__metaclass = tmp_assign_source_90;
}
{
bool tmp_condition_result_42;
PyObject *tmp_expression_value_62;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_expression_value_62 = tmp_class_container$class_creation_11__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_62, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;

    goto try_except_handler_31;
}
tmp_condition_result_42 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_42 != false) {
    goto branch_yes_31;
} else {
    goto branch_no_31;
}
}
branch_yes_31:;
{
PyObject *tmp_assign_source_91;
PyObject *tmp_called_value_22;
PyObject *tmp_expression_value_63;
PyObject *tmp_args_value_21;
PyObject *tmp_tuple_element_41;
PyObject *tmp_kwargs_value_21;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_expression_value_63 = tmp_class_container$class_creation_11__metaclass;
tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;

    goto try_except_handler_31;
}
tmp_tuple_element_41 = mod_consts.const_str_plain_WriteError;
tmp_args_value_21 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_21, 0, tmp_tuple_element_41);
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_tuple_element_41 = tmp_class_container$class_creation_11__bases;
PyTuple_SET_ITEM0(tmp_args_value_21, 1, tmp_tuple_element_41);
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
tmp_kwargs_value_21 = tmp_class_container$class_creation_11__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 181;
tmp_assign_source_91 = CALL_FUNCTION(tstate, tmp_called_value_22, tmp_args_value_21, tmp_kwargs_value_21);
CHECK_OBJECT(tmp_called_value_22);
Py_DECREF(tmp_called_value_22);
CHECK_OBJECT(tmp_args_value_21);
Py_DECREF(tmp_args_value_21);
if (tmp_assign_source_91 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;

    goto try_except_handler_31;
}
assert(tmp_class_container$class_creation_11__prepared == NULL);
tmp_class_container$class_creation_11__prepared = tmp_assign_source_91;
}
{
bool tmp_condition_result_43;
PyObject *tmp_operand_value_11;
PyObject *tmp_expression_value_64;
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
tmp_expression_value_64 = tmp_class_container$class_creation_11__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_64, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;

    goto try_except_handler_31;
}
tmp_operand_value_11 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_11);
assert(!(tmp_res == -1));
tmp_condition_result_43 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_43 != false) {
    goto branch_yes_32;
} else {
    goto branch_no_32;
}
}
branch_yes_32:;
{
PyObject *tmp_raise_type_11;
PyObject *tmp_make_exception_arg_11;
PyObject *tmp_mod_expr_left_11;
PyObject *tmp_mod_expr_right_11;
PyObject *tmp_tuple_element_42;
PyObject *tmp_expression_value_65;
PyObject *tmp_name_value_12;
PyObject *tmp_default_value_11;
tmp_mod_expr_left_11 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_expression_value_65 = tmp_class_container$class_creation_11__metaclass;
tmp_name_value_12 = const_str_plain___name__;
tmp_default_value_11 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_42 = BUILTIN_GETATTR(tstate, tmp_expression_value_65, tmp_name_value_12, tmp_default_value_11);
if (tmp_tuple_element_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;

    goto try_except_handler_31;
}
tmp_mod_expr_right_11 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_66;
PyObject *tmp_type_arg_22;
PyTuple_SET_ITEM(tmp_mod_expr_right_11, 0, tmp_tuple_element_42);
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
tmp_type_arg_22 = tmp_class_container$class_creation_11__prepared;
tmp_expression_value_66 = BUILTIN_TYPE1(tmp_type_arg_22);
assert(!(tmp_expression_value_66 == NULL));
tmp_tuple_element_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_66);
Py_DECREF(tmp_expression_value_66);
if (tmp_tuple_element_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;

    goto tuple_build_exception_11;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_11, 1, tmp_tuple_element_42);
}
goto tuple_build_no_exception_11;
// Exception handling pass through code for tuple_build:
tuple_build_exception_11:;
Py_DECREF(tmp_mod_expr_right_11);
goto try_except_handler_31;
// Finished with no exception for tuple_build:
tuple_build_no_exception_11:;
tmp_make_exception_arg_11 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_11, tmp_mod_expr_right_11);
CHECK_OBJECT(tmp_mod_expr_right_11);
Py_DECREF(tmp_mod_expr_right_11);
if (tmp_make_exception_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;

    goto try_except_handler_31;
}
frame_frame_httpx$_exceptions->m_frame.f_lineno = 181;
tmp_raise_type_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_11);
CHECK_OBJECT(tmp_make_exception_arg_11);
Py_DECREF(tmp_make_exception_arg_11);
assert(!(tmp_raise_type_11 == NULL));
exception_state.exception_value = tmp_raise_type_11;
exception_lineno = 181;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_31;
}
branch_no_32:;
goto branch_end_31;
branch_no_31:;
{
PyObject *tmp_assign_source_92;
tmp_assign_source_92 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_11__prepared == NULL);
tmp_class_container$class_creation_11__prepared = tmp_assign_source_92;
}
branch_end_31:;
{
PyObject *tmp_assign_source_93;
{
PyObject *tmp_set_locals_11;
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
tmp_set_locals_11 = tmp_class_container$class_creation_11__prepared;
locals_httpx$_exceptions$$$class__11_WriteError_181 = tmp_set_locals_11;
Py_INCREF(tmp_set_locals_11);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_f49f37ecb12db2b9a869fd11ee8982d4;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__11_WriteError_181, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;

    goto try_except_handler_33;
}
tmp_dictset_value = mod_consts.const_str_digest_41a8abec3c2ab213f657161378a20683;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__11_WriteError_181, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;

    goto try_except_handler_33;
}
tmp_dictset_value = mod_consts.const_str_plain_WriteError;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__11_WriteError_181, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;

    goto try_except_handler_33;
}
tmp_dictset_value = mod_consts.const_int_pos_181;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__11_WriteError_181, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;

    goto try_except_handler_33;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__11_WriteError_181, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;

    goto try_except_handler_33;
}
{
nuitka_bool tmp_condition_result_44;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_cmp_expr_left_11 = tmp_class_container$class_creation_11__bases;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
tmp_cmp_expr_right_11 = tmp_class_container$class_creation_11__bases_orig;
tmp_condition_result_44 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
if (tmp_condition_result_44 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;

    goto try_except_handler_33;
}
if (tmp_condition_result_44 == NUITKA_BOOL_TRUE) {
    goto branch_yes_33;
} else {
    goto branch_no_33;
}
}
branch_yes_33:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_11__bases_orig;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__11_WriteError_181, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;

    goto try_except_handler_33;
}
branch_no_33:;
{
PyObject *tmp_assign_source_94;
PyObject *tmp_called_value_23;
PyObject *tmp_args_value_22;
PyObject *tmp_tuple_element_43;
PyObject *tmp_kwargs_value_22;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_called_value_23 = tmp_class_container$class_creation_11__metaclass;
tmp_tuple_element_43 = mod_consts.const_str_plain_WriteError;
tmp_args_value_22 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_22, 0, tmp_tuple_element_43);
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_tuple_element_43 = tmp_class_container$class_creation_11__bases;
PyTuple_SET_ITEM0(tmp_args_value_22, 1, tmp_tuple_element_43);
tmp_tuple_element_43 = locals_httpx$_exceptions$$$class__11_WriteError_181;
PyTuple_SET_ITEM0(tmp_args_value_22, 2, tmp_tuple_element_43);
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
tmp_kwargs_value_22 = tmp_class_container$class_creation_11__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 181;
tmp_assign_source_94 = CALL_FUNCTION(tstate, tmp_called_value_23, tmp_args_value_22, tmp_kwargs_value_22);
CHECK_OBJECT(tmp_args_value_22);
Py_DECREF(tmp_args_value_22);
if (tmp_assign_source_94 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;

    goto try_except_handler_33;
}
assert(outline_10_var___class__ == NULL);
outline_10_var___class__ = tmp_assign_source_94;
}
CHECK_OBJECT(outline_10_var___class__);
tmp_assign_source_93 = outline_10_var___class__;
Py_INCREF(tmp_assign_source_93);
goto try_return_handler_33;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_33:;
Py_DECREF(locals_httpx$_exceptions$$$class__11_WriteError_181);
locals_httpx$_exceptions$$$class__11_WriteError_181 = NULL;
goto try_return_handler_32;
// Exception handler code:
try_except_handler_33:;
exception_keeper_lineno_31 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_31 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpx$_exceptions$$$class__11_WriteError_181);
locals_httpx$_exceptions$$$class__11_WriteError_181 = NULL;
// Re-raise.
exception_state = exception_keeper_name_31;
exception_lineno = exception_keeper_lineno_31;

goto try_except_handler_32;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_32:;
CHECK_OBJECT(outline_10_var___class__);
CHECK_OBJECT(outline_10_var___class__);
Py_DECREF(outline_10_var___class__);
outline_10_var___class__ = NULL;
goto outline_result_22;
// Exception handler code:
try_except_handler_32:;
exception_keeper_lineno_32 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_32 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_32;
exception_lineno = exception_keeper_lineno_32;

goto outline_exception_11;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_11:;
exception_lineno = 181;
goto try_except_handler_31;
outline_result_22:;
UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_WriteError, tmp_assign_source_93);
}
goto try_end_11;
// Exception handler code:
try_except_handler_31:;
exception_keeper_lineno_33 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_33 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_11__bases_orig);
tmp_class_container$class_creation_11__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_11__bases);
tmp_class_container$class_creation_11__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_11__class_decl_dict);
tmp_class_container$class_creation_11__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_11__metaclass);
tmp_class_container$class_creation_11__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_11__prepared);
tmp_class_container$class_creation_11__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_33;
exception_lineno = exception_keeper_lineno_33;

goto frame_exception_exit_1;
// End of try:
try_end_11:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
Py_DECREF(tmp_class_container$class_creation_11__bases_orig);
tmp_class_container$class_creation_11__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
Py_DECREF(tmp_class_container$class_creation_11__bases);
tmp_class_container$class_creation_11__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_11__class_decl_dict);
tmp_class_container$class_creation_11__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
Py_DECREF(tmp_class_container$class_creation_11__metaclass);
tmp_class_container$class_creation_11__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
Py_DECREF(tmp_class_container$class_creation_11__prepared);
tmp_class_container$class_creation_11__prepared = NULL;
tmp_outline_return_value_11 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_11);
goto outline_result_21;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_21:;
CHECK_OBJECT(tmp_outline_return_value_11);
Py_DECREF(tmp_outline_return_value_11);
}
{
PyObject *tmp_outline_return_value_12;
// Tried code:
{
PyObject *tmp_assign_source_95;
PyObject *tmp_tuple_element_44;
tmp_tuple_element_44 = module_var_accessor_httpx$_exceptions$NetworkError(tstate);
if (unlikely(tmp_tuple_element_44 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NetworkError);
}

if (tmp_tuple_element_44 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 187;

    goto try_except_handler_34;
}
tmp_assign_source_95 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_95, 0, tmp_tuple_element_44);
assert(tmp_class_container$class_creation_12__bases_orig == NULL);
tmp_class_container$class_creation_12__bases_orig = tmp_assign_source_95;
}
{
PyObject *tmp_assign_source_96;
PyObject *tmp_direct_call_arg1_12;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases_orig);
tmp_direct_call_arg1_12 = tmp_class_container$class_creation_12__bases_orig;
Py_INCREF(tmp_direct_call_arg1_12);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_12};
    tmp_assign_source_96 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_96 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto try_except_handler_34;
}
assert(tmp_class_container$class_creation_12__bases == NULL);
tmp_class_container$class_creation_12__bases = tmp_assign_source_96;
}
{
PyObject *tmp_assign_source_97;
tmp_assign_source_97 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_12__class_decl_dict == NULL);
tmp_class_container$class_creation_12__class_decl_dict = tmp_assign_source_97;
}
{
PyObject *tmp_assign_source_98;
PyObject *tmp_metaclass_value_12;
nuitka_bool tmp_condition_result_45;
int tmp_truth_name_12;
PyObject *tmp_type_arg_23;
PyObject *tmp_expression_value_67;
PyObject *tmp_subscript_value_12;
PyObject *tmp_bases_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_truth_name_12 = CHECK_IF_TRUE(tmp_class_container$class_creation_12__bases);
if (tmp_truth_name_12 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto try_except_handler_34;
}
tmp_condition_result_45 = tmp_truth_name_12 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_45 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_12;
} else {
    goto condexpr_false_12;
}
condexpr_true_12:;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_expression_value_67 = tmp_class_container$class_creation_12__bases;
tmp_subscript_value_12 = const_int_0;
tmp_type_arg_23 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_67, tmp_subscript_value_12, 0);
if (tmp_type_arg_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto try_except_handler_34;
}
tmp_metaclass_value_12 = BUILTIN_TYPE1(tmp_type_arg_23);
CHECK_OBJECT(tmp_type_arg_23);
Py_DECREF(tmp_type_arg_23);
if (tmp_metaclass_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto try_except_handler_34;
}
goto condexpr_end_12;
condexpr_false_12:;
tmp_metaclass_value_12 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_12);
condexpr_end_12:;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_bases_value_12 = tmp_class_container$class_creation_12__bases;
tmp_assign_source_98 = SELECT_METACLASS(tstate, tmp_metaclass_value_12, tmp_bases_value_12);
CHECK_OBJECT(tmp_metaclass_value_12);
Py_DECREF(tmp_metaclass_value_12);
if (tmp_assign_source_98 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto try_except_handler_34;
}
assert(tmp_class_container$class_creation_12__metaclass == NULL);
tmp_class_container$class_creation_12__metaclass = tmp_assign_source_98;
}
{
bool tmp_condition_result_46;
PyObject *tmp_expression_value_68;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_expression_value_68 = tmp_class_container$class_creation_12__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_68, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto try_except_handler_34;
}
tmp_condition_result_46 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_46 != false) {
    goto branch_yes_34;
} else {
    goto branch_no_34;
}
}
branch_yes_34:;
{
PyObject *tmp_assign_source_99;
PyObject *tmp_called_value_24;
PyObject *tmp_expression_value_69;
PyObject *tmp_args_value_23;
PyObject *tmp_tuple_element_45;
PyObject *tmp_kwargs_value_23;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_expression_value_69 = tmp_class_container$class_creation_12__metaclass;
tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto try_except_handler_34;
}
tmp_tuple_element_45 = mod_consts.const_str_plain_ConnectError;
tmp_args_value_23 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_23, 0, tmp_tuple_element_45);
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_tuple_element_45 = tmp_class_container$class_creation_12__bases;
PyTuple_SET_ITEM0(tmp_args_value_23, 1, tmp_tuple_element_45);
CHECK_OBJECT(tmp_class_container$class_creation_12__class_decl_dict);
tmp_kwargs_value_23 = tmp_class_container$class_creation_12__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 187;
tmp_assign_source_99 = CALL_FUNCTION(tstate, tmp_called_value_24, tmp_args_value_23, tmp_kwargs_value_23);
CHECK_OBJECT(tmp_called_value_24);
Py_DECREF(tmp_called_value_24);
CHECK_OBJECT(tmp_args_value_23);
Py_DECREF(tmp_args_value_23);
if (tmp_assign_source_99 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto try_except_handler_34;
}
assert(tmp_class_container$class_creation_12__prepared == NULL);
tmp_class_container$class_creation_12__prepared = tmp_assign_source_99;
}
{
bool tmp_condition_result_47;
PyObject *tmp_operand_value_12;
PyObject *tmp_expression_value_70;
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
tmp_expression_value_70 = tmp_class_container$class_creation_12__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_70, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto try_except_handler_34;
}
tmp_operand_value_12 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_12);
assert(!(tmp_res == -1));
tmp_condition_result_47 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_47 != false) {
    goto branch_yes_35;
} else {
    goto branch_no_35;
}
}
branch_yes_35:;
{
PyObject *tmp_raise_type_12;
PyObject *tmp_make_exception_arg_12;
PyObject *tmp_mod_expr_left_12;
PyObject *tmp_mod_expr_right_12;
PyObject *tmp_tuple_element_46;
PyObject *tmp_expression_value_71;
PyObject *tmp_name_value_13;
PyObject *tmp_default_value_12;
tmp_mod_expr_left_12 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_expression_value_71 = tmp_class_container$class_creation_12__metaclass;
tmp_name_value_13 = const_str_plain___name__;
tmp_default_value_12 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_46 = BUILTIN_GETATTR(tstate, tmp_expression_value_71, tmp_name_value_13, tmp_default_value_12);
if (tmp_tuple_element_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto try_except_handler_34;
}
tmp_mod_expr_right_12 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_72;
PyObject *tmp_type_arg_24;
PyTuple_SET_ITEM(tmp_mod_expr_right_12, 0, tmp_tuple_element_46);
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
tmp_type_arg_24 = tmp_class_container$class_creation_12__prepared;
tmp_expression_value_72 = BUILTIN_TYPE1(tmp_type_arg_24);
assert(!(tmp_expression_value_72 == NULL));
tmp_tuple_element_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_72);
Py_DECREF(tmp_expression_value_72);
if (tmp_tuple_element_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto tuple_build_exception_12;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_12, 1, tmp_tuple_element_46);
}
goto tuple_build_no_exception_12;
// Exception handling pass through code for tuple_build:
tuple_build_exception_12:;
Py_DECREF(tmp_mod_expr_right_12);
goto try_except_handler_34;
// Finished with no exception for tuple_build:
tuple_build_no_exception_12:;
tmp_make_exception_arg_12 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_12, tmp_mod_expr_right_12);
CHECK_OBJECT(tmp_mod_expr_right_12);
Py_DECREF(tmp_mod_expr_right_12);
if (tmp_make_exception_arg_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto try_except_handler_34;
}
frame_frame_httpx$_exceptions->m_frame.f_lineno = 187;
tmp_raise_type_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_12);
CHECK_OBJECT(tmp_make_exception_arg_12);
Py_DECREF(tmp_make_exception_arg_12);
assert(!(tmp_raise_type_12 == NULL));
exception_state.exception_value = tmp_raise_type_12;
exception_lineno = 187;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_34;
}
branch_no_35:;
goto branch_end_34;
branch_no_34:;
{
PyObject *tmp_assign_source_100;
tmp_assign_source_100 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_12__prepared == NULL);
tmp_class_container$class_creation_12__prepared = tmp_assign_source_100;
}
branch_end_34:;
{
PyObject *tmp_assign_source_101;
{
PyObject *tmp_set_locals_12;
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
tmp_set_locals_12 = tmp_class_container$class_creation_12__prepared;
locals_httpx$_exceptions$$$class__12_ConnectError_187 = tmp_set_locals_12;
Py_INCREF(tmp_set_locals_12);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_f49f37ecb12db2b9a869fd11ee8982d4;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__12_ConnectError_187, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto try_except_handler_36;
}
tmp_dictset_value = mod_consts.const_str_digest_c58935f0a35d2ca436707f40f3a8503e;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__12_ConnectError_187, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto try_except_handler_36;
}
tmp_dictset_value = mod_consts.const_str_plain_ConnectError;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__12_ConnectError_187, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto try_except_handler_36;
}
tmp_dictset_value = mod_consts.const_int_pos_187;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__12_ConnectError_187, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto try_except_handler_36;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__12_ConnectError_187, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto try_except_handler_36;
}
{
nuitka_bool tmp_condition_result_48;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_cmp_expr_left_12 = tmp_class_container$class_creation_12__bases;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases_orig);
tmp_cmp_expr_right_12 = tmp_class_container$class_creation_12__bases_orig;
tmp_condition_result_48 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
if (tmp_condition_result_48 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto try_except_handler_36;
}
if (tmp_condition_result_48 == NUITKA_BOOL_TRUE) {
    goto branch_yes_36;
} else {
    goto branch_no_36;
}
}
branch_yes_36:;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_12__bases_orig;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__12_ConnectError_187, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto try_except_handler_36;
}
branch_no_36:;
{
PyObject *tmp_assign_source_102;
PyObject *tmp_called_value_25;
PyObject *tmp_args_value_24;
PyObject *tmp_tuple_element_47;
PyObject *tmp_kwargs_value_24;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_called_value_25 = tmp_class_container$class_creation_12__metaclass;
tmp_tuple_element_47 = mod_consts.const_str_plain_ConnectError;
tmp_args_value_24 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_24, 0, tmp_tuple_element_47);
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_tuple_element_47 = tmp_class_container$class_creation_12__bases;
PyTuple_SET_ITEM0(tmp_args_value_24, 1, tmp_tuple_element_47);
tmp_tuple_element_47 = locals_httpx$_exceptions$$$class__12_ConnectError_187;
PyTuple_SET_ITEM0(tmp_args_value_24, 2, tmp_tuple_element_47);
CHECK_OBJECT(tmp_class_container$class_creation_12__class_decl_dict);
tmp_kwargs_value_24 = tmp_class_container$class_creation_12__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 187;
tmp_assign_source_102 = CALL_FUNCTION(tstate, tmp_called_value_25, tmp_args_value_24, tmp_kwargs_value_24);
CHECK_OBJECT(tmp_args_value_24);
Py_DECREF(tmp_args_value_24);
if (tmp_assign_source_102 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto try_except_handler_36;
}
assert(outline_11_var___class__ == NULL);
outline_11_var___class__ = tmp_assign_source_102;
}
CHECK_OBJECT(outline_11_var___class__);
tmp_assign_source_101 = outline_11_var___class__;
Py_INCREF(tmp_assign_source_101);
goto try_return_handler_36;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_36:;
Py_DECREF(locals_httpx$_exceptions$$$class__12_ConnectError_187);
locals_httpx$_exceptions$$$class__12_ConnectError_187 = NULL;
goto try_return_handler_35;
// Exception handler code:
try_except_handler_36:;
exception_keeper_lineno_34 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_34 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpx$_exceptions$$$class__12_ConnectError_187);
locals_httpx$_exceptions$$$class__12_ConnectError_187 = NULL;
// Re-raise.
exception_state = exception_keeper_name_34;
exception_lineno = exception_keeper_lineno_34;

goto try_except_handler_35;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_35:;
CHECK_OBJECT(outline_11_var___class__);
CHECK_OBJECT(outline_11_var___class__);
Py_DECREF(outline_11_var___class__);
outline_11_var___class__ = NULL;
goto outline_result_24;
// Exception handler code:
try_except_handler_35:;
exception_keeper_lineno_35 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_35 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_35;
exception_lineno = exception_keeper_lineno_35;

goto outline_exception_12;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_12:;
exception_lineno = 187;
goto try_except_handler_34;
outline_result_24:;
UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectError, tmp_assign_source_101);
}
goto try_end_12;
// Exception handler code:
try_except_handler_34:;
exception_keeper_lineno_36 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_36 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_12__bases_orig);
tmp_class_container$class_creation_12__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_12__bases);
tmp_class_container$class_creation_12__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_12__class_decl_dict);
tmp_class_container$class_creation_12__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_12__metaclass);
tmp_class_container$class_creation_12__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_12__prepared);
tmp_class_container$class_creation_12__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_36;
exception_lineno = exception_keeper_lineno_36;

goto frame_exception_exit_1;
// End of try:
try_end_12:;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_12__bases_orig);
Py_DECREF(tmp_class_container$class_creation_12__bases_orig);
tmp_class_container$class_creation_12__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
Py_DECREF(tmp_class_container$class_creation_12__bases);
tmp_class_container$class_creation_12__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_12__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_12__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_12__class_decl_dict);
tmp_class_container$class_creation_12__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
Py_DECREF(tmp_class_container$class_creation_12__metaclass);
tmp_class_container$class_creation_12__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
Py_DECREF(tmp_class_container$class_creation_12__prepared);
tmp_class_container$class_creation_12__prepared = NULL;
tmp_outline_return_value_12 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_12);
goto outline_result_23;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_23:;
CHECK_OBJECT(tmp_outline_return_value_12);
Py_DECREF(tmp_outline_return_value_12);
}
{
PyObject *tmp_outline_return_value_13;
// Tried code:
{
PyObject *tmp_assign_source_103;
PyObject *tmp_tuple_element_48;
tmp_tuple_element_48 = module_var_accessor_httpx$_exceptions$NetworkError(tstate);
if (unlikely(tmp_tuple_element_48 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NetworkError);
}

if (tmp_tuple_element_48 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 193;

    goto try_except_handler_37;
}
tmp_assign_source_103 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_103, 0, tmp_tuple_element_48);
assert(tmp_class_container$class_creation_13__bases_orig == NULL);
tmp_class_container$class_creation_13__bases_orig = tmp_assign_source_103;
}
{
PyObject *tmp_assign_source_104;
PyObject *tmp_direct_call_arg1_13;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases_orig);
tmp_direct_call_arg1_13 = tmp_class_container$class_creation_13__bases_orig;
Py_INCREF(tmp_direct_call_arg1_13);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_13};
    tmp_assign_source_104 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_104 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto try_except_handler_37;
}
assert(tmp_class_container$class_creation_13__bases == NULL);
tmp_class_container$class_creation_13__bases = tmp_assign_source_104;
}
{
PyObject *tmp_assign_source_105;
tmp_assign_source_105 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_13__class_decl_dict == NULL);
tmp_class_container$class_creation_13__class_decl_dict = tmp_assign_source_105;
}
{
PyObject *tmp_assign_source_106;
PyObject *tmp_metaclass_value_13;
nuitka_bool tmp_condition_result_49;
int tmp_truth_name_13;
PyObject *tmp_type_arg_25;
PyObject *tmp_expression_value_73;
PyObject *tmp_subscript_value_13;
PyObject *tmp_bases_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_truth_name_13 = CHECK_IF_TRUE(tmp_class_container$class_creation_13__bases);
if (tmp_truth_name_13 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto try_except_handler_37;
}
tmp_condition_result_49 = tmp_truth_name_13 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_49 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_13;
} else {
    goto condexpr_false_13;
}
condexpr_true_13:;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_expression_value_73 = tmp_class_container$class_creation_13__bases;
tmp_subscript_value_13 = const_int_0;
tmp_type_arg_25 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_73, tmp_subscript_value_13, 0);
if (tmp_type_arg_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto try_except_handler_37;
}
tmp_metaclass_value_13 = BUILTIN_TYPE1(tmp_type_arg_25);
CHECK_OBJECT(tmp_type_arg_25);
Py_DECREF(tmp_type_arg_25);
if (tmp_metaclass_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto try_except_handler_37;
}
goto condexpr_end_13;
condexpr_false_13:;
tmp_metaclass_value_13 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_13);
condexpr_end_13:;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_bases_value_13 = tmp_class_container$class_creation_13__bases;
tmp_assign_source_106 = SELECT_METACLASS(tstate, tmp_metaclass_value_13, tmp_bases_value_13);
CHECK_OBJECT(tmp_metaclass_value_13);
Py_DECREF(tmp_metaclass_value_13);
if (tmp_assign_source_106 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto try_except_handler_37;
}
assert(tmp_class_container$class_creation_13__metaclass == NULL);
tmp_class_container$class_creation_13__metaclass = tmp_assign_source_106;
}
{
bool tmp_condition_result_50;
PyObject *tmp_expression_value_74;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
tmp_expression_value_74 = tmp_class_container$class_creation_13__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_74, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto try_except_handler_37;
}
tmp_condition_result_50 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_50 != false) {
    goto branch_yes_37;
} else {
    goto branch_no_37;
}
}
branch_yes_37:;
{
PyObject *tmp_assign_source_107;
PyObject *tmp_called_value_26;
PyObject *tmp_expression_value_75;
PyObject *tmp_args_value_25;
PyObject *tmp_tuple_element_49;
PyObject *tmp_kwargs_value_25;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
tmp_expression_value_75 = tmp_class_container$class_creation_13__metaclass;
tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto try_except_handler_37;
}
tmp_tuple_element_49 = mod_consts.const_str_plain_CloseError;
tmp_args_value_25 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_25, 0, tmp_tuple_element_49);
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_tuple_element_49 = tmp_class_container$class_creation_13__bases;
PyTuple_SET_ITEM0(tmp_args_value_25, 1, tmp_tuple_element_49);
CHECK_OBJECT(tmp_class_container$class_creation_13__class_decl_dict);
tmp_kwargs_value_25 = tmp_class_container$class_creation_13__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 193;
tmp_assign_source_107 = CALL_FUNCTION(tstate, tmp_called_value_26, tmp_args_value_25, tmp_kwargs_value_25);
CHECK_OBJECT(tmp_called_value_26);
Py_DECREF(tmp_called_value_26);
CHECK_OBJECT(tmp_args_value_25);
Py_DECREF(tmp_args_value_25);
if (tmp_assign_source_107 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto try_except_handler_37;
}
assert(tmp_class_container$class_creation_13__prepared == NULL);
tmp_class_container$class_creation_13__prepared = tmp_assign_source_107;
}
{
bool tmp_condition_result_51;
PyObject *tmp_operand_value_13;
PyObject *tmp_expression_value_76;
CHECK_OBJECT(tmp_class_container$class_creation_13__prepared);
tmp_expression_value_76 = tmp_class_container$class_creation_13__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_76, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto try_except_handler_37;
}
tmp_operand_value_13 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_13);
assert(!(tmp_res == -1));
tmp_condition_result_51 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_51 != false) {
    goto branch_yes_38;
} else {
    goto branch_no_38;
}
}
branch_yes_38:;
{
PyObject *tmp_raise_type_13;
PyObject *tmp_make_exception_arg_13;
PyObject *tmp_mod_expr_left_13;
PyObject *tmp_mod_expr_right_13;
PyObject *tmp_tuple_element_50;
PyObject *tmp_expression_value_77;
PyObject *tmp_name_value_14;
PyObject *tmp_default_value_13;
tmp_mod_expr_left_13 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
tmp_expression_value_77 = tmp_class_container$class_creation_13__metaclass;
tmp_name_value_14 = const_str_plain___name__;
tmp_default_value_13 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_50 = BUILTIN_GETATTR(tstate, tmp_expression_value_77, tmp_name_value_14, tmp_default_value_13);
if (tmp_tuple_element_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto try_except_handler_37;
}
tmp_mod_expr_right_13 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_78;
PyObject *tmp_type_arg_26;
PyTuple_SET_ITEM(tmp_mod_expr_right_13, 0, tmp_tuple_element_50);
CHECK_OBJECT(tmp_class_container$class_creation_13__prepared);
tmp_type_arg_26 = tmp_class_container$class_creation_13__prepared;
tmp_expression_value_78 = BUILTIN_TYPE1(tmp_type_arg_26);
assert(!(tmp_expression_value_78 == NULL));
tmp_tuple_element_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_78);
Py_DECREF(tmp_expression_value_78);
if (tmp_tuple_element_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto tuple_build_exception_13;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_13, 1, tmp_tuple_element_50);
}
goto tuple_build_no_exception_13;
// Exception handling pass through code for tuple_build:
tuple_build_exception_13:;
Py_DECREF(tmp_mod_expr_right_13);
goto try_except_handler_37;
// Finished with no exception for tuple_build:
tuple_build_no_exception_13:;
tmp_make_exception_arg_13 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_13, tmp_mod_expr_right_13);
CHECK_OBJECT(tmp_mod_expr_right_13);
Py_DECREF(tmp_mod_expr_right_13);
if (tmp_make_exception_arg_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto try_except_handler_37;
}
frame_frame_httpx$_exceptions->m_frame.f_lineno = 193;
tmp_raise_type_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_13);
CHECK_OBJECT(tmp_make_exception_arg_13);
Py_DECREF(tmp_make_exception_arg_13);
assert(!(tmp_raise_type_13 == NULL));
exception_state.exception_value = tmp_raise_type_13;
exception_lineno = 193;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_37;
}
branch_no_38:;
goto branch_end_37;
branch_no_37:;
{
PyObject *tmp_assign_source_108;
tmp_assign_source_108 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_13__prepared == NULL);
tmp_class_container$class_creation_13__prepared = tmp_assign_source_108;
}
branch_end_37:;
{
PyObject *tmp_assign_source_109;
{
PyObject *tmp_set_locals_13;
CHECK_OBJECT(tmp_class_container$class_creation_13__prepared);
tmp_set_locals_13 = tmp_class_container$class_creation_13__prepared;
locals_httpx$_exceptions$$$class__13_CloseError_193 = tmp_set_locals_13;
Py_INCREF(tmp_set_locals_13);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_f49f37ecb12db2b9a869fd11ee8982d4;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__13_CloseError_193, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto try_except_handler_39;
}
tmp_dictset_value = mod_consts.const_str_digest_88792d50f73d3cfaed63c81841ff4cd2;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__13_CloseError_193, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto try_except_handler_39;
}
tmp_dictset_value = mod_consts.const_str_plain_CloseError;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__13_CloseError_193, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto try_except_handler_39;
}
tmp_dictset_value = mod_consts.const_int_pos_193;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__13_CloseError_193, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto try_except_handler_39;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__13_CloseError_193, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto try_except_handler_39;
}
{
nuitka_bool tmp_condition_result_52;
PyObject *tmp_cmp_expr_left_13;
PyObject *tmp_cmp_expr_right_13;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_cmp_expr_left_13 = tmp_class_container$class_creation_13__bases;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases_orig);
tmp_cmp_expr_right_13 = tmp_class_container$class_creation_13__bases_orig;
tmp_condition_result_52 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
if (tmp_condition_result_52 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto try_except_handler_39;
}
if (tmp_condition_result_52 == NUITKA_BOOL_TRUE) {
    goto branch_yes_39;
} else {
    goto branch_no_39;
}
}
branch_yes_39:;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_13__bases_orig;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__13_CloseError_193, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto try_except_handler_39;
}
branch_no_39:;
{
PyObject *tmp_assign_source_110;
PyObject *tmp_called_value_27;
PyObject *tmp_args_value_26;
PyObject *tmp_tuple_element_51;
PyObject *tmp_kwargs_value_26;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
tmp_called_value_27 = tmp_class_container$class_creation_13__metaclass;
tmp_tuple_element_51 = mod_consts.const_str_plain_CloseError;
tmp_args_value_26 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_26, 0, tmp_tuple_element_51);
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_tuple_element_51 = tmp_class_container$class_creation_13__bases;
PyTuple_SET_ITEM0(tmp_args_value_26, 1, tmp_tuple_element_51);
tmp_tuple_element_51 = locals_httpx$_exceptions$$$class__13_CloseError_193;
PyTuple_SET_ITEM0(tmp_args_value_26, 2, tmp_tuple_element_51);
CHECK_OBJECT(tmp_class_container$class_creation_13__class_decl_dict);
tmp_kwargs_value_26 = tmp_class_container$class_creation_13__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 193;
tmp_assign_source_110 = CALL_FUNCTION(tstate, tmp_called_value_27, tmp_args_value_26, tmp_kwargs_value_26);
CHECK_OBJECT(tmp_args_value_26);
Py_DECREF(tmp_args_value_26);
if (tmp_assign_source_110 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto try_except_handler_39;
}
assert(outline_12_var___class__ == NULL);
outline_12_var___class__ = tmp_assign_source_110;
}
CHECK_OBJECT(outline_12_var___class__);
tmp_assign_source_109 = outline_12_var___class__;
Py_INCREF(tmp_assign_source_109);
goto try_return_handler_39;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_39:;
Py_DECREF(locals_httpx$_exceptions$$$class__13_CloseError_193);
locals_httpx$_exceptions$$$class__13_CloseError_193 = NULL;
goto try_return_handler_38;
// Exception handler code:
try_except_handler_39:;
exception_keeper_lineno_37 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_37 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpx$_exceptions$$$class__13_CloseError_193);
locals_httpx$_exceptions$$$class__13_CloseError_193 = NULL;
// Re-raise.
exception_state = exception_keeper_name_37;
exception_lineno = exception_keeper_lineno_37;

goto try_except_handler_38;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_38:;
CHECK_OBJECT(outline_12_var___class__);
CHECK_OBJECT(outline_12_var___class__);
Py_DECREF(outline_12_var___class__);
outline_12_var___class__ = NULL;
goto outline_result_26;
// Exception handler code:
try_except_handler_38:;
exception_keeper_lineno_38 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_38 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_38;
exception_lineno = exception_keeper_lineno_38;

goto outline_exception_13;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_13:;
exception_lineno = 193;
goto try_except_handler_37;
outline_result_26:;
UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_CloseError, tmp_assign_source_109);
}
goto try_end_13;
// Exception handler code:
try_except_handler_37:;
exception_keeper_lineno_39 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_39 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_13__bases_orig);
tmp_class_container$class_creation_13__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_13__bases);
tmp_class_container$class_creation_13__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_13__class_decl_dict);
tmp_class_container$class_creation_13__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_13__metaclass);
tmp_class_container$class_creation_13__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_13__prepared);
tmp_class_container$class_creation_13__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_39;
exception_lineno = exception_keeper_lineno_39;

goto frame_exception_exit_1;
// End of try:
try_end_13:;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_13__bases_orig);
Py_DECREF(tmp_class_container$class_creation_13__bases_orig);
tmp_class_container$class_creation_13__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
Py_DECREF(tmp_class_container$class_creation_13__bases);
tmp_class_container$class_creation_13__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_13__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_13__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_13__class_decl_dict);
tmp_class_container$class_creation_13__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
Py_DECREF(tmp_class_container$class_creation_13__metaclass);
tmp_class_container$class_creation_13__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_13__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_13__prepared);
Py_DECREF(tmp_class_container$class_creation_13__prepared);
tmp_class_container$class_creation_13__prepared = NULL;
tmp_outline_return_value_13 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_13);
goto outline_result_25;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_25:;
CHECK_OBJECT(tmp_outline_return_value_13);
Py_DECREF(tmp_outline_return_value_13);
}
{
PyObject *tmp_outline_return_value_14;
// Tried code:
{
PyObject *tmp_assign_source_111;
PyObject *tmp_tuple_element_52;
tmp_tuple_element_52 = module_var_accessor_httpx$_exceptions$TransportError(tstate);
if (unlikely(tmp_tuple_element_52 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TransportError);
}

if (tmp_tuple_element_52 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 202;

    goto try_except_handler_40;
}
tmp_assign_source_111 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_111, 0, tmp_tuple_element_52);
assert(tmp_class_container$class_creation_14__bases_orig == NULL);
tmp_class_container$class_creation_14__bases_orig = tmp_assign_source_111;
}
{
PyObject *tmp_assign_source_112;
PyObject *tmp_direct_call_arg1_14;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases_orig);
tmp_direct_call_arg1_14 = tmp_class_container$class_creation_14__bases_orig;
Py_INCREF(tmp_direct_call_arg1_14);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_14};
    tmp_assign_source_112 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_112 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;

    goto try_except_handler_40;
}
assert(tmp_class_container$class_creation_14__bases == NULL);
tmp_class_container$class_creation_14__bases = tmp_assign_source_112;
}
{
PyObject *tmp_assign_source_113;
tmp_assign_source_113 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_14__class_decl_dict == NULL);
tmp_class_container$class_creation_14__class_decl_dict = tmp_assign_source_113;
}
{
PyObject *tmp_assign_source_114;
PyObject *tmp_metaclass_value_14;
nuitka_bool tmp_condition_result_53;
int tmp_truth_name_14;
PyObject *tmp_type_arg_27;
PyObject *tmp_expression_value_79;
PyObject *tmp_subscript_value_14;
PyObject *tmp_bases_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_truth_name_14 = CHECK_IF_TRUE(tmp_class_container$class_creation_14__bases);
if (tmp_truth_name_14 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;

    goto try_except_handler_40;
}
tmp_condition_result_53 = tmp_truth_name_14 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_53 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_14;
} else {
    goto condexpr_false_14;
}
condexpr_true_14:;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_expression_value_79 = tmp_class_container$class_creation_14__bases;
tmp_subscript_value_14 = const_int_0;
tmp_type_arg_27 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_79, tmp_subscript_value_14, 0);
if (tmp_type_arg_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;

    goto try_except_handler_40;
}
tmp_metaclass_value_14 = BUILTIN_TYPE1(tmp_type_arg_27);
CHECK_OBJECT(tmp_type_arg_27);
Py_DECREF(tmp_type_arg_27);
if (tmp_metaclass_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;

    goto try_except_handler_40;
}
goto condexpr_end_14;
condexpr_false_14:;
tmp_metaclass_value_14 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_14);
condexpr_end_14:;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_bases_value_14 = tmp_class_container$class_creation_14__bases;
tmp_assign_source_114 = SELECT_METACLASS(tstate, tmp_metaclass_value_14, tmp_bases_value_14);
CHECK_OBJECT(tmp_metaclass_value_14);
Py_DECREF(tmp_metaclass_value_14);
if (tmp_assign_source_114 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;

    goto try_except_handler_40;
}
assert(tmp_class_container$class_creation_14__metaclass == NULL);
tmp_class_container$class_creation_14__metaclass = tmp_assign_source_114;
}
{
bool tmp_condition_result_54;
PyObject *tmp_expression_value_80;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
tmp_expression_value_80 = tmp_class_container$class_creation_14__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_80, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;

    goto try_except_handler_40;
}
tmp_condition_result_54 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_54 != false) {
    goto branch_yes_40;
} else {
    goto branch_no_40;
}
}
branch_yes_40:;
{
PyObject *tmp_assign_source_115;
PyObject *tmp_called_value_28;
PyObject *tmp_expression_value_81;
PyObject *tmp_args_value_27;
PyObject *tmp_tuple_element_53;
PyObject *tmp_kwargs_value_27;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
tmp_expression_value_81 = tmp_class_container$class_creation_14__metaclass;
tmp_called_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;

    goto try_except_handler_40;
}
tmp_tuple_element_53 = mod_consts.const_str_plain_ProxyError;
tmp_args_value_27 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_27, 0, tmp_tuple_element_53);
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_tuple_element_53 = tmp_class_container$class_creation_14__bases;
PyTuple_SET_ITEM0(tmp_args_value_27, 1, tmp_tuple_element_53);
CHECK_OBJECT(tmp_class_container$class_creation_14__class_decl_dict);
tmp_kwargs_value_27 = tmp_class_container$class_creation_14__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 202;
tmp_assign_source_115 = CALL_FUNCTION(tstate, tmp_called_value_28, tmp_args_value_27, tmp_kwargs_value_27);
CHECK_OBJECT(tmp_called_value_28);
Py_DECREF(tmp_called_value_28);
CHECK_OBJECT(tmp_args_value_27);
Py_DECREF(tmp_args_value_27);
if (tmp_assign_source_115 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;

    goto try_except_handler_40;
}
assert(tmp_class_container$class_creation_14__prepared == NULL);
tmp_class_container$class_creation_14__prepared = tmp_assign_source_115;
}
{
bool tmp_condition_result_55;
PyObject *tmp_operand_value_14;
PyObject *tmp_expression_value_82;
CHECK_OBJECT(tmp_class_container$class_creation_14__prepared);
tmp_expression_value_82 = tmp_class_container$class_creation_14__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_82, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;

    goto try_except_handler_40;
}
tmp_operand_value_14 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_14);
assert(!(tmp_res == -1));
tmp_condition_result_55 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_55 != false) {
    goto branch_yes_41;
} else {
    goto branch_no_41;
}
}
branch_yes_41:;
{
PyObject *tmp_raise_type_14;
PyObject *tmp_make_exception_arg_14;
PyObject *tmp_mod_expr_left_14;
PyObject *tmp_mod_expr_right_14;
PyObject *tmp_tuple_element_54;
PyObject *tmp_expression_value_83;
PyObject *tmp_name_value_15;
PyObject *tmp_default_value_14;
tmp_mod_expr_left_14 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
tmp_expression_value_83 = tmp_class_container$class_creation_14__metaclass;
tmp_name_value_15 = const_str_plain___name__;
tmp_default_value_14 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_54 = BUILTIN_GETATTR(tstate, tmp_expression_value_83, tmp_name_value_15, tmp_default_value_14);
if (tmp_tuple_element_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;

    goto try_except_handler_40;
}
tmp_mod_expr_right_14 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_84;
PyObject *tmp_type_arg_28;
PyTuple_SET_ITEM(tmp_mod_expr_right_14, 0, tmp_tuple_element_54);
CHECK_OBJECT(tmp_class_container$class_creation_14__prepared);
tmp_type_arg_28 = tmp_class_container$class_creation_14__prepared;
tmp_expression_value_84 = BUILTIN_TYPE1(tmp_type_arg_28);
assert(!(tmp_expression_value_84 == NULL));
tmp_tuple_element_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_84);
Py_DECREF(tmp_expression_value_84);
if (tmp_tuple_element_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;

    goto tuple_build_exception_14;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_14, 1, tmp_tuple_element_54);
}
goto tuple_build_no_exception_14;
// Exception handling pass through code for tuple_build:
tuple_build_exception_14:;
Py_DECREF(tmp_mod_expr_right_14);
goto try_except_handler_40;
// Finished with no exception for tuple_build:
tuple_build_no_exception_14:;
tmp_make_exception_arg_14 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_14, tmp_mod_expr_right_14);
CHECK_OBJECT(tmp_mod_expr_right_14);
Py_DECREF(tmp_mod_expr_right_14);
if (tmp_make_exception_arg_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;

    goto try_except_handler_40;
}
frame_frame_httpx$_exceptions->m_frame.f_lineno = 202;
tmp_raise_type_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_14);
CHECK_OBJECT(tmp_make_exception_arg_14);
Py_DECREF(tmp_make_exception_arg_14);
assert(!(tmp_raise_type_14 == NULL));
exception_state.exception_value = tmp_raise_type_14;
exception_lineno = 202;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_40;
}
branch_no_41:;
goto branch_end_40;
branch_no_40:;
{
PyObject *tmp_assign_source_116;
tmp_assign_source_116 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_14__prepared == NULL);
tmp_class_container$class_creation_14__prepared = tmp_assign_source_116;
}
branch_end_40:;
{
PyObject *tmp_assign_source_117;
{
PyObject *tmp_set_locals_14;
CHECK_OBJECT(tmp_class_container$class_creation_14__prepared);
tmp_set_locals_14 = tmp_class_container$class_creation_14__prepared;
locals_httpx$_exceptions$$$class__14_ProxyError_202 = tmp_set_locals_14;
Py_INCREF(tmp_set_locals_14);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_f49f37ecb12db2b9a869fd11ee8982d4;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__14_ProxyError_202, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;

    goto try_except_handler_42;
}
tmp_dictset_value = mod_consts.const_str_digest_8b0369ee6052d74f878bcd8232b9ba95;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__14_ProxyError_202, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;

    goto try_except_handler_42;
}
tmp_dictset_value = mod_consts.const_str_plain_ProxyError;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__14_ProxyError_202, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;

    goto try_except_handler_42;
}
tmp_dictset_value = mod_consts.const_int_pos_202;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__14_ProxyError_202, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;

    goto try_except_handler_42;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__14_ProxyError_202, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;

    goto try_except_handler_42;
}
{
nuitka_bool tmp_condition_result_56;
PyObject *tmp_cmp_expr_left_14;
PyObject *tmp_cmp_expr_right_14;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_cmp_expr_left_14 = tmp_class_container$class_creation_14__bases;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases_orig);
tmp_cmp_expr_right_14 = tmp_class_container$class_creation_14__bases_orig;
tmp_condition_result_56 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
if (tmp_condition_result_56 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;

    goto try_except_handler_42;
}
if (tmp_condition_result_56 == NUITKA_BOOL_TRUE) {
    goto branch_yes_42;
} else {
    goto branch_no_42;
}
}
branch_yes_42:;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_14__bases_orig;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__14_ProxyError_202, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;

    goto try_except_handler_42;
}
branch_no_42:;
{
PyObject *tmp_assign_source_118;
PyObject *tmp_called_value_29;
PyObject *tmp_args_value_28;
PyObject *tmp_tuple_element_55;
PyObject *tmp_kwargs_value_28;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
tmp_called_value_29 = tmp_class_container$class_creation_14__metaclass;
tmp_tuple_element_55 = mod_consts.const_str_plain_ProxyError;
tmp_args_value_28 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_28, 0, tmp_tuple_element_55);
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_tuple_element_55 = tmp_class_container$class_creation_14__bases;
PyTuple_SET_ITEM0(tmp_args_value_28, 1, tmp_tuple_element_55);
tmp_tuple_element_55 = locals_httpx$_exceptions$$$class__14_ProxyError_202;
PyTuple_SET_ITEM0(tmp_args_value_28, 2, tmp_tuple_element_55);
CHECK_OBJECT(tmp_class_container$class_creation_14__class_decl_dict);
tmp_kwargs_value_28 = tmp_class_container$class_creation_14__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 202;
tmp_assign_source_118 = CALL_FUNCTION(tstate, tmp_called_value_29, tmp_args_value_28, tmp_kwargs_value_28);
CHECK_OBJECT(tmp_args_value_28);
Py_DECREF(tmp_args_value_28);
if (tmp_assign_source_118 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;

    goto try_except_handler_42;
}
assert(outline_13_var___class__ == NULL);
outline_13_var___class__ = tmp_assign_source_118;
}
CHECK_OBJECT(outline_13_var___class__);
tmp_assign_source_117 = outline_13_var___class__;
Py_INCREF(tmp_assign_source_117);
goto try_return_handler_42;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_42:;
Py_DECREF(locals_httpx$_exceptions$$$class__14_ProxyError_202);
locals_httpx$_exceptions$$$class__14_ProxyError_202 = NULL;
goto try_return_handler_41;
// Exception handler code:
try_except_handler_42:;
exception_keeper_lineno_40 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_40 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpx$_exceptions$$$class__14_ProxyError_202);
locals_httpx$_exceptions$$$class__14_ProxyError_202 = NULL;
// Re-raise.
exception_state = exception_keeper_name_40;
exception_lineno = exception_keeper_lineno_40;

goto try_except_handler_41;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_41:;
CHECK_OBJECT(outline_13_var___class__);
CHECK_OBJECT(outline_13_var___class__);
Py_DECREF(outline_13_var___class__);
outline_13_var___class__ = NULL;
goto outline_result_28;
// Exception handler code:
try_except_handler_41:;
exception_keeper_lineno_41 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_41 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_41;
exception_lineno = exception_keeper_lineno_41;

goto outline_exception_14;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_14:;
exception_lineno = 202;
goto try_except_handler_40;
outline_result_28:;
UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyError, tmp_assign_source_117);
}
goto try_end_14;
// Exception handler code:
try_except_handler_40:;
exception_keeper_lineno_42 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_42 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_14__bases_orig);
tmp_class_container$class_creation_14__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_14__bases);
tmp_class_container$class_creation_14__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_14__class_decl_dict);
tmp_class_container$class_creation_14__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_14__metaclass);
tmp_class_container$class_creation_14__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_14__prepared);
tmp_class_container$class_creation_14__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_42;
exception_lineno = exception_keeper_lineno_42;

goto frame_exception_exit_1;
// End of try:
try_end_14:;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_14__bases_orig);
Py_DECREF(tmp_class_container$class_creation_14__bases_orig);
tmp_class_container$class_creation_14__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
Py_DECREF(tmp_class_container$class_creation_14__bases);
tmp_class_container$class_creation_14__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_14__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_14__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_14__class_decl_dict);
tmp_class_container$class_creation_14__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
Py_DECREF(tmp_class_container$class_creation_14__metaclass);
tmp_class_container$class_creation_14__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_14__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_14__prepared);
Py_DECREF(tmp_class_container$class_creation_14__prepared);
tmp_class_container$class_creation_14__prepared = NULL;
tmp_outline_return_value_14 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_14);
goto outline_result_27;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_27:;
CHECK_OBJECT(tmp_outline_return_value_14);
Py_DECREF(tmp_outline_return_value_14);
}
{
PyObject *tmp_outline_return_value_15;
// Tried code:
{
PyObject *tmp_assign_source_119;
PyObject *tmp_tuple_element_56;
tmp_tuple_element_56 = module_var_accessor_httpx$_exceptions$TransportError(tstate);
if (unlikely(tmp_tuple_element_56 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TransportError);
}

if (tmp_tuple_element_56 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 208;

    goto try_except_handler_43;
}
tmp_assign_source_119 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_119, 0, tmp_tuple_element_56);
assert(tmp_class_container$class_creation_15__bases_orig == NULL);
tmp_class_container$class_creation_15__bases_orig = tmp_assign_source_119;
}
{
PyObject *tmp_assign_source_120;
PyObject *tmp_direct_call_arg1_15;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases_orig);
tmp_direct_call_arg1_15 = tmp_class_container$class_creation_15__bases_orig;
Py_INCREF(tmp_direct_call_arg1_15);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_15};
    tmp_assign_source_120 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_120 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;

    goto try_except_handler_43;
}
assert(tmp_class_container$class_creation_15__bases == NULL);
tmp_class_container$class_creation_15__bases = tmp_assign_source_120;
}
{
PyObject *tmp_assign_source_121;
tmp_assign_source_121 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_15__class_decl_dict == NULL);
tmp_class_container$class_creation_15__class_decl_dict = tmp_assign_source_121;
}
{
PyObject *tmp_assign_source_122;
PyObject *tmp_metaclass_value_15;
nuitka_bool tmp_condition_result_57;
int tmp_truth_name_15;
PyObject *tmp_type_arg_29;
PyObject *tmp_expression_value_85;
PyObject *tmp_subscript_value_15;
PyObject *tmp_bases_value_15;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_truth_name_15 = CHECK_IF_TRUE(tmp_class_container$class_creation_15__bases);
if (tmp_truth_name_15 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;

    goto try_except_handler_43;
}
tmp_condition_result_57 = tmp_truth_name_15 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_57 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_15;
} else {
    goto condexpr_false_15;
}
condexpr_true_15:;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_expression_value_85 = tmp_class_container$class_creation_15__bases;
tmp_subscript_value_15 = const_int_0;
tmp_type_arg_29 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_85, tmp_subscript_value_15, 0);
if (tmp_type_arg_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;

    goto try_except_handler_43;
}
tmp_metaclass_value_15 = BUILTIN_TYPE1(tmp_type_arg_29);
CHECK_OBJECT(tmp_type_arg_29);
Py_DECREF(tmp_type_arg_29);
if (tmp_metaclass_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;

    goto try_except_handler_43;
}
goto condexpr_end_15;
condexpr_false_15:;
tmp_metaclass_value_15 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_15);
condexpr_end_15:;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_bases_value_15 = tmp_class_container$class_creation_15__bases;
tmp_assign_source_122 = SELECT_METACLASS(tstate, tmp_metaclass_value_15, tmp_bases_value_15);
CHECK_OBJECT(tmp_metaclass_value_15);
Py_DECREF(tmp_metaclass_value_15);
if (tmp_assign_source_122 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;

    goto try_except_handler_43;
}
assert(tmp_class_container$class_creation_15__metaclass == NULL);
tmp_class_container$class_creation_15__metaclass = tmp_assign_source_122;
}
{
bool tmp_condition_result_58;
PyObject *tmp_expression_value_86;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
tmp_expression_value_86 = tmp_class_container$class_creation_15__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_86, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;

    goto try_except_handler_43;
}
tmp_condition_result_58 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_58 != false) {
    goto branch_yes_43;
} else {
    goto branch_no_43;
}
}
branch_yes_43:;
{
PyObject *tmp_assign_source_123;
PyObject *tmp_called_value_30;
PyObject *tmp_expression_value_87;
PyObject *tmp_args_value_29;
PyObject *tmp_tuple_element_57;
PyObject *tmp_kwargs_value_29;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
tmp_expression_value_87 = tmp_class_container$class_creation_15__metaclass;
tmp_called_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;

    goto try_except_handler_43;
}
tmp_tuple_element_57 = mod_consts.const_str_plain_UnsupportedProtocol;
tmp_args_value_29 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_29, 0, tmp_tuple_element_57);
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_tuple_element_57 = tmp_class_container$class_creation_15__bases;
PyTuple_SET_ITEM0(tmp_args_value_29, 1, tmp_tuple_element_57);
CHECK_OBJECT(tmp_class_container$class_creation_15__class_decl_dict);
tmp_kwargs_value_29 = tmp_class_container$class_creation_15__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 208;
tmp_assign_source_123 = CALL_FUNCTION(tstate, tmp_called_value_30, tmp_args_value_29, tmp_kwargs_value_29);
CHECK_OBJECT(tmp_called_value_30);
Py_DECREF(tmp_called_value_30);
CHECK_OBJECT(tmp_args_value_29);
Py_DECREF(tmp_args_value_29);
if (tmp_assign_source_123 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;

    goto try_except_handler_43;
}
assert(tmp_class_container$class_creation_15__prepared == NULL);
tmp_class_container$class_creation_15__prepared = tmp_assign_source_123;
}
{
bool tmp_condition_result_59;
PyObject *tmp_operand_value_15;
PyObject *tmp_expression_value_88;
CHECK_OBJECT(tmp_class_container$class_creation_15__prepared);
tmp_expression_value_88 = tmp_class_container$class_creation_15__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_88, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;

    goto try_except_handler_43;
}
tmp_operand_value_15 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_15);
assert(!(tmp_res == -1));
tmp_condition_result_59 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_59 != false) {
    goto branch_yes_44;
} else {
    goto branch_no_44;
}
}
branch_yes_44:;
{
PyObject *tmp_raise_type_15;
PyObject *tmp_make_exception_arg_15;
PyObject *tmp_mod_expr_left_15;
PyObject *tmp_mod_expr_right_15;
PyObject *tmp_tuple_element_58;
PyObject *tmp_expression_value_89;
PyObject *tmp_name_value_16;
PyObject *tmp_default_value_15;
tmp_mod_expr_left_15 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
tmp_expression_value_89 = tmp_class_container$class_creation_15__metaclass;
tmp_name_value_16 = const_str_plain___name__;
tmp_default_value_15 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_58 = BUILTIN_GETATTR(tstate, tmp_expression_value_89, tmp_name_value_16, tmp_default_value_15);
if (tmp_tuple_element_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;

    goto try_except_handler_43;
}
tmp_mod_expr_right_15 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_90;
PyObject *tmp_type_arg_30;
PyTuple_SET_ITEM(tmp_mod_expr_right_15, 0, tmp_tuple_element_58);
CHECK_OBJECT(tmp_class_container$class_creation_15__prepared);
tmp_type_arg_30 = tmp_class_container$class_creation_15__prepared;
tmp_expression_value_90 = BUILTIN_TYPE1(tmp_type_arg_30);
assert(!(tmp_expression_value_90 == NULL));
tmp_tuple_element_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_90);
Py_DECREF(tmp_expression_value_90);
if (tmp_tuple_element_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;

    goto tuple_build_exception_15;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_15, 1, tmp_tuple_element_58);
}
goto tuple_build_no_exception_15;
// Exception handling pass through code for tuple_build:
tuple_build_exception_15:;
Py_DECREF(tmp_mod_expr_right_15);
goto try_except_handler_43;
// Finished with no exception for tuple_build:
tuple_build_no_exception_15:;
tmp_make_exception_arg_15 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_15, tmp_mod_expr_right_15);
CHECK_OBJECT(tmp_mod_expr_right_15);
Py_DECREF(tmp_mod_expr_right_15);
if (tmp_make_exception_arg_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;

    goto try_except_handler_43;
}
frame_frame_httpx$_exceptions->m_frame.f_lineno = 208;
tmp_raise_type_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_15);
CHECK_OBJECT(tmp_make_exception_arg_15);
Py_DECREF(tmp_make_exception_arg_15);
assert(!(tmp_raise_type_15 == NULL));
exception_state.exception_value = tmp_raise_type_15;
exception_lineno = 208;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_43;
}
branch_no_44:;
goto branch_end_43;
branch_no_43:;
{
PyObject *tmp_assign_source_124;
tmp_assign_source_124 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_15__prepared == NULL);
tmp_class_container$class_creation_15__prepared = tmp_assign_source_124;
}
branch_end_43:;
{
PyObject *tmp_assign_source_125;
{
PyObject *tmp_set_locals_15;
CHECK_OBJECT(tmp_class_container$class_creation_15__prepared);
tmp_set_locals_15 = tmp_class_container$class_creation_15__prepared;
locals_httpx$_exceptions$$$class__15_UnsupportedProtocol_208 = tmp_set_locals_15;
Py_INCREF(tmp_set_locals_15);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_f49f37ecb12db2b9a869fd11ee8982d4;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__15_UnsupportedProtocol_208, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;

    goto try_except_handler_45;
}
tmp_dictset_value = mod_consts.const_str_digest_d2f6accaf4f7ada55cbebaa7fcb25dc4;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__15_UnsupportedProtocol_208, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;

    goto try_except_handler_45;
}
tmp_dictset_value = mod_consts.const_str_plain_UnsupportedProtocol;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__15_UnsupportedProtocol_208, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;

    goto try_except_handler_45;
}
tmp_dictset_value = mod_consts.const_int_pos_208;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__15_UnsupportedProtocol_208, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;

    goto try_except_handler_45;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__15_UnsupportedProtocol_208, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;

    goto try_except_handler_45;
}
{
nuitka_bool tmp_condition_result_60;
PyObject *tmp_cmp_expr_left_15;
PyObject *tmp_cmp_expr_right_15;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_cmp_expr_left_15 = tmp_class_container$class_creation_15__bases;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases_orig);
tmp_cmp_expr_right_15 = tmp_class_container$class_creation_15__bases_orig;
tmp_condition_result_60 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
if (tmp_condition_result_60 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;

    goto try_except_handler_45;
}
if (tmp_condition_result_60 == NUITKA_BOOL_TRUE) {
    goto branch_yes_45;
} else {
    goto branch_no_45;
}
}
branch_yes_45:;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_15__bases_orig;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__15_UnsupportedProtocol_208, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;

    goto try_except_handler_45;
}
branch_no_45:;
{
PyObject *tmp_assign_source_126;
PyObject *tmp_called_value_31;
PyObject *tmp_args_value_30;
PyObject *tmp_tuple_element_59;
PyObject *tmp_kwargs_value_30;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
tmp_called_value_31 = tmp_class_container$class_creation_15__metaclass;
tmp_tuple_element_59 = mod_consts.const_str_plain_UnsupportedProtocol;
tmp_args_value_30 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_30, 0, tmp_tuple_element_59);
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_tuple_element_59 = tmp_class_container$class_creation_15__bases;
PyTuple_SET_ITEM0(tmp_args_value_30, 1, tmp_tuple_element_59);
tmp_tuple_element_59 = locals_httpx$_exceptions$$$class__15_UnsupportedProtocol_208;
PyTuple_SET_ITEM0(tmp_args_value_30, 2, tmp_tuple_element_59);
CHECK_OBJECT(tmp_class_container$class_creation_15__class_decl_dict);
tmp_kwargs_value_30 = tmp_class_container$class_creation_15__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 208;
tmp_assign_source_126 = CALL_FUNCTION(tstate, tmp_called_value_31, tmp_args_value_30, tmp_kwargs_value_30);
CHECK_OBJECT(tmp_args_value_30);
Py_DECREF(tmp_args_value_30);
if (tmp_assign_source_126 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;

    goto try_except_handler_45;
}
assert(outline_14_var___class__ == NULL);
outline_14_var___class__ = tmp_assign_source_126;
}
CHECK_OBJECT(outline_14_var___class__);
tmp_assign_source_125 = outline_14_var___class__;
Py_INCREF(tmp_assign_source_125);
goto try_return_handler_45;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_45:;
Py_DECREF(locals_httpx$_exceptions$$$class__15_UnsupportedProtocol_208);
locals_httpx$_exceptions$$$class__15_UnsupportedProtocol_208 = NULL;
goto try_return_handler_44;
// Exception handler code:
try_except_handler_45:;
exception_keeper_lineno_43 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_43 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpx$_exceptions$$$class__15_UnsupportedProtocol_208);
locals_httpx$_exceptions$$$class__15_UnsupportedProtocol_208 = NULL;
// Re-raise.
exception_state = exception_keeper_name_43;
exception_lineno = exception_keeper_lineno_43;

goto try_except_handler_44;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_44:;
CHECK_OBJECT(outline_14_var___class__);
CHECK_OBJECT(outline_14_var___class__);
Py_DECREF(outline_14_var___class__);
outline_14_var___class__ = NULL;
goto outline_result_30;
// Exception handler code:
try_except_handler_44:;
exception_keeper_lineno_44 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_44 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_44;
exception_lineno = exception_keeper_lineno_44;

goto outline_exception_15;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_15:;
exception_lineno = 208;
goto try_except_handler_43;
outline_result_30:;
UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_UnsupportedProtocol, tmp_assign_source_125);
}
goto try_end_15;
// Exception handler code:
try_except_handler_43:;
exception_keeper_lineno_45 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_45 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_15__bases_orig);
tmp_class_container$class_creation_15__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_15__bases);
tmp_class_container$class_creation_15__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_15__class_decl_dict);
tmp_class_container$class_creation_15__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_15__metaclass);
tmp_class_container$class_creation_15__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_15__prepared);
tmp_class_container$class_creation_15__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_45;
exception_lineno = exception_keeper_lineno_45;

goto frame_exception_exit_1;
// End of try:
try_end_15:;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_15__bases_orig);
Py_DECREF(tmp_class_container$class_creation_15__bases_orig);
tmp_class_container$class_creation_15__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
Py_DECREF(tmp_class_container$class_creation_15__bases);
tmp_class_container$class_creation_15__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_15__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_15__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_15__class_decl_dict);
tmp_class_container$class_creation_15__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
Py_DECREF(tmp_class_container$class_creation_15__metaclass);
tmp_class_container$class_creation_15__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_15__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_15__prepared);
Py_DECREF(tmp_class_container$class_creation_15__prepared);
tmp_class_container$class_creation_15__prepared = NULL;
tmp_outline_return_value_15 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_15);
goto outline_result_29;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_29:;
CHECK_OBJECT(tmp_outline_return_value_15);
Py_DECREF(tmp_outline_return_value_15);
}
{
PyObject *tmp_outline_return_value_16;
// Tried code:
{
PyObject *tmp_assign_source_127;
PyObject *tmp_tuple_element_60;
tmp_tuple_element_60 = module_var_accessor_httpx$_exceptions$TransportError(tstate);
if (unlikely(tmp_tuple_element_60 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TransportError);
}

if (tmp_tuple_element_60 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 216;

    goto try_except_handler_46;
}
tmp_assign_source_127 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_127, 0, tmp_tuple_element_60);
assert(tmp_class_container$class_creation_16__bases_orig == NULL);
tmp_class_container$class_creation_16__bases_orig = tmp_assign_source_127;
}
{
PyObject *tmp_assign_source_128;
PyObject *tmp_direct_call_arg1_16;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases_orig);
tmp_direct_call_arg1_16 = tmp_class_container$class_creation_16__bases_orig;
Py_INCREF(tmp_direct_call_arg1_16);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_16};
    tmp_assign_source_128 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_128 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;

    goto try_except_handler_46;
}
assert(tmp_class_container$class_creation_16__bases == NULL);
tmp_class_container$class_creation_16__bases = tmp_assign_source_128;
}
{
PyObject *tmp_assign_source_129;
tmp_assign_source_129 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_16__class_decl_dict == NULL);
tmp_class_container$class_creation_16__class_decl_dict = tmp_assign_source_129;
}
{
PyObject *tmp_assign_source_130;
PyObject *tmp_metaclass_value_16;
nuitka_bool tmp_condition_result_61;
int tmp_truth_name_16;
PyObject *tmp_type_arg_31;
PyObject *tmp_expression_value_91;
PyObject *tmp_subscript_value_16;
PyObject *tmp_bases_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_truth_name_16 = CHECK_IF_TRUE(tmp_class_container$class_creation_16__bases);
if (tmp_truth_name_16 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;

    goto try_except_handler_46;
}
tmp_condition_result_61 = tmp_truth_name_16 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_61 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_16;
} else {
    goto condexpr_false_16;
}
condexpr_true_16:;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_expression_value_91 = tmp_class_container$class_creation_16__bases;
tmp_subscript_value_16 = const_int_0;
tmp_type_arg_31 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_91, tmp_subscript_value_16, 0);
if (tmp_type_arg_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;

    goto try_except_handler_46;
}
tmp_metaclass_value_16 = BUILTIN_TYPE1(tmp_type_arg_31);
CHECK_OBJECT(tmp_type_arg_31);
Py_DECREF(tmp_type_arg_31);
if (tmp_metaclass_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;

    goto try_except_handler_46;
}
goto condexpr_end_16;
condexpr_false_16:;
tmp_metaclass_value_16 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_16);
condexpr_end_16:;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_bases_value_16 = tmp_class_container$class_creation_16__bases;
tmp_assign_source_130 = SELECT_METACLASS(tstate, tmp_metaclass_value_16, tmp_bases_value_16);
CHECK_OBJECT(tmp_metaclass_value_16);
Py_DECREF(tmp_metaclass_value_16);
if (tmp_assign_source_130 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;

    goto try_except_handler_46;
}
assert(tmp_class_container$class_creation_16__metaclass == NULL);
tmp_class_container$class_creation_16__metaclass = tmp_assign_source_130;
}
{
bool tmp_condition_result_62;
PyObject *tmp_expression_value_92;
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
tmp_expression_value_92 = tmp_class_container$class_creation_16__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_92, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;

    goto try_except_handler_46;
}
tmp_condition_result_62 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_62 != false) {
    goto branch_yes_46;
} else {
    goto branch_no_46;
}
}
branch_yes_46:;
{
PyObject *tmp_assign_source_131;
PyObject *tmp_called_value_32;
PyObject *tmp_expression_value_93;
PyObject *tmp_args_value_31;
PyObject *tmp_tuple_element_61;
PyObject *tmp_kwargs_value_31;
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
tmp_expression_value_93 = tmp_class_container$class_creation_16__metaclass;
tmp_called_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;

    goto try_except_handler_46;
}
tmp_tuple_element_61 = mod_consts.const_str_plain_ProtocolError;
tmp_args_value_31 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_31, 0, tmp_tuple_element_61);
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_tuple_element_61 = tmp_class_container$class_creation_16__bases;
PyTuple_SET_ITEM0(tmp_args_value_31, 1, tmp_tuple_element_61);
CHECK_OBJECT(tmp_class_container$class_creation_16__class_decl_dict);
tmp_kwargs_value_31 = tmp_class_container$class_creation_16__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 216;
tmp_assign_source_131 = CALL_FUNCTION(tstate, tmp_called_value_32, tmp_args_value_31, tmp_kwargs_value_31);
CHECK_OBJECT(tmp_called_value_32);
Py_DECREF(tmp_called_value_32);
CHECK_OBJECT(tmp_args_value_31);
Py_DECREF(tmp_args_value_31);
if (tmp_assign_source_131 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;

    goto try_except_handler_46;
}
assert(tmp_class_container$class_creation_16__prepared == NULL);
tmp_class_container$class_creation_16__prepared = tmp_assign_source_131;
}
{
bool tmp_condition_result_63;
PyObject *tmp_operand_value_16;
PyObject *tmp_expression_value_94;
CHECK_OBJECT(tmp_class_container$class_creation_16__prepared);
tmp_expression_value_94 = tmp_class_container$class_creation_16__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_94, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;

    goto try_except_handler_46;
}
tmp_operand_value_16 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_16);
assert(!(tmp_res == -1));
tmp_condition_result_63 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_63 != false) {
    goto branch_yes_47;
} else {
    goto branch_no_47;
}
}
branch_yes_47:;
{
PyObject *tmp_raise_type_16;
PyObject *tmp_make_exception_arg_16;
PyObject *tmp_mod_expr_left_16;
PyObject *tmp_mod_expr_right_16;
PyObject *tmp_tuple_element_62;
PyObject *tmp_expression_value_95;
PyObject *tmp_name_value_17;
PyObject *tmp_default_value_16;
tmp_mod_expr_left_16 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
tmp_expression_value_95 = tmp_class_container$class_creation_16__metaclass;
tmp_name_value_17 = const_str_plain___name__;
tmp_default_value_16 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_62 = BUILTIN_GETATTR(tstate, tmp_expression_value_95, tmp_name_value_17, tmp_default_value_16);
if (tmp_tuple_element_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;

    goto try_except_handler_46;
}
tmp_mod_expr_right_16 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_96;
PyObject *tmp_type_arg_32;
PyTuple_SET_ITEM(tmp_mod_expr_right_16, 0, tmp_tuple_element_62);
CHECK_OBJECT(tmp_class_container$class_creation_16__prepared);
tmp_type_arg_32 = tmp_class_container$class_creation_16__prepared;
tmp_expression_value_96 = BUILTIN_TYPE1(tmp_type_arg_32);
assert(!(tmp_expression_value_96 == NULL));
tmp_tuple_element_62 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_96, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_96);
Py_DECREF(tmp_expression_value_96);
if (tmp_tuple_element_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;

    goto tuple_build_exception_16;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_16, 1, tmp_tuple_element_62);
}
goto tuple_build_no_exception_16;
// Exception handling pass through code for tuple_build:
tuple_build_exception_16:;
Py_DECREF(tmp_mod_expr_right_16);
goto try_except_handler_46;
// Finished with no exception for tuple_build:
tuple_build_no_exception_16:;
tmp_make_exception_arg_16 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_16, tmp_mod_expr_right_16);
CHECK_OBJECT(tmp_mod_expr_right_16);
Py_DECREF(tmp_mod_expr_right_16);
if (tmp_make_exception_arg_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;

    goto try_except_handler_46;
}
frame_frame_httpx$_exceptions->m_frame.f_lineno = 216;
tmp_raise_type_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_16);
CHECK_OBJECT(tmp_make_exception_arg_16);
Py_DECREF(tmp_make_exception_arg_16);
assert(!(tmp_raise_type_16 == NULL));
exception_state.exception_value = tmp_raise_type_16;
exception_lineno = 216;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_46;
}
branch_no_47:;
goto branch_end_46;
branch_no_46:;
{
PyObject *tmp_assign_source_132;
tmp_assign_source_132 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_16__prepared == NULL);
tmp_class_container$class_creation_16__prepared = tmp_assign_source_132;
}
branch_end_46:;
{
PyObject *tmp_assign_source_133;
{
PyObject *tmp_set_locals_16;
CHECK_OBJECT(tmp_class_container$class_creation_16__prepared);
tmp_set_locals_16 = tmp_class_container$class_creation_16__prepared;
locals_httpx$_exceptions$$$class__16_ProtocolError_216 = tmp_set_locals_16;
Py_INCREF(tmp_set_locals_16);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_f49f37ecb12db2b9a869fd11ee8982d4;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__16_ProtocolError_216, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;

    goto try_except_handler_48;
}
tmp_dictset_value = mod_consts.const_str_digest_8da6f92b174dd49fa840397cd51a1e02;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__16_ProtocolError_216, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;

    goto try_except_handler_48;
}
tmp_dictset_value = mod_consts.const_str_plain_ProtocolError;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__16_ProtocolError_216, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;

    goto try_except_handler_48;
}
tmp_dictset_value = mod_consts.const_int_pos_216;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__16_ProtocolError_216, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;

    goto try_except_handler_48;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__16_ProtocolError_216, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;

    goto try_except_handler_48;
}
{
nuitka_bool tmp_condition_result_64;
PyObject *tmp_cmp_expr_left_16;
PyObject *tmp_cmp_expr_right_16;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_cmp_expr_left_16 = tmp_class_container$class_creation_16__bases;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases_orig);
tmp_cmp_expr_right_16 = tmp_class_container$class_creation_16__bases_orig;
tmp_condition_result_64 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
if (tmp_condition_result_64 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;

    goto try_except_handler_48;
}
if (tmp_condition_result_64 == NUITKA_BOOL_TRUE) {
    goto branch_yes_48;
} else {
    goto branch_no_48;
}
}
branch_yes_48:;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_16__bases_orig;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__16_ProtocolError_216, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;

    goto try_except_handler_48;
}
branch_no_48:;
{
PyObject *tmp_assign_source_134;
PyObject *tmp_called_value_33;
PyObject *tmp_args_value_32;
PyObject *tmp_tuple_element_63;
PyObject *tmp_kwargs_value_32;
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
tmp_called_value_33 = tmp_class_container$class_creation_16__metaclass;
tmp_tuple_element_63 = mod_consts.const_str_plain_ProtocolError;
tmp_args_value_32 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_32, 0, tmp_tuple_element_63);
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_tuple_element_63 = tmp_class_container$class_creation_16__bases;
PyTuple_SET_ITEM0(tmp_args_value_32, 1, tmp_tuple_element_63);
tmp_tuple_element_63 = locals_httpx$_exceptions$$$class__16_ProtocolError_216;
PyTuple_SET_ITEM0(tmp_args_value_32, 2, tmp_tuple_element_63);
CHECK_OBJECT(tmp_class_container$class_creation_16__class_decl_dict);
tmp_kwargs_value_32 = tmp_class_container$class_creation_16__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 216;
tmp_assign_source_134 = CALL_FUNCTION(tstate, tmp_called_value_33, tmp_args_value_32, tmp_kwargs_value_32);
CHECK_OBJECT(tmp_args_value_32);
Py_DECREF(tmp_args_value_32);
if (tmp_assign_source_134 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;

    goto try_except_handler_48;
}
assert(outline_15_var___class__ == NULL);
outline_15_var___class__ = tmp_assign_source_134;
}
CHECK_OBJECT(outline_15_var___class__);
tmp_assign_source_133 = outline_15_var___class__;
Py_INCREF(tmp_assign_source_133);
goto try_return_handler_48;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_48:;
Py_DECREF(locals_httpx$_exceptions$$$class__16_ProtocolError_216);
locals_httpx$_exceptions$$$class__16_ProtocolError_216 = NULL;
goto try_return_handler_47;
// Exception handler code:
try_except_handler_48:;
exception_keeper_lineno_46 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_46 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpx$_exceptions$$$class__16_ProtocolError_216);
locals_httpx$_exceptions$$$class__16_ProtocolError_216 = NULL;
// Re-raise.
exception_state = exception_keeper_name_46;
exception_lineno = exception_keeper_lineno_46;

goto try_except_handler_47;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_47:;
CHECK_OBJECT(outline_15_var___class__);
CHECK_OBJECT(outline_15_var___class__);
Py_DECREF(outline_15_var___class__);
outline_15_var___class__ = NULL;
goto outline_result_32;
// Exception handler code:
try_except_handler_47:;
exception_keeper_lineno_47 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_47 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_47;
exception_lineno = exception_keeper_lineno_47;

goto outline_exception_16;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_16:;
exception_lineno = 216;
goto try_except_handler_46;
outline_result_32:;
UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_ProtocolError, tmp_assign_source_133);
}
goto try_end_16;
// Exception handler code:
try_except_handler_46:;
exception_keeper_lineno_48 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_48 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_16__bases_orig);
tmp_class_container$class_creation_16__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_16__bases);
tmp_class_container$class_creation_16__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_16__class_decl_dict);
tmp_class_container$class_creation_16__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_16__metaclass);
tmp_class_container$class_creation_16__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_16__prepared);
tmp_class_container$class_creation_16__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_48;
exception_lineno = exception_keeper_lineno_48;

goto frame_exception_exit_1;
// End of try:
try_end_16:;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_16__bases_orig);
Py_DECREF(tmp_class_container$class_creation_16__bases_orig);
tmp_class_container$class_creation_16__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
Py_DECREF(tmp_class_container$class_creation_16__bases);
tmp_class_container$class_creation_16__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_16__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_16__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_16__class_decl_dict);
tmp_class_container$class_creation_16__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
Py_DECREF(tmp_class_container$class_creation_16__metaclass);
tmp_class_container$class_creation_16__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_16__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_16__prepared);
Py_DECREF(tmp_class_container$class_creation_16__prepared);
tmp_class_container$class_creation_16__prepared = NULL;
tmp_outline_return_value_16 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_16);
goto outline_result_31;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_31:;
CHECK_OBJECT(tmp_outline_return_value_16);
Py_DECREF(tmp_outline_return_value_16);
}
{
PyObject *tmp_outline_return_value_17;
// Tried code:
{
PyObject *tmp_assign_source_135;
PyObject *tmp_tuple_element_64;
tmp_tuple_element_64 = module_var_accessor_httpx$_exceptions$ProtocolError(tstate);
if (unlikely(tmp_tuple_element_64 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ProtocolError);
}

if (tmp_tuple_element_64 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 222;

    goto try_except_handler_49;
}
tmp_assign_source_135 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_135, 0, tmp_tuple_element_64);
assert(tmp_class_container$class_creation_17__bases_orig == NULL);
tmp_class_container$class_creation_17__bases_orig = tmp_assign_source_135;
}
{
PyObject *tmp_assign_source_136;
PyObject *tmp_direct_call_arg1_17;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases_orig);
tmp_direct_call_arg1_17 = tmp_class_container$class_creation_17__bases_orig;
Py_INCREF(tmp_direct_call_arg1_17);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_17};
    tmp_assign_source_136 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_136 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_49;
}
assert(tmp_class_container$class_creation_17__bases == NULL);
tmp_class_container$class_creation_17__bases = tmp_assign_source_136;
}
{
PyObject *tmp_assign_source_137;
tmp_assign_source_137 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_17__class_decl_dict == NULL);
tmp_class_container$class_creation_17__class_decl_dict = tmp_assign_source_137;
}
{
PyObject *tmp_assign_source_138;
PyObject *tmp_metaclass_value_17;
nuitka_bool tmp_condition_result_65;
int tmp_truth_name_17;
PyObject *tmp_type_arg_33;
PyObject *tmp_expression_value_97;
PyObject *tmp_subscript_value_17;
PyObject *tmp_bases_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_truth_name_17 = CHECK_IF_TRUE(tmp_class_container$class_creation_17__bases);
if (tmp_truth_name_17 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_49;
}
tmp_condition_result_65 = tmp_truth_name_17 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_65 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_17;
} else {
    goto condexpr_false_17;
}
condexpr_true_17:;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_expression_value_97 = tmp_class_container$class_creation_17__bases;
tmp_subscript_value_17 = const_int_0;
tmp_type_arg_33 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_97, tmp_subscript_value_17, 0);
if (tmp_type_arg_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_49;
}
tmp_metaclass_value_17 = BUILTIN_TYPE1(tmp_type_arg_33);
CHECK_OBJECT(tmp_type_arg_33);
Py_DECREF(tmp_type_arg_33);
if (tmp_metaclass_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_49;
}
goto condexpr_end_17;
condexpr_false_17:;
tmp_metaclass_value_17 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_17);
condexpr_end_17:;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_bases_value_17 = tmp_class_container$class_creation_17__bases;
tmp_assign_source_138 = SELECT_METACLASS(tstate, tmp_metaclass_value_17, tmp_bases_value_17);
CHECK_OBJECT(tmp_metaclass_value_17);
Py_DECREF(tmp_metaclass_value_17);
if (tmp_assign_source_138 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_49;
}
assert(tmp_class_container$class_creation_17__metaclass == NULL);
tmp_class_container$class_creation_17__metaclass = tmp_assign_source_138;
}
{
bool tmp_condition_result_66;
PyObject *tmp_expression_value_98;
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
tmp_expression_value_98 = tmp_class_container$class_creation_17__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_98, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_49;
}
tmp_condition_result_66 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_66 != false) {
    goto branch_yes_49;
} else {
    goto branch_no_49;
}
}
branch_yes_49:;
{
PyObject *tmp_assign_source_139;
PyObject *tmp_called_value_34;
PyObject *tmp_expression_value_99;
PyObject *tmp_args_value_33;
PyObject *tmp_tuple_element_65;
PyObject *tmp_kwargs_value_33;
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
tmp_expression_value_99 = tmp_class_container$class_creation_17__metaclass;
tmp_called_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_49;
}
tmp_tuple_element_65 = mod_consts.const_str_plain_LocalProtocolError;
tmp_args_value_33 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_33, 0, tmp_tuple_element_65);
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_tuple_element_65 = tmp_class_container$class_creation_17__bases;
PyTuple_SET_ITEM0(tmp_args_value_33, 1, tmp_tuple_element_65);
CHECK_OBJECT(tmp_class_container$class_creation_17__class_decl_dict);
tmp_kwargs_value_33 = tmp_class_container$class_creation_17__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 222;
tmp_assign_source_139 = CALL_FUNCTION(tstate, tmp_called_value_34, tmp_args_value_33, tmp_kwargs_value_33);
CHECK_OBJECT(tmp_called_value_34);
Py_DECREF(tmp_called_value_34);
CHECK_OBJECT(tmp_args_value_33);
Py_DECREF(tmp_args_value_33);
if (tmp_assign_source_139 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_49;
}
assert(tmp_class_container$class_creation_17__prepared == NULL);
tmp_class_container$class_creation_17__prepared = tmp_assign_source_139;
}
{
bool tmp_condition_result_67;
PyObject *tmp_operand_value_17;
PyObject *tmp_expression_value_100;
CHECK_OBJECT(tmp_class_container$class_creation_17__prepared);
tmp_expression_value_100 = tmp_class_container$class_creation_17__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_100, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_49;
}
tmp_operand_value_17 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_17);
assert(!(tmp_res == -1));
tmp_condition_result_67 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_67 != false) {
    goto branch_yes_50;
} else {
    goto branch_no_50;
}
}
branch_yes_50:;
{
PyObject *tmp_raise_type_17;
PyObject *tmp_make_exception_arg_17;
PyObject *tmp_mod_expr_left_17;
PyObject *tmp_mod_expr_right_17;
PyObject *tmp_tuple_element_66;
PyObject *tmp_expression_value_101;
PyObject *tmp_name_value_18;
PyObject *tmp_default_value_17;
tmp_mod_expr_left_17 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
tmp_expression_value_101 = tmp_class_container$class_creation_17__metaclass;
tmp_name_value_18 = const_str_plain___name__;
tmp_default_value_17 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_66 = BUILTIN_GETATTR(tstate, tmp_expression_value_101, tmp_name_value_18, tmp_default_value_17);
if (tmp_tuple_element_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_49;
}
tmp_mod_expr_right_17 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_102;
PyObject *tmp_type_arg_34;
PyTuple_SET_ITEM(tmp_mod_expr_right_17, 0, tmp_tuple_element_66);
CHECK_OBJECT(tmp_class_container$class_creation_17__prepared);
tmp_type_arg_34 = tmp_class_container$class_creation_17__prepared;
tmp_expression_value_102 = BUILTIN_TYPE1(tmp_type_arg_34);
assert(!(tmp_expression_value_102 == NULL));
tmp_tuple_element_66 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_102, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_102);
Py_DECREF(tmp_expression_value_102);
if (tmp_tuple_element_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto tuple_build_exception_17;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_17, 1, tmp_tuple_element_66);
}
goto tuple_build_no_exception_17;
// Exception handling pass through code for tuple_build:
tuple_build_exception_17:;
Py_DECREF(tmp_mod_expr_right_17);
goto try_except_handler_49;
// Finished with no exception for tuple_build:
tuple_build_no_exception_17:;
tmp_make_exception_arg_17 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_17, tmp_mod_expr_right_17);
CHECK_OBJECT(tmp_mod_expr_right_17);
Py_DECREF(tmp_mod_expr_right_17);
if (tmp_make_exception_arg_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_49;
}
frame_frame_httpx$_exceptions->m_frame.f_lineno = 222;
tmp_raise_type_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_17);
CHECK_OBJECT(tmp_make_exception_arg_17);
Py_DECREF(tmp_make_exception_arg_17);
assert(!(tmp_raise_type_17 == NULL));
exception_state.exception_value = tmp_raise_type_17;
exception_lineno = 222;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_49;
}
branch_no_50:;
goto branch_end_49;
branch_no_49:;
{
PyObject *tmp_assign_source_140;
tmp_assign_source_140 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_17__prepared == NULL);
tmp_class_container$class_creation_17__prepared = tmp_assign_source_140;
}
branch_end_49:;
{
PyObject *tmp_assign_source_141;
{
PyObject *tmp_set_locals_17;
CHECK_OBJECT(tmp_class_container$class_creation_17__prepared);
tmp_set_locals_17 = tmp_class_container$class_creation_17__prepared;
locals_httpx$_exceptions$$$class__17_LocalProtocolError_222 = tmp_set_locals_17;
Py_INCREF(tmp_set_locals_17);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_f49f37ecb12db2b9a869fd11ee8982d4;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__17_LocalProtocolError_222, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_51;
}
tmp_dictset_value = mod_consts.const_str_digest_d59c0843f8e1a77a20628bd0b9f5b907;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__17_LocalProtocolError_222, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_51;
}
tmp_dictset_value = mod_consts.const_str_plain_LocalProtocolError;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__17_LocalProtocolError_222, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_51;
}
tmp_dictset_value = mod_consts.const_int_pos_222;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__17_LocalProtocolError_222, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_51;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__17_LocalProtocolError_222, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_51;
}
{
nuitka_bool tmp_condition_result_68;
PyObject *tmp_cmp_expr_left_17;
PyObject *tmp_cmp_expr_right_17;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_cmp_expr_left_17 = tmp_class_container$class_creation_17__bases;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases_orig);
tmp_cmp_expr_right_17 = tmp_class_container$class_creation_17__bases_orig;
tmp_condition_result_68 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
if (tmp_condition_result_68 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_51;
}
if (tmp_condition_result_68 == NUITKA_BOOL_TRUE) {
    goto branch_yes_51;
} else {
    goto branch_no_51;
}
}
branch_yes_51:;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_17__bases_orig;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__17_LocalProtocolError_222, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_51;
}
branch_no_51:;
{
PyObject *tmp_assign_source_142;
PyObject *tmp_called_value_35;
PyObject *tmp_args_value_34;
PyObject *tmp_tuple_element_67;
PyObject *tmp_kwargs_value_34;
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
tmp_called_value_35 = tmp_class_container$class_creation_17__metaclass;
tmp_tuple_element_67 = mod_consts.const_str_plain_LocalProtocolError;
tmp_args_value_34 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_34, 0, tmp_tuple_element_67);
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_tuple_element_67 = tmp_class_container$class_creation_17__bases;
PyTuple_SET_ITEM0(tmp_args_value_34, 1, tmp_tuple_element_67);
tmp_tuple_element_67 = locals_httpx$_exceptions$$$class__17_LocalProtocolError_222;
PyTuple_SET_ITEM0(tmp_args_value_34, 2, tmp_tuple_element_67);
CHECK_OBJECT(tmp_class_container$class_creation_17__class_decl_dict);
tmp_kwargs_value_34 = tmp_class_container$class_creation_17__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 222;
tmp_assign_source_142 = CALL_FUNCTION(tstate, tmp_called_value_35, tmp_args_value_34, tmp_kwargs_value_34);
CHECK_OBJECT(tmp_args_value_34);
Py_DECREF(tmp_args_value_34);
if (tmp_assign_source_142 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_51;
}
assert(outline_16_var___class__ == NULL);
outline_16_var___class__ = tmp_assign_source_142;
}
CHECK_OBJECT(outline_16_var___class__);
tmp_assign_source_141 = outline_16_var___class__;
Py_INCREF(tmp_assign_source_141);
goto try_return_handler_51;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_51:;
Py_DECREF(locals_httpx$_exceptions$$$class__17_LocalProtocolError_222);
locals_httpx$_exceptions$$$class__17_LocalProtocolError_222 = NULL;
goto try_return_handler_50;
// Exception handler code:
try_except_handler_51:;
exception_keeper_lineno_49 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_49 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpx$_exceptions$$$class__17_LocalProtocolError_222);
locals_httpx$_exceptions$$$class__17_LocalProtocolError_222 = NULL;
// Re-raise.
exception_state = exception_keeper_name_49;
exception_lineno = exception_keeper_lineno_49;

goto try_except_handler_50;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_50:;
CHECK_OBJECT(outline_16_var___class__);
CHECK_OBJECT(outline_16_var___class__);
Py_DECREF(outline_16_var___class__);
outline_16_var___class__ = NULL;
goto outline_result_34;
// Exception handler code:
try_except_handler_50:;
exception_keeper_lineno_50 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_50 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_50;
exception_lineno = exception_keeper_lineno_50;

goto outline_exception_17;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_17:;
exception_lineno = 222;
goto try_except_handler_49;
outline_result_34:;
UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_LocalProtocolError, tmp_assign_source_141);
}
goto try_end_17;
// Exception handler code:
try_except_handler_49:;
exception_keeper_lineno_51 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_51 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_17__bases_orig);
tmp_class_container$class_creation_17__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_17__bases);
tmp_class_container$class_creation_17__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_17__class_decl_dict);
tmp_class_container$class_creation_17__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_17__metaclass);
tmp_class_container$class_creation_17__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_17__prepared);
tmp_class_container$class_creation_17__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_51;
exception_lineno = exception_keeper_lineno_51;

goto frame_exception_exit_1;
// End of try:
try_end_17:;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_17__bases_orig);
Py_DECREF(tmp_class_container$class_creation_17__bases_orig);
tmp_class_container$class_creation_17__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
Py_DECREF(tmp_class_container$class_creation_17__bases);
tmp_class_container$class_creation_17__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_17__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_17__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_17__class_decl_dict);
tmp_class_container$class_creation_17__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
Py_DECREF(tmp_class_container$class_creation_17__metaclass);
tmp_class_container$class_creation_17__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_17__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_17__prepared);
Py_DECREF(tmp_class_container$class_creation_17__prepared);
tmp_class_container$class_creation_17__prepared = NULL;
tmp_outline_return_value_17 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_17);
goto outline_result_33;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_33:;
CHECK_OBJECT(tmp_outline_return_value_17);
Py_DECREF(tmp_outline_return_value_17);
}
{
PyObject *tmp_outline_return_value_18;
// Tried code:
{
PyObject *tmp_assign_source_143;
PyObject *tmp_tuple_element_68;
tmp_tuple_element_68 = module_var_accessor_httpx$_exceptions$ProtocolError(tstate);
if (unlikely(tmp_tuple_element_68 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ProtocolError);
}

if (tmp_tuple_element_68 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 232;

    goto try_except_handler_52;
}
tmp_assign_source_143 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_143, 0, tmp_tuple_element_68);
assert(tmp_class_container$class_creation_18__bases_orig == NULL);
tmp_class_container$class_creation_18__bases_orig = tmp_assign_source_143;
}
{
PyObject *tmp_assign_source_144;
PyObject *tmp_direct_call_arg1_18;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases_orig);
tmp_direct_call_arg1_18 = tmp_class_container$class_creation_18__bases_orig;
Py_INCREF(tmp_direct_call_arg1_18);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_18};
    tmp_assign_source_144 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_144 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

    goto try_except_handler_52;
}
assert(tmp_class_container$class_creation_18__bases == NULL);
tmp_class_container$class_creation_18__bases = tmp_assign_source_144;
}
{
PyObject *tmp_assign_source_145;
tmp_assign_source_145 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_18__class_decl_dict == NULL);
tmp_class_container$class_creation_18__class_decl_dict = tmp_assign_source_145;
}
{
PyObject *tmp_assign_source_146;
PyObject *tmp_metaclass_value_18;
nuitka_bool tmp_condition_result_69;
int tmp_truth_name_18;
PyObject *tmp_type_arg_35;
PyObject *tmp_expression_value_103;
PyObject *tmp_subscript_value_18;
PyObject *tmp_bases_value_18;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_truth_name_18 = CHECK_IF_TRUE(tmp_class_container$class_creation_18__bases);
if (tmp_truth_name_18 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

    goto try_except_handler_52;
}
tmp_condition_result_69 = tmp_truth_name_18 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_69 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_18;
} else {
    goto condexpr_false_18;
}
condexpr_true_18:;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_expression_value_103 = tmp_class_container$class_creation_18__bases;
tmp_subscript_value_18 = const_int_0;
tmp_type_arg_35 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_103, tmp_subscript_value_18, 0);
if (tmp_type_arg_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

    goto try_except_handler_52;
}
tmp_metaclass_value_18 = BUILTIN_TYPE1(tmp_type_arg_35);
CHECK_OBJECT(tmp_type_arg_35);
Py_DECREF(tmp_type_arg_35);
if (tmp_metaclass_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

    goto try_except_handler_52;
}
goto condexpr_end_18;
condexpr_false_18:;
tmp_metaclass_value_18 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_18);
condexpr_end_18:;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_bases_value_18 = tmp_class_container$class_creation_18__bases;
tmp_assign_source_146 = SELECT_METACLASS(tstate, tmp_metaclass_value_18, tmp_bases_value_18);
CHECK_OBJECT(tmp_metaclass_value_18);
Py_DECREF(tmp_metaclass_value_18);
if (tmp_assign_source_146 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

    goto try_except_handler_52;
}
assert(tmp_class_container$class_creation_18__metaclass == NULL);
tmp_class_container$class_creation_18__metaclass = tmp_assign_source_146;
}
{
bool tmp_condition_result_70;
PyObject *tmp_expression_value_104;
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
tmp_expression_value_104 = tmp_class_container$class_creation_18__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_104, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

    goto try_except_handler_52;
}
tmp_condition_result_70 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_70 != false) {
    goto branch_yes_52;
} else {
    goto branch_no_52;
}
}
branch_yes_52:;
{
PyObject *tmp_assign_source_147;
PyObject *tmp_called_value_36;
PyObject *tmp_expression_value_105;
PyObject *tmp_args_value_35;
PyObject *tmp_tuple_element_69;
PyObject *tmp_kwargs_value_35;
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
tmp_expression_value_105 = tmp_class_container$class_creation_18__metaclass;
tmp_called_value_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_105, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

    goto try_except_handler_52;
}
tmp_tuple_element_69 = mod_consts.const_str_plain_RemoteProtocolError;
tmp_args_value_35 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_35, 0, tmp_tuple_element_69);
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_tuple_element_69 = tmp_class_container$class_creation_18__bases;
PyTuple_SET_ITEM0(tmp_args_value_35, 1, tmp_tuple_element_69);
CHECK_OBJECT(tmp_class_container$class_creation_18__class_decl_dict);
tmp_kwargs_value_35 = tmp_class_container$class_creation_18__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 232;
tmp_assign_source_147 = CALL_FUNCTION(tstate, tmp_called_value_36, tmp_args_value_35, tmp_kwargs_value_35);
CHECK_OBJECT(tmp_called_value_36);
Py_DECREF(tmp_called_value_36);
CHECK_OBJECT(tmp_args_value_35);
Py_DECREF(tmp_args_value_35);
if (tmp_assign_source_147 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

    goto try_except_handler_52;
}
assert(tmp_class_container$class_creation_18__prepared == NULL);
tmp_class_container$class_creation_18__prepared = tmp_assign_source_147;
}
{
bool tmp_condition_result_71;
PyObject *tmp_operand_value_18;
PyObject *tmp_expression_value_106;
CHECK_OBJECT(tmp_class_container$class_creation_18__prepared);
tmp_expression_value_106 = tmp_class_container$class_creation_18__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_106, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

    goto try_except_handler_52;
}
tmp_operand_value_18 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_18);
assert(!(tmp_res == -1));
tmp_condition_result_71 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_71 != false) {
    goto branch_yes_53;
} else {
    goto branch_no_53;
}
}
branch_yes_53:;
{
PyObject *tmp_raise_type_18;
PyObject *tmp_make_exception_arg_18;
PyObject *tmp_mod_expr_left_18;
PyObject *tmp_mod_expr_right_18;
PyObject *tmp_tuple_element_70;
PyObject *tmp_expression_value_107;
PyObject *tmp_name_value_19;
PyObject *tmp_default_value_18;
tmp_mod_expr_left_18 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
tmp_expression_value_107 = tmp_class_container$class_creation_18__metaclass;
tmp_name_value_19 = const_str_plain___name__;
tmp_default_value_18 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_70 = BUILTIN_GETATTR(tstate, tmp_expression_value_107, tmp_name_value_19, tmp_default_value_18);
if (tmp_tuple_element_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

    goto try_except_handler_52;
}
tmp_mod_expr_right_18 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_108;
PyObject *tmp_type_arg_36;
PyTuple_SET_ITEM(tmp_mod_expr_right_18, 0, tmp_tuple_element_70);
CHECK_OBJECT(tmp_class_container$class_creation_18__prepared);
tmp_type_arg_36 = tmp_class_container$class_creation_18__prepared;
tmp_expression_value_108 = BUILTIN_TYPE1(tmp_type_arg_36);
assert(!(tmp_expression_value_108 == NULL));
tmp_tuple_element_70 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_108, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_108);
Py_DECREF(tmp_expression_value_108);
if (tmp_tuple_element_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

    goto tuple_build_exception_18;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_18, 1, tmp_tuple_element_70);
}
goto tuple_build_no_exception_18;
// Exception handling pass through code for tuple_build:
tuple_build_exception_18:;
Py_DECREF(tmp_mod_expr_right_18);
goto try_except_handler_52;
// Finished with no exception for tuple_build:
tuple_build_no_exception_18:;
tmp_make_exception_arg_18 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_18, tmp_mod_expr_right_18);
CHECK_OBJECT(tmp_mod_expr_right_18);
Py_DECREF(tmp_mod_expr_right_18);
if (tmp_make_exception_arg_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

    goto try_except_handler_52;
}
frame_frame_httpx$_exceptions->m_frame.f_lineno = 232;
tmp_raise_type_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_18);
CHECK_OBJECT(tmp_make_exception_arg_18);
Py_DECREF(tmp_make_exception_arg_18);
assert(!(tmp_raise_type_18 == NULL));
exception_state.exception_value = tmp_raise_type_18;
exception_lineno = 232;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_52;
}
branch_no_53:;
goto branch_end_52;
branch_no_52:;
{
PyObject *tmp_assign_source_148;
tmp_assign_source_148 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_18__prepared == NULL);
tmp_class_container$class_creation_18__prepared = tmp_assign_source_148;
}
branch_end_52:;
{
PyObject *tmp_assign_source_149;
{
PyObject *tmp_set_locals_18;
CHECK_OBJECT(tmp_class_container$class_creation_18__prepared);
tmp_set_locals_18 = tmp_class_container$class_creation_18__prepared;
locals_httpx$_exceptions$$$class__18_RemoteProtocolError_232 = tmp_set_locals_18;
Py_INCREF(tmp_set_locals_18);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_f49f37ecb12db2b9a869fd11ee8982d4;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__18_RemoteProtocolError_232, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

    goto try_except_handler_54;
}
tmp_dictset_value = mod_consts.const_str_digest_0284d270d7f57bd47e0145cc2275024a;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__18_RemoteProtocolError_232, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

    goto try_except_handler_54;
}
tmp_dictset_value = mod_consts.const_str_plain_RemoteProtocolError;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__18_RemoteProtocolError_232, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

    goto try_except_handler_54;
}
tmp_dictset_value = mod_consts.const_int_pos_232;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__18_RemoteProtocolError_232, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

    goto try_except_handler_54;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__18_RemoteProtocolError_232, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

    goto try_except_handler_54;
}
{
nuitka_bool tmp_condition_result_72;
PyObject *tmp_cmp_expr_left_18;
PyObject *tmp_cmp_expr_right_18;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_cmp_expr_left_18 = tmp_class_container$class_creation_18__bases;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases_orig);
tmp_cmp_expr_right_18 = tmp_class_container$class_creation_18__bases_orig;
tmp_condition_result_72 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
if (tmp_condition_result_72 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

    goto try_except_handler_54;
}
if (tmp_condition_result_72 == NUITKA_BOOL_TRUE) {
    goto branch_yes_54;
} else {
    goto branch_no_54;
}
}
branch_yes_54:;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_18__bases_orig;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__18_RemoteProtocolError_232, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

    goto try_except_handler_54;
}
branch_no_54:;
{
PyObject *tmp_assign_source_150;
PyObject *tmp_called_value_37;
PyObject *tmp_args_value_36;
PyObject *tmp_tuple_element_71;
PyObject *tmp_kwargs_value_36;
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
tmp_called_value_37 = tmp_class_container$class_creation_18__metaclass;
tmp_tuple_element_71 = mod_consts.const_str_plain_RemoteProtocolError;
tmp_args_value_36 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_36, 0, tmp_tuple_element_71);
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_tuple_element_71 = tmp_class_container$class_creation_18__bases;
PyTuple_SET_ITEM0(tmp_args_value_36, 1, tmp_tuple_element_71);
tmp_tuple_element_71 = locals_httpx$_exceptions$$$class__18_RemoteProtocolError_232;
PyTuple_SET_ITEM0(tmp_args_value_36, 2, tmp_tuple_element_71);
CHECK_OBJECT(tmp_class_container$class_creation_18__class_decl_dict);
tmp_kwargs_value_36 = tmp_class_container$class_creation_18__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 232;
tmp_assign_source_150 = CALL_FUNCTION(tstate, tmp_called_value_37, tmp_args_value_36, tmp_kwargs_value_36);
CHECK_OBJECT(tmp_args_value_36);
Py_DECREF(tmp_args_value_36);
if (tmp_assign_source_150 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

    goto try_except_handler_54;
}
assert(outline_17_var___class__ == NULL);
outline_17_var___class__ = tmp_assign_source_150;
}
CHECK_OBJECT(outline_17_var___class__);
tmp_assign_source_149 = outline_17_var___class__;
Py_INCREF(tmp_assign_source_149);
goto try_return_handler_54;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_54:;
Py_DECREF(locals_httpx$_exceptions$$$class__18_RemoteProtocolError_232);
locals_httpx$_exceptions$$$class__18_RemoteProtocolError_232 = NULL;
goto try_return_handler_53;
// Exception handler code:
try_except_handler_54:;
exception_keeper_lineno_52 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_52 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpx$_exceptions$$$class__18_RemoteProtocolError_232);
locals_httpx$_exceptions$$$class__18_RemoteProtocolError_232 = NULL;
// Re-raise.
exception_state = exception_keeper_name_52;
exception_lineno = exception_keeper_lineno_52;

goto try_except_handler_53;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_53:;
CHECK_OBJECT(outline_17_var___class__);
CHECK_OBJECT(outline_17_var___class__);
Py_DECREF(outline_17_var___class__);
outline_17_var___class__ = NULL;
goto outline_result_36;
// Exception handler code:
try_except_handler_53:;
exception_keeper_lineno_53 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_53 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_53;
exception_lineno = exception_keeper_lineno_53;

goto outline_exception_18;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_18:;
exception_lineno = 232;
goto try_except_handler_52;
outline_result_36:;
UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_RemoteProtocolError, tmp_assign_source_149);
}
goto try_end_18;
// Exception handler code:
try_except_handler_52:;
exception_keeper_lineno_54 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_54 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_18__bases_orig);
tmp_class_container$class_creation_18__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_18__bases);
tmp_class_container$class_creation_18__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_18__class_decl_dict);
tmp_class_container$class_creation_18__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_18__metaclass);
tmp_class_container$class_creation_18__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_18__prepared);
tmp_class_container$class_creation_18__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_54;
exception_lineno = exception_keeper_lineno_54;

goto frame_exception_exit_1;
// End of try:
try_end_18:;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_18__bases_orig);
Py_DECREF(tmp_class_container$class_creation_18__bases_orig);
tmp_class_container$class_creation_18__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
Py_DECREF(tmp_class_container$class_creation_18__bases);
tmp_class_container$class_creation_18__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_18__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_18__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_18__class_decl_dict);
tmp_class_container$class_creation_18__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
Py_DECREF(tmp_class_container$class_creation_18__metaclass);
tmp_class_container$class_creation_18__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_18__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_18__prepared);
Py_DECREF(tmp_class_container$class_creation_18__prepared);
tmp_class_container$class_creation_18__prepared = NULL;
tmp_outline_return_value_18 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_18);
goto outline_result_35;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_35:;
CHECK_OBJECT(tmp_outline_return_value_18);
Py_DECREF(tmp_outline_return_value_18);
}
{
PyObject *tmp_outline_return_value_19;
// Tried code:
{
PyObject *tmp_assign_source_151;
PyObject *tmp_tuple_element_72;
tmp_tuple_element_72 = module_var_accessor_httpx$_exceptions$RequestError(tstate);
if (unlikely(tmp_tuple_element_72 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RequestError);
}

if (tmp_tuple_element_72 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 243;

    goto try_except_handler_55;
}
tmp_assign_source_151 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_151, 0, tmp_tuple_element_72);
assert(tmp_class_container$class_creation_19__bases_orig == NULL);
tmp_class_container$class_creation_19__bases_orig = tmp_assign_source_151;
}
{
PyObject *tmp_assign_source_152;
PyObject *tmp_direct_call_arg1_19;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases_orig);
tmp_direct_call_arg1_19 = tmp_class_container$class_creation_19__bases_orig;
Py_INCREF(tmp_direct_call_arg1_19);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_19};
    tmp_assign_source_152 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_152 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;

    goto try_except_handler_55;
}
assert(tmp_class_container$class_creation_19__bases == NULL);
tmp_class_container$class_creation_19__bases = tmp_assign_source_152;
}
{
PyObject *tmp_assign_source_153;
tmp_assign_source_153 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_19__class_decl_dict == NULL);
tmp_class_container$class_creation_19__class_decl_dict = tmp_assign_source_153;
}
{
PyObject *tmp_assign_source_154;
PyObject *tmp_metaclass_value_19;
nuitka_bool tmp_condition_result_73;
int tmp_truth_name_19;
PyObject *tmp_type_arg_37;
PyObject *tmp_expression_value_109;
PyObject *tmp_subscript_value_19;
PyObject *tmp_bases_value_19;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
tmp_truth_name_19 = CHECK_IF_TRUE(tmp_class_container$class_creation_19__bases);
if (tmp_truth_name_19 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;

    goto try_except_handler_55;
}
tmp_condition_result_73 = tmp_truth_name_19 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_73 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_19;
} else {
    goto condexpr_false_19;
}
condexpr_true_19:;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
tmp_expression_value_109 = tmp_class_container$class_creation_19__bases;
tmp_subscript_value_19 = const_int_0;
tmp_type_arg_37 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_109, tmp_subscript_value_19, 0);
if (tmp_type_arg_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;

    goto try_except_handler_55;
}
tmp_metaclass_value_19 = BUILTIN_TYPE1(tmp_type_arg_37);
CHECK_OBJECT(tmp_type_arg_37);
Py_DECREF(tmp_type_arg_37);
if (tmp_metaclass_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;

    goto try_except_handler_55;
}
goto condexpr_end_19;
condexpr_false_19:;
tmp_metaclass_value_19 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_19);
condexpr_end_19:;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
tmp_bases_value_19 = tmp_class_container$class_creation_19__bases;
tmp_assign_source_154 = SELECT_METACLASS(tstate, tmp_metaclass_value_19, tmp_bases_value_19);
CHECK_OBJECT(tmp_metaclass_value_19);
Py_DECREF(tmp_metaclass_value_19);
if (tmp_assign_source_154 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;

    goto try_except_handler_55;
}
assert(tmp_class_container$class_creation_19__metaclass == NULL);
tmp_class_container$class_creation_19__metaclass = tmp_assign_source_154;
}
{
bool tmp_condition_result_74;
PyObject *tmp_expression_value_110;
CHECK_OBJECT(tmp_class_container$class_creation_19__metaclass);
tmp_expression_value_110 = tmp_class_container$class_creation_19__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_110, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;

    goto try_except_handler_55;
}
tmp_condition_result_74 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_74 != false) {
    goto branch_yes_55;
} else {
    goto branch_no_55;
}
}
branch_yes_55:;
{
PyObject *tmp_assign_source_155;
PyObject *tmp_called_value_38;
PyObject *tmp_expression_value_111;
PyObject *tmp_args_value_37;
PyObject *tmp_tuple_element_73;
PyObject *tmp_kwargs_value_37;
CHECK_OBJECT(tmp_class_container$class_creation_19__metaclass);
tmp_expression_value_111 = tmp_class_container$class_creation_19__metaclass;
tmp_called_value_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_111, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;

    goto try_except_handler_55;
}
tmp_tuple_element_73 = mod_consts.const_str_plain_DecodingError;
tmp_args_value_37 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_37, 0, tmp_tuple_element_73);
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
tmp_tuple_element_73 = tmp_class_container$class_creation_19__bases;
PyTuple_SET_ITEM0(tmp_args_value_37, 1, tmp_tuple_element_73);
CHECK_OBJECT(tmp_class_container$class_creation_19__class_decl_dict);
tmp_kwargs_value_37 = tmp_class_container$class_creation_19__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 243;
tmp_assign_source_155 = CALL_FUNCTION(tstate, tmp_called_value_38, tmp_args_value_37, tmp_kwargs_value_37);
CHECK_OBJECT(tmp_called_value_38);
Py_DECREF(tmp_called_value_38);
CHECK_OBJECT(tmp_args_value_37);
Py_DECREF(tmp_args_value_37);
if (tmp_assign_source_155 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;

    goto try_except_handler_55;
}
assert(tmp_class_container$class_creation_19__prepared == NULL);
tmp_class_container$class_creation_19__prepared = tmp_assign_source_155;
}
{
bool tmp_condition_result_75;
PyObject *tmp_operand_value_19;
PyObject *tmp_expression_value_112;
CHECK_OBJECT(tmp_class_container$class_creation_19__prepared);
tmp_expression_value_112 = tmp_class_container$class_creation_19__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_112, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;

    goto try_except_handler_55;
}
tmp_operand_value_19 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_19);
assert(!(tmp_res == -1));
tmp_condition_result_75 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_75 != false) {
    goto branch_yes_56;
} else {
    goto branch_no_56;
}
}
branch_yes_56:;
{
PyObject *tmp_raise_type_19;
PyObject *tmp_make_exception_arg_19;
PyObject *tmp_mod_expr_left_19;
PyObject *tmp_mod_expr_right_19;
PyObject *tmp_tuple_element_74;
PyObject *tmp_expression_value_113;
PyObject *tmp_name_value_20;
PyObject *tmp_default_value_19;
tmp_mod_expr_left_19 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_19__metaclass);
tmp_expression_value_113 = tmp_class_container$class_creation_19__metaclass;
tmp_name_value_20 = const_str_plain___name__;
tmp_default_value_19 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_74 = BUILTIN_GETATTR(tstate, tmp_expression_value_113, tmp_name_value_20, tmp_default_value_19);
if (tmp_tuple_element_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;

    goto try_except_handler_55;
}
tmp_mod_expr_right_19 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_114;
PyObject *tmp_type_arg_38;
PyTuple_SET_ITEM(tmp_mod_expr_right_19, 0, tmp_tuple_element_74);
CHECK_OBJECT(tmp_class_container$class_creation_19__prepared);
tmp_type_arg_38 = tmp_class_container$class_creation_19__prepared;
tmp_expression_value_114 = BUILTIN_TYPE1(tmp_type_arg_38);
assert(!(tmp_expression_value_114 == NULL));
tmp_tuple_element_74 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_114, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_114);
Py_DECREF(tmp_expression_value_114);
if (tmp_tuple_element_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;

    goto tuple_build_exception_19;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_19, 1, tmp_tuple_element_74);
}
goto tuple_build_no_exception_19;
// Exception handling pass through code for tuple_build:
tuple_build_exception_19:;
Py_DECREF(tmp_mod_expr_right_19);
goto try_except_handler_55;
// Finished with no exception for tuple_build:
tuple_build_no_exception_19:;
tmp_make_exception_arg_19 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_19, tmp_mod_expr_right_19);
CHECK_OBJECT(tmp_mod_expr_right_19);
Py_DECREF(tmp_mod_expr_right_19);
if (tmp_make_exception_arg_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;

    goto try_except_handler_55;
}
frame_frame_httpx$_exceptions->m_frame.f_lineno = 243;
tmp_raise_type_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_19);
CHECK_OBJECT(tmp_make_exception_arg_19);
Py_DECREF(tmp_make_exception_arg_19);
assert(!(tmp_raise_type_19 == NULL));
exception_state.exception_value = tmp_raise_type_19;
exception_lineno = 243;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_55;
}
branch_no_56:;
goto branch_end_55;
branch_no_55:;
{
PyObject *tmp_assign_source_156;
tmp_assign_source_156 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_19__prepared == NULL);
tmp_class_container$class_creation_19__prepared = tmp_assign_source_156;
}
branch_end_55:;
{
PyObject *tmp_assign_source_157;
{
PyObject *tmp_set_locals_19;
CHECK_OBJECT(tmp_class_container$class_creation_19__prepared);
tmp_set_locals_19 = tmp_class_container$class_creation_19__prepared;
locals_httpx$_exceptions$$$class__19_DecodingError_243 = tmp_set_locals_19;
Py_INCREF(tmp_set_locals_19);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_f49f37ecb12db2b9a869fd11ee8982d4;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__19_DecodingError_243, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;

    goto try_except_handler_57;
}
tmp_dictset_value = mod_consts.const_str_digest_bb65cb552ab0cd75e903a0f01dc9643a;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__19_DecodingError_243, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;

    goto try_except_handler_57;
}
tmp_dictset_value = mod_consts.const_str_plain_DecodingError;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__19_DecodingError_243, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;

    goto try_except_handler_57;
}
tmp_dictset_value = mod_consts.const_int_pos_243;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__19_DecodingError_243, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;

    goto try_except_handler_57;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__19_DecodingError_243, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;

    goto try_except_handler_57;
}
{
nuitka_bool tmp_condition_result_76;
PyObject *tmp_cmp_expr_left_19;
PyObject *tmp_cmp_expr_right_19;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
tmp_cmp_expr_left_19 = tmp_class_container$class_creation_19__bases;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases_orig);
tmp_cmp_expr_right_19 = tmp_class_container$class_creation_19__bases_orig;
tmp_condition_result_76 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_19, tmp_cmp_expr_right_19);
if (tmp_condition_result_76 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;

    goto try_except_handler_57;
}
if (tmp_condition_result_76 == NUITKA_BOOL_TRUE) {
    goto branch_yes_57;
} else {
    goto branch_no_57;
}
}
branch_yes_57:;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_19__bases_orig;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__19_DecodingError_243, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;

    goto try_except_handler_57;
}
branch_no_57:;
{
PyObject *tmp_assign_source_158;
PyObject *tmp_called_value_39;
PyObject *tmp_args_value_38;
PyObject *tmp_tuple_element_75;
PyObject *tmp_kwargs_value_38;
CHECK_OBJECT(tmp_class_container$class_creation_19__metaclass);
tmp_called_value_39 = tmp_class_container$class_creation_19__metaclass;
tmp_tuple_element_75 = mod_consts.const_str_plain_DecodingError;
tmp_args_value_38 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_38, 0, tmp_tuple_element_75);
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
tmp_tuple_element_75 = tmp_class_container$class_creation_19__bases;
PyTuple_SET_ITEM0(tmp_args_value_38, 1, tmp_tuple_element_75);
tmp_tuple_element_75 = locals_httpx$_exceptions$$$class__19_DecodingError_243;
PyTuple_SET_ITEM0(tmp_args_value_38, 2, tmp_tuple_element_75);
CHECK_OBJECT(tmp_class_container$class_creation_19__class_decl_dict);
tmp_kwargs_value_38 = tmp_class_container$class_creation_19__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 243;
tmp_assign_source_158 = CALL_FUNCTION(tstate, tmp_called_value_39, tmp_args_value_38, tmp_kwargs_value_38);
CHECK_OBJECT(tmp_args_value_38);
Py_DECREF(tmp_args_value_38);
if (tmp_assign_source_158 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;

    goto try_except_handler_57;
}
assert(outline_18_var___class__ == NULL);
outline_18_var___class__ = tmp_assign_source_158;
}
CHECK_OBJECT(outline_18_var___class__);
tmp_assign_source_157 = outline_18_var___class__;
Py_INCREF(tmp_assign_source_157);
goto try_return_handler_57;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_57:;
Py_DECREF(locals_httpx$_exceptions$$$class__19_DecodingError_243);
locals_httpx$_exceptions$$$class__19_DecodingError_243 = NULL;
goto try_return_handler_56;
// Exception handler code:
try_except_handler_57:;
exception_keeper_lineno_55 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_55 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpx$_exceptions$$$class__19_DecodingError_243);
locals_httpx$_exceptions$$$class__19_DecodingError_243 = NULL;
// Re-raise.
exception_state = exception_keeper_name_55;
exception_lineno = exception_keeper_lineno_55;

goto try_except_handler_56;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_56:;
CHECK_OBJECT(outline_18_var___class__);
CHECK_OBJECT(outline_18_var___class__);
Py_DECREF(outline_18_var___class__);
outline_18_var___class__ = NULL;
goto outline_result_38;
// Exception handler code:
try_except_handler_56:;
exception_keeper_lineno_56 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_56 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_56;
exception_lineno = exception_keeper_lineno_56;

goto outline_exception_19;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_19:;
exception_lineno = 243;
goto try_except_handler_55;
outline_result_38:;
UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_DecodingError, tmp_assign_source_157);
}
goto try_end_19;
// Exception handler code:
try_except_handler_55:;
exception_keeper_lineno_57 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_57 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_19__bases_orig);
tmp_class_container$class_creation_19__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_19__bases);
tmp_class_container$class_creation_19__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_19__class_decl_dict);
tmp_class_container$class_creation_19__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_19__metaclass);
tmp_class_container$class_creation_19__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_19__prepared);
tmp_class_container$class_creation_19__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_57;
exception_lineno = exception_keeper_lineno_57;

goto frame_exception_exit_1;
// End of try:
try_end_19:;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_19__bases_orig);
Py_DECREF(tmp_class_container$class_creation_19__bases_orig);
tmp_class_container$class_creation_19__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
Py_DECREF(tmp_class_container$class_creation_19__bases);
tmp_class_container$class_creation_19__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_19__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_19__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_19__class_decl_dict);
tmp_class_container$class_creation_19__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_19__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_19__metaclass);
Py_DECREF(tmp_class_container$class_creation_19__metaclass);
tmp_class_container$class_creation_19__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_19__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_19__prepared);
Py_DECREF(tmp_class_container$class_creation_19__prepared);
tmp_class_container$class_creation_19__prepared = NULL;
tmp_outline_return_value_19 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_19);
goto outline_result_37;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_37:;
CHECK_OBJECT(tmp_outline_return_value_19);
Py_DECREF(tmp_outline_return_value_19);
}
{
PyObject *tmp_outline_return_value_20;
// Tried code:
{
PyObject *tmp_assign_source_159;
PyObject *tmp_tuple_element_76;
tmp_tuple_element_76 = module_var_accessor_httpx$_exceptions$RequestError(tstate);
if (unlikely(tmp_tuple_element_76 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RequestError);
}

if (tmp_tuple_element_76 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 249;

    goto try_except_handler_58;
}
tmp_assign_source_159 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_159, 0, tmp_tuple_element_76);
assert(tmp_class_container$class_creation_20__bases_orig == NULL);
tmp_class_container$class_creation_20__bases_orig = tmp_assign_source_159;
}
{
PyObject *tmp_assign_source_160;
PyObject *tmp_direct_call_arg1_20;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases_orig);
tmp_direct_call_arg1_20 = tmp_class_container$class_creation_20__bases_orig;
Py_INCREF(tmp_direct_call_arg1_20);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_20};
    tmp_assign_source_160 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_160 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;

    goto try_except_handler_58;
}
assert(tmp_class_container$class_creation_20__bases == NULL);
tmp_class_container$class_creation_20__bases = tmp_assign_source_160;
}
{
PyObject *tmp_assign_source_161;
tmp_assign_source_161 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_20__class_decl_dict == NULL);
tmp_class_container$class_creation_20__class_decl_dict = tmp_assign_source_161;
}
{
PyObject *tmp_assign_source_162;
PyObject *tmp_metaclass_value_20;
nuitka_bool tmp_condition_result_77;
int tmp_truth_name_20;
PyObject *tmp_type_arg_39;
PyObject *tmp_expression_value_115;
PyObject *tmp_subscript_value_20;
PyObject *tmp_bases_value_20;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
tmp_truth_name_20 = CHECK_IF_TRUE(tmp_class_container$class_creation_20__bases);
if (tmp_truth_name_20 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;

    goto try_except_handler_58;
}
tmp_condition_result_77 = tmp_truth_name_20 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_77 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_20;
} else {
    goto condexpr_false_20;
}
condexpr_true_20:;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
tmp_expression_value_115 = tmp_class_container$class_creation_20__bases;
tmp_subscript_value_20 = const_int_0;
tmp_type_arg_39 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_115, tmp_subscript_value_20, 0);
if (tmp_type_arg_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;

    goto try_except_handler_58;
}
tmp_metaclass_value_20 = BUILTIN_TYPE1(tmp_type_arg_39);
CHECK_OBJECT(tmp_type_arg_39);
Py_DECREF(tmp_type_arg_39);
if (tmp_metaclass_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;

    goto try_except_handler_58;
}
goto condexpr_end_20;
condexpr_false_20:;
tmp_metaclass_value_20 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_20);
condexpr_end_20:;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
tmp_bases_value_20 = tmp_class_container$class_creation_20__bases;
tmp_assign_source_162 = SELECT_METACLASS(tstate, tmp_metaclass_value_20, tmp_bases_value_20);
CHECK_OBJECT(tmp_metaclass_value_20);
Py_DECREF(tmp_metaclass_value_20);
if (tmp_assign_source_162 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;

    goto try_except_handler_58;
}
assert(tmp_class_container$class_creation_20__metaclass == NULL);
tmp_class_container$class_creation_20__metaclass = tmp_assign_source_162;
}
{
bool tmp_condition_result_78;
PyObject *tmp_expression_value_116;
CHECK_OBJECT(tmp_class_container$class_creation_20__metaclass);
tmp_expression_value_116 = tmp_class_container$class_creation_20__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_116, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;

    goto try_except_handler_58;
}
tmp_condition_result_78 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_78 != false) {
    goto branch_yes_58;
} else {
    goto branch_no_58;
}
}
branch_yes_58:;
{
PyObject *tmp_assign_source_163;
PyObject *tmp_called_value_40;
PyObject *tmp_expression_value_117;
PyObject *tmp_args_value_39;
PyObject *tmp_tuple_element_77;
PyObject *tmp_kwargs_value_39;
CHECK_OBJECT(tmp_class_container$class_creation_20__metaclass);
tmp_expression_value_117 = tmp_class_container$class_creation_20__metaclass;
tmp_called_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_117, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;

    goto try_except_handler_58;
}
tmp_tuple_element_77 = mod_consts.const_str_plain_TooManyRedirects;
tmp_args_value_39 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_39, 0, tmp_tuple_element_77);
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
tmp_tuple_element_77 = tmp_class_container$class_creation_20__bases;
PyTuple_SET_ITEM0(tmp_args_value_39, 1, tmp_tuple_element_77);
CHECK_OBJECT(tmp_class_container$class_creation_20__class_decl_dict);
tmp_kwargs_value_39 = tmp_class_container$class_creation_20__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 249;
tmp_assign_source_163 = CALL_FUNCTION(tstate, tmp_called_value_40, tmp_args_value_39, tmp_kwargs_value_39);
CHECK_OBJECT(tmp_called_value_40);
Py_DECREF(tmp_called_value_40);
CHECK_OBJECT(tmp_args_value_39);
Py_DECREF(tmp_args_value_39);
if (tmp_assign_source_163 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;

    goto try_except_handler_58;
}
assert(tmp_class_container$class_creation_20__prepared == NULL);
tmp_class_container$class_creation_20__prepared = tmp_assign_source_163;
}
{
bool tmp_condition_result_79;
PyObject *tmp_operand_value_20;
PyObject *tmp_expression_value_118;
CHECK_OBJECT(tmp_class_container$class_creation_20__prepared);
tmp_expression_value_118 = tmp_class_container$class_creation_20__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_118, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;

    goto try_except_handler_58;
}
tmp_operand_value_20 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_20);
assert(!(tmp_res == -1));
tmp_condition_result_79 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_79 != false) {
    goto branch_yes_59;
} else {
    goto branch_no_59;
}
}
branch_yes_59:;
{
PyObject *tmp_raise_type_20;
PyObject *tmp_make_exception_arg_20;
PyObject *tmp_mod_expr_left_20;
PyObject *tmp_mod_expr_right_20;
PyObject *tmp_tuple_element_78;
PyObject *tmp_expression_value_119;
PyObject *tmp_name_value_21;
PyObject *tmp_default_value_20;
tmp_mod_expr_left_20 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_20__metaclass);
tmp_expression_value_119 = tmp_class_container$class_creation_20__metaclass;
tmp_name_value_21 = const_str_plain___name__;
tmp_default_value_20 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_78 = BUILTIN_GETATTR(tstate, tmp_expression_value_119, tmp_name_value_21, tmp_default_value_20);
if (tmp_tuple_element_78 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;

    goto try_except_handler_58;
}
tmp_mod_expr_right_20 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_120;
PyObject *tmp_type_arg_40;
PyTuple_SET_ITEM(tmp_mod_expr_right_20, 0, tmp_tuple_element_78);
CHECK_OBJECT(tmp_class_container$class_creation_20__prepared);
tmp_type_arg_40 = tmp_class_container$class_creation_20__prepared;
tmp_expression_value_120 = BUILTIN_TYPE1(tmp_type_arg_40);
assert(!(tmp_expression_value_120 == NULL));
tmp_tuple_element_78 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_120, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_120);
Py_DECREF(tmp_expression_value_120);
if (tmp_tuple_element_78 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;

    goto tuple_build_exception_20;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_20, 1, tmp_tuple_element_78);
}
goto tuple_build_no_exception_20;
// Exception handling pass through code for tuple_build:
tuple_build_exception_20:;
Py_DECREF(tmp_mod_expr_right_20);
goto try_except_handler_58;
// Finished with no exception for tuple_build:
tuple_build_no_exception_20:;
tmp_make_exception_arg_20 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_20, tmp_mod_expr_right_20);
CHECK_OBJECT(tmp_mod_expr_right_20);
Py_DECREF(tmp_mod_expr_right_20);
if (tmp_make_exception_arg_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;

    goto try_except_handler_58;
}
frame_frame_httpx$_exceptions->m_frame.f_lineno = 249;
tmp_raise_type_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_20);
CHECK_OBJECT(tmp_make_exception_arg_20);
Py_DECREF(tmp_make_exception_arg_20);
assert(!(tmp_raise_type_20 == NULL));
exception_state.exception_value = tmp_raise_type_20;
exception_lineno = 249;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_58;
}
branch_no_59:;
goto branch_end_58;
branch_no_58:;
{
PyObject *tmp_assign_source_164;
tmp_assign_source_164 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_20__prepared == NULL);
tmp_class_container$class_creation_20__prepared = tmp_assign_source_164;
}
branch_end_58:;
{
PyObject *tmp_assign_source_165;
{
PyObject *tmp_set_locals_20;
CHECK_OBJECT(tmp_class_container$class_creation_20__prepared);
tmp_set_locals_20 = tmp_class_container$class_creation_20__prepared;
locals_httpx$_exceptions$$$class__20_TooManyRedirects_249 = tmp_set_locals_20;
Py_INCREF(tmp_set_locals_20);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_f49f37ecb12db2b9a869fd11ee8982d4;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__20_TooManyRedirects_249, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;

    goto try_except_handler_60;
}
tmp_dictset_value = mod_consts.const_str_digest_cb463857f72ab38cf1fcdd9a8d48462f;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__20_TooManyRedirects_249, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;

    goto try_except_handler_60;
}
tmp_dictset_value = mod_consts.const_str_plain_TooManyRedirects;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__20_TooManyRedirects_249, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;

    goto try_except_handler_60;
}
tmp_dictset_value = mod_consts.const_int_pos_249;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__20_TooManyRedirects_249, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;

    goto try_except_handler_60;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__20_TooManyRedirects_249, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;

    goto try_except_handler_60;
}
{
nuitka_bool tmp_condition_result_80;
PyObject *tmp_cmp_expr_left_20;
PyObject *tmp_cmp_expr_right_20;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
tmp_cmp_expr_left_20 = tmp_class_container$class_creation_20__bases;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases_orig);
tmp_cmp_expr_right_20 = tmp_class_container$class_creation_20__bases_orig;
tmp_condition_result_80 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_20, tmp_cmp_expr_right_20);
if (tmp_condition_result_80 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;

    goto try_except_handler_60;
}
if (tmp_condition_result_80 == NUITKA_BOOL_TRUE) {
    goto branch_yes_60;
} else {
    goto branch_no_60;
}
}
branch_yes_60:;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_20__bases_orig;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__20_TooManyRedirects_249, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;

    goto try_except_handler_60;
}
branch_no_60:;
{
PyObject *tmp_assign_source_166;
PyObject *tmp_called_value_41;
PyObject *tmp_args_value_40;
PyObject *tmp_tuple_element_79;
PyObject *tmp_kwargs_value_40;
CHECK_OBJECT(tmp_class_container$class_creation_20__metaclass);
tmp_called_value_41 = tmp_class_container$class_creation_20__metaclass;
tmp_tuple_element_79 = mod_consts.const_str_plain_TooManyRedirects;
tmp_args_value_40 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_40, 0, tmp_tuple_element_79);
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
tmp_tuple_element_79 = tmp_class_container$class_creation_20__bases;
PyTuple_SET_ITEM0(tmp_args_value_40, 1, tmp_tuple_element_79);
tmp_tuple_element_79 = locals_httpx$_exceptions$$$class__20_TooManyRedirects_249;
PyTuple_SET_ITEM0(tmp_args_value_40, 2, tmp_tuple_element_79);
CHECK_OBJECT(tmp_class_container$class_creation_20__class_decl_dict);
tmp_kwargs_value_40 = tmp_class_container$class_creation_20__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 249;
tmp_assign_source_166 = CALL_FUNCTION(tstate, tmp_called_value_41, tmp_args_value_40, tmp_kwargs_value_40);
CHECK_OBJECT(tmp_args_value_40);
Py_DECREF(tmp_args_value_40);
if (tmp_assign_source_166 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;

    goto try_except_handler_60;
}
assert(outline_19_var___class__ == NULL);
outline_19_var___class__ = tmp_assign_source_166;
}
CHECK_OBJECT(outline_19_var___class__);
tmp_assign_source_165 = outline_19_var___class__;
Py_INCREF(tmp_assign_source_165);
goto try_return_handler_60;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_60:;
Py_DECREF(locals_httpx$_exceptions$$$class__20_TooManyRedirects_249);
locals_httpx$_exceptions$$$class__20_TooManyRedirects_249 = NULL;
goto try_return_handler_59;
// Exception handler code:
try_except_handler_60:;
exception_keeper_lineno_58 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_58 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpx$_exceptions$$$class__20_TooManyRedirects_249);
locals_httpx$_exceptions$$$class__20_TooManyRedirects_249 = NULL;
// Re-raise.
exception_state = exception_keeper_name_58;
exception_lineno = exception_keeper_lineno_58;

goto try_except_handler_59;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_59:;
CHECK_OBJECT(outline_19_var___class__);
CHECK_OBJECT(outline_19_var___class__);
Py_DECREF(outline_19_var___class__);
outline_19_var___class__ = NULL;
goto outline_result_40;
// Exception handler code:
try_except_handler_59:;
exception_keeper_lineno_59 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_59 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_59;
exception_lineno = exception_keeper_lineno_59;

goto outline_exception_20;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_20:;
exception_lineno = 249;
goto try_except_handler_58;
outline_result_40:;
UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_TooManyRedirects, tmp_assign_source_165);
}
goto try_end_20;
// Exception handler code:
try_except_handler_58:;
exception_keeper_lineno_60 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_60 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_20__bases_orig);
tmp_class_container$class_creation_20__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_20__bases);
tmp_class_container$class_creation_20__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_20__class_decl_dict);
tmp_class_container$class_creation_20__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_20__metaclass);
tmp_class_container$class_creation_20__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_20__prepared);
tmp_class_container$class_creation_20__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_60;
exception_lineno = exception_keeper_lineno_60;

goto frame_exception_exit_1;
// End of try:
try_end_20:;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_20__bases_orig);
Py_DECREF(tmp_class_container$class_creation_20__bases_orig);
tmp_class_container$class_creation_20__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
Py_DECREF(tmp_class_container$class_creation_20__bases);
tmp_class_container$class_creation_20__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_20__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_20__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_20__class_decl_dict);
tmp_class_container$class_creation_20__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_20__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_20__metaclass);
Py_DECREF(tmp_class_container$class_creation_20__metaclass);
tmp_class_container$class_creation_20__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_20__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_20__prepared);
Py_DECREF(tmp_class_container$class_creation_20__prepared);
tmp_class_container$class_creation_20__prepared = NULL;
tmp_outline_return_value_20 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_20);
goto outline_result_39;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_39:;
CHECK_OBJECT(tmp_outline_return_value_20);
Py_DECREF(tmp_outline_return_value_20);
}
{
PyObject *tmp_outline_return_value_21;
// Tried code:
{
PyObject *tmp_assign_source_167;
PyObject *tmp_tuple_element_80;
tmp_tuple_element_80 = module_var_accessor_httpx$_exceptions$HTTPError(tstate);
if (unlikely(tmp_tuple_element_80 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HTTPError);
}

if (tmp_tuple_element_80 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 258;

    goto try_except_handler_61;
}
tmp_assign_source_167 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_167, 0, tmp_tuple_element_80);
assert(tmp_class_container$class_creation_21__bases_orig == NULL);
tmp_class_container$class_creation_21__bases_orig = tmp_assign_source_167;
}
{
PyObject *tmp_assign_source_168;
PyObject *tmp_direct_call_arg1_21;
CHECK_OBJECT(tmp_class_container$class_creation_21__bases_orig);
tmp_direct_call_arg1_21 = tmp_class_container$class_creation_21__bases_orig;
Py_INCREF(tmp_direct_call_arg1_21);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_21};
    tmp_assign_source_168 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_168 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;

    goto try_except_handler_61;
}
assert(tmp_class_container$class_creation_21__bases == NULL);
tmp_class_container$class_creation_21__bases = tmp_assign_source_168;
}
{
PyObject *tmp_assign_source_169;
tmp_assign_source_169 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_21__class_decl_dict == NULL);
tmp_class_container$class_creation_21__class_decl_dict = tmp_assign_source_169;
}
{
PyObject *tmp_assign_source_170;
PyObject *tmp_metaclass_value_21;
nuitka_bool tmp_condition_result_81;
int tmp_truth_name_21;
PyObject *tmp_type_arg_41;
PyObject *tmp_expression_value_121;
PyObject *tmp_subscript_value_21;
PyObject *tmp_bases_value_21;
CHECK_OBJECT(tmp_class_container$class_creation_21__bases);
tmp_truth_name_21 = CHECK_IF_TRUE(tmp_class_container$class_creation_21__bases);
if (tmp_truth_name_21 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;

    goto try_except_handler_61;
}
tmp_condition_result_81 = tmp_truth_name_21 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_81 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_21;
} else {
    goto condexpr_false_21;
}
condexpr_true_21:;
CHECK_OBJECT(tmp_class_container$class_creation_21__bases);
tmp_expression_value_121 = tmp_class_container$class_creation_21__bases;
tmp_subscript_value_21 = const_int_0;
tmp_type_arg_41 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_121, tmp_subscript_value_21, 0);
if (tmp_type_arg_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;

    goto try_except_handler_61;
}
tmp_metaclass_value_21 = BUILTIN_TYPE1(tmp_type_arg_41);
CHECK_OBJECT(tmp_type_arg_41);
Py_DECREF(tmp_type_arg_41);
if (tmp_metaclass_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;

    goto try_except_handler_61;
}
goto condexpr_end_21;
condexpr_false_21:;
tmp_metaclass_value_21 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_21);
condexpr_end_21:;
CHECK_OBJECT(tmp_class_container$class_creation_21__bases);
tmp_bases_value_21 = tmp_class_container$class_creation_21__bases;
tmp_assign_source_170 = SELECT_METACLASS(tstate, tmp_metaclass_value_21, tmp_bases_value_21);
CHECK_OBJECT(tmp_metaclass_value_21);
Py_DECREF(tmp_metaclass_value_21);
if (tmp_assign_source_170 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;

    goto try_except_handler_61;
}
assert(tmp_class_container$class_creation_21__metaclass == NULL);
tmp_class_container$class_creation_21__metaclass = tmp_assign_source_170;
}
{
bool tmp_condition_result_82;
PyObject *tmp_expression_value_122;
CHECK_OBJECT(tmp_class_container$class_creation_21__metaclass);
tmp_expression_value_122 = tmp_class_container$class_creation_21__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_122, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;

    goto try_except_handler_61;
}
tmp_condition_result_82 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_82 != false) {
    goto branch_yes_61;
} else {
    goto branch_no_61;
}
}
branch_yes_61:;
{
PyObject *tmp_assign_source_171;
PyObject *tmp_called_value_42;
PyObject *tmp_expression_value_123;
PyObject *tmp_args_value_41;
PyObject *tmp_tuple_element_81;
PyObject *tmp_kwargs_value_41;
CHECK_OBJECT(tmp_class_container$class_creation_21__metaclass);
tmp_expression_value_123 = tmp_class_container$class_creation_21__metaclass;
tmp_called_value_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_123, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;

    goto try_except_handler_61;
}
tmp_tuple_element_81 = mod_consts.const_str_plain_HTTPStatusError;
tmp_args_value_41 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_41, 0, tmp_tuple_element_81);
CHECK_OBJECT(tmp_class_container$class_creation_21__bases);
tmp_tuple_element_81 = tmp_class_container$class_creation_21__bases;
PyTuple_SET_ITEM0(tmp_args_value_41, 1, tmp_tuple_element_81);
CHECK_OBJECT(tmp_class_container$class_creation_21__class_decl_dict);
tmp_kwargs_value_41 = tmp_class_container$class_creation_21__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 258;
tmp_assign_source_171 = CALL_FUNCTION(tstate, tmp_called_value_42, tmp_args_value_41, tmp_kwargs_value_41);
CHECK_OBJECT(tmp_called_value_42);
Py_DECREF(tmp_called_value_42);
CHECK_OBJECT(tmp_args_value_41);
Py_DECREF(tmp_args_value_41);
if (tmp_assign_source_171 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;

    goto try_except_handler_61;
}
assert(tmp_class_container$class_creation_21__prepared == NULL);
tmp_class_container$class_creation_21__prepared = tmp_assign_source_171;
}
{
bool tmp_condition_result_83;
PyObject *tmp_operand_value_21;
PyObject *tmp_expression_value_124;
CHECK_OBJECT(tmp_class_container$class_creation_21__prepared);
tmp_expression_value_124 = tmp_class_container$class_creation_21__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_124, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;

    goto try_except_handler_61;
}
tmp_operand_value_21 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_21);
assert(!(tmp_res == -1));
tmp_condition_result_83 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_83 != false) {
    goto branch_yes_62;
} else {
    goto branch_no_62;
}
}
branch_yes_62:;
{
PyObject *tmp_raise_type_21;
PyObject *tmp_make_exception_arg_21;
PyObject *tmp_mod_expr_left_21;
PyObject *tmp_mod_expr_right_21;
PyObject *tmp_tuple_element_82;
PyObject *tmp_expression_value_125;
PyObject *tmp_name_value_22;
PyObject *tmp_default_value_21;
tmp_mod_expr_left_21 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_21__metaclass);
tmp_expression_value_125 = tmp_class_container$class_creation_21__metaclass;
tmp_name_value_22 = const_str_plain___name__;
tmp_default_value_21 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_82 = BUILTIN_GETATTR(tstate, tmp_expression_value_125, tmp_name_value_22, tmp_default_value_21);
if (tmp_tuple_element_82 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;

    goto try_except_handler_61;
}
tmp_mod_expr_right_21 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_126;
PyObject *tmp_type_arg_42;
PyTuple_SET_ITEM(tmp_mod_expr_right_21, 0, tmp_tuple_element_82);
CHECK_OBJECT(tmp_class_container$class_creation_21__prepared);
tmp_type_arg_42 = tmp_class_container$class_creation_21__prepared;
tmp_expression_value_126 = BUILTIN_TYPE1(tmp_type_arg_42);
assert(!(tmp_expression_value_126 == NULL));
tmp_tuple_element_82 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_126, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_126);
Py_DECREF(tmp_expression_value_126);
if (tmp_tuple_element_82 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;

    goto tuple_build_exception_21;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_21, 1, tmp_tuple_element_82);
}
goto tuple_build_no_exception_21;
// Exception handling pass through code for tuple_build:
tuple_build_exception_21:;
Py_DECREF(tmp_mod_expr_right_21);
goto try_except_handler_61;
// Finished with no exception for tuple_build:
tuple_build_no_exception_21:;
tmp_make_exception_arg_21 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_21, tmp_mod_expr_right_21);
CHECK_OBJECT(tmp_mod_expr_right_21);
Py_DECREF(tmp_mod_expr_right_21);
if (tmp_make_exception_arg_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;

    goto try_except_handler_61;
}
frame_frame_httpx$_exceptions->m_frame.f_lineno = 258;
tmp_raise_type_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_21);
CHECK_OBJECT(tmp_make_exception_arg_21);
Py_DECREF(tmp_make_exception_arg_21);
assert(!(tmp_raise_type_21 == NULL));
exception_state.exception_value = tmp_raise_type_21;
exception_lineno = 258;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_61;
}
branch_no_62:;
goto branch_end_61;
branch_no_61:;
{
PyObject *tmp_assign_source_172;
tmp_assign_source_172 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_21__prepared == NULL);
tmp_class_container$class_creation_21__prepared = tmp_assign_source_172;
}
branch_end_61:;
{
PyObject *tmp_assign_source_173;
outline_20_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_21;
CHECK_OBJECT(tmp_class_container$class_creation_21__prepared);
tmp_set_locals_21 = tmp_class_container$class_creation_21__prepared;
locals_httpx$_exceptions$$$class__21_HTTPStatusError_258 = tmp_set_locals_21;
Py_INCREF(tmp_set_locals_21);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_f49f37ecb12db2b9a869fd11ee8982d4;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__21_HTTPStatusError_258, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;

    goto try_except_handler_63;
}
tmp_dictset_value = mod_consts.const_str_digest_bc6d545608197f3a1864b22a98b06fb2;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__21_HTTPStatusError_258, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;

    goto try_except_handler_63;
}
tmp_dictset_value = mod_consts.const_str_plain_HTTPStatusError;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__21_HTTPStatusError_258, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;

    goto try_except_handler_63;
}
tmp_dictset_value = mod_consts.const_int_pos_258;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__21_HTTPStatusError_258, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;

    goto try_except_handler_63;
}
frame_frame_httpx$_exceptions$$$class__21_HTTPStatusError_4 = MAKE_CLASS_FRAME(tstate, code_objects_e5dd598901a2ef605b3f4cf7a7140551, module_httpx$_exceptions, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_exceptions$$$class__21_HTTPStatusError_4);
assert(Py_REFCNT(frame_frame_httpx$_exceptions$$$class__21_HTTPStatusError_4) == 2);

// Framed code:
{
PyObject *tmp_annotations_5;
struct Nuitka_CellObject *tmp_closure_3[1];
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_607f416d07ad4640d7268867474e49af);
tmp_closure_3[0] = outline_20_var___class__;
Py_INCREF(tmp_closure_3[0]);
tmp_dictset_value = MAKE_FUNCTION_httpx$_exceptions$$$function__5___init__(tstate, tmp_annotations_5, tmp_closure_3);

tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__21_HTTPStatusError_258, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_2 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_exceptions$$$class__21_HTTPStatusError_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_exceptions$$$class__21_HTTPStatusError_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_exceptions$$$class__21_HTTPStatusError_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_exceptions$$$class__21_HTTPStatusError_4,
    type_description_2,
    outline_20_var___class__
);



assertFrameObject(frame_frame_httpx$_exceptions$$$class__21_HTTPStatusError_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_63;
skip_nested_handling_3:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_request_str_plain_response_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__21_HTTPStatusError_258, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;

    goto try_except_handler_63;
}
{
nuitka_bool tmp_condition_result_84;
PyObject *tmp_cmp_expr_left_21;
PyObject *tmp_cmp_expr_right_21;
CHECK_OBJECT(tmp_class_container$class_creation_21__bases);
tmp_cmp_expr_left_21 = tmp_class_container$class_creation_21__bases;
CHECK_OBJECT(tmp_class_container$class_creation_21__bases_orig);
tmp_cmp_expr_right_21 = tmp_class_container$class_creation_21__bases_orig;
tmp_condition_result_84 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_21, tmp_cmp_expr_right_21);
if (tmp_condition_result_84 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;

    goto try_except_handler_63;
}
if (tmp_condition_result_84 == NUITKA_BOOL_TRUE) {
    goto branch_yes_63;
} else {
    goto branch_no_63;
}
}
branch_yes_63:;
CHECK_OBJECT(tmp_class_container$class_creation_21__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_21__bases_orig;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__21_HTTPStatusError_258, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;

    goto try_except_handler_63;
}
branch_no_63:;
{
PyObject *tmp_assign_source_174;
PyObject *tmp_called_value_43;
PyObject *tmp_args_value_42;
PyObject *tmp_tuple_element_83;
PyObject *tmp_kwargs_value_42;
CHECK_OBJECT(tmp_class_container$class_creation_21__metaclass);
tmp_called_value_43 = tmp_class_container$class_creation_21__metaclass;
tmp_tuple_element_83 = mod_consts.const_str_plain_HTTPStatusError;
tmp_args_value_42 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_42, 0, tmp_tuple_element_83);
CHECK_OBJECT(tmp_class_container$class_creation_21__bases);
tmp_tuple_element_83 = tmp_class_container$class_creation_21__bases;
PyTuple_SET_ITEM0(tmp_args_value_42, 1, tmp_tuple_element_83);
tmp_tuple_element_83 = locals_httpx$_exceptions$$$class__21_HTTPStatusError_258;
PyTuple_SET_ITEM0(tmp_args_value_42, 2, tmp_tuple_element_83);
CHECK_OBJECT(tmp_class_container$class_creation_21__class_decl_dict);
tmp_kwargs_value_42 = tmp_class_container$class_creation_21__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 258;
tmp_assign_source_174 = CALL_FUNCTION(tstate, tmp_called_value_43, tmp_args_value_42, tmp_kwargs_value_42);
CHECK_OBJECT(tmp_args_value_42);
Py_DECREF(tmp_args_value_42);
if (tmp_assign_source_174 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;

    goto try_except_handler_63;
}
assert(Nuitka_Cell_GET(outline_20_var___class__) == NULL);
Nuitka_Cell_SET(outline_20_var___class__, tmp_assign_source_174);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_20_var___class__));
tmp_assign_source_173 = Nuitka_Cell_GET(outline_20_var___class__);
Py_INCREF(tmp_assign_source_173);
goto try_return_handler_63;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_63:;
Py_DECREF(locals_httpx$_exceptions$$$class__21_HTTPStatusError_258);
locals_httpx$_exceptions$$$class__21_HTTPStatusError_258 = NULL;
goto try_return_handler_62;
// Exception handler code:
try_except_handler_63:;
exception_keeper_lineno_61 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_61 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpx$_exceptions$$$class__21_HTTPStatusError_258);
locals_httpx$_exceptions$$$class__21_HTTPStatusError_258 = NULL;
// Re-raise.
exception_state = exception_keeper_name_61;
exception_lineno = exception_keeper_lineno_61;

goto try_except_handler_62;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_62:;
CHECK_OBJECT(outline_20_var___class__);
CHECK_OBJECT(outline_20_var___class__);
Py_DECREF(outline_20_var___class__);
outline_20_var___class__ = NULL;
goto outline_result_42;
// Exception handler code:
try_except_handler_62:;
exception_keeper_lineno_62 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_62 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_62;
exception_lineno = exception_keeper_lineno_62;

goto outline_exception_21;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_21:;
exception_lineno = 258;
goto try_except_handler_61;
outline_result_42:;
UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPStatusError, tmp_assign_source_173);
}
goto try_end_21;
// Exception handler code:
try_except_handler_61:;
exception_keeper_lineno_63 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_63 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_21__bases_orig);
tmp_class_container$class_creation_21__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_21__bases);
tmp_class_container$class_creation_21__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_21__class_decl_dict);
tmp_class_container$class_creation_21__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_21__metaclass);
tmp_class_container$class_creation_21__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_21__prepared);
tmp_class_container$class_creation_21__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_63;
exception_lineno = exception_keeper_lineno_63;

goto frame_exception_exit_1;
// End of try:
try_end_21:;
CHECK_OBJECT(tmp_class_container$class_creation_21__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_21__bases_orig);
Py_DECREF(tmp_class_container$class_creation_21__bases_orig);
tmp_class_container$class_creation_21__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_21__bases);
CHECK_OBJECT(tmp_class_container$class_creation_21__bases);
Py_DECREF(tmp_class_container$class_creation_21__bases);
tmp_class_container$class_creation_21__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_21__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_21__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_21__class_decl_dict);
tmp_class_container$class_creation_21__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_21__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_21__metaclass);
Py_DECREF(tmp_class_container$class_creation_21__metaclass);
tmp_class_container$class_creation_21__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_21__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_21__prepared);
Py_DECREF(tmp_class_container$class_creation_21__prepared);
tmp_class_container$class_creation_21__prepared = NULL;
tmp_outline_return_value_21 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_21);
goto outline_result_41;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_41:;
CHECK_OBJECT(tmp_outline_return_value_21);
Py_DECREF(tmp_outline_return_value_21);
}
{
PyObject *tmp_outline_return_value_22;
// Tried code:
{
PyObject *tmp_assign_source_175;
PyObject *tmp_direct_call_arg1_22;
tmp_direct_call_arg1_22 = mod_consts.const_tuple_type_Exception_tuple;
Py_INCREF(tmp_direct_call_arg1_22);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_22};
    tmp_assign_source_175 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_175 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;

    goto try_except_handler_64;
}
assert(tmp_class_container$class_creation_22__bases == NULL);
tmp_class_container$class_creation_22__bases = tmp_assign_source_175;
}
{
PyObject *tmp_assign_source_176;
tmp_assign_source_176 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_22__class_decl_dict == NULL);
tmp_class_container$class_creation_22__class_decl_dict = tmp_assign_source_176;
}
{
PyObject *tmp_assign_source_177;
PyObject *tmp_metaclass_value_22;
nuitka_bool tmp_condition_result_85;
int tmp_truth_name_22;
PyObject *tmp_type_arg_43;
PyObject *tmp_expression_value_127;
PyObject *tmp_subscript_value_22;
PyObject *tmp_bases_value_22;
CHECK_OBJECT(tmp_class_container$class_creation_22__bases);
tmp_truth_name_22 = CHECK_IF_TRUE(tmp_class_container$class_creation_22__bases);
if (tmp_truth_name_22 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;

    goto try_except_handler_64;
}
tmp_condition_result_85 = tmp_truth_name_22 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_85 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_22;
} else {
    goto condexpr_false_22;
}
condexpr_true_22:;
CHECK_OBJECT(tmp_class_container$class_creation_22__bases);
tmp_expression_value_127 = tmp_class_container$class_creation_22__bases;
tmp_subscript_value_22 = const_int_0;
tmp_type_arg_43 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_127, tmp_subscript_value_22, 0);
if (tmp_type_arg_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;

    goto try_except_handler_64;
}
tmp_metaclass_value_22 = BUILTIN_TYPE1(tmp_type_arg_43);
CHECK_OBJECT(tmp_type_arg_43);
Py_DECREF(tmp_type_arg_43);
if (tmp_metaclass_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;

    goto try_except_handler_64;
}
goto condexpr_end_22;
condexpr_false_22:;
tmp_metaclass_value_22 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_22);
condexpr_end_22:;
CHECK_OBJECT(tmp_class_container$class_creation_22__bases);
tmp_bases_value_22 = tmp_class_container$class_creation_22__bases;
tmp_assign_source_177 = SELECT_METACLASS(tstate, tmp_metaclass_value_22, tmp_bases_value_22);
CHECK_OBJECT(tmp_metaclass_value_22);
Py_DECREF(tmp_metaclass_value_22);
if (tmp_assign_source_177 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;

    goto try_except_handler_64;
}
assert(tmp_class_container$class_creation_22__metaclass == NULL);
tmp_class_container$class_creation_22__metaclass = tmp_assign_source_177;
}
{
bool tmp_condition_result_86;
PyObject *tmp_expression_value_128;
CHECK_OBJECT(tmp_class_container$class_creation_22__metaclass);
tmp_expression_value_128 = tmp_class_container$class_creation_22__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_128, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;

    goto try_except_handler_64;
}
tmp_condition_result_86 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_86 != false) {
    goto branch_yes_64;
} else {
    goto branch_no_64;
}
}
branch_yes_64:;
{
PyObject *tmp_assign_source_178;
PyObject *tmp_called_value_44;
PyObject *tmp_expression_value_129;
PyObject *tmp_args_value_43;
PyObject *tmp_tuple_element_84;
PyObject *tmp_kwargs_value_43;
CHECK_OBJECT(tmp_class_container$class_creation_22__metaclass);
tmp_expression_value_129 = tmp_class_container$class_creation_22__metaclass;
tmp_called_value_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_129, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;

    goto try_except_handler_64;
}
tmp_tuple_element_84 = mod_consts.const_str_plain_InvalidURL;
tmp_args_value_43 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_43, 0, tmp_tuple_element_84);
CHECK_OBJECT(tmp_class_container$class_creation_22__bases);
tmp_tuple_element_84 = tmp_class_container$class_creation_22__bases;
PyTuple_SET_ITEM0(tmp_args_value_43, 1, tmp_tuple_element_84);
CHECK_OBJECT(tmp_class_container$class_creation_22__class_decl_dict);
tmp_kwargs_value_43 = tmp_class_container$class_creation_22__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 271;
tmp_assign_source_178 = CALL_FUNCTION(tstate, tmp_called_value_44, tmp_args_value_43, tmp_kwargs_value_43);
CHECK_OBJECT(tmp_called_value_44);
Py_DECREF(tmp_called_value_44);
CHECK_OBJECT(tmp_args_value_43);
Py_DECREF(tmp_args_value_43);
if (tmp_assign_source_178 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;

    goto try_except_handler_64;
}
assert(tmp_class_container$class_creation_22__prepared == NULL);
tmp_class_container$class_creation_22__prepared = tmp_assign_source_178;
}
{
bool tmp_condition_result_87;
PyObject *tmp_operand_value_22;
PyObject *tmp_expression_value_130;
CHECK_OBJECT(tmp_class_container$class_creation_22__prepared);
tmp_expression_value_130 = tmp_class_container$class_creation_22__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_130, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;

    goto try_except_handler_64;
}
tmp_operand_value_22 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_22);
assert(!(tmp_res == -1));
tmp_condition_result_87 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_87 != false) {
    goto branch_yes_65;
} else {
    goto branch_no_65;
}
}
branch_yes_65:;
{
PyObject *tmp_raise_type_22;
PyObject *tmp_make_exception_arg_22;
PyObject *tmp_mod_expr_left_22;
PyObject *tmp_mod_expr_right_22;
PyObject *tmp_tuple_element_85;
PyObject *tmp_expression_value_131;
PyObject *tmp_name_value_23;
PyObject *tmp_default_value_22;
tmp_mod_expr_left_22 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_22__metaclass);
tmp_expression_value_131 = tmp_class_container$class_creation_22__metaclass;
tmp_name_value_23 = const_str_plain___name__;
tmp_default_value_22 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_85 = BUILTIN_GETATTR(tstate, tmp_expression_value_131, tmp_name_value_23, tmp_default_value_22);
if (tmp_tuple_element_85 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;

    goto try_except_handler_64;
}
tmp_mod_expr_right_22 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_132;
PyObject *tmp_type_arg_44;
PyTuple_SET_ITEM(tmp_mod_expr_right_22, 0, tmp_tuple_element_85);
CHECK_OBJECT(tmp_class_container$class_creation_22__prepared);
tmp_type_arg_44 = tmp_class_container$class_creation_22__prepared;
tmp_expression_value_132 = BUILTIN_TYPE1(tmp_type_arg_44);
assert(!(tmp_expression_value_132 == NULL));
tmp_tuple_element_85 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_132, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_132);
Py_DECREF(tmp_expression_value_132);
if (tmp_tuple_element_85 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;

    goto tuple_build_exception_22;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_22, 1, tmp_tuple_element_85);
}
goto tuple_build_no_exception_22;
// Exception handling pass through code for tuple_build:
tuple_build_exception_22:;
Py_DECREF(tmp_mod_expr_right_22);
goto try_except_handler_64;
// Finished with no exception for tuple_build:
tuple_build_no_exception_22:;
tmp_make_exception_arg_22 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_22, tmp_mod_expr_right_22);
CHECK_OBJECT(tmp_mod_expr_right_22);
Py_DECREF(tmp_mod_expr_right_22);
if (tmp_make_exception_arg_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;

    goto try_except_handler_64;
}
frame_frame_httpx$_exceptions->m_frame.f_lineno = 271;
tmp_raise_type_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_22);
CHECK_OBJECT(tmp_make_exception_arg_22);
Py_DECREF(tmp_make_exception_arg_22);
assert(!(tmp_raise_type_22 == NULL));
exception_state.exception_value = tmp_raise_type_22;
exception_lineno = 271;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_64;
}
branch_no_65:;
goto branch_end_64;
branch_no_64:;
{
PyObject *tmp_assign_source_179;
tmp_assign_source_179 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_22__prepared == NULL);
tmp_class_container$class_creation_22__prepared = tmp_assign_source_179;
}
branch_end_64:;
{
PyObject *tmp_assign_source_180;
outline_21_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_22;
CHECK_OBJECT(tmp_class_container$class_creation_22__prepared);
tmp_set_locals_22 = tmp_class_container$class_creation_22__prepared;
locals_httpx$_exceptions$$$class__22_InvalidURL_271 = tmp_set_locals_22;
Py_INCREF(tmp_set_locals_22);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_f49f37ecb12db2b9a869fd11ee8982d4;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__22_InvalidURL_271, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;

    goto try_except_handler_66;
}
tmp_dictset_value = mod_consts.const_str_digest_bc69b941a9a3dc4e3df8d10948b02a1f;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__22_InvalidURL_271, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;

    goto try_except_handler_66;
}
tmp_dictset_value = mod_consts.const_str_plain_InvalidURL;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__22_InvalidURL_271, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;

    goto try_except_handler_66;
}
tmp_dictset_value = mod_consts.const_int_pos_271;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__22_InvalidURL_271, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;

    goto try_except_handler_66;
}
frame_frame_httpx$_exceptions$$$class__22_InvalidURL_5 = MAKE_CLASS_FRAME(tstate, code_objects_0a40fcb171d7ef5d989b4130a0d4102e, module_httpx$_exceptions, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_exceptions$$$class__22_InvalidURL_5);
assert(Py_REFCNT(frame_frame_httpx$_exceptions$$$class__22_InvalidURL_5) == 2);

// Framed code:
{
PyObject *tmp_annotations_6;
struct Nuitka_CellObject *tmp_closure_4[1];
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_f5ccb293b0370d17e642a35e4d2af9f5);
tmp_closure_4[0] = outline_21_var___class__;
Py_INCREF(tmp_closure_4[0]);
tmp_dictset_value = MAKE_FUNCTION_httpx$_exceptions$$$function__6___init__(tstate, tmp_annotations_6, tmp_closure_4);

tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__22_InvalidURL_271, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_2 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_exceptions$$$class__22_InvalidURL_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_exceptions$$$class__22_InvalidURL_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_exceptions$$$class__22_InvalidURL_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_exceptions$$$class__22_InvalidURL_5,
    type_description_2,
    outline_21_var___class__
);



assertFrameObject(frame_frame_httpx$_exceptions$$$class__22_InvalidURL_5);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_66;
skip_nested_handling_4:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__22_InvalidURL_271, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;

    goto try_except_handler_66;
}
{
nuitka_bool tmp_condition_result_88;
PyObject *tmp_cmp_expr_left_22;
PyObject *tmp_cmp_expr_right_22;
CHECK_OBJECT(tmp_class_container$class_creation_22__bases);
tmp_cmp_expr_left_22 = tmp_class_container$class_creation_22__bases;
tmp_cmp_expr_right_22 = mod_consts.const_tuple_type_Exception_tuple;
tmp_condition_result_88 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_22, tmp_cmp_expr_right_22);
if (tmp_condition_result_88 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;

    goto try_except_handler_66;
}
if (tmp_condition_result_88 == NUITKA_BOOL_TRUE) {
    goto branch_yes_66;
} else {
    goto branch_no_66;
}
}
branch_yes_66:;
tmp_dictset_value = mod_consts.const_tuple_type_Exception_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__22_InvalidURL_271, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;

    goto try_except_handler_66;
}
branch_no_66:;
{
PyObject *tmp_assign_source_181;
PyObject *tmp_called_value_45;
PyObject *tmp_args_value_44;
PyObject *tmp_tuple_element_86;
PyObject *tmp_kwargs_value_44;
CHECK_OBJECT(tmp_class_container$class_creation_22__metaclass);
tmp_called_value_45 = tmp_class_container$class_creation_22__metaclass;
tmp_tuple_element_86 = mod_consts.const_str_plain_InvalidURL;
tmp_args_value_44 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_44, 0, tmp_tuple_element_86);
CHECK_OBJECT(tmp_class_container$class_creation_22__bases);
tmp_tuple_element_86 = tmp_class_container$class_creation_22__bases;
PyTuple_SET_ITEM0(tmp_args_value_44, 1, tmp_tuple_element_86);
tmp_tuple_element_86 = locals_httpx$_exceptions$$$class__22_InvalidURL_271;
PyTuple_SET_ITEM0(tmp_args_value_44, 2, tmp_tuple_element_86);
CHECK_OBJECT(tmp_class_container$class_creation_22__class_decl_dict);
tmp_kwargs_value_44 = tmp_class_container$class_creation_22__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 271;
tmp_assign_source_181 = CALL_FUNCTION(tstate, tmp_called_value_45, tmp_args_value_44, tmp_kwargs_value_44);
CHECK_OBJECT(tmp_args_value_44);
Py_DECREF(tmp_args_value_44);
if (tmp_assign_source_181 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;

    goto try_except_handler_66;
}
assert(Nuitka_Cell_GET(outline_21_var___class__) == NULL);
Nuitka_Cell_SET(outline_21_var___class__, tmp_assign_source_181);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_21_var___class__));
tmp_assign_source_180 = Nuitka_Cell_GET(outline_21_var___class__);
Py_INCREF(tmp_assign_source_180);
goto try_return_handler_66;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_66:;
Py_DECREF(locals_httpx$_exceptions$$$class__22_InvalidURL_271);
locals_httpx$_exceptions$$$class__22_InvalidURL_271 = NULL;
goto try_return_handler_65;
// Exception handler code:
try_except_handler_66:;
exception_keeper_lineno_64 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_64 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpx$_exceptions$$$class__22_InvalidURL_271);
locals_httpx$_exceptions$$$class__22_InvalidURL_271 = NULL;
// Re-raise.
exception_state = exception_keeper_name_64;
exception_lineno = exception_keeper_lineno_64;

goto try_except_handler_65;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_65:;
CHECK_OBJECT(outline_21_var___class__);
CHECK_OBJECT(outline_21_var___class__);
Py_DECREF(outline_21_var___class__);
outline_21_var___class__ = NULL;
goto outline_result_44;
// Exception handler code:
try_except_handler_65:;
exception_keeper_lineno_65 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_65 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_65;
exception_lineno = exception_keeper_lineno_65;

goto outline_exception_22;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_22:;
exception_lineno = 271;
goto try_except_handler_64;
outline_result_44:;
UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidURL, tmp_assign_source_180);
}
goto try_end_22;
// Exception handler code:
try_except_handler_64:;
exception_keeper_lineno_66 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_66 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_22__bases);
tmp_class_container$class_creation_22__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_22__class_decl_dict);
tmp_class_container$class_creation_22__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_22__metaclass);
tmp_class_container$class_creation_22__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_22__prepared);
tmp_class_container$class_creation_22__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_66;
exception_lineno = exception_keeper_lineno_66;

goto frame_exception_exit_1;
// End of try:
try_end_22:;
CHECK_OBJECT(tmp_class_container$class_creation_22__bases);
CHECK_OBJECT(tmp_class_container$class_creation_22__bases);
Py_DECREF(tmp_class_container$class_creation_22__bases);
tmp_class_container$class_creation_22__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_22__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_22__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_22__class_decl_dict);
tmp_class_container$class_creation_22__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_22__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_22__metaclass);
Py_DECREF(tmp_class_container$class_creation_22__metaclass);
tmp_class_container$class_creation_22__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_22__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_22__prepared);
Py_DECREF(tmp_class_container$class_creation_22__prepared);
tmp_class_container$class_creation_22__prepared = NULL;
tmp_outline_return_value_22 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_22);
goto outline_result_43;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_43:;
CHECK_OBJECT(tmp_outline_return_value_22);
Py_DECREF(tmp_outline_return_value_22);
}
{
PyObject *tmp_outline_return_value_23;
// Tried code:
{
PyObject *tmp_assign_source_182;
PyObject *tmp_direct_call_arg1_23;
tmp_direct_call_arg1_23 = mod_consts.const_tuple_type_Exception_tuple;
Py_INCREF(tmp_direct_call_arg1_23);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_23};
    tmp_assign_source_182 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_182 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;

    goto try_except_handler_67;
}
assert(tmp_class_container$class_creation_23__bases == NULL);
tmp_class_container$class_creation_23__bases = tmp_assign_source_182;
}
{
PyObject *tmp_assign_source_183;
tmp_assign_source_183 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_23__class_decl_dict == NULL);
tmp_class_container$class_creation_23__class_decl_dict = tmp_assign_source_183;
}
{
PyObject *tmp_assign_source_184;
PyObject *tmp_metaclass_value_23;
nuitka_bool tmp_condition_result_89;
int tmp_truth_name_23;
PyObject *tmp_type_arg_45;
PyObject *tmp_expression_value_133;
PyObject *tmp_subscript_value_23;
PyObject *tmp_bases_value_23;
CHECK_OBJECT(tmp_class_container$class_creation_23__bases);
tmp_truth_name_23 = CHECK_IF_TRUE(tmp_class_container$class_creation_23__bases);
if (tmp_truth_name_23 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;

    goto try_except_handler_67;
}
tmp_condition_result_89 = tmp_truth_name_23 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_89 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_23;
} else {
    goto condexpr_false_23;
}
condexpr_true_23:;
CHECK_OBJECT(tmp_class_container$class_creation_23__bases);
tmp_expression_value_133 = tmp_class_container$class_creation_23__bases;
tmp_subscript_value_23 = const_int_0;
tmp_type_arg_45 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_133, tmp_subscript_value_23, 0);
if (tmp_type_arg_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;

    goto try_except_handler_67;
}
tmp_metaclass_value_23 = BUILTIN_TYPE1(tmp_type_arg_45);
CHECK_OBJECT(tmp_type_arg_45);
Py_DECREF(tmp_type_arg_45);
if (tmp_metaclass_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;

    goto try_except_handler_67;
}
goto condexpr_end_23;
condexpr_false_23:;
tmp_metaclass_value_23 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_23);
condexpr_end_23:;
CHECK_OBJECT(tmp_class_container$class_creation_23__bases);
tmp_bases_value_23 = tmp_class_container$class_creation_23__bases;
tmp_assign_source_184 = SELECT_METACLASS(tstate, tmp_metaclass_value_23, tmp_bases_value_23);
CHECK_OBJECT(tmp_metaclass_value_23);
Py_DECREF(tmp_metaclass_value_23);
if (tmp_assign_source_184 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;

    goto try_except_handler_67;
}
assert(tmp_class_container$class_creation_23__metaclass == NULL);
tmp_class_container$class_creation_23__metaclass = tmp_assign_source_184;
}
{
bool tmp_condition_result_90;
PyObject *tmp_expression_value_134;
CHECK_OBJECT(tmp_class_container$class_creation_23__metaclass);
tmp_expression_value_134 = tmp_class_container$class_creation_23__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_134, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;

    goto try_except_handler_67;
}
tmp_condition_result_90 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_90 != false) {
    goto branch_yes_67;
} else {
    goto branch_no_67;
}
}
branch_yes_67:;
{
PyObject *tmp_assign_source_185;
PyObject *tmp_called_value_46;
PyObject *tmp_expression_value_135;
PyObject *tmp_args_value_45;
PyObject *tmp_tuple_element_87;
PyObject *tmp_kwargs_value_45;
CHECK_OBJECT(tmp_class_container$class_creation_23__metaclass);
tmp_expression_value_135 = tmp_class_container$class_creation_23__metaclass;
tmp_called_value_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_135, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;

    goto try_except_handler_67;
}
tmp_tuple_element_87 = mod_consts.const_str_plain_CookieConflict;
tmp_args_value_45 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_45, 0, tmp_tuple_element_87);
CHECK_OBJECT(tmp_class_container$class_creation_23__bases);
tmp_tuple_element_87 = tmp_class_container$class_creation_23__bases;
PyTuple_SET_ITEM0(tmp_args_value_45, 1, tmp_tuple_element_87);
CHECK_OBJECT(tmp_class_container$class_creation_23__class_decl_dict);
tmp_kwargs_value_45 = tmp_class_container$class_creation_23__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 280;
tmp_assign_source_185 = CALL_FUNCTION(tstate, tmp_called_value_46, tmp_args_value_45, tmp_kwargs_value_45);
CHECK_OBJECT(tmp_called_value_46);
Py_DECREF(tmp_called_value_46);
CHECK_OBJECT(tmp_args_value_45);
Py_DECREF(tmp_args_value_45);
if (tmp_assign_source_185 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;

    goto try_except_handler_67;
}
assert(tmp_class_container$class_creation_23__prepared == NULL);
tmp_class_container$class_creation_23__prepared = tmp_assign_source_185;
}
{
bool tmp_condition_result_91;
PyObject *tmp_operand_value_23;
PyObject *tmp_expression_value_136;
CHECK_OBJECT(tmp_class_container$class_creation_23__prepared);
tmp_expression_value_136 = tmp_class_container$class_creation_23__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_136, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;

    goto try_except_handler_67;
}
tmp_operand_value_23 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_23);
assert(!(tmp_res == -1));
tmp_condition_result_91 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_91 != false) {
    goto branch_yes_68;
} else {
    goto branch_no_68;
}
}
branch_yes_68:;
{
PyObject *tmp_raise_type_23;
PyObject *tmp_make_exception_arg_23;
PyObject *tmp_mod_expr_left_23;
PyObject *tmp_mod_expr_right_23;
PyObject *tmp_tuple_element_88;
PyObject *tmp_expression_value_137;
PyObject *tmp_name_value_24;
PyObject *tmp_default_value_23;
tmp_mod_expr_left_23 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_23__metaclass);
tmp_expression_value_137 = tmp_class_container$class_creation_23__metaclass;
tmp_name_value_24 = const_str_plain___name__;
tmp_default_value_23 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_88 = BUILTIN_GETATTR(tstate, tmp_expression_value_137, tmp_name_value_24, tmp_default_value_23);
if (tmp_tuple_element_88 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;

    goto try_except_handler_67;
}
tmp_mod_expr_right_23 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_138;
PyObject *tmp_type_arg_46;
PyTuple_SET_ITEM(tmp_mod_expr_right_23, 0, tmp_tuple_element_88);
CHECK_OBJECT(tmp_class_container$class_creation_23__prepared);
tmp_type_arg_46 = tmp_class_container$class_creation_23__prepared;
tmp_expression_value_138 = BUILTIN_TYPE1(tmp_type_arg_46);
assert(!(tmp_expression_value_138 == NULL));
tmp_tuple_element_88 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_138, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_138);
Py_DECREF(tmp_expression_value_138);
if (tmp_tuple_element_88 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;

    goto tuple_build_exception_23;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_23, 1, tmp_tuple_element_88);
}
goto tuple_build_no_exception_23;
// Exception handling pass through code for tuple_build:
tuple_build_exception_23:;
Py_DECREF(tmp_mod_expr_right_23);
goto try_except_handler_67;
// Finished with no exception for tuple_build:
tuple_build_no_exception_23:;
tmp_make_exception_arg_23 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_23, tmp_mod_expr_right_23);
CHECK_OBJECT(tmp_mod_expr_right_23);
Py_DECREF(tmp_mod_expr_right_23);
if (tmp_make_exception_arg_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;

    goto try_except_handler_67;
}
frame_frame_httpx$_exceptions->m_frame.f_lineno = 280;
tmp_raise_type_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_23);
CHECK_OBJECT(tmp_make_exception_arg_23);
Py_DECREF(tmp_make_exception_arg_23);
assert(!(tmp_raise_type_23 == NULL));
exception_state.exception_value = tmp_raise_type_23;
exception_lineno = 280;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_67;
}
branch_no_68:;
goto branch_end_67;
branch_no_67:;
{
PyObject *tmp_assign_source_186;
tmp_assign_source_186 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_23__prepared == NULL);
tmp_class_container$class_creation_23__prepared = tmp_assign_source_186;
}
branch_end_67:;
{
PyObject *tmp_assign_source_187;
outline_22_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_23;
CHECK_OBJECT(tmp_class_container$class_creation_23__prepared);
tmp_set_locals_23 = tmp_class_container$class_creation_23__prepared;
locals_httpx$_exceptions$$$class__23_CookieConflict_280 = tmp_set_locals_23;
Py_INCREF(tmp_set_locals_23);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_f49f37ecb12db2b9a869fd11ee8982d4;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__23_CookieConflict_280, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;

    goto try_except_handler_69;
}
tmp_dictset_value = mod_consts.const_str_digest_797162745aa73bf4e1daff89b3355384;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__23_CookieConflict_280, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;

    goto try_except_handler_69;
}
tmp_dictset_value = mod_consts.const_str_plain_CookieConflict;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__23_CookieConflict_280, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;

    goto try_except_handler_69;
}
tmp_dictset_value = mod_consts.const_int_pos_280;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__23_CookieConflict_280, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;

    goto try_except_handler_69;
}
frame_frame_httpx$_exceptions$$$class__23_CookieConflict_6 = MAKE_CLASS_FRAME(tstate, code_objects_984b67f5110439dff40d3943970951f6, module_httpx$_exceptions, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_exceptions$$$class__23_CookieConflict_6);
assert(Py_REFCNT(frame_frame_httpx$_exceptions$$$class__23_CookieConflict_6) == 2);

// Framed code:
{
PyObject *tmp_annotations_7;
struct Nuitka_CellObject *tmp_closure_5[1];
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_f5ccb293b0370d17e642a35e4d2af9f5);
tmp_closure_5[0] = outline_22_var___class__;
Py_INCREF(tmp_closure_5[0]);
tmp_dictset_value = MAKE_FUNCTION_httpx$_exceptions$$$function__7___init__(tstate, tmp_annotations_7, tmp_closure_5);

tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__23_CookieConflict_280, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_2 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_exceptions$$$class__23_CookieConflict_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_exceptions$$$class__23_CookieConflict_6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_exceptions$$$class__23_CookieConflict_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_exceptions$$$class__23_CookieConflict_6,
    type_description_2,
    outline_22_var___class__
);



assertFrameObject(frame_frame_httpx$_exceptions$$$class__23_CookieConflict_6);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_5;
frame_no_exception_5:;
goto skip_nested_handling_5;
nested_frame_exit_5:;

goto try_except_handler_69;
skip_nested_handling_5:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__23_CookieConflict_280, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;

    goto try_except_handler_69;
}
{
nuitka_bool tmp_condition_result_92;
PyObject *tmp_cmp_expr_left_23;
PyObject *tmp_cmp_expr_right_23;
CHECK_OBJECT(tmp_class_container$class_creation_23__bases);
tmp_cmp_expr_left_23 = tmp_class_container$class_creation_23__bases;
tmp_cmp_expr_right_23 = mod_consts.const_tuple_type_Exception_tuple;
tmp_condition_result_92 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_23, tmp_cmp_expr_right_23);
if (tmp_condition_result_92 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;

    goto try_except_handler_69;
}
if (tmp_condition_result_92 == NUITKA_BOOL_TRUE) {
    goto branch_yes_69;
} else {
    goto branch_no_69;
}
}
branch_yes_69:;
tmp_dictset_value = mod_consts.const_tuple_type_Exception_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__23_CookieConflict_280, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;

    goto try_except_handler_69;
}
branch_no_69:;
{
PyObject *tmp_assign_source_188;
PyObject *tmp_called_value_47;
PyObject *tmp_args_value_46;
PyObject *tmp_tuple_element_89;
PyObject *tmp_kwargs_value_46;
CHECK_OBJECT(tmp_class_container$class_creation_23__metaclass);
tmp_called_value_47 = tmp_class_container$class_creation_23__metaclass;
tmp_tuple_element_89 = mod_consts.const_str_plain_CookieConflict;
tmp_args_value_46 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_46, 0, tmp_tuple_element_89);
CHECK_OBJECT(tmp_class_container$class_creation_23__bases);
tmp_tuple_element_89 = tmp_class_container$class_creation_23__bases;
PyTuple_SET_ITEM0(tmp_args_value_46, 1, tmp_tuple_element_89);
tmp_tuple_element_89 = locals_httpx$_exceptions$$$class__23_CookieConflict_280;
PyTuple_SET_ITEM0(tmp_args_value_46, 2, tmp_tuple_element_89);
CHECK_OBJECT(tmp_class_container$class_creation_23__class_decl_dict);
tmp_kwargs_value_46 = tmp_class_container$class_creation_23__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 280;
tmp_assign_source_188 = CALL_FUNCTION(tstate, tmp_called_value_47, tmp_args_value_46, tmp_kwargs_value_46);
CHECK_OBJECT(tmp_args_value_46);
Py_DECREF(tmp_args_value_46);
if (tmp_assign_source_188 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;

    goto try_except_handler_69;
}
assert(Nuitka_Cell_GET(outline_22_var___class__) == NULL);
Nuitka_Cell_SET(outline_22_var___class__, tmp_assign_source_188);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_22_var___class__));
tmp_assign_source_187 = Nuitka_Cell_GET(outline_22_var___class__);
Py_INCREF(tmp_assign_source_187);
goto try_return_handler_69;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_69:;
Py_DECREF(locals_httpx$_exceptions$$$class__23_CookieConflict_280);
locals_httpx$_exceptions$$$class__23_CookieConflict_280 = NULL;
goto try_return_handler_68;
// Exception handler code:
try_except_handler_69:;
exception_keeper_lineno_67 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_67 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpx$_exceptions$$$class__23_CookieConflict_280);
locals_httpx$_exceptions$$$class__23_CookieConflict_280 = NULL;
// Re-raise.
exception_state = exception_keeper_name_67;
exception_lineno = exception_keeper_lineno_67;

goto try_except_handler_68;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_68:;
CHECK_OBJECT(outline_22_var___class__);
CHECK_OBJECT(outline_22_var___class__);
Py_DECREF(outline_22_var___class__);
outline_22_var___class__ = NULL;
goto outline_result_46;
// Exception handler code:
try_except_handler_68:;
exception_keeper_lineno_68 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_68 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_68;
exception_lineno = exception_keeper_lineno_68;

goto outline_exception_23;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_23:;
exception_lineno = 280;
goto try_except_handler_67;
outline_result_46:;
UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_CookieConflict, tmp_assign_source_187);
}
goto try_end_23;
// Exception handler code:
try_except_handler_67:;
exception_keeper_lineno_69 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_69 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_23__bases);
tmp_class_container$class_creation_23__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_23__class_decl_dict);
tmp_class_container$class_creation_23__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_23__metaclass);
tmp_class_container$class_creation_23__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_23__prepared);
tmp_class_container$class_creation_23__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_69;
exception_lineno = exception_keeper_lineno_69;

goto frame_exception_exit_1;
// End of try:
try_end_23:;
CHECK_OBJECT(tmp_class_container$class_creation_23__bases);
CHECK_OBJECT(tmp_class_container$class_creation_23__bases);
Py_DECREF(tmp_class_container$class_creation_23__bases);
tmp_class_container$class_creation_23__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_23__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_23__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_23__class_decl_dict);
tmp_class_container$class_creation_23__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_23__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_23__metaclass);
Py_DECREF(tmp_class_container$class_creation_23__metaclass);
tmp_class_container$class_creation_23__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_23__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_23__prepared);
Py_DECREF(tmp_class_container$class_creation_23__prepared);
tmp_class_container$class_creation_23__prepared = NULL;
tmp_outline_return_value_23 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_23);
goto outline_result_45;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_45:;
CHECK_OBJECT(tmp_outline_return_value_23);
Py_DECREF(tmp_outline_return_value_23);
}
{
PyObject *tmp_outline_return_value_24;
// Tried code:
{
PyObject *tmp_assign_source_189;
PyObject *tmp_direct_call_arg1_24;
tmp_direct_call_arg1_24 = mod_consts.const_tuple_type_RuntimeError_tuple;
Py_INCREF(tmp_direct_call_arg1_24);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_24};
    tmp_assign_source_189 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_189 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;

    goto try_except_handler_70;
}
assert(tmp_class_container$class_creation_24__bases == NULL);
tmp_class_container$class_creation_24__bases = tmp_assign_source_189;
}
{
PyObject *tmp_assign_source_190;
tmp_assign_source_190 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_24__class_decl_dict == NULL);
tmp_class_container$class_creation_24__class_decl_dict = tmp_assign_source_190;
}
{
PyObject *tmp_assign_source_191;
PyObject *tmp_metaclass_value_24;
nuitka_bool tmp_condition_result_93;
int tmp_truth_name_24;
PyObject *tmp_type_arg_47;
PyObject *tmp_expression_value_139;
PyObject *tmp_subscript_value_24;
PyObject *tmp_bases_value_24;
CHECK_OBJECT(tmp_class_container$class_creation_24__bases);
tmp_truth_name_24 = CHECK_IF_TRUE(tmp_class_container$class_creation_24__bases);
if (tmp_truth_name_24 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;

    goto try_except_handler_70;
}
tmp_condition_result_93 = tmp_truth_name_24 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_93 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_24;
} else {
    goto condexpr_false_24;
}
condexpr_true_24:;
CHECK_OBJECT(tmp_class_container$class_creation_24__bases);
tmp_expression_value_139 = tmp_class_container$class_creation_24__bases;
tmp_subscript_value_24 = const_int_0;
tmp_type_arg_47 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_139, tmp_subscript_value_24, 0);
if (tmp_type_arg_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;

    goto try_except_handler_70;
}
tmp_metaclass_value_24 = BUILTIN_TYPE1(tmp_type_arg_47);
CHECK_OBJECT(tmp_type_arg_47);
Py_DECREF(tmp_type_arg_47);
if (tmp_metaclass_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;

    goto try_except_handler_70;
}
goto condexpr_end_24;
condexpr_false_24:;
tmp_metaclass_value_24 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_24);
condexpr_end_24:;
CHECK_OBJECT(tmp_class_container$class_creation_24__bases);
tmp_bases_value_24 = tmp_class_container$class_creation_24__bases;
tmp_assign_source_191 = SELECT_METACLASS(tstate, tmp_metaclass_value_24, tmp_bases_value_24);
CHECK_OBJECT(tmp_metaclass_value_24);
Py_DECREF(tmp_metaclass_value_24);
if (tmp_assign_source_191 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;

    goto try_except_handler_70;
}
assert(tmp_class_container$class_creation_24__metaclass == NULL);
tmp_class_container$class_creation_24__metaclass = tmp_assign_source_191;
}
{
bool tmp_condition_result_94;
PyObject *tmp_expression_value_140;
CHECK_OBJECT(tmp_class_container$class_creation_24__metaclass);
tmp_expression_value_140 = tmp_class_container$class_creation_24__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_140, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;

    goto try_except_handler_70;
}
tmp_condition_result_94 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_94 != false) {
    goto branch_yes_70;
} else {
    goto branch_no_70;
}
}
branch_yes_70:;
{
PyObject *tmp_assign_source_192;
PyObject *tmp_called_value_48;
PyObject *tmp_expression_value_141;
PyObject *tmp_args_value_47;
PyObject *tmp_tuple_element_90;
PyObject *tmp_kwargs_value_47;
CHECK_OBJECT(tmp_class_container$class_creation_24__metaclass);
tmp_expression_value_141 = tmp_class_container$class_creation_24__metaclass;
tmp_called_value_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_141, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;

    goto try_except_handler_70;
}
tmp_tuple_element_90 = mod_consts.const_str_plain_StreamError;
tmp_args_value_47 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_47, 0, tmp_tuple_element_90);
CHECK_OBJECT(tmp_class_container$class_creation_24__bases);
tmp_tuple_element_90 = tmp_class_container$class_creation_24__bases;
PyTuple_SET_ITEM0(tmp_args_value_47, 1, tmp_tuple_element_90);
CHECK_OBJECT(tmp_class_container$class_creation_24__class_decl_dict);
tmp_kwargs_value_47 = tmp_class_container$class_creation_24__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 297;
tmp_assign_source_192 = CALL_FUNCTION(tstate, tmp_called_value_48, tmp_args_value_47, tmp_kwargs_value_47);
CHECK_OBJECT(tmp_called_value_48);
Py_DECREF(tmp_called_value_48);
CHECK_OBJECT(tmp_args_value_47);
Py_DECREF(tmp_args_value_47);
if (tmp_assign_source_192 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;

    goto try_except_handler_70;
}
assert(tmp_class_container$class_creation_24__prepared == NULL);
tmp_class_container$class_creation_24__prepared = tmp_assign_source_192;
}
{
bool tmp_condition_result_95;
PyObject *tmp_operand_value_24;
PyObject *tmp_expression_value_142;
CHECK_OBJECT(tmp_class_container$class_creation_24__prepared);
tmp_expression_value_142 = tmp_class_container$class_creation_24__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_142, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;

    goto try_except_handler_70;
}
tmp_operand_value_24 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_24);
assert(!(tmp_res == -1));
tmp_condition_result_95 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_95 != false) {
    goto branch_yes_71;
} else {
    goto branch_no_71;
}
}
branch_yes_71:;
{
PyObject *tmp_raise_type_24;
PyObject *tmp_make_exception_arg_24;
PyObject *tmp_mod_expr_left_24;
PyObject *tmp_mod_expr_right_24;
PyObject *tmp_tuple_element_91;
PyObject *tmp_expression_value_143;
PyObject *tmp_name_value_25;
PyObject *tmp_default_value_24;
tmp_mod_expr_left_24 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_24__metaclass);
tmp_expression_value_143 = tmp_class_container$class_creation_24__metaclass;
tmp_name_value_25 = const_str_plain___name__;
tmp_default_value_24 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_91 = BUILTIN_GETATTR(tstate, tmp_expression_value_143, tmp_name_value_25, tmp_default_value_24);
if (tmp_tuple_element_91 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;

    goto try_except_handler_70;
}
tmp_mod_expr_right_24 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_144;
PyObject *tmp_type_arg_48;
PyTuple_SET_ITEM(tmp_mod_expr_right_24, 0, tmp_tuple_element_91);
CHECK_OBJECT(tmp_class_container$class_creation_24__prepared);
tmp_type_arg_48 = tmp_class_container$class_creation_24__prepared;
tmp_expression_value_144 = BUILTIN_TYPE1(tmp_type_arg_48);
assert(!(tmp_expression_value_144 == NULL));
tmp_tuple_element_91 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_144, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_144);
Py_DECREF(tmp_expression_value_144);
if (tmp_tuple_element_91 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;

    goto tuple_build_exception_24;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_24, 1, tmp_tuple_element_91);
}
goto tuple_build_no_exception_24;
// Exception handling pass through code for tuple_build:
tuple_build_exception_24:;
Py_DECREF(tmp_mod_expr_right_24);
goto try_except_handler_70;
// Finished with no exception for tuple_build:
tuple_build_no_exception_24:;
tmp_make_exception_arg_24 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_24, tmp_mod_expr_right_24);
CHECK_OBJECT(tmp_mod_expr_right_24);
Py_DECREF(tmp_mod_expr_right_24);
if (tmp_make_exception_arg_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;

    goto try_except_handler_70;
}
frame_frame_httpx$_exceptions->m_frame.f_lineno = 297;
tmp_raise_type_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_24);
CHECK_OBJECT(tmp_make_exception_arg_24);
Py_DECREF(tmp_make_exception_arg_24);
assert(!(tmp_raise_type_24 == NULL));
exception_state.exception_value = tmp_raise_type_24;
exception_lineno = 297;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_70;
}
branch_no_71:;
goto branch_end_70;
branch_no_70:;
{
PyObject *tmp_assign_source_193;
tmp_assign_source_193 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_24__prepared == NULL);
tmp_class_container$class_creation_24__prepared = tmp_assign_source_193;
}
branch_end_70:;
{
PyObject *tmp_assign_source_194;
outline_23_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_24;
CHECK_OBJECT(tmp_class_container$class_creation_24__prepared);
tmp_set_locals_24 = tmp_class_container$class_creation_24__prepared;
locals_httpx$_exceptions$$$class__24_StreamError_297 = tmp_set_locals_24;
Py_INCREF(tmp_set_locals_24);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_f49f37ecb12db2b9a869fd11ee8982d4;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__24_StreamError_297, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;

    goto try_except_handler_72;
}
tmp_dictset_value = mod_consts.const_str_digest_d6812a09f1d20c9e113031fb8df8483c;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__24_StreamError_297, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;

    goto try_except_handler_72;
}
tmp_dictset_value = mod_consts.const_str_plain_StreamError;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__24_StreamError_297, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;

    goto try_except_handler_72;
}
tmp_dictset_value = mod_consts.const_int_pos_297;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__24_StreamError_297, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;

    goto try_except_handler_72;
}
frame_frame_httpx$_exceptions$$$class__24_StreamError_7 = MAKE_CLASS_FRAME(tstate, code_objects_474ad1947c0e9c0f97c283b814b5934d, module_httpx$_exceptions, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_exceptions$$$class__24_StreamError_7);
assert(Py_REFCNT(frame_frame_httpx$_exceptions$$$class__24_StreamError_7) == 2);

// Framed code:
{
PyObject *tmp_annotations_8;
struct Nuitka_CellObject *tmp_closure_6[1];
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_f5ccb293b0370d17e642a35e4d2af9f5);
tmp_closure_6[0] = outline_23_var___class__;
Py_INCREF(tmp_closure_6[0]);
tmp_dictset_value = MAKE_FUNCTION_httpx$_exceptions$$$function__8___init__(tstate, tmp_annotations_8, tmp_closure_6);

tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__24_StreamError_297, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_2 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_exceptions$$$class__24_StreamError_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_exceptions$$$class__24_StreamError_7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_exceptions$$$class__24_StreamError_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_exceptions$$$class__24_StreamError_7,
    type_description_2,
    outline_23_var___class__
);



assertFrameObject(frame_frame_httpx$_exceptions$$$class__24_StreamError_7);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_6;
frame_no_exception_6:;
goto skip_nested_handling_6;
nested_frame_exit_6:;

goto try_except_handler_72;
skip_nested_handling_6:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__24_StreamError_297, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;

    goto try_except_handler_72;
}
{
nuitka_bool tmp_condition_result_96;
PyObject *tmp_cmp_expr_left_24;
PyObject *tmp_cmp_expr_right_24;
CHECK_OBJECT(tmp_class_container$class_creation_24__bases);
tmp_cmp_expr_left_24 = tmp_class_container$class_creation_24__bases;
tmp_cmp_expr_right_24 = mod_consts.const_tuple_type_RuntimeError_tuple;
tmp_condition_result_96 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_24, tmp_cmp_expr_right_24);
if (tmp_condition_result_96 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;

    goto try_except_handler_72;
}
if (tmp_condition_result_96 == NUITKA_BOOL_TRUE) {
    goto branch_yes_72;
} else {
    goto branch_no_72;
}
}
branch_yes_72:;
tmp_dictset_value = mod_consts.const_tuple_type_RuntimeError_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__24_StreamError_297, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;

    goto try_except_handler_72;
}
branch_no_72:;
{
PyObject *tmp_assign_source_195;
PyObject *tmp_called_value_49;
PyObject *tmp_args_value_48;
PyObject *tmp_tuple_element_92;
PyObject *tmp_kwargs_value_48;
CHECK_OBJECT(tmp_class_container$class_creation_24__metaclass);
tmp_called_value_49 = tmp_class_container$class_creation_24__metaclass;
tmp_tuple_element_92 = mod_consts.const_str_plain_StreamError;
tmp_args_value_48 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_48, 0, tmp_tuple_element_92);
CHECK_OBJECT(tmp_class_container$class_creation_24__bases);
tmp_tuple_element_92 = tmp_class_container$class_creation_24__bases;
PyTuple_SET_ITEM0(tmp_args_value_48, 1, tmp_tuple_element_92);
tmp_tuple_element_92 = locals_httpx$_exceptions$$$class__24_StreamError_297;
PyTuple_SET_ITEM0(tmp_args_value_48, 2, tmp_tuple_element_92);
CHECK_OBJECT(tmp_class_container$class_creation_24__class_decl_dict);
tmp_kwargs_value_48 = tmp_class_container$class_creation_24__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 297;
tmp_assign_source_195 = CALL_FUNCTION(tstate, tmp_called_value_49, tmp_args_value_48, tmp_kwargs_value_48);
CHECK_OBJECT(tmp_args_value_48);
Py_DECREF(tmp_args_value_48);
if (tmp_assign_source_195 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;

    goto try_except_handler_72;
}
assert(Nuitka_Cell_GET(outline_23_var___class__) == NULL);
Nuitka_Cell_SET(outline_23_var___class__, tmp_assign_source_195);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_23_var___class__));
tmp_assign_source_194 = Nuitka_Cell_GET(outline_23_var___class__);
Py_INCREF(tmp_assign_source_194);
goto try_return_handler_72;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_72:;
Py_DECREF(locals_httpx$_exceptions$$$class__24_StreamError_297);
locals_httpx$_exceptions$$$class__24_StreamError_297 = NULL;
goto try_return_handler_71;
// Exception handler code:
try_except_handler_72:;
exception_keeper_lineno_70 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_70 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpx$_exceptions$$$class__24_StreamError_297);
locals_httpx$_exceptions$$$class__24_StreamError_297 = NULL;
// Re-raise.
exception_state = exception_keeper_name_70;
exception_lineno = exception_keeper_lineno_70;

goto try_except_handler_71;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_71:;
CHECK_OBJECT(outline_23_var___class__);
CHECK_OBJECT(outline_23_var___class__);
Py_DECREF(outline_23_var___class__);
outline_23_var___class__ = NULL;
goto outline_result_48;
// Exception handler code:
try_except_handler_71:;
exception_keeper_lineno_71 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_71 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_71;
exception_lineno = exception_keeper_lineno_71;

goto outline_exception_24;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_24:;
exception_lineno = 297;
goto try_except_handler_70;
outline_result_48:;
UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_StreamError, tmp_assign_source_194);
}
goto try_end_24;
// Exception handler code:
try_except_handler_70:;
exception_keeper_lineno_72 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_72 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_24__bases);
tmp_class_container$class_creation_24__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_24__class_decl_dict);
tmp_class_container$class_creation_24__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_24__metaclass);
tmp_class_container$class_creation_24__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_24__prepared);
tmp_class_container$class_creation_24__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_72;
exception_lineno = exception_keeper_lineno_72;

goto frame_exception_exit_1;
// End of try:
try_end_24:;
CHECK_OBJECT(tmp_class_container$class_creation_24__bases);
CHECK_OBJECT(tmp_class_container$class_creation_24__bases);
Py_DECREF(tmp_class_container$class_creation_24__bases);
tmp_class_container$class_creation_24__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_24__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_24__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_24__class_decl_dict);
tmp_class_container$class_creation_24__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_24__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_24__metaclass);
Py_DECREF(tmp_class_container$class_creation_24__metaclass);
tmp_class_container$class_creation_24__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_24__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_24__prepared);
Py_DECREF(tmp_class_container$class_creation_24__prepared);
tmp_class_container$class_creation_24__prepared = NULL;
tmp_outline_return_value_24 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_24);
goto outline_result_47;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_47:;
CHECK_OBJECT(tmp_outline_return_value_24);
Py_DECREF(tmp_outline_return_value_24);
}
{
PyObject *tmp_outline_return_value_25;
// Tried code:
{
PyObject *tmp_assign_source_196;
PyObject *tmp_tuple_element_93;
tmp_tuple_element_93 = module_var_accessor_httpx$_exceptions$StreamError(tstate);
if (unlikely(tmp_tuple_element_93 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_StreamError);
}

if (tmp_tuple_element_93 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 309;

    goto try_except_handler_73;
}
tmp_assign_source_196 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_196, 0, tmp_tuple_element_93);
assert(tmp_class_container$class_creation_25__bases_orig == NULL);
tmp_class_container$class_creation_25__bases_orig = tmp_assign_source_196;
}
{
PyObject *tmp_assign_source_197;
PyObject *tmp_direct_call_arg1_25;
CHECK_OBJECT(tmp_class_container$class_creation_25__bases_orig);
tmp_direct_call_arg1_25 = tmp_class_container$class_creation_25__bases_orig;
Py_INCREF(tmp_direct_call_arg1_25);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_25};
    tmp_assign_source_197 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_197 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;

    goto try_except_handler_73;
}
assert(tmp_class_container$class_creation_25__bases == NULL);
tmp_class_container$class_creation_25__bases = tmp_assign_source_197;
}
{
PyObject *tmp_assign_source_198;
tmp_assign_source_198 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_25__class_decl_dict == NULL);
tmp_class_container$class_creation_25__class_decl_dict = tmp_assign_source_198;
}
{
PyObject *tmp_assign_source_199;
PyObject *tmp_metaclass_value_25;
nuitka_bool tmp_condition_result_97;
int tmp_truth_name_25;
PyObject *tmp_type_arg_49;
PyObject *tmp_expression_value_145;
PyObject *tmp_subscript_value_25;
PyObject *tmp_bases_value_25;
CHECK_OBJECT(tmp_class_container$class_creation_25__bases);
tmp_truth_name_25 = CHECK_IF_TRUE(tmp_class_container$class_creation_25__bases);
if (tmp_truth_name_25 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;

    goto try_except_handler_73;
}
tmp_condition_result_97 = tmp_truth_name_25 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_97 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_25;
} else {
    goto condexpr_false_25;
}
condexpr_true_25:;
CHECK_OBJECT(tmp_class_container$class_creation_25__bases);
tmp_expression_value_145 = tmp_class_container$class_creation_25__bases;
tmp_subscript_value_25 = const_int_0;
tmp_type_arg_49 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_145, tmp_subscript_value_25, 0);
if (tmp_type_arg_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;

    goto try_except_handler_73;
}
tmp_metaclass_value_25 = BUILTIN_TYPE1(tmp_type_arg_49);
CHECK_OBJECT(tmp_type_arg_49);
Py_DECREF(tmp_type_arg_49);
if (tmp_metaclass_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;

    goto try_except_handler_73;
}
goto condexpr_end_25;
condexpr_false_25:;
tmp_metaclass_value_25 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_25);
condexpr_end_25:;
CHECK_OBJECT(tmp_class_container$class_creation_25__bases);
tmp_bases_value_25 = tmp_class_container$class_creation_25__bases;
tmp_assign_source_199 = SELECT_METACLASS(tstate, tmp_metaclass_value_25, tmp_bases_value_25);
CHECK_OBJECT(tmp_metaclass_value_25);
Py_DECREF(tmp_metaclass_value_25);
if (tmp_assign_source_199 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;

    goto try_except_handler_73;
}
assert(tmp_class_container$class_creation_25__metaclass == NULL);
tmp_class_container$class_creation_25__metaclass = tmp_assign_source_199;
}
{
bool tmp_condition_result_98;
PyObject *tmp_expression_value_146;
CHECK_OBJECT(tmp_class_container$class_creation_25__metaclass);
tmp_expression_value_146 = tmp_class_container$class_creation_25__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_146, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;

    goto try_except_handler_73;
}
tmp_condition_result_98 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_98 != false) {
    goto branch_yes_73;
} else {
    goto branch_no_73;
}
}
branch_yes_73:;
{
PyObject *tmp_assign_source_200;
PyObject *tmp_called_value_50;
PyObject *tmp_expression_value_147;
PyObject *tmp_args_value_49;
PyObject *tmp_tuple_element_94;
PyObject *tmp_kwargs_value_49;
CHECK_OBJECT(tmp_class_container$class_creation_25__metaclass);
tmp_expression_value_147 = tmp_class_container$class_creation_25__metaclass;
tmp_called_value_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_147, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;

    goto try_except_handler_73;
}
tmp_tuple_element_94 = mod_consts.const_str_plain_StreamConsumed;
tmp_args_value_49 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_49, 0, tmp_tuple_element_94);
CHECK_OBJECT(tmp_class_container$class_creation_25__bases);
tmp_tuple_element_94 = tmp_class_container$class_creation_25__bases;
PyTuple_SET_ITEM0(tmp_args_value_49, 1, tmp_tuple_element_94);
CHECK_OBJECT(tmp_class_container$class_creation_25__class_decl_dict);
tmp_kwargs_value_49 = tmp_class_container$class_creation_25__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 309;
tmp_assign_source_200 = CALL_FUNCTION(tstate, tmp_called_value_50, tmp_args_value_49, tmp_kwargs_value_49);
CHECK_OBJECT(tmp_called_value_50);
Py_DECREF(tmp_called_value_50);
CHECK_OBJECT(tmp_args_value_49);
Py_DECREF(tmp_args_value_49);
if (tmp_assign_source_200 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;

    goto try_except_handler_73;
}
assert(tmp_class_container$class_creation_25__prepared == NULL);
tmp_class_container$class_creation_25__prepared = tmp_assign_source_200;
}
{
bool tmp_condition_result_99;
PyObject *tmp_operand_value_25;
PyObject *tmp_expression_value_148;
CHECK_OBJECT(tmp_class_container$class_creation_25__prepared);
tmp_expression_value_148 = tmp_class_container$class_creation_25__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_148, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;

    goto try_except_handler_73;
}
tmp_operand_value_25 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_25);
assert(!(tmp_res == -1));
tmp_condition_result_99 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_99 != false) {
    goto branch_yes_74;
} else {
    goto branch_no_74;
}
}
branch_yes_74:;
{
PyObject *tmp_raise_type_25;
PyObject *tmp_make_exception_arg_25;
PyObject *tmp_mod_expr_left_25;
PyObject *tmp_mod_expr_right_25;
PyObject *tmp_tuple_element_95;
PyObject *tmp_expression_value_149;
PyObject *tmp_name_value_26;
PyObject *tmp_default_value_25;
tmp_mod_expr_left_25 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_25__metaclass);
tmp_expression_value_149 = tmp_class_container$class_creation_25__metaclass;
tmp_name_value_26 = const_str_plain___name__;
tmp_default_value_25 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_95 = BUILTIN_GETATTR(tstate, tmp_expression_value_149, tmp_name_value_26, tmp_default_value_25);
if (tmp_tuple_element_95 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;

    goto try_except_handler_73;
}
tmp_mod_expr_right_25 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_150;
PyObject *tmp_type_arg_50;
PyTuple_SET_ITEM(tmp_mod_expr_right_25, 0, tmp_tuple_element_95);
CHECK_OBJECT(tmp_class_container$class_creation_25__prepared);
tmp_type_arg_50 = tmp_class_container$class_creation_25__prepared;
tmp_expression_value_150 = BUILTIN_TYPE1(tmp_type_arg_50);
assert(!(tmp_expression_value_150 == NULL));
tmp_tuple_element_95 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_150, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_150);
Py_DECREF(tmp_expression_value_150);
if (tmp_tuple_element_95 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;

    goto tuple_build_exception_25;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_25, 1, tmp_tuple_element_95);
}
goto tuple_build_no_exception_25;
// Exception handling pass through code for tuple_build:
tuple_build_exception_25:;
Py_DECREF(tmp_mod_expr_right_25);
goto try_except_handler_73;
// Finished with no exception for tuple_build:
tuple_build_no_exception_25:;
tmp_make_exception_arg_25 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_25, tmp_mod_expr_right_25);
CHECK_OBJECT(tmp_mod_expr_right_25);
Py_DECREF(tmp_mod_expr_right_25);
if (tmp_make_exception_arg_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;

    goto try_except_handler_73;
}
frame_frame_httpx$_exceptions->m_frame.f_lineno = 309;
tmp_raise_type_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_25);
CHECK_OBJECT(tmp_make_exception_arg_25);
Py_DECREF(tmp_make_exception_arg_25);
assert(!(tmp_raise_type_25 == NULL));
exception_state.exception_value = tmp_raise_type_25;
exception_lineno = 309;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_73;
}
branch_no_74:;
goto branch_end_73;
branch_no_73:;
{
PyObject *tmp_assign_source_201;
tmp_assign_source_201 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_25__prepared == NULL);
tmp_class_container$class_creation_25__prepared = tmp_assign_source_201;
}
branch_end_73:;
{
PyObject *tmp_assign_source_202;
outline_24_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_25;
CHECK_OBJECT(tmp_class_container$class_creation_25__prepared);
tmp_set_locals_25 = tmp_class_container$class_creation_25__prepared;
locals_httpx$_exceptions$$$class__25_StreamConsumed_309 = tmp_set_locals_25;
Py_INCREF(tmp_set_locals_25);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_f49f37ecb12db2b9a869fd11ee8982d4;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__25_StreamConsumed_309, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;

    goto try_except_handler_75;
}
tmp_dictset_value = mod_consts.const_str_digest_8fea20daf99542bbd1a6bad7bb77ce3e;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__25_StreamConsumed_309, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;

    goto try_except_handler_75;
}
tmp_dictset_value = mod_consts.const_str_plain_StreamConsumed;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__25_StreamConsumed_309, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;

    goto try_except_handler_75;
}
tmp_dictset_value = mod_consts.const_int_pos_309;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__25_StreamConsumed_309, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;

    goto try_except_handler_75;
}
frame_frame_httpx$_exceptions$$$class__25_StreamConsumed_8 = MAKE_CLASS_FRAME(tstate, code_objects_a5ac04193c252056e3e6b0fb53e25bd4, module_httpx$_exceptions, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_exceptions$$$class__25_StreamConsumed_8);
assert(Py_REFCNT(frame_frame_httpx$_exceptions$$$class__25_StreamConsumed_8) == 2);

// Framed code:
{
PyObject *tmp_annotations_9;
struct Nuitka_CellObject *tmp_closure_7[1];
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
tmp_closure_7[0] = outline_24_var___class__;
Py_INCREF(tmp_closure_7[0]);
tmp_dictset_value = MAKE_FUNCTION_httpx$_exceptions$$$function__9___init__(tstate, tmp_annotations_9, tmp_closure_7);

tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__25_StreamConsumed_309, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_2 = "c";
    goto frame_exception_exit_8;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_7;
frame_exception_exit_8:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_exceptions$$$class__25_StreamConsumed_8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_exceptions$$$class__25_StreamConsumed_8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_exceptions$$$class__25_StreamConsumed_8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_exceptions$$$class__25_StreamConsumed_8,
    type_description_2,
    outline_24_var___class__
);



assertFrameObject(frame_frame_httpx$_exceptions$$$class__25_StreamConsumed_8);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_7;
frame_no_exception_7:;
goto skip_nested_handling_7;
nested_frame_exit_7:;

goto try_except_handler_75;
skip_nested_handling_7:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__25_StreamConsumed_309, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;

    goto try_except_handler_75;
}
{
nuitka_bool tmp_condition_result_100;
PyObject *tmp_cmp_expr_left_25;
PyObject *tmp_cmp_expr_right_25;
CHECK_OBJECT(tmp_class_container$class_creation_25__bases);
tmp_cmp_expr_left_25 = tmp_class_container$class_creation_25__bases;
CHECK_OBJECT(tmp_class_container$class_creation_25__bases_orig);
tmp_cmp_expr_right_25 = tmp_class_container$class_creation_25__bases_orig;
tmp_condition_result_100 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_25, tmp_cmp_expr_right_25);
if (tmp_condition_result_100 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;

    goto try_except_handler_75;
}
if (tmp_condition_result_100 == NUITKA_BOOL_TRUE) {
    goto branch_yes_75;
} else {
    goto branch_no_75;
}
}
branch_yes_75:;
CHECK_OBJECT(tmp_class_container$class_creation_25__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_25__bases_orig;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__25_StreamConsumed_309, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;

    goto try_except_handler_75;
}
branch_no_75:;
{
PyObject *tmp_assign_source_203;
PyObject *tmp_called_value_51;
PyObject *tmp_args_value_50;
PyObject *tmp_tuple_element_96;
PyObject *tmp_kwargs_value_50;
CHECK_OBJECT(tmp_class_container$class_creation_25__metaclass);
tmp_called_value_51 = tmp_class_container$class_creation_25__metaclass;
tmp_tuple_element_96 = mod_consts.const_str_plain_StreamConsumed;
tmp_args_value_50 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_50, 0, tmp_tuple_element_96);
CHECK_OBJECT(tmp_class_container$class_creation_25__bases);
tmp_tuple_element_96 = tmp_class_container$class_creation_25__bases;
PyTuple_SET_ITEM0(tmp_args_value_50, 1, tmp_tuple_element_96);
tmp_tuple_element_96 = locals_httpx$_exceptions$$$class__25_StreamConsumed_309;
PyTuple_SET_ITEM0(tmp_args_value_50, 2, tmp_tuple_element_96);
CHECK_OBJECT(tmp_class_container$class_creation_25__class_decl_dict);
tmp_kwargs_value_50 = tmp_class_container$class_creation_25__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 309;
tmp_assign_source_203 = CALL_FUNCTION(tstate, tmp_called_value_51, tmp_args_value_50, tmp_kwargs_value_50);
CHECK_OBJECT(tmp_args_value_50);
Py_DECREF(tmp_args_value_50);
if (tmp_assign_source_203 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;

    goto try_except_handler_75;
}
assert(Nuitka_Cell_GET(outline_24_var___class__) == NULL);
Nuitka_Cell_SET(outline_24_var___class__, tmp_assign_source_203);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_24_var___class__));
tmp_assign_source_202 = Nuitka_Cell_GET(outline_24_var___class__);
Py_INCREF(tmp_assign_source_202);
goto try_return_handler_75;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_75:;
Py_DECREF(locals_httpx$_exceptions$$$class__25_StreamConsumed_309);
locals_httpx$_exceptions$$$class__25_StreamConsumed_309 = NULL;
goto try_return_handler_74;
// Exception handler code:
try_except_handler_75:;
exception_keeper_lineno_73 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_73 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpx$_exceptions$$$class__25_StreamConsumed_309);
locals_httpx$_exceptions$$$class__25_StreamConsumed_309 = NULL;
// Re-raise.
exception_state = exception_keeper_name_73;
exception_lineno = exception_keeper_lineno_73;

goto try_except_handler_74;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_74:;
CHECK_OBJECT(outline_24_var___class__);
CHECK_OBJECT(outline_24_var___class__);
Py_DECREF(outline_24_var___class__);
outline_24_var___class__ = NULL;
goto outline_result_50;
// Exception handler code:
try_except_handler_74:;
exception_keeper_lineno_74 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_74 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_74;
exception_lineno = exception_keeper_lineno_74;

goto outline_exception_25;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_25:;
exception_lineno = 309;
goto try_except_handler_73;
outline_result_50:;
UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_StreamConsumed, tmp_assign_source_202);
}
goto try_end_25;
// Exception handler code:
try_except_handler_73:;
exception_keeper_lineno_75 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_75 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_25__bases_orig);
tmp_class_container$class_creation_25__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_25__bases);
tmp_class_container$class_creation_25__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_25__class_decl_dict);
tmp_class_container$class_creation_25__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_25__metaclass);
tmp_class_container$class_creation_25__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_25__prepared);
tmp_class_container$class_creation_25__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_75;
exception_lineno = exception_keeper_lineno_75;

goto frame_exception_exit_1;
// End of try:
try_end_25:;
CHECK_OBJECT(tmp_class_container$class_creation_25__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_25__bases_orig);
Py_DECREF(tmp_class_container$class_creation_25__bases_orig);
tmp_class_container$class_creation_25__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_25__bases);
CHECK_OBJECT(tmp_class_container$class_creation_25__bases);
Py_DECREF(tmp_class_container$class_creation_25__bases);
tmp_class_container$class_creation_25__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_25__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_25__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_25__class_decl_dict);
tmp_class_container$class_creation_25__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_25__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_25__metaclass);
Py_DECREF(tmp_class_container$class_creation_25__metaclass);
tmp_class_container$class_creation_25__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_25__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_25__prepared);
Py_DECREF(tmp_class_container$class_creation_25__prepared);
tmp_class_container$class_creation_25__prepared = NULL;
tmp_outline_return_value_25 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_25);
goto outline_result_49;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_49:;
CHECK_OBJECT(tmp_outline_return_value_25);
Py_DECREF(tmp_outline_return_value_25);
}
{
PyObject *tmp_outline_return_value_26;
// Tried code:
{
PyObject *tmp_assign_source_204;
PyObject *tmp_tuple_element_97;
tmp_tuple_element_97 = module_var_accessor_httpx$_exceptions$StreamError(tstate);
if (unlikely(tmp_tuple_element_97 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_StreamError);
}

if (tmp_tuple_element_97 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 327;

    goto try_except_handler_76;
}
tmp_assign_source_204 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_204, 0, tmp_tuple_element_97);
assert(tmp_class_container$class_creation_26__bases_orig == NULL);
tmp_class_container$class_creation_26__bases_orig = tmp_assign_source_204;
}
{
PyObject *tmp_assign_source_205;
PyObject *tmp_direct_call_arg1_26;
CHECK_OBJECT(tmp_class_container$class_creation_26__bases_orig);
tmp_direct_call_arg1_26 = tmp_class_container$class_creation_26__bases_orig;
Py_INCREF(tmp_direct_call_arg1_26);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_26};
    tmp_assign_source_205 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_205 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto try_except_handler_76;
}
assert(tmp_class_container$class_creation_26__bases == NULL);
tmp_class_container$class_creation_26__bases = tmp_assign_source_205;
}
{
PyObject *tmp_assign_source_206;
tmp_assign_source_206 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_26__class_decl_dict == NULL);
tmp_class_container$class_creation_26__class_decl_dict = tmp_assign_source_206;
}
{
PyObject *tmp_assign_source_207;
PyObject *tmp_metaclass_value_26;
nuitka_bool tmp_condition_result_101;
int tmp_truth_name_26;
PyObject *tmp_type_arg_51;
PyObject *tmp_expression_value_151;
PyObject *tmp_subscript_value_26;
PyObject *tmp_bases_value_26;
CHECK_OBJECT(tmp_class_container$class_creation_26__bases);
tmp_truth_name_26 = CHECK_IF_TRUE(tmp_class_container$class_creation_26__bases);
if (tmp_truth_name_26 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto try_except_handler_76;
}
tmp_condition_result_101 = tmp_truth_name_26 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_101 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_26;
} else {
    goto condexpr_false_26;
}
condexpr_true_26:;
CHECK_OBJECT(tmp_class_container$class_creation_26__bases);
tmp_expression_value_151 = tmp_class_container$class_creation_26__bases;
tmp_subscript_value_26 = const_int_0;
tmp_type_arg_51 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_151, tmp_subscript_value_26, 0);
if (tmp_type_arg_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto try_except_handler_76;
}
tmp_metaclass_value_26 = BUILTIN_TYPE1(tmp_type_arg_51);
CHECK_OBJECT(tmp_type_arg_51);
Py_DECREF(tmp_type_arg_51);
if (tmp_metaclass_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto try_except_handler_76;
}
goto condexpr_end_26;
condexpr_false_26:;
tmp_metaclass_value_26 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_26);
condexpr_end_26:;
CHECK_OBJECT(tmp_class_container$class_creation_26__bases);
tmp_bases_value_26 = tmp_class_container$class_creation_26__bases;
tmp_assign_source_207 = SELECT_METACLASS(tstate, tmp_metaclass_value_26, tmp_bases_value_26);
CHECK_OBJECT(tmp_metaclass_value_26);
Py_DECREF(tmp_metaclass_value_26);
if (tmp_assign_source_207 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto try_except_handler_76;
}
assert(tmp_class_container$class_creation_26__metaclass == NULL);
tmp_class_container$class_creation_26__metaclass = tmp_assign_source_207;
}
{
bool tmp_condition_result_102;
PyObject *tmp_expression_value_152;
CHECK_OBJECT(tmp_class_container$class_creation_26__metaclass);
tmp_expression_value_152 = tmp_class_container$class_creation_26__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_152, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto try_except_handler_76;
}
tmp_condition_result_102 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_102 != false) {
    goto branch_yes_76;
} else {
    goto branch_no_76;
}
}
branch_yes_76:;
{
PyObject *tmp_assign_source_208;
PyObject *tmp_called_value_52;
PyObject *tmp_expression_value_153;
PyObject *tmp_args_value_51;
PyObject *tmp_tuple_element_98;
PyObject *tmp_kwargs_value_51;
CHECK_OBJECT(tmp_class_container$class_creation_26__metaclass);
tmp_expression_value_153 = tmp_class_container$class_creation_26__metaclass;
tmp_called_value_52 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_153, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto try_except_handler_76;
}
tmp_tuple_element_98 = mod_consts.const_str_plain_StreamClosed;
tmp_args_value_51 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_51, 0, tmp_tuple_element_98);
CHECK_OBJECT(tmp_class_container$class_creation_26__bases);
tmp_tuple_element_98 = tmp_class_container$class_creation_26__bases;
PyTuple_SET_ITEM0(tmp_args_value_51, 1, tmp_tuple_element_98);
CHECK_OBJECT(tmp_class_container$class_creation_26__class_decl_dict);
tmp_kwargs_value_51 = tmp_class_container$class_creation_26__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 327;
tmp_assign_source_208 = CALL_FUNCTION(tstate, tmp_called_value_52, tmp_args_value_51, tmp_kwargs_value_51);
CHECK_OBJECT(tmp_called_value_52);
Py_DECREF(tmp_called_value_52);
CHECK_OBJECT(tmp_args_value_51);
Py_DECREF(tmp_args_value_51);
if (tmp_assign_source_208 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto try_except_handler_76;
}
assert(tmp_class_container$class_creation_26__prepared == NULL);
tmp_class_container$class_creation_26__prepared = tmp_assign_source_208;
}
{
bool tmp_condition_result_103;
PyObject *tmp_operand_value_26;
PyObject *tmp_expression_value_154;
CHECK_OBJECT(tmp_class_container$class_creation_26__prepared);
tmp_expression_value_154 = tmp_class_container$class_creation_26__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_154, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto try_except_handler_76;
}
tmp_operand_value_26 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_26);
assert(!(tmp_res == -1));
tmp_condition_result_103 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_103 != false) {
    goto branch_yes_77;
} else {
    goto branch_no_77;
}
}
branch_yes_77:;
{
PyObject *tmp_raise_type_26;
PyObject *tmp_make_exception_arg_26;
PyObject *tmp_mod_expr_left_26;
PyObject *tmp_mod_expr_right_26;
PyObject *tmp_tuple_element_99;
PyObject *tmp_expression_value_155;
PyObject *tmp_name_value_27;
PyObject *tmp_default_value_26;
tmp_mod_expr_left_26 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_26__metaclass);
tmp_expression_value_155 = tmp_class_container$class_creation_26__metaclass;
tmp_name_value_27 = const_str_plain___name__;
tmp_default_value_26 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_99 = BUILTIN_GETATTR(tstate, tmp_expression_value_155, tmp_name_value_27, tmp_default_value_26);
if (tmp_tuple_element_99 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto try_except_handler_76;
}
tmp_mod_expr_right_26 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_156;
PyObject *tmp_type_arg_52;
PyTuple_SET_ITEM(tmp_mod_expr_right_26, 0, tmp_tuple_element_99);
CHECK_OBJECT(tmp_class_container$class_creation_26__prepared);
tmp_type_arg_52 = tmp_class_container$class_creation_26__prepared;
tmp_expression_value_156 = BUILTIN_TYPE1(tmp_type_arg_52);
assert(!(tmp_expression_value_156 == NULL));
tmp_tuple_element_99 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_156, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_156);
Py_DECREF(tmp_expression_value_156);
if (tmp_tuple_element_99 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto tuple_build_exception_26;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_26, 1, tmp_tuple_element_99);
}
goto tuple_build_no_exception_26;
// Exception handling pass through code for tuple_build:
tuple_build_exception_26:;
Py_DECREF(tmp_mod_expr_right_26);
goto try_except_handler_76;
// Finished with no exception for tuple_build:
tuple_build_no_exception_26:;
tmp_make_exception_arg_26 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_26, tmp_mod_expr_right_26);
CHECK_OBJECT(tmp_mod_expr_right_26);
Py_DECREF(tmp_mod_expr_right_26);
if (tmp_make_exception_arg_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto try_except_handler_76;
}
frame_frame_httpx$_exceptions->m_frame.f_lineno = 327;
tmp_raise_type_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_26);
CHECK_OBJECT(tmp_make_exception_arg_26);
Py_DECREF(tmp_make_exception_arg_26);
assert(!(tmp_raise_type_26 == NULL));
exception_state.exception_value = tmp_raise_type_26;
exception_lineno = 327;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_76;
}
branch_no_77:;
goto branch_end_76;
branch_no_76:;
{
PyObject *tmp_assign_source_209;
tmp_assign_source_209 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_26__prepared == NULL);
tmp_class_container$class_creation_26__prepared = tmp_assign_source_209;
}
branch_end_76:;
{
PyObject *tmp_assign_source_210;
outline_25_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_26;
CHECK_OBJECT(tmp_class_container$class_creation_26__prepared);
tmp_set_locals_26 = tmp_class_container$class_creation_26__prepared;
locals_httpx$_exceptions$$$class__26_StreamClosed_327 = tmp_set_locals_26;
Py_INCREF(tmp_set_locals_26);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_f49f37ecb12db2b9a869fd11ee8982d4;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__26_StreamClosed_327, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto try_except_handler_78;
}
tmp_dictset_value = mod_consts.const_str_digest_34ff024d729b507530ebb1db924cbcc2;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__26_StreamClosed_327, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto try_except_handler_78;
}
tmp_dictset_value = mod_consts.const_str_plain_StreamClosed;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__26_StreamClosed_327, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto try_except_handler_78;
}
tmp_dictset_value = mod_consts.const_int_pos_327;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__26_StreamClosed_327, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto try_except_handler_78;
}
frame_frame_httpx$_exceptions$$$class__26_StreamClosed_9 = MAKE_CLASS_FRAME(tstate, code_objects_868551132bbd5aa6f7a6d9e156e414f2, module_httpx$_exceptions, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_exceptions$$$class__26_StreamClosed_9);
assert(Py_REFCNT(frame_frame_httpx$_exceptions$$$class__26_StreamClosed_9) == 2);

// Framed code:
{
PyObject *tmp_annotations_10;
struct Nuitka_CellObject *tmp_closure_8[1];
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
tmp_closure_8[0] = outline_25_var___class__;
Py_INCREF(tmp_closure_8[0]);
tmp_dictset_value = MAKE_FUNCTION_httpx$_exceptions$$$function__10___init__(tstate, tmp_annotations_10, tmp_closure_8);

tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__26_StreamClosed_327, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_2 = "c";
    goto frame_exception_exit_9;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_8;
frame_exception_exit_9:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_exceptions$$$class__26_StreamClosed_9, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_exceptions$$$class__26_StreamClosed_9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_exceptions$$$class__26_StreamClosed_9, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_exceptions$$$class__26_StreamClosed_9,
    type_description_2,
    outline_25_var___class__
);



assertFrameObject(frame_frame_httpx$_exceptions$$$class__26_StreamClosed_9);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_8;
frame_no_exception_8:;
goto skip_nested_handling_8;
nested_frame_exit_8:;

goto try_except_handler_78;
skip_nested_handling_8:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__26_StreamClosed_327, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto try_except_handler_78;
}
{
nuitka_bool tmp_condition_result_104;
PyObject *tmp_cmp_expr_left_26;
PyObject *tmp_cmp_expr_right_26;
CHECK_OBJECT(tmp_class_container$class_creation_26__bases);
tmp_cmp_expr_left_26 = tmp_class_container$class_creation_26__bases;
CHECK_OBJECT(tmp_class_container$class_creation_26__bases_orig);
tmp_cmp_expr_right_26 = tmp_class_container$class_creation_26__bases_orig;
tmp_condition_result_104 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_26, tmp_cmp_expr_right_26);
if (tmp_condition_result_104 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto try_except_handler_78;
}
if (tmp_condition_result_104 == NUITKA_BOOL_TRUE) {
    goto branch_yes_78;
} else {
    goto branch_no_78;
}
}
branch_yes_78:;
CHECK_OBJECT(tmp_class_container$class_creation_26__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_26__bases_orig;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__26_StreamClosed_327, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto try_except_handler_78;
}
branch_no_78:;
{
PyObject *tmp_assign_source_211;
PyObject *tmp_called_value_53;
PyObject *tmp_args_value_52;
PyObject *tmp_tuple_element_100;
PyObject *tmp_kwargs_value_52;
CHECK_OBJECT(tmp_class_container$class_creation_26__metaclass);
tmp_called_value_53 = tmp_class_container$class_creation_26__metaclass;
tmp_tuple_element_100 = mod_consts.const_str_plain_StreamClosed;
tmp_args_value_52 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_52, 0, tmp_tuple_element_100);
CHECK_OBJECT(tmp_class_container$class_creation_26__bases);
tmp_tuple_element_100 = tmp_class_container$class_creation_26__bases;
PyTuple_SET_ITEM0(tmp_args_value_52, 1, tmp_tuple_element_100);
tmp_tuple_element_100 = locals_httpx$_exceptions$$$class__26_StreamClosed_327;
PyTuple_SET_ITEM0(tmp_args_value_52, 2, tmp_tuple_element_100);
CHECK_OBJECT(tmp_class_container$class_creation_26__class_decl_dict);
tmp_kwargs_value_52 = tmp_class_container$class_creation_26__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 327;
tmp_assign_source_211 = CALL_FUNCTION(tstate, tmp_called_value_53, tmp_args_value_52, tmp_kwargs_value_52);
CHECK_OBJECT(tmp_args_value_52);
Py_DECREF(tmp_args_value_52);
if (tmp_assign_source_211 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto try_except_handler_78;
}
assert(Nuitka_Cell_GET(outline_25_var___class__) == NULL);
Nuitka_Cell_SET(outline_25_var___class__, tmp_assign_source_211);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_25_var___class__));
tmp_assign_source_210 = Nuitka_Cell_GET(outline_25_var___class__);
Py_INCREF(tmp_assign_source_210);
goto try_return_handler_78;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_78:;
Py_DECREF(locals_httpx$_exceptions$$$class__26_StreamClosed_327);
locals_httpx$_exceptions$$$class__26_StreamClosed_327 = NULL;
goto try_return_handler_77;
// Exception handler code:
try_except_handler_78:;
exception_keeper_lineno_76 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_76 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpx$_exceptions$$$class__26_StreamClosed_327);
locals_httpx$_exceptions$$$class__26_StreamClosed_327 = NULL;
// Re-raise.
exception_state = exception_keeper_name_76;
exception_lineno = exception_keeper_lineno_76;

goto try_except_handler_77;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_77:;
CHECK_OBJECT(outline_25_var___class__);
CHECK_OBJECT(outline_25_var___class__);
Py_DECREF(outline_25_var___class__);
outline_25_var___class__ = NULL;
goto outline_result_52;
// Exception handler code:
try_except_handler_77:;
exception_keeper_lineno_77 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_77 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_77;
exception_lineno = exception_keeper_lineno_77;

goto outline_exception_26;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_26:;
exception_lineno = 327;
goto try_except_handler_76;
outline_result_52:;
UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_StreamClosed, tmp_assign_source_210);
}
goto try_end_26;
// Exception handler code:
try_except_handler_76:;
exception_keeper_lineno_78 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_78 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_26__bases_orig);
tmp_class_container$class_creation_26__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_26__bases);
tmp_class_container$class_creation_26__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_26__class_decl_dict);
tmp_class_container$class_creation_26__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_26__metaclass);
tmp_class_container$class_creation_26__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_26__prepared);
tmp_class_container$class_creation_26__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_78;
exception_lineno = exception_keeper_lineno_78;

goto frame_exception_exit_1;
// End of try:
try_end_26:;
CHECK_OBJECT(tmp_class_container$class_creation_26__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_26__bases_orig);
Py_DECREF(tmp_class_container$class_creation_26__bases_orig);
tmp_class_container$class_creation_26__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_26__bases);
CHECK_OBJECT(tmp_class_container$class_creation_26__bases);
Py_DECREF(tmp_class_container$class_creation_26__bases);
tmp_class_container$class_creation_26__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_26__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_26__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_26__class_decl_dict);
tmp_class_container$class_creation_26__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_26__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_26__metaclass);
Py_DECREF(tmp_class_container$class_creation_26__metaclass);
tmp_class_container$class_creation_26__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_26__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_26__prepared);
Py_DECREF(tmp_class_container$class_creation_26__prepared);
tmp_class_container$class_creation_26__prepared = NULL;
tmp_outline_return_value_26 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_26);
goto outline_result_51;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_51:;
CHECK_OBJECT(tmp_outline_return_value_26);
Py_DECREF(tmp_outline_return_value_26);
}
{
PyObject *tmp_outline_return_value_27;
// Tried code:
{
PyObject *tmp_assign_source_212;
PyObject *tmp_tuple_element_101;
tmp_tuple_element_101 = module_var_accessor_httpx$_exceptions$StreamError(tstate);
if (unlikely(tmp_tuple_element_101 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_StreamError);
}

if (tmp_tuple_element_101 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 340;

    goto try_except_handler_79;
}
tmp_assign_source_212 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_212, 0, tmp_tuple_element_101);
assert(tmp_class_container$class_creation_27__bases_orig == NULL);
tmp_class_container$class_creation_27__bases_orig = tmp_assign_source_212;
}
{
PyObject *tmp_assign_source_213;
PyObject *tmp_direct_call_arg1_27;
CHECK_OBJECT(tmp_class_container$class_creation_27__bases_orig);
tmp_direct_call_arg1_27 = tmp_class_container$class_creation_27__bases_orig;
Py_INCREF(tmp_direct_call_arg1_27);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_27};
    tmp_assign_source_213 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_213 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;

    goto try_except_handler_79;
}
assert(tmp_class_container$class_creation_27__bases == NULL);
tmp_class_container$class_creation_27__bases = tmp_assign_source_213;
}
{
PyObject *tmp_assign_source_214;
tmp_assign_source_214 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_27__class_decl_dict == NULL);
tmp_class_container$class_creation_27__class_decl_dict = tmp_assign_source_214;
}
{
PyObject *tmp_assign_source_215;
PyObject *tmp_metaclass_value_27;
nuitka_bool tmp_condition_result_105;
int tmp_truth_name_27;
PyObject *tmp_type_arg_53;
PyObject *tmp_expression_value_157;
PyObject *tmp_subscript_value_27;
PyObject *tmp_bases_value_27;
CHECK_OBJECT(tmp_class_container$class_creation_27__bases);
tmp_truth_name_27 = CHECK_IF_TRUE(tmp_class_container$class_creation_27__bases);
if (tmp_truth_name_27 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;

    goto try_except_handler_79;
}
tmp_condition_result_105 = tmp_truth_name_27 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_105 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_27;
} else {
    goto condexpr_false_27;
}
condexpr_true_27:;
CHECK_OBJECT(tmp_class_container$class_creation_27__bases);
tmp_expression_value_157 = tmp_class_container$class_creation_27__bases;
tmp_subscript_value_27 = const_int_0;
tmp_type_arg_53 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_157, tmp_subscript_value_27, 0);
if (tmp_type_arg_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;

    goto try_except_handler_79;
}
tmp_metaclass_value_27 = BUILTIN_TYPE1(tmp_type_arg_53);
CHECK_OBJECT(tmp_type_arg_53);
Py_DECREF(tmp_type_arg_53);
if (tmp_metaclass_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;

    goto try_except_handler_79;
}
goto condexpr_end_27;
condexpr_false_27:;
tmp_metaclass_value_27 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_27);
condexpr_end_27:;
CHECK_OBJECT(tmp_class_container$class_creation_27__bases);
tmp_bases_value_27 = tmp_class_container$class_creation_27__bases;
tmp_assign_source_215 = SELECT_METACLASS(tstate, tmp_metaclass_value_27, tmp_bases_value_27);
CHECK_OBJECT(tmp_metaclass_value_27);
Py_DECREF(tmp_metaclass_value_27);
if (tmp_assign_source_215 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;

    goto try_except_handler_79;
}
assert(tmp_class_container$class_creation_27__metaclass == NULL);
tmp_class_container$class_creation_27__metaclass = tmp_assign_source_215;
}
{
bool tmp_condition_result_106;
PyObject *tmp_expression_value_158;
CHECK_OBJECT(tmp_class_container$class_creation_27__metaclass);
tmp_expression_value_158 = tmp_class_container$class_creation_27__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_158, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;

    goto try_except_handler_79;
}
tmp_condition_result_106 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_106 != false) {
    goto branch_yes_79;
} else {
    goto branch_no_79;
}
}
branch_yes_79:;
{
PyObject *tmp_assign_source_216;
PyObject *tmp_called_value_54;
PyObject *tmp_expression_value_159;
PyObject *tmp_args_value_53;
PyObject *tmp_tuple_element_102;
PyObject *tmp_kwargs_value_53;
CHECK_OBJECT(tmp_class_container$class_creation_27__metaclass);
tmp_expression_value_159 = tmp_class_container$class_creation_27__metaclass;
tmp_called_value_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_159, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;

    goto try_except_handler_79;
}
tmp_tuple_element_102 = mod_consts.const_str_plain_ResponseNotRead;
tmp_args_value_53 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_53, 0, tmp_tuple_element_102);
CHECK_OBJECT(tmp_class_container$class_creation_27__bases);
tmp_tuple_element_102 = tmp_class_container$class_creation_27__bases;
PyTuple_SET_ITEM0(tmp_args_value_53, 1, tmp_tuple_element_102);
CHECK_OBJECT(tmp_class_container$class_creation_27__class_decl_dict);
tmp_kwargs_value_53 = tmp_class_container$class_creation_27__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 340;
tmp_assign_source_216 = CALL_FUNCTION(tstate, tmp_called_value_54, tmp_args_value_53, tmp_kwargs_value_53);
CHECK_OBJECT(tmp_called_value_54);
Py_DECREF(tmp_called_value_54);
CHECK_OBJECT(tmp_args_value_53);
Py_DECREF(tmp_args_value_53);
if (tmp_assign_source_216 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;

    goto try_except_handler_79;
}
assert(tmp_class_container$class_creation_27__prepared == NULL);
tmp_class_container$class_creation_27__prepared = tmp_assign_source_216;
}
{
bool tmp_condition_result_107;
PyObject *tmp_operand_value_27;
PyObject *tmp_expression_value_160;
CHECK_OBJECT(tmp_class_container$class_creation_27__prepared);
tmp_expression_value_160 = tmp_class_container$class_creation_27__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_160, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;

    goto try_except_handler_79;
}
tmp_operand_value_27 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_27);
assert(!(tmp_res == -1));
tmp_condition_result_107 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_107 != false) {
    goto branch_yes_80;
} else {
    goto branch_no_80;
}
}
branch_yes_80:;
{
PyObject *tmp_raise_type_27;
PyObject *tmp_make_exception_arg_27;
PyObject *tmp_mod_expr_left_27;
PyObject *tmp_mod_expr_right_27;
PyObject *tmp_tuple_element_103;
PyObject *tmp_expression_value_161;
PyObject *tmp_name_value_28;
PyObject *tmp_default_value_27;
tmp_mod_expr_left_27 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_27__metaclass);
tmp_expression_value_161 = tmp_class_container$class_creation_27__metaclass;
tmp_name_value_28 = const_str_plain___name__;
tmp_default_value_27 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_103 = BUILTIN_GETATTR(tstate, tmp_expression_value_161, tmp_name_value_28, tmp_default_value_27);
if (tmp_tuple_element_103 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;

    goto try_except_handler_79;
}
tmp_mod_expr_right_27 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_162;
PyObject *tmp_type_arg_54;
PyTuple_SET_ITEM(tmp_mod_expr_right_27, 0, tmp_tuple_element_103);
CHECK_OBJECT(tmp_class_container$class_creation_27__prepared);
tmp_type_arg_54 = tmp_class_container$class_creation_27__prepared;
tmp_expression_value_162 = BUILTIN_TYPE1(tmp_type_arg_54);
assert(!(tmp_expression_value_162 == NULL));
tmp_tuple_element_103 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_162, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_162);
Py_DECREF(tmp_expression_value_162);
if (tmp_tuple_element_103 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;

    goto tuple_build_exception_27;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_27, 1, tmp_tuple_element_103);
}
goto tuple_build_no_exception_27;
// Exception handling pass through code for tuple_build:
tuple_build_exception_27:;
Py_DECREF(tmp_mod_expr_right_27);
goto try_except_handler_79;
// Finished with no exception for tuple_build:
tuple_build_no_exception_27:;
tmp_make_exception_arg_27 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_27, tmp_mod_expr_right_27);
CHECK_OBJECT(tmp_mod_expr_right_27);
Py_DECREF(tmp_mod_expr_right_27);
if (tmp_make_exception_arg_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;

    goto try_except_handler_79;
}
frame_frame_httpx$_exceptions->m_frame.f_lineno = 340;
tmp_raise_type_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_27);
CHECK_OBJECT(tmp_make_exception_arg_27);
Py_DECREF(tmp_make_exception_arg_27);
assert(!(tmp_raise_type_27 == NULL));
exception_state.exception_value = tmp_raise_type_27;
exception_lineno = 340;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_79;
}
branch_no_80:;
goto branch_end_79;
branch_no_79:;
{
PyObject *tmp_assign_source_217;
tmp_assign_source_217 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_27__prepared == NULL);
tmp_class_container$class_creation_27__prepared = tmp_assign_source_217;
}
branch_end_79:;
{
PyObject *tmp_assign_source_218;
outline_26_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_27;
CHECK_OBJECT(tmp_class_container$class_creation_27__prepared);
tmp_set_locals_27 = tmp_class_container$class_creation_27__prepared;
locals_httpx$_exceptions$$$class__27_ResponseNotRead_340 = tmp_set_locals_27;
Py_INCREF(tmp_set_locals_27);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_f49f37ecb12db2b9a869fd11ee8982d4;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__27_ResponseNotRead_340, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;

    goto try_except_handler_81;
}
tmp_dictset_value = mod_consts.const_str_digest_8b661f57fe8291f868b0f49608214bfe;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__27_ResponseNotRead_340, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;

    goto try_except_handler_81;
}
tmp_dictset_value = mod_consts.const_str_plain_ResponseNotRead;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__27_ResponseNotRead_340, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;

    goto try_except_handler_81;
}
tmp_dictset_value = mod_consts.const_int_pos_340;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__27_ResponseNotRead_340, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;

    goto try_except_handler_81;
}
frame_frame_httpx$_exceptions$$$class__27_ResponseNotRead_10 = MAKE_CLASS_FRAME(tstate, code_objects_1fc1d8577441b38470c40f979da4eea8, module_httpx$_exceptions, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_exceptions$$$class__27_ResponseNotRead_10);
assert(Py_REFCNT(frame_frame_httpx$_exceptions$$$class__27_ResponseNotRead_10) == 2);

// Framed code:
{
PyObject *tmp_annotations_11;
struct Nuitka_CellObject *tmp_closure_9[1];
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
tmp_closure_9[0] = outline_26_var___class__;
Py_INCREF(tmp_closure_9[0]);
tmp_dictset_value = MAKE_FUNCTION_httpx$_exceptions$$$function__11___init__(tstate, tmp_annotations_11, tmp_closure_9);

tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__27_ResponseNotRead_340, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_2 = "c";
    goto frame_exception_exit_10;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_9;
frame_exception_exit_10:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_exceptions$$$class__27_ResponseNotRead_10, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_exceptions$$$class__27_ResponseNotRead_10->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_exceptions$$$class__27_ResponseNotRead_10, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_exceptions$$$class__27_ResponseNotRead_10,
    type_description_2,
    outline_26_var___class__
);



assertFrameObject(frame_frame_httpx$_exceptions$$$class__27_ResponseNotRead_10);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_9;
frame_no_exception_9:;
goto skip_nested_handling_9;
nested_frame_exit_9:;

goto try_except_handler_81;
skip_nested_handling_9:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__27_ResponseNotRead_340, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;

    goto try_except_handler_81;
}
{
nuitka_bool tmp_condition_result_108;
PyObject *tmp_cmp_expr_left_27;
PyObject *tmp_cmp_expr_right_27;
CHECK_OBJECT(tmp_class_container$class_creation_27__bases);
tmp_cmp_expr_left_27 = tmp_class_container$class_creation_27__bases;
CHECK_OBJECT(tmp_class_container$class_creation_27__bases_orig);
tmp_cmp_expr_right_27 = tmp_class_container$class_creation_27__bases_orig;
tmp_condition_result_108 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_27, tmp_cmp_expr_right_27);
if (tmp_condition_result_108 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;

    goto try_except_handler_81;
}
if (tmp_condition_result_108 == NUITKA_BOOL_TRUE) {
    goto branch_yes_81;
} else {
    goto branch_no_81;
}
}
branch_yes_81:;
CHECK_OBJECT(tmp_class_container$class_creation_27__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_27__bases_orig;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__27_ResponseNotRead_340, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;

    goto try_except_handler_81;
}
branch_no_81:;
{
PyObject *tmp_assign_source_219;
PyObject *tmp_called_value_55;
PyObject *tmp_args_value_54;
PyObject *tmp_tuple_element_104;
PyObject *tmp_kwargs_value_54;
CHECK_OBJECT(tmp_class_container$class_creation_27__metaclass);
tmp_called_value_55 = tmp_class_container$class_creation_27__metaclass;
tmp_tuple_element_104 = mod_consts.const_str_plain_ResponseNotRead;
tmp_args_value_54 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_54, 0, tmp_tuple_element_104);
CHECK_OBJECT(tmp_class_container$class_creation_27__bases);
tmp_tuple_element_104 = tmp_class_container$class_creation_27__bases;
PyTuple_SET_ITEM0(tmp_args_value_54, 1, tmp_tuple_element_104);
tmp_tuple_element_104 = locals_httpx$_exceptions$$$class__27_ResponseNotRead_340;
PyTuple_SET_ITEM0(tmp_args_value_54, 2, tmp_tuple_element_104);
CHECK_OBJECT(tmp_class_container$class_creation_27__class_decl_dict);
tmp_kwargs_value_54 = tmp_class_container$class_creation_27__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 340;
tmp_assign_source_219 = CALL_FUNCTION(tstate, tmp_called_value_55, tmp_args_value_54, tmp_kwargs_value_54);
CHECK_OBJECT(tmp_args_value_54);
Py_DECREF(tmp_args_value_54);
if (tmp_assign_source_219 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;

    goto try_except_handler_81;
}
assert(Nuitka_Cell_GET(outline_26_var___class__) == NULL);
Nuitka_Cell_SET(outline_26_var___class__, tmp_assign_source_219);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_26_var___class__));
tmp_assign_source_218 = Nuitka_Cell_GET(outline_26_var___class__);
Py_INCREF(tmp_assign_source_218);
goto try_return_handler_81;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_81:;
Py_DECREF(locals_httpx$_exceptions$$$class__27_ResponseNotRead_340);
locals_httpx$_exceptions$$$class__27_ResponseNotRead_340 = NULL;
goto try_return_handler_80;
// Exception handler code:
try_except_handler_81:;
exception_keeper_lineno_79 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_79 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpx$_exceptions$$$class__27_ResponseNotRead_340);
locals_httpx$_exceptions$$$class__27_ResponseNotRead_340 = NULL;
// Re-raise.
exception_state = exception_keeper_name_79;
exception_lineno = exception_keeper_lineno_79;

goto try_except_handler_80;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_80:;
CHECK_OBJECT(outline_26_var___class__);
CHECK_OBJECT(outline_26_var___class__);
Py_DECREF(outline_26_var___class__);
outline_26_var___class__ = NULL;
goto outline_result_54;
// Exception handler code:
try_except_handler_80:;
exception_keeper_lineno_80 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_80 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_80;
exception_lineno = exception_keeper_lineno_80;

goto outline_exception_27;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_27:;
exception_lineno = 340;
goto try_except_handler_79;
outline_result_54:;
UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseNotRead, tmp_assign_source_218);
}
goto try_end_27;
// Exception handler code:
try_except_handler_79:;
exception_keeper_lineno_81 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_81 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_27__bases_orig);
tmp_class_container$class_creation_27__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_27__bases);
tmp_class_container$class_creation_27__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_27__class_decl_dict);
tmp_class_container$class_creation_27__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_27__metaclass);
tmp_class_container$class_creation_27__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_27__prepared);
tmp_class_container$class_creation_27__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_81;
exception_lineno = exception_keeper_lineno_81;

goto frame_exception_exit_1;
// End of try:
try_end_27:;
CHECK_OBJECT(tmp_class_container$class_creation_27__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_27__bases_orig);
Py_DECREF(tmp_class_container$class_creation_27__bases_orig);
tmp_class_container$class_creation_27__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_27__bases);
CHECK_OBJECT(tmp_class_container$class_creation_27__bases);
Py_DECREF(tmp_class_container$class_creation_27__bases);
tmp_class_container$class_creation_27__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_27__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_27__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_27__class_decl_dict);
tmp_class_container$class_creation_27__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_27__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_27__metaclass);
Py_DECREF(tmp_class_container$class_creation_27__metaclass);
tmp_class_container$class_creation_27__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_27__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_27__prepared);
Py_DECREF(tmp_class_container$class_creation_27__prepared);
tmp_class_container$class_creation_27__prepared = NULL;
tmp_outline_return_value_27 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_27);
goto outline_result_53;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_53:;
CHECK_OBJECT(tmp_outline_return_value_27);
Py_DECREF(tmp_outline_return_value_27);
}
{
PyObject *tmp_outline_return_value_28;
// Tried code:
{
PyObject *tmp_assign_source_220;
PyObject *tmp_tuple_element_105;
tmp_tuple_element_105 = module_var_accessor_httpx$_exceptions$StreamError(tstate);
if (unlikely(tmp_tuple_element_105 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_StreamError);
}

if (tmp_tuple_element_105 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 353;

    goto try_except_handler_82;
}
tmp_assign_source_220 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_220, 0, tmp_tuple_element_105);
assert(tmp_class_container$class_creation_28__bases_orig == NULL);
tmp_class_container$class_creation_28__bases_orig = tmp_assign_source_220;
}
{
PyObject *tmp_assign_source_221;
PyObject *tmp_direct_call_arg1_28;
CHECK_OBJECT(tmp_class_container$class_creation_28__bases_orig);
tmp_direct_call_arg1_28 = tmp_class_container$class_creation_28__bases_orig;
Py_INCREF(tmp_direct_call_arg1_28);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_28};
    tmp_assign_source_221 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_221 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;

    goto try_except_handler_82;
}
assert(tmp_class_container$class_creation_28__bases == NULL);
tmp_class_container$class_creation_28__bases = tmp_assign_source_221;
}
{
PyObject *tmp_assign_source_222;
tmp_assign_source_222 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_28__class_decl_dict == NULL);
tmp_class_container$class_creation_28__class_decl_dict = tmp_assign_source_222;
}
{
PyObject *tmp_assign_source_223;
PyObject *tmp_metaclass_value_28;
nuitka_bool tmp_condition_result_109;
int tmp_truth_name_28;
PyObject *tmp_type_arg_55;
PyObject *tmp_expression_value_163;
PyObject *tmp_subscript_value_28;
PyObject *tmp_bases_value_28;
CHECK_OBJECT(tmp_class_container$class_creation_28__bases);
tmp_truth_name_28 = CHECK_IF_TRUE(tmp_class_container$class_creation_28__bases);
if (tmp_truth_name_28 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;

    goto try_except_handler_82;
}
tmp_condition_result_109 = tmp_truth_name_28 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_109 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_28;
} else {
    goto condexpr_false_28;
}
condexpr_true_28:;
CHECK_OBJECT(tmp_class_container$class_creation_28__bases);
tmp_expression_value_163 = tmp_class_container$class_creation_28__bases;
tmp_subscript_value_28 = const_int_0;
tmp_type_arg_55 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_163, tmp_subscript_value_28, 0);
if (tmp_type_arg_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;

    goto try_except_handler_82;
}
tmp_metaclass_value_28 = BUILTIN_TYPE1(tmp_type_arg_55);
CHECK_OBJECT(tmp_type_arg_55);
Py_DECREF(tmp_type_arg_55);
if (tmp_metaclass_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;

    goto try_except_handler_82;
}
goto condexpr_end_28;
condexpr_false_28:;
tmp_metaclass_value_28 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_28);
condexpr_end_28:;
CHECK_OBJECT(tmp_class_container$class_creation_28__bases);
tmp_bases_value_28 = tmp_class_container$class_creation_28__bases;
tmp_assign_source_223 = SELECT_METACLASS(tstate, tmp_metaclass_value_28, tmp_bases_value_28);
CHECK_OBJECT(tmp_metaclass_value_28);
Py_DECREF(tmp_metaclass_value_28);
if (tmp_assign_source_223 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;

    goto try_except_handler_82;
}
assert(tmp_class_container$class_creation_28__metaclass == NULL);
tmp_class_container$class_creation_28__metaclass = tmp_assign_source_223;
}
{
bool tmp_condition_result_110;
PyObject *tmp_expression_value_164;
CHECK_OBJECT(tmp_class_container$class_creation_28__metaclass);
tmp_expression_value_164 = tmp_class_container$class_creation_28__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_164, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;

    goto try_except_handler_82;
}
tmp_condition_result_110 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_110 != false) {
    goto branch_yes_82;
} else {
    goto branch_no_82;
}
}
branch_yes_82:;
{
PyObject *tmp_assign_source_224;
PyObject *tmp_called_value_56;
PyObject *tmp_expression_value_165;
PyObject *tmp_args_value_55;
PyObject *tmp_tuple_element_106;
PyObject *tmp_kwargs_value_55;
CHECK_OBJECT(tmp_class_container$class_creation_28__metaclass);
tmp_expression_value_165 = tmp_class_container$class_creation_28__metaclass;
tmp_called_value_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_165, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;

    goto try_except_handler_82;
}
tmp_tuple_element_106 = mod_consts.const_str_plain_RequestNotRead;
tmp_args_value_55 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_55, 0, tmp_tuple_element_106);
CHECK_OBJECT(tmp_class_container$class_creation_28__bases);
tmp_tuple_element_106 = tmp_class_container$class_creation_28__bases;
PyTuple_SET_ITEM0(tmp_args_value_55, 1, tmp_tuple_element_106);
CHECK_OBJECT(tmp_class_container$class_creation_28__class_decl_dict);
tmp_kwargs_value_55 = tmp_class_container$class_creation_28__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 353;
tmp_assign_source_224 = CALL_FUNCTION(tstate, tmp_called_value_56, tmp_args_value_55, tmp_kwargs_value_55);
CHECK_OBJECT(tmp_called_value_56);
Py_DECREF(tmp_called_value_56);
CHECK_OBJECT(tmp_args_value_55);
Py_DECREF(tmp_args_value_55);
if (tmp_assign_source_224 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;

    goto try_except_handler_82;
}
assert(tmp_class_container$class_creation_28__prepared == NULL);
tmp_class_container$class_creation_28__prepared = tmp_assign_source_224;
}
{
bool tmp_condition_result_111;
PyObject *tmp_operand_value_28;
PyObject *tmp_expression_value_166;
CHECK_OBJECT(tmp_class_container$class_creation_28__prepared);
tmp_expression_value_166 = tmp_class_container$class_creation_28__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_166, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;

    goto try_except_handler_82;
}
tmp_operand_value_28 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_28);
assert(!(tmp_res == -1));
tmp_condition_result_111 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_111 != false) {
    goto branch_yes_83;
} else {
    goto branch_no_83;
}
}
branch_yes_83:;
{
PyObject *tmp_raise_type_28;
PyObject *tmp_make_exception_arg_28;
PyObject *tmp_mod_expr_left_28;
PyObject *tmp_mod_expr_right_28;
PyObject *tmp_tuple_element_107;
PyObject *tmp_expression_value_167;
PyObject *tmp_name_value_29;
PyObject *tmp_default_value_28;
tmp_mod_expr_left_28 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_28__metaclass);
tmp_expression_value_167 = tmp_class_container$class_creation_28__metaclass;
tmp_name_value_29 = const_str_plain___name__;
tmp_default_value_28 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_107 = BUILTIN_GETATTR(tstate, tmp_expression_value_167, tmp_name_value_29, tmp_default_value_28);
if (tmp_tuple_element_107 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;

    goto try_except_handler_82;
}
tmp_mod_expr_right_28 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_168;
PyObject *tmp_type_arg_56;
PyTuple_SET_ITEM(tmp_mod_expr_right_28, 0, tmp_tuple_element_107);
CHECK_OBJECT(tmp_class_container$class_creation_28__prepared);
tmp_type_arg_56 = tmp_class_container$class_creation_28__prepared;
tmp_expression_value_168 = BUILTIN_TYPE1(tmp_type_arg_56);
assert(!(tmp_expression_value_168 == NULL));
tmp_tuple_element_107 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_168, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_168);
Py_DECREF(tmp_expression_value_168);
if (tmp_tuple_element_107 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;

    goto tuple_build_exception_28;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_28, 1, tmp_tuple_element_107);
}
goto tuple_build_no_exception_28;
// Exception handling pass through code for tuple_build:
tuple_build_exception_28:;
Py_DECREF(tmp_mod_expr_right_28);
goto try_except_handler_82;
// Finished with no exception for tuple_build:
tuple_build_no_exception_28:;
tmp_make_exception_arg_28 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_28, tmp_mod_expr_right_28);
CHECK_OBJECT(tmp_mod_expr_right_28);
Py_DECREF(tmp_mod_expr_right_28);
if (tmp_make_exception_arg_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;

    goto try_except_handler_82;
}
frame_frame_httpx$_exceptions->m_frame.f_lineno = 353;
tmp_raise_type_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_28);
CHECK_OBJECT(tmp_make_exception_arg_28);
Py_DECREF(tmp_make_exception_arg_28);
assert(!(tmp_raise_type_28 == NULL));
exception_state.exception_value = tmp_raise_type_28;
exception_lineno = 353;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_82;
}
branch_no_83:;
goto branch_end_82;
branch_no_82:;
{
PyObject *tmp_assign_source_225;
tmp_assign_source_225 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_28__prepared == NULL);
tmp_class_container$class_creation_28__prepared = tmp_assign_source_225;
}
branch_end_82:;
{
PyObject *tmp_assign_source_226;
outline_27_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_28;
CHECK_OBJECT(tmp_class_container$class_creation_28__prepared);
tmp_set_locals_28 = tmp_class_container$class_creation_28__prepared;
locals_httpx$_exceptions$$$class__28_RequestNotRead_353 = tmp_set_locals_28;
Py_INCREF(tmp_set_locals_28);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_f49f37ecb12db2b9a869fd11ee8982d4;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__28_RequestNotRead_353, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;

    goto try_except_handler_84;
}
tmp_dictset_value = mod_consts.const_str_digest_c966b1f1e1a46929495f3b9d21304ad5;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__28_RequestNotRead_353, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;

    goto try_except_handler_84;
}
tmp_dictset_value = mod_consts.const_str_plain_RequestNotRead;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__28_RequestNotRead_353, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;

    goto try_except_handler_84;
}
tmp_dictset_value = mod_consts.const_int_pos_353;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__28_RequestNotRead_353, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;

    goto try_except_handler_84;
}
frame_frame_httpx$_exceptions$$$class__28_RequestNotRead_11 = MAKE_CLASS_FRAME(tstate, code_objects_26d1931c906d67d3385ce25db05eb29c, module_httpx$_exceptions, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_exceptions$$$class__28_RequestNotRead_11);
assert(Py_REFCNT(frame_frame_httpx$_exceptions$$$class__28_RequestNotRead_11) == 2);

// Framed code:
{
PyObject *tmp_annotations_12;
struct Nuitka_CellObject *tmp_closure_10[1];
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
tmp_closure_10[0] = outline_27_var___class__;
Py_INCREF(tmp_closure_10[0]);
tmp_dictset_value = MAKE_FUNCTION_httpx$_exceptions$$$function__12___init__(tstate, tmp_annotations_12, tmp_closure_10);

tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__28_RequestNotRead_353, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_2 = "c";
    goto frame_exception_exit_11;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_10;
frame_exception_exit_11:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_exceptions$$$class__28_RequestNotRead_11, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_exceptions$$$class__28_RequestNotRead_11->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_exceptions$$$class__28_RequestNotRead_11, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_exceptions$$$class__28_RequestNotRead_11,
    type_description_2,
    outline_27_var___class__
);



assertFrameObject(frame_frame_httpx$_exceptions$$$class__28_RequestNotRead_11);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_10;
frame_no_exception_10:;
goto skip_nested_handling_10;
nested_frame_exit_10:;

goto try_except_handler_84;
skip_nested_handling_10:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__28_RequestNotRead_353, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;

    goto try_except_handler_84;
}
{
nuitka_bool tmp_condition_result_112;
PyObject *tmp_cmp_expr_left_28;
PyObject *tmp_cmp_expr_right_28;
CHECK_OBJECT(tmp_class_container$class_creation_28__bases);
tmp_cmp_expr_left_28 = tmp_class_container$class_creation_28__bases;
CHECK_OBJECT(tmp_class_container$class_creation_28__bases_orig);
tmp_cmp_expr_right_28 = tmp_class_container$class_creation_28__bases_orig;
tmp_condition_result_112 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_28, tmp_cmp_expr_right_28);
if (tmp_condition_result_112 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;

    goto try_except_handler_84;
}
if (tmp_condition_result_112 == NUITKA_BOOL_TRUE) {
    goto branch_yes_84;
} else {
    goto branch_no_84;
}
}
branch_yes_84:;
CHECK_OBJECT(tmp_class_container$class_creation_28__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_28__bases_orig;
tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__28_RequestNotRead_353, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;

    goto try_except_handler_84;
}
branch_no_84:;
{
PyObject *tmp_assign_source_227;
PyObject *tmp_called_value_57;
PyObject *tmp_args_value_56;
PyObject *tmp_tuple_element_108;
PyObject *tmp_kwargs_value_56;
CHECK_OBJECT(tmp_class_container$class_creation_28__metaclass);
tmp_called_value_57 = tmp_class_container$class_creation_28__metaclass;
tmp_tuple_element_108 = mod_consts.const_str_plain_RequestNotRead;
tmp_args_value_56 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_56, 0, tmp_tuple_element_108);
CHECK_OBJECT(tmp_class_container$class_creation_28__bases);
tmp_tuple_element_108 = tmp_class_container$class_creation_28__bases;
PyTuple_SET_ITEM0(tmp_args_value_56, 1, tmp_tuple_element_108);
tmp_tuple_element_108 = locals_httpx$_exceptions$$$class__28_RequestNotRead_353;
PyTuple_SET_ITEM0(tmp_args_value_56, 2, tmp_tuple_element_108);
CHECK_OBJECT(tmp_class_container$class_creation_28__class_decl_dict);
tmp_kwargs_value_56 = tmp_class_container$class_creation_28__class_decl_dict;
frame_frame_httpx$_exceptions->m_frame.f_lineno = 353;
tmp_assign_source_227 = CALL_FUNCTION(tstate, tmp_called_value_57, tmp_args_value_56, tmp_kwargs_value_56);
CHECK_OBJECT(tmp_args_value_56);
Py_DECREF(tmp_args_value_56);
if (tmp_assign_source_227 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;

    goto try_except_handler_84;
}
assert(Nuitka_Cell_GET(outline_27_var___class__) == NULL);
Nuitka_Cell_SET(outline_27_var___class__, tmp_assign_source_227);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_27_var___class__));
tmp_assign_source_226 = Nuitka_Cell_GET(outline_27_var___class__);
Py_INCREF(tmp_assign_source_226);
goto try_return_handler_84;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_84:;
Py_DECREF(locals_httpx$_exceptions$$$class__28_RequestNotRead_353);
locals_httpx$_exceptions$$$class__28_RequestNotRead_353 = NULL;
goto try_return_handler_83;
// Exception handler code:
try_except_handler_84:;
exception_keeper_lineno_82 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_82 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpx$_exceptions$$$class__28_RequestNotRead_353);
locals_httpx$_exceptions$$$class__28_RequestNotRead_353 = NULL;
// Re-raise.
exception_state = exception_keeper_name_82;
exception_lineno = exception_keeper_lineno_82;

goto try_except_handler_83;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_83:;
CHECK_OBJECT(outline_27_var___class__);
CHECK_OBJECT(outline_27_var___class__);
Py_DECREF(outline_27_var___class__);
outline_27_var___class__ = NULL;
goto outline_result_56;
// Exception handler code:
try_except_handler_83:;
exception_keeper_lineno_83 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_83 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_83;
exception_lineno = exception_keeper_lineno_83;

goto outline_exception_28;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_28:;
exception_lineno = 353;
goto try_except_handler_82;
outline_result_56:;
UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestNotRead, tmp_assign_source_226);
}
goto try_end_28;
// Exception handler code:
try_except_handler_82:;
exception_keeper_lineno_84 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_84 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_28__bases_orig);
tmp_class_container$class_creation_28__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_28__bases);
tmp_class_container$class_creation_28__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_28__class_decl_dict);
tmp_class_container$class_creation_28__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_28__metaclass);
tmp_class_container$class_creation_28__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_28__prepared);
tmp_class_container$class_creation_28__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_84;
exception_lineno = exception_keeper_lineno_84;

goto frame_exception_exit_1;
// End of try:
try_end_28:;
CHECK_OBJECT(tmp_class_container$class_creation_28__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_28__bases_orig);
Py_DECREF(tmp_class_container$class_creation_28__bases_orig);
tmp_class_container$class_creation_28__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_28__bases);
CHECK_OBJECT(tmp_class_container$class_creation_28__bases);
Py_DECREF(tmp_class_container$class_creation_28__bases);
tmp_class_container$class_creation_28__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_28__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_28__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_28__class_decl_dict);
tmp_class_container$class_creation_28__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_28__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_28__metaclass);
Py_DECREF(tmp_class_container$class_creation_28__metaclass);
tmp_class_container$class_creation_28__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_28__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_28__prepared);
Py_DECREF(tmp_class_container$class_creation_28__prepared);
tmp_class_container$class_creation_28__prepared = NULL;
tmp_outline_return_value_28 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_28);
goto outline_result_55;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_55:;
CHECK_OBJECT(tmp_outline_return_value_28);
Py_DECREF(tmp_outline_return_value_28);
}
{
PyObject *tmp_assign_source_228;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_13;
tmp_called_instance_2 = module_var_accessor_httpx$_exceptions$contextlib(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_contextlib);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 366;

    goto frame_exception_exit_1;
}
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_bab236a8c7848c15b5bcd785773aece0);
Py_INCREF(tmp_defaults_1);

tmp_args_element_value_3 = MAKE_FUNCTION_httpx$_exceptions$$$function__13_request_context(tstate, tmp_defaults_1, tmp_annotations_13);

frame_frame_httpx$_exceptions->m_frame.f_lineno = 366;
tmp_assign_source_228 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_contextmanager, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_228 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 366;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_request_context, tmp_assign_source_228);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_11;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_exceptions, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_exceptions->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_exceptions, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_httpx$_exceptions);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_11:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("httpx$_exceptions", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "httpx._exceptions" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_httpx$_exceptions);
    return module_httpx$_exceptions;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("httpx$_exceptions", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

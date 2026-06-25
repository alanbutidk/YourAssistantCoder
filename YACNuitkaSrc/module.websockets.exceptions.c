/* Generated code for Python module 'websockets$exceptions'
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



/* The "module_websockets$exceptions" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_websockets$exceptions;
PyDictObject *moduledict_websockets$exceptions;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_rcvd;
PyObject *const_str_plain_sent;
PyObject *const_str_plain_rcvd_then_sent;
PyObject *const_str_digest_5ddd6692536f63cf398ded22f3ceedeb;
PyObject *const_str_digest_3822d5a14c4bab39ecec324d0360f680;
PyObject *const_str_digest_09518a89000b7483a56032a605497ffc;
PyObject *const_str_digest_3ea1de38a36c24234b32bb4d6c38a17b;
PyObject *const_str_digest_ea95935901e22bd46d0db3cccc946c64;
PyObject *const_str_digest_c0a790f470def3c8bfa377d2a2cb0cc5;
PyObject *const_str_digest_ac36378dc9b526c72f4c125a60fa90e5;
PyObject *const_str_plain_warnings;
PyObject *const_str_plain_warn;
PyObject *const_str_digest_b79277a3ba24f288152523547c2152ea;
PyObject *const_str_plain_DeprecationWarning;
PyObject *const_str_plain_frames;
PyObject *const_str_plain_CloseCode;
PyObject *const_str_plain_ABNORMAL_CLOSURE;
PyObject *const_str_plain_code;
PyObject *const_str_digest_abc41c5fc14940b327831ba85451b0ee;
PyObject *const_str_plain_reason;
PyObject *const_str_plain_uri;
PyObject *const_str_plain_msg;
PyObject *const_str_digest_57d577734fd0501684d3f85ec170b93a;
PyObject *const_str_plain_proxy;
PyObject *const_str_digest_d40f2f58fa9426f9b22e490b0a679a64;
PyObject *const_str_plain_response;
PyObject *const_str_digest_79d530a965241eb340f4eabbbb588953;
PyObject *const_str_plain_status_code;
PyObject *const_str_plain_d;
PyObject *const_str_digest_d1ea752403717de424c330c635fb09ea;
PyObject *const_str_plain_value;
PyObject *const_str_digest_969beca75f3ed53dbe7695a9921bc93d;
PyObject *const_str_digest_db9899258afd6463ba7799404d49e850;
PyObject *const_str_digest_c7b258c262ea3fed4984c6a52445a86c;
PyObject *const_str_digest_149ccab3e8869a939c31c2a8e4dda395;
PyObject *const_str_digest_7575a812ed39d1b8fef9f8f3a6eb3c0d;
PyObject *const_str_digest_4bda420df3ff9ab2e4df81f3792b6e09;
PyObject *const_str_digest_789430c10aaa72b7d685699173aceee7;
PyObject *const_str_plain_Origin;
PyObject *const_str_digest_898afe39c2502c9068d9fc0ea61da68f;
PyObject *const_str_digest_27ef182f129092279b4b3540cc2bff15;
PyObject *const_str_digest_efbd6fa0a5fcf4015862b2bf6bbe8d88;
PyObject *const_str_digest_0d31ce28f64edbc8698fd4f3106914b1;
PyObject *const_str_digest_2539f986e8baa8bba4653341b61c207f;
PyObject *const_str_digest_439d1398e2f3d2739cafa9b75372a63f;
PyObject *const_str_digest_5f018a64af8422794db9770d75d147ee;
PyObject *const_str_plain_message;
PyObject *const_str_plain_size;
PyObject *const_str_plain_max_size;
PyObject *const_str_plain_current_size;
PyObject *const_str_plain_set_current_size;
PyObject *const_str_digest_cd7f7b419d285e50a7c99aecb7a5961c;
PyObject *const_str_digest_d45ff9ccaa193a8d201b97c41d8e3497;
PyObject *const_str_digest_e74ece5b5076c0387cfb44d9dc3083a7;
PyObject *const_str_digest_ef40e52ea46d2d5784002192c3332439;
PyObject *const_str_digest_396dc30c99d6f397b06bba4c1f5b10b9;
PyObject *const_str_digest_4fa7efcb995c96024a30e4abe4b06064;
PyObject *const_str_digest_fce97af24dfd115307a199aaf3760644;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_imports;
PyObject *const_tuple_str_plain_lazy_import_tuple;
PyObject *const_str_plain_lazy_import;
PyObject *const_list_dd26408d1eaac394c9104f689b1819a6_list;
PyObject *const_tuple_type_Exception_tuple;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_WebSocketException;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_4ddd7fcb80f9d65673bce8553d39aa96;
PyObject *const_str_digest_9874b01600445be01e9ebd714a66f7c5;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_73;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_ConnectionClosed;
PyObject *const_str_digest_1802528dcf7200d4e0cb064b5d7fb66a;
PyObject *const_int_pos_80;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_b03d1d41bd56e1a1f6eb8889f07c4ef4;
PyObject *const_str_digest_1abab08ece5d0421385ad37ea7661fae;
PyObject *const_dict_e8d16ece775461636da8aedac2f07d6b;
PyObject *const_str_plain___str__;
PyObject *const_str_digest_99f5ec676735a873ab9d53752da5c455;
PyObject *const_str_plain_property;
PyObject *const_dict_85b825f4db9c19f334e726fd877a8261;
PyObject *const_str_digest_5baa5a99df20e78ac236e337d9040eac;
PyObject *const_str_digest_5aedef611991585126ba3fc7280f2033;
PyObject *const_tuple_str_plain_rcvd_str_plain_sent_str_plain_rcvd_then_sent_tuple;
PyObject *const_str_plain_ConnectionClosedOK;
PyObject *const_str_digest_46d67fc598415aff3501cd2dfd8c5be3;
PyObject *const_int_pos_146;
PyObject *const_str_plain_ConnectionClosedError;
PyObject *const_str_digest_ac0b8aa8849c3d015f1b6187fb5392fc;
PyObject *const_int_pos_156;
PyObject *const_str_plain_InvalidURI;
PyObject *const_str_digest_b8638bc186580ef2beb95eb6770137d5;
PyObject *const_int_pos_166;
PyObject *const_dict_b93f8f674c0108197b62e12916a39688;
PyObject *const_str_digest_2c404a94f1c4f410b0c57b8d8b70c29c;
PyObject *const_str_digest_bbcf02cba359f26b1e396a6a331d2a9c;
PyObject *const_tuple_str_plain_uri_str_plain_msg_tuple;
PyObject *const_str_plain_InvalidProxy;
PyObject *const_str_digest_575bdcd445841b07407d6666e62f52a9;
PyObject *const_int_pos_180;
PyObject *const_dict_f16d99b7f62d385734276f9ccc71ef32;
PyObject *const_str_digest_e3221b61a83e43dd098aecd29ecd769b;
PyObject *const_str_digest_dd9a459739491effc6822b788ce0d993;
PyObject *const_tuple_str_plain_proxy_str_plain_msg_tuple;
PyObject *const_str_plain_InvalidHandshake;
PyObject *const_str_digest_99a23b61d34295269a0bc5f30590aab0;
PyObject *const_int_pos_194;
PyObject *const_str_plain_SecurityError;
PyObject *const_str_digest_9199e8203977bd437e7c28d4d4e469d0;
PyObject *const_int_pos_201;
PyObject *const_str_plain_ProxyError;
PyObject *const_str_digest_4302af35b98c698caa7e375b87f1e27d;
PyObject *const_int_pos_211;
PyObject *const_str_plain_InvalidProxyMessage;
PyObject *const_str_digest_63be760c5d18e31b95087c17fb751455;
PyObject *const_int_pos_218;
PyObject *const_str_plain_InvalidProxyStatus;
PyObject *const_str_digest_c70f18162d8431e32590b7b8c0606d6d;
PyObject *const_int_pos_225;
PyObject *const_dict_7279d1772421c529c658bb03c844c147;
PyObject *const_str_digest_0d9ab8fb9331867b65027b3e68215062;
PyObject *const_str_digest_3016507a92906f1f180d9d2e1e0522e1;
PyObject *const_tuple_str_plain_response_tuple;
PyObject *const_str_plain_InvalidMessage;
PyObject *const_str_digest_a5f9e82043f49138e6728bdd2d71229c;
PyObject *const_int_pos_238;
PyObject *const_str_plain_InvalidStatus;
PyObject *const_str_digest_6d32eace8c982f3927cc1fe406922642;
PyObject *const_int_pos_245;
PyObject *const_str_digest_639726fb9506fa46843482c203abfcbf;
PyObject *const_str_digest_917ee890d64b5a8eba783bffd96e0852;
PyObject *const_str_plain_InvalidHeader;
PyObject *const_str_digest_a7b1765a56def8ab44dd507bf8989d52;
PyObject *const_int_pos_260;
PyObject *const_dict_7744c89851d4c08b756f2ae247325f55;
PyObject *const_str_digest_0c93f717a0a970ac34652eaaf1c6bd53;
PyObject *const_str_digest_5c4e39a6809f26d0dba9caa6d698f567;
PyObject *const_tuple_str_plain_name_str_plain_value_tuple;
PyObject *const_str_plain_InvalidHeaderFormat;
PyObject *const_str_digest_b5439b263fd6296b6141592c1542b486;
PyObject *const_int_pos_279;
PyObject *const_dict_8a958da2c0b29f334a8c20c0ff5a3e67;
PyObject *const_str_digest_9e22bbeda6633d097ed8c2452eb81da8;
PyObject *const_str_plain_InvalidHeaderValue;
PyObject *const_str_digest_63b66cb5fe1dfad83c4ea5525633e8cd;
PyObject *const_int_pos_291;
PyObject *const_str_plain_InvalidOrigin;
PyObject *const_str_digest_c0494952d3c40f6b39c148b929ef7222;
PyObject *const_int_pos_300;
PyObject *const_dict_db2ab5d1aface60a274f53bba0c27f0f;
PyObject *const_str_digest_58d3177420d7955967f035f56966aea8;
PyObject *const_str_plain_InvalidUpgrade;
PyObject *const_str_digest_e97abcddd6089ca7256e3614df93cb9c;
PyObject *const_int_pos_310;
PyObject *const_str_plain_NegotiationError;
PyObject *const_str_digest_bd0f78853a060bb25fbbadd6528e8274;
PyObject *const_int_pos_317;
PyObject *const_str_plain_DuplicateParameter;
PyObject *const_str_digest_b7f952ebdffd92575fb94b1cf852974b;
PyObject *const_int_pos_324;
PyObject *const_dict_b4dbf171e32ba52d1e21954b404db78a;
PyObject *const_str_digest_41261244a6da9b7ea5e2b7b9078e363d;
PyObject *const_str_digest_bf1af04c6f3c8605686e9818ca852c8f;
PyObject *const_tuple_str_plain_name_tuple;
PyObject *const_str_plain_InvalidParameterName;
PyObject *const_str_digest_5a99decb45e3342ed1326789996226bf;
PyObject *const_int_pos_337;
PyObject *const_str_digest_7ada1e6eb58232c13147c8d0a3f1b47f;
PyObject *const_str_digest_ab3ecb5fed121c21bce134cee44427f6;
PyObject *const_str_plain_InvalidParameterValue;
PyObject *const_str_digest_07ca39c7dfc2bfcd912bf41085b789d2;
PyObject *const_int_pos_350;
PyObject *const_str_digest_d562e807bcb1085ad3ec2460ab644971;
PyObject *const_str_digest_1c60190d3f2e76148ef214f5362f252d;
PyObject *const_str_plain_ProtocolError;
PyObject *const_str_digest_653668184d83883663197cffda2e7686;
PyObject *const_int_pos_369;
PyObject *const_str_plain_PayloadTooBig;
PyObject *const_str_digest_6df84fb5df66c174babb5b6190adff20;
PyObject *const_int_pos_381;
PyObject *const_tuple_none_none_tuple;
PyObject *const_dict_d84cd453391bb18a0d01dd89551c28c3;
PyObject *const_str_digest_9fecf7526e135375de04cd66de1319b1;
PyObject *const_str_digest_236ad245f84ca3383be66f1b003a7ec0;
PyObject *const_dict_a3d056fd32bd869615b2228b68f1d8fe;
PyObject *const_str_digest_54090fd987650ff97a68c24c2d9ca48b;
PyObject *const_tuple_ec0123b3f3affca81e2b417c786b765e_tuple;
PyObject *const_str_plain_InvalidState;
PyObject *const_str_digest_c6d48521d5ad277033c9e13f48a0db8c;
PyObject *const_int_pos_435;
PyObject *const_str_plain_ConcurrencyError;
PyObject *const_str_digest_a86d608fcd987eab5ff5a1ef07754a87;
PyObject *const_int_pos_450;
PyObject *const_tuple_str_plain_frames_str_plain_http11_tuple;
PyObject *const_str_plain_http11;
PyObject *const_dict_124cea7af0517060b79c08e4f311735f;
PyObject *const_str_digest_412f08c82be4fe59a4bedded4d447b87;
PyObject *const_str_digest_7255f097ab61e69c58a833e1f113a554;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_356641e471a0b5046fea9cc5ff56f70c_tuple;
PyObject *const_tuple_str_plain_self_str_plain_name_tuple;
PyObject *const_tuple_str_plain_self_str_plain_name_str_plain_value_tuple;
PyObject *const_tuple_f495c89169cf991e7108feaed1cb7364_tuple;
PyObject *const_tuple_str_plain_self_str_plain_origin_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_proxy_str_plain_msg_tuple;
PyObject *const_tuple_str_plain_self_str_plain_response_tuple;
PyObject *const_tuple_str_plain_self_str_plain_uri_str_plain_msg_tuple;
PyObject *const_tuple_0d37ee8fb5675d7f464621395d736dff_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_message_tuple;
PyObject *const_tuple_str_plain_self_str_plain_current_size_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[219];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("websockets.exceptions"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_rcvd);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_sent);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_rcvd_then_sent);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_5ddd6692536f63cf398ded22f3ceedeb);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_3822d5a14c4bab39ecec324d0360f680);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_09518a89000b7483a56032a605497ffc);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_3ea1de38a36c24234b32bb4d6c38a17b);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_ea95935901e22bd46d0db3cccc946c64);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_c0a790f470def3c8bfa377d2a2cb0cc5);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_digest_ac36378dc9b526c72f4c125a60fa90e5);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_warnings);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_warn);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_b79277a3ba24f288152523547c2152ea);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_DeprecationWarning);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_frames);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_CloseCode);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_ABNORMAL_CLOSURE);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_code);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_abc41c5fc14940b327831ba85451b0ee);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_reason);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_uri);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_msg);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_57d577734fd0501684d3f85ec170b93a);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_proxy);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_d40f2f58fa9426f9b22e490b0a679a64);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_response);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_79d530a965241eb340f4eabbbb588953);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_status_code);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_d);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_d1ea752403717de424c330c635fb09ea);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_value);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_969beca75f3ed53dbe7695a9921bc93d);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_db9899258afd6463ba7799404d49e850);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_c7b258c262ea3fed4984c6a52445a86c);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_149ccab3e8869a939c31c2a8e4dda395);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_7575a812ed39d1b8fef9f8f3a6eb3c0d);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_4bda420df3ff9ab2e4df81f3792b6e09);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_789430c10aaa72b7d685699173aceee7);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_Origin);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_898afe39c2502c9068d9fc0ea61da68f);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_27ef182f129092279b4b3540cc2bff15);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_efbd6fa0a5fcf4015862b2bf6bbe8d88);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_0d31ce28f64edbc8698fd4f3106914b1);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_2539f986e8baa8bba4653341b61c207f);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_439d1398e2f3d2739cafa9b75372a63f);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_5f018a64af8422794db9770d75d147ee);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_message);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_size);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_max_size);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_current_size);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_current_size);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_cd7f7b419d285e50a7c99aecb7a5961c);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_d45ff9ccaa193a8d201b97c41d8e3497);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_e74ece5b5076c0387cfb44d9dc3083a7);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_ef40e52ea46d2d5784002192c3332439);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_396dc30c99d6f397b06bba4c1f5b10b9);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_digest_4fa7efcb995c96024a30e4abe4b06064);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_fce97af24dfd115307a199aaf3760644);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_imports);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_lazy_import_tuple);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_lazy_import);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_list_dd26408d1eaac394c9104f689b1819a6_list);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_type_Exception_tuple);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_WebSocketException);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_4ddd7fcb80f9d65673bce8553d39aa96);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_9874b01600445be01e9ebd714a66f7c5);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_int_pos_73);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionClosed);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_1802528dcf7200d4e0cb064b5d7fb66a);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_int_pos_80);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_dict_b03d1d41bd56e1a1f6eb8889f07c4ef4);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_digest_1abab08ece5d0421385ad37ea7661fae);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain___str__);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_digest_99f5ec676735a873ab9d53752da5c455);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_digest_5baa5a99df20e78ac236e337d9040eac);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_5aedef611991585126ba3fc7280f2033);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_rcvd_str_plain_sent_str_plain_rcvd_then_sent_tuple);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionClosedOK);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_46d67fc598415aff3501cd2dfd8c5be3);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_int_pos_146);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionClosedError);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_digest_ac0b8aa8849c3d015f1b6187fb5392fc);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_int_pos_156);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidURI);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_b8638bc186580ef2beb95eb6770137d5);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_int_pos_166);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_dict_b93f8f674c0108197b62e12916a39688);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_digest_2c404a94f1c4f410b0c57b8d8b70c29c);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_digest_bbcf02cba359f26b1e396a6a331d2a9c);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_uri_str_plain_msg_tuple);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidProxy);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_digest_575bdcd445841b07407d6666e62f52a9);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_int_pos_180);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_dict_f16d99b7f62d385734276f9ccc71ef32);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_e3221b61a83e43dd098aecd29ecd769b);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_dd9a459739491effc6822b788ce0d993);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_proxy_str_plain_msg_tuple);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidHandshake);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_digest_99a23b61d34295269a0bc5f30590aab0);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_int_pos_194);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_SecurityError);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_digest_9199e8203977bd437e7c28d4d4e469d0);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_int_pos_201);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_ProxyError);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_digest_4302af35b98c698caa7e375b87f1e27d);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_int_pos_211);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidProxyMessage);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_digest_63be760c5d18e31b95087c17fb751455);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_int_pos_218);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidProxyStatus);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_digest_c70f18162d8431e32590b7b8c0606d6d);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_int_pos_225);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_dict_7279d1772421c529c658bb03c844c147);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_digest_0d9ab8fb9331867b65027b3e68215062);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_digest_3016507a92906f1f180d9d2e1e0522e1);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_response_tuple);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidMessage);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_digest_a5f9e82043f49138e6728bdd2d71229c);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_int_pos_238);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidStatus);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_digest_6d32eace8c982f3927cc1fe406922642);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_int_pos_245);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_digest_639726fb9506fa46843482c203abfcbf);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_digest_917ee890d64b5a8eba783bffd96e0852);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidHeader);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_digest_a7b1765a56def8ab44dd507bf8989d52);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_int_pos_260);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_dict_7744c89851d4c08b756f2ae247325f55);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_digest_0c93f717a0a970ac34652eaaf1c6bd53);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_digest_5c4e39a6809f26d0dba9caa6d698f567);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_name_str_plain_value_tuple);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidHeaderFormat);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_digest_b5439b263fd6296b6141592c1542b486);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_int_pos_279);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_dict_8a958da2c0b29f334a8c20c0ff5a3e67);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_digest_9e22bbeda6633d097ed8c2452eb81da8);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidHeaderValue);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_digest_63b66cb5fe1dfad83c4ea5525633e8cd);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_int_pos_291);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidOrigin);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_digest_c0494952d3c40f6b39c148b929ef7222);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_int_pos_300);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_dict_db2ab5d1aface60a274f53bba0c27f0f);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_digest_58d3177420d7955967f035f56966aea8);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidUpgrade);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_digest_e97abcddd6089ca7256e3614df93cb9c);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_int_pos_310);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain_NegotiationError);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_digest_bd0f78853a060bb25fbbadd6528e8274);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_int_pos_317);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain_DuplicateParameter);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_digest_b7f952ebdffd92575fb94b1cf852974b);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_int_pos_324);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_dict_b4dbf171e32ba52d1e21954b404db78a);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_digest_41261244a6da9b7ea5e2b7b9078e363d);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_digest_bf1af04c6f3c8605686e9818ca852c8f);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_name_tuple);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidParameterName);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_digest_5a99decb45e3342ed1326789996226bf);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_int_pos_337);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_digest_7ada1e6eb58232c13147c8d0a3f1b47f);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_digest_ab3ecb5fed121c21bce134cee44427f6);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidParameterValue);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_digest_07ca39c7dfc2bfcd912bf41085b789d2);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_int_pos_350);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_digest_d562e807bcb1085ad3ec2460ab644971);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_digest_1c60190d3f2e76148ef214f5362f252d);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_plain_ProtocolError);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_digest_653668184d83883663197cffda2e7686);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_int_pos_369);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_plain_PayloadTooBig);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_digest_6df84fb5df66c174babb5b6190adff20);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_int_pos_381);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_dict_d84cd453391bb18a0d01dd89551c28c3);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_digest_9fecf7526e135375de04cd66de1319b1);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_digest_236ad245f84ca3383be66f1b003a7ec0);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_dict_a3d056fd32bd869615b2228b68f1d8fe);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_digest_54090fd987650ff97a68c24c2d9ca48b);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_tuple_ec0123b3f3affca81e2b417c786b765e_tuple);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidState);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_digest_c6d48521d5ad277033c9e13f48a0db8c);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_int_pos_435);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConcurrencyError);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_str_digest_a86d608fcd987eab5ff5a1ef07754a87);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_int_pos_450);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_frames_str_plain_http11_tuple);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_str_plain_http11);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_dict_124cea7af0517060b79c08e4f311735f);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_digest_412f08c82be4fe59a4bedded4d447b87);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_digest_7255f097ab61e69c58a833e1f113a554);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_tuple_356641e471a0b5046fea9cc5ff56f70c_tuple);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_name_tuple);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_value_tuple);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_tuple_f495c89169cf991e7108feaed1cb7364_tuple);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_origin_str_plain___class___tuple);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_proxy_str_plain_msg_tuple);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_response_tuple);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_uri_str_plain_msg_tuple);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_tuple_0d37ee8fb5675d7f464621395d736dff_tuple);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_message_tuple);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_current_size_tuple);
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
void checkModuleConstants_websockets$exceptions(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_rcvd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rcvd);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_sent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sent);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_rcvd_then_sent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rcvd_then_sent);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_5ddd6692536f63cf398ded22f3ceedeb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5ddd6692536f63cf398ded22f3ceedeb);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_3822d5a14c4bab39ecec324d0360f680));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3822d5a14c4bab39ecec324d0360f680);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_09518a89000b7483a56032a605497ffc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_09518a89000b7483a56032a605497ffc);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_3ea1de38a36c24234b32bb4d6c38a17b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3ea1de38a36c24234b32bb4d6c38a17b);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_ea95935901e22bd46d0db3cccc946c64));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ea95935901e22bd46d0db3cccc946c64);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_c0a790f470def3c8bfa377d2a2cb0cc5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c0a790f470def3c8bfa377d2a2cb0cc5);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_digest_ac36378dc9b526c72f4c125a60fa90e5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ac36378dc9b526c72f4c125a60fa90e5);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_warnings));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warnings);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_warn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warn);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_b79277a3ba24f288152523547c2152ea));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b79277a3ba24f288152523547c2152ea);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_DeprecationWarning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DeprecationWarning);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_frames));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_frames);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_CloseCode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CloseCode);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_ABNORMAL_CLOSURE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ABNORMAL_CLOSURE);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_code));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_code);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_abc41c5fc14940b327831ba85451b0ee));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_abc41c5fc14940b327831ba85451b0ee);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_reason));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reason);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_uri));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_uri);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_msg));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_msg);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_57d577734fd0501684d3f85ec170b93a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_57d577734fd0501684d3f85ec170b93a);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_proxy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_proxy);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_d40f2f58fa9426f9b22e490b0a679a64));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d40f2f58fa9426f9b22e490b0a679a64);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_79d530a965241eb340f4eabbbb588953));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_79d530a965241eb340f4eabbbb588953);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_status_code));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_status_code);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_d));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_d);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_d1ea752403717de424c330c635fb09ea));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d1ea752403717de424c330c635fb09ea);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_value);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_969beca75f3ed53dbe7695a9921bc93d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_969beca75f3ed53dbe7695a9921bc93d);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_db9899258afd6463ba7799404d49e850));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_db9899258afd6463ba7799404d49e850);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_c7b258c262ea3fed4984c6a52445a86c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c7b258c262ea3fed4984c6a52445a86c);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_149ccab3e8869a939c31c2a8e4dda395));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_149ccab3e8869a939c31c2a8e4dda395);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_7575a812ed39d1b8fef9f8f3a6eb3c0d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7575a812ed39d1b8fef9f8f3a6eb3c0d);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_4bda420df3ff9ab2e4df81f3792b6e09));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4bda420df3ff9ab2e4df81f3792b6e09);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_789430c10aaa72b7d685699173aceee7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_789430c10aaa72b7d685699173aceee7);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_Origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Origin);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_898afe39c2502c9068d9fc0ea61da68f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_898afe39c2502c9068d9fc0ea61da68f);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_27ef182f129092279b4b3540cc2bff15));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_27ef182f129092279b4b3540cc2bff15);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_efbd6fa0a5fcf4015862b2bf6bbe8d88));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_efbd6fa0a5fcf4015862b2bf6bbe8d88);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_0d31ce28f64edbc8698fd4f3106914b1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0d31ce28f64edbc8698fd4f3106914b1);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_2539f986e8baa8bba4653341b61c207f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2539f986e8baa8bba4653341b61c207f);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_439d1398e2f3d2739cafa9b75372a63f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_439d1398e2f3d2739cafa9b75372a63f);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_5f018a64af8422794db9770d75d147ee));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5f018a64af8422794db9770d75d147ee);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_message));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_message);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_size);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_max_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max_size);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_current_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_current_size);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_current_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_current_size);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_cd7f7b419d285e50a7c99aecb7a5961c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cd7f7b419d285e50a7c99aecb7a5961c);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_d45ff9ccaa193a8d201b97c41d8e3497));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d45ff9ccaa193a8d201b97c41d8e3497);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_e74ece5b5076c0387cfb44d9dc3083a7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e74ece5b5076c0387cfb44d9dc3083a7);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_ef40e52ea46d2d5784002192c3332439));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ef40e52ea46d2d5784002192c3332439);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_396dc30c99d6f397b06bba4c1f5b10b9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_396dc30c99d6f397b06bba4c1f5b10b9);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_digest_4fa7efcb995c96024a30e4abe4b06064));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4fa7efcb995c96024a30e4abe4b06064);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_fce97af24dfd115307a199aaf3760644));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fce97af24dfd115307a199aaf3760644);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_imports));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_imports);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_lazy_import_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_lazy_import_tuple);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_lazy_import));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lazy_import);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_list_dd26408d1eaac394c9104f689b1819a6_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_dd26408d1eaac394c9104f689b1819a6_list);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_type_Exception_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_Exception_tuple);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_WebSocketException));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WebSocketException);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_4ddd7fcb80f9d65673bce8553d39aa96));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4ddd7fcb80f9d65673bce8553d39aa96);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_9874b01600445be01e9ebd714a66f7c5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9874b01600445be01e9ebd714a66f7c5);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_int_pos_73));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_73);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionClosed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConnectionClosed);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_1802528dcf7200d4e0cb064b5d7fb66a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1802528dcf7200d4e0cb064b5d7fb66a);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_int_pos_80));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_80);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_dict_b03d1d41bd56e1a1f6eb8889f07c4ef4));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b03d1d41bd56e1a1f6eb8889f07c4ef4);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_digest_1abab08ece5d0421385ad37ea7661fae));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1abab08ece5d0421385ad37ea7661fae);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain___str__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___str__);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_digest_99f5ec676735a873ab9d53752da5c455));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_99f5ec676735a873ab9d53752da5c455);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_property);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261));
CHECK_OBJECT_DEEP(mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_digest_5baa5a99df20e78ac236e337d9040eac));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5baa5a99df20e78ac236e337d9040eac);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_5aedef611991585126ba3fc7280f2033));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5aedef611991585126ba3fc7280f2033);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_rcvd_str_plain_sent_str_plain_rcvd_then_sent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_rcvd_str_plain_sent_str_plain_rcvd_then_sent_tuple);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionClosedOK));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConnectionClosedOK);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_46d67fc598415aff3501cd2dfd8c5be3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_46d67fc598415aff3501cd2dfd8c5be3);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_int_pos_146));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_146);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionClosedError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConnectionClosedError);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_digest_ac0b8aa8849c3d015f1b6187fb5392fc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ac0b8aa8849c3d015f1b6187fb5392fc);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_int_pos_156));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_156);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidURI));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidURI);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_b8638bc186580ef2beb95eb6770137d5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b8638bc186580ef2beb95eb6770137d5);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_int_pos_166));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_166);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_dict_b93f8f674c0108197b62e12916a39688));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b93f8f674c0108197b62e12916a39688);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_digest_2c404a94f1c4f410b0c57b8d8b70c29c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2c404a94f1c4f410b0c57b8d8b70c29c);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_digest_bbcf02cba359f26b1e396a6a331d2a9c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bbcf02cba359f26b1e396a6a331d2a9c);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_uri_str_plain_msg_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_uri_str_plain_msg_tuple);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidProxy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidProxy);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_digest_575bdcd445841b07407d6666e62f52a9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_575bdcd445841b07407d6666e62f52a9);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_int_pos_180));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_180);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_dict_f16d99b7f62d385734276f9ccc71ef32));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f16d99b7f62d385734276f9ccc71ef32);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_e3221b61a83e43dd098aecd29ecd769b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e3221b61a83e43dd098aecd29ecd769b);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_dd9a459739491effc6822b788ce0d993));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dd9a459739491effc6822b788ce0d993);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_proxy_str_plain_msg_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_proxy_str_plain_msg_tuple);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidHandshake));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidHandshake);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_digest_99a23b61d34295269a0bc5f30590aab0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_99a23b61d34295269a0bc5f30590aab0);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_int_pos_194));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_194);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_SecurityError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SecurityError);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_digest_9199e8203977bd437e7c28d4d4e469d0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9199e8203977bd437e7c28d4d4e469d0);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_int_pos_201));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_201);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_ProxyError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ProxyError);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_digest_4302af35b98c698caa7e375b87f1e27d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4302af35b98c698caa7e375b87f1e27d);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_int_pos_211));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_211);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidProxyMessage));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidProxyMessage);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_digest_63be760c5d18e31b95087c17fb751455));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_63be760c5d18e31b95087c17fb751455);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_int_pos_218));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_218);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidProxyStatus));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidProxyStatus);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_digest_c70f18162d8431e32590b7b8c0606d6d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c70f18162d8431e32590b7b8c0606d6d);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_int_pos_225));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_225);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_dict_7279d1772421c529c658bb03c844c147));
CHECK_OBJECT_DEEP(mod_consts.const_dict_7279d1772421c529c658bb03c844c147);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_digest_0d9ab8fb9331867b65027b3e68215062));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0d9ab8fb9331867b65027b3e68215062);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_digest_3016507a92906f1f180d9d2e1e0522e1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3016507a92906f1f180d9d2e1e0522e1);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_response_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_response_tuple);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidMessage));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidMessage);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_digest_a5f9e82043f49138e6728bdd2d71229c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a5f9e82043f49138e6728bdd2d71229c);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_int_pos_238));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_238);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidStatus));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidStatus);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_digest_6d32eace8c982f3927cc1fe406922642));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6d32eace8c982f3927cc1fe406922642);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_int_pos_245));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_245);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_digest_639726fb9506fa46843482c203abfcbf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_639726fb9506fa46843482c203abfcbf);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_digest_917ee890d64b5a8eba783bffd96e0852));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_917ee890d64b5a8eba783bffd96e0852);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidHeader));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidHeader);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_digest_a7b1765a56def8ab44dd507bf8989d52));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a7b1765a56def8ab44dd507bf8989d52);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_int_pos_260));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_260);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_dict_7744c89851d4c08b756f2ae247325f55));
CHECK_OBJECT_DEEP(mod_consts.const_dict_7744c89851d4c08b756f2ae247325f55);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_digest_0c93f717a0a970ac34652eaaf1c6bd53));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0c93f717a0a970ac34652eaaf1c6bd53);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_digest_5c4e39a6809f26d0dba9caa6d698f567));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5c4e39a6809f26d0dba9caa6d698f567);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_name_str_plain_value_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_name_str_plain_value_tuple);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidHeaderFormat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidHeaderFormat);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_digest_b5439b263fd6296b6141592c1542b486));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b5439b263fd6296b6141592c1542b486);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_int_pos_279));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_279);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_dict_8a958da2c0b29f334a8c20c0ff5a3e67));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8a958da2c0b29f334a8c20c0ff5a3e67);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_digest_9e22bbeda6633d097ed8c2452eb81da8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9e22bbeda6633d097ed8c2452eb81da8);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidHeaderValue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidHeaderValue);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_digest_63b66cb5fe1dfad83c4ea5525633e8cd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_63b66cb5fe1dfad83c4ea5525633e8cd);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_int_pos_291));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_291);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidOrigin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidOrigin);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_digest_c0494952d3c40f6b39c148b929ef7222));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c0494952d3c40f6b39c148b929ef7222);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_int_pos_300));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_300);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_dict_db2ab5d1aface60a274f53bba0c27f0f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_db2ab5d1aface60a274f53bba0c27f0f);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_digest_58d3177420d7955967f035f56966aea8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_58d3177420d7955967f035f56966aea8);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidUpgrade));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidUpgrade);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_digest_e97abcddd6089ca7256e3614df93cb9c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e97abcddd6089ca7256e3614df93cb9c);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_int_pos_310));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_310);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain_NegotiationError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NegotiationError);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_digest_bd0f78853a060bb25fbbadd6528e8274));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bd0f78853a060bb25fbbadd6528e8274);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_int_pos_317));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_317);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain_DuplicateParameter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DuplicateParameter);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_digest_b7f952ebdffd92575fb94b1cf852974b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b7f952ebdffd92575fb94b1cf852974b);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_int_pos_324));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_324);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_dict_b4dbf171e32ba52d1e21954b404db78a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b4dbf171e32ba52d1e21954b404db78a);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_digest_41261244a6da9b7ea5e2b7b9078e363d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_41261244a6da9b7ea5e2b7b9078e363d);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_digest_bf1af04c6f3c8605686e9818ca852c8f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bf1af04c6f3c8605686e9818ca852c8f);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_name_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_name_tuple);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidParameterName));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidParameterName);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_digest_5a99decb45e3342ed1326789996226bf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5a99decb45e3342ed1326789996226bf);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_int_pos_337));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_337);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_digest_7ada1e6eb58232c13147c8d0a3f1b47f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7ada1e6eb58232c13147c8d0a3f1b47f);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_digest_ab3ecb5fed121c21bce134cee44427f6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ab3ecb5fed121c21bce134cee44427f6);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidParameterValue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidParameterValue);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_digest_07ca39c7dfc2bfcd912bf41085b789d2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_07ca39c7dfc2bfcd912bf41085b789d2);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_int_pos_350));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_350);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_digest_d562e807bcb1085ad3ec2460ab644971));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d562e807bcb1085ad3ec2460ab644971);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_digest_1c60190d3f2e76148ef214f5362f252d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1c60190d3f2e76148ef214f5362f252d);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_plain_ProtocolError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ProtocolError);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_digest_653668184d83883663197cffda2e7686));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_653668184d83883663197cffda2e7686);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_int_pos_369));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_369);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_plain_PayloadTooBig));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PayloadTooBig);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_digest_6df84fb5df66c174babb5b6190adff20));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6df84fb5df66c174babb5b6190adff20);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_int_pos_381));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_381);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_tuple);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_dict_d84cd453391bb18a0d01dd89551c28c3));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d84cd453391bb18a0d01dd89551c28c3);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_digest_9fecf7526e135375de04cd66de1319b1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9fecf7526e135375de04cd66de1319b1);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_digest_236ad245f84ca3383be66f1b003a7ec0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_236ad245f84ca3383be66f1b003a7ec0);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_dict_a3d056fd32bd869615b2228b68f1d8fe));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a3d056fd32bd869615b2228b68f1d8fe);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_digest_54090fd987650ff97a68c24c2d9ca48b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_54090fd987650ff97a68c24c2d9ca48b);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_tuple_ec0123b3f3affca81e2b417c786b765e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ec0123b3f3affca81e2b417c786b765e_tuple);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidState));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidState);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_digest_c6d48521d5ad277033c9e13f48a0db8c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c6d48521d5ad277033c9e13f48a0db8c);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_int_pos_435));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_435);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConcurrencyError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConcurrencyError);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_str_digest_a86d608fcd987eab5ff5a1ef07754a87));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a86d608fcd987eab5ff5a1ef07754a87);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_int_pos_450));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_450);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_frames_str_plain_http11_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_frames_str_plain_http11_tuple);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_str_plain_http11));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_http11);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_dict_124cea7af0517060b79c08e4f311735f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_124cea7af0517060b79c08e4f311735f);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_digest_412f08c82be4fe59a4bedded4d447b87));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_412f08c82be4fe59a4bedded4d447b87);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_digest_7255f097ab61e69c58a833e1f113a554));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7255f097ab61e69c58a833e1f113a554);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_tuple_356641e471a0b5046fea9cc5ff56f70c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_356641e471a0b5046fea9cc5ff56f70c_tuple);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_name_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_name_tuple);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_value_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_value_tuple);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_tuple_f495c89169cf991e7108feaed1cb7364_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f495c89169cf991e7108feaed1cb7364_tuple);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_origin_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_origin_str_plain___class___tuple);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_proxy_str_plain_msg_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_proxy_str_plain_msg_tuple);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_response_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_response_tuple);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_uri_str_plain_msg_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_uri_str_plain_msg_tuple);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_tuple_0d37ee8fb5675d7f464621395d736dff_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0d37ee8fb5675d7f464621395d736dff_tuple);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_message_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_message_tuple);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_current_size_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_current_size_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 11
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
static PyObject *module_var_accessor_websockets$exceptions$ConnectionClosed(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$exceptions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$exceptions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionClosed);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$exceptions->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionClosed);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionClosed);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionClosed);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$exceptions$DeprecationWarning(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$exceptions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$exceptions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$exceptions->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$exceptions$InvalidHandshake(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$exceptions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$exceptions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidHandshake);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$exceptions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InvalidHandshake);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InvalidHandshake, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InvalidHandshake);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InvalidHandshake, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidHandshake);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidHandshake);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidHandshake);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$exceptions$InvalidHeader(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$exceptions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$exceptions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidHeader);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$exceptions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InvalidHeader);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InvalidHeader, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InvalidHeader);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InvalidHeader, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidHeader);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidHeader);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidHeader);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$exceptions$NegotiationError(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$exceptions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$exceptions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_NegotiationError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$exceptions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NegotiationError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NegotiationError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NegotiationError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NegotiationError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_NegotiationError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_NegotiationError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_NegotiationError);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$exceptions$ProxyError(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$exceptions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$exceptions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$exceptions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ProxyError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ProxyError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ProxyError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ProxyError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyError);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$exceptions$WebSocketException(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$exceptions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$exceptions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_WebSocketException);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$exceptions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WebSocketException);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WebSocketException, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WebSocketException);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WebSocketException, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_WebSocketException);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_WebSocketException);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_WebSocketException);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$exceptions$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$exceptions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$exceptions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$exceptions->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$exceptions$frames(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$exceptions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$exceptions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_frames);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$exceptions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_frames);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_frames, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_frames);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_frames, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_frames);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_frames);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_frames);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$exceptions$lazy_import(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$exceptions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$exceptions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_lazy_import);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$exceptions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lazy_import);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lazy_import, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lazy_import);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lazy_import, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_lazy_import);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_lazy_import);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_lazy_import);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$exceptions$warnings(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$exceptions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$exceptions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$exceptions->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_1fd1b41cc23071a639ed47cc01109b9d;
static PyCodeObject *code_objects_cf7eb7055b26868e7ebaa9dfc7ac16be;
static PyCodeObject *code_objects_33c9ac3818196952631eaab65b16d6fa;
static PyCodeObject *code_objects_32809f3bed7ce31542abe4460f522ce0;
static PyCodeObject *code_objects_8b9d2605875c4e1e8cc278148c39bdfd;
static PyCodeObject *code_objects_355faad5e6843c2491031a84e7f0607a;
static PyCodeObject *code_objects_cd954f073a1ff0ef59cadd5e6604caf0;
static PyCodeObject *code_objects_85f5b8f179b1916001e00f7a1124b01e;
static PyCodeObject *code_objects_26d0a93c6290cda50757ab7e2fb95727;
static PyCodeObject *code_objects_d61c9f9ede207353bb184f8a38ba0468;
static PyCodeObject *code_objects_d33a3b84d31f6e2623f70b313824461e;
static PyCodeObject *code_objects_f2b7b152c019fe467a59913bec0d2567;
static PyCodeObject *code_objects_14037143a340fd7c1dc896e2d3d43615;
static PyCodeObject *code_objects_246a7b123ab2b2321b13af097aff5a9a;
static PyCodeObject *code_objects_8abd6457f212ea30ae3b88225cb3cd0a;
static PyCodeObject *code_objects_2376623826d7665546ad197c6935eec3;
static PyCodeObject *code_objects_fda658dd426db65a0b280ef7cba8f588;
static PyCodeObject *code_objects_7e8af0de392281de66081414e7c3eb89;
static PyCodeObject *code_objects_d5589bbd16f50c9d6cf808f629f40ba0;
static PyCodeObject *code_objects_12b09c6c455fc9af5b63f949dd9d20df;
static PyCodeObject *code_objects_7b16a32a7969c529d961752b8168274e;
static PyCodeObject *code_objects_ee88baf0b7a37e96e6e6e77a1fd0580d;
static PyCodeObject *code_objects_972cb3410645a40112d6faa98dd84d4c;
static PyCodeObject *code_objects_152c5e7ef129cc40460dbebf6da5d8a3;
static PyCodeObject *code_objects_459cadea1eecac366c03e0a9a504d41f;
static PyCodeObject *code_objects_14460883d8d3e5611f00012f0c73332e;
static PyCodeObject *code_objects_0bd09a486318331bb3dd63a2fafbca5e;
static PyCodeObject *code_objects_c08251a3762e5fcd697b10b9d0288de8;
static PyCodeObject *code_objects_58b817502606124b99d2c21b1e84fdff;
static PyCodeObject *code_objects_8aa192c2110baa2996821d35d49473e6;
static PyCodeObject *code_objects_4125c2c65c4db8594fa8b12c3d382db7;
static PyCodeObject *code_objects_560b256fe856b918f2df2a7bc7eefb13;
static PyCodeObject *code_objects_3ae2dc275e9bb0713540114971469fd8;
static PyCodeObject *code_objects_8033465a674ffdf4004226e7e138c58d;
static PyCodeObject *code_objects_824be1add127f1c5fb03b39917afdd8b;
static PyCodeObject *code_objects_a876c2679f4bbbc479080611a3e0c5b0;
static PyCodeObject *code_objects_b292e5a1bc73403db3f6fe884373f651;
static PyCodeObject *code_objects_f1b6df4c2b547f8ad50e29d04ad683b5;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_412f08c82be4fe59a4bedded4d447b87); CHECK_OBJECT(module_filename_obj);
code_objects_1fd1b41cc23071a639ed47cc01109b9d = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_7255f097ab61e69c58a833e1f113a554, mod_consts.const_str_digest_7255f097ab61e69c58a833e1f113a554, NULL, NULL, 0, 0, 0);
code_objects_cf7eb7055b26868e7ebaa9dfc7ac16be = MAKE_CODE_OBJECT(module_filename_obj, 80, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ConnectionClosed, mod_consts.const_str_plain_ConnectionClosed, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_33c9ac3818196952631eaab65b16d6fa = MAKE_CODE_OBJECT(module_filename_obj, 324, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_DuplicateParameter, mod_consts.const_str_plain_DuplicateParameter, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_32809f3bed7ce31542abe4460f522ce0 = MAKE_CODE_OBJECT(module_filename_obj, 260, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_InvalidHeader, mod_consts.const_str_plain_InvalidHeader, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_8b9d2605875c4e1e8cc278148c39bdfd = MAKE_CODE_OBJECT(module_filename_obj, 279, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_InvalidHeaderFormat, mod_consts.const_str_plain_InvalidHeaderFormat, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_355faad5e6843c2491031a84e7f0607a = MAKE_CODE_OBJECT(module_filename_obj, 300, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_InvalidOrigin, mod_consts.const_str_plain_InvalidOrigin, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_cd954f073a1ff0ef59cadd5e6604caf0 = MAKE_CODE_OBJECT(module_filename_obj, 337, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_InvalidParameterName, mod_consts.const_str_plain_InvalidParameterName, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_85f5b8f179b1916001e00f7a1124b01e = MAKE_CODE_OBJECT(module_filename_obj, 350, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_InvalidParameterValue, mod_consts.const_str_plain_InvalidParameterValue, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_26d0a93c6290cda50757ab7e2fb95727 = MAKE_CODE_OBJECT(module_filename_obj, 180, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_InvalidProxy, mod_consts.const_str_plain_InvalidProxy, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_d61c9f9ede207353bb184f8a38ba0468 = MAKE_CODE_OBJECT(module_filename_obj, 225, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_InvalidProxyStatus, mod_consts.const_str_plain_InvalidProxyStatus, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_d33a3b84d31f6e2623f70b313824461e = MAKE_CODE_OBJECT(module_filename_obj, 245, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_InvalidStatus, mod_consts.const_str_plain_InvalidStatus, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_f2b7b152c019fe467a59913bec0d2567 = MAKE_CODE_OBJECT(module_filename_obj, 166, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_InvalidURI, mod_consts.const_str_plain_InvalidURI, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_14037143a340fd7c1dc896e2d3d43615 = MAKE_CODE_OBJECT(module_filename_obj, 381, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_PayloadTooBig, mod_consts.const_str_plain_PayloadTooBig, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_246a7b123ab2b2321b13af097aff5a9a = MAKE_CODE_OBJECT(module_filename_obj, 95, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_1abab08ece5d0421385ad37ea7661fae, mod_consts.const_tuple_356641e471a0b5046fea9cc5ff56f70c_tuple, NULL, 4, 0, 0);
code_objects_8abd6457f212ea30ae3b88225cb3cd0a = MAKE_CODE_OBJECT(module_filename_obj, 330, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_41261244a6da9b7ea5e2b7b9078e363d, mod_consts.const_tuple_str_plain_self_str_plain_name_tuple, NULL, 2, 0, 0);
code_objects_2376623826d7665546ad197c6935eec3 = MAKE_CODE_OBJECT(module_filename_obj, 266, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_0c93f717a0a970ac34652eaaf1c6bd53, mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_value_tuple, NULL, 3, 0, 0);
code_objects_fda658dd426db65a0b280ef7cba8f588 = MAKE_CODE_OBJECT(module_filename_obj, 287, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_9e22bbeda6633d097ed8c2452eb81da8, mod_consts.const_tuple_f495c89169cf991e7108feaed1cb7364_tuple, mod_consts.const_tuple_str_plain___class___tuple, 5, 0, 0);
code_objects_7e8af0de392281de66081414e7c3eb89 = MAKE_CODE_OBJECT(module_filename_obj, 306, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_58d3177420d7955967f035f56966aea8, mod_consts.const_tuple_str_plain_self_str_plain_origin_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 2, 0, 0);
code_objects_d5589bbd16f50c9d6cf808f629f40ba0 = MAKE_CODE_OBJECT(module_filename_obj, 343, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_7ada1e6eb58232c13147c8d0a3f1b47f, mod_consts.const_tuple_str_plain_self_str_plain_name_tuple, NULL, 2, 0, 0);
code_objects_12b09c6c455fc9af5b63f949dd9d20df = MAKE_CODE_OBJECT(module_filename_obj, 356, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_d562e807bcb1085ad3ec2460ab644971, mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_value_tuple, NULL, 3, 0, 0);
code_objects_7b16a32a7969c529d961752b8168274e = MAKE_CODE_OBJECT(module_filename_obj, 186, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_e3221b61a83e43dd098aecd29ecd769b, mod_consts.const_tuple_str_plain_self_str_plain_proxy_str_plain_msg_tuple, NULL, 3, 0, 0);
code_objects_ee88baf0b7a37e96e6e6e77a1fd0580d = MAKE_CODE_OBJECT(module_filename_obj, 231, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_0d9ab8fb9331867b65027b3e68215062, mod_consts.const_tuple_str_plain_self_str_plain_response_tuple, NULL, 2, 0, 0);
code_objects_972cb3410645a40112d6faa98dd84d4c = MAKE_CODE_OBJECT(module_filename_obj, 251, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_639726fb9506fa46843482c203abfcbf, mod_consts.const_tuple_str_plain_self_str_plain_response_tuple, NULL, 2, 0, 0);
code_objects_152c5e7ef129cc40460dbebf6da5d8a3 = MAKE_CODE_OBJECT(module_filename_obj, 172, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_2c404a94f1c4f410b0c57b8d8b70c29c, mod_consts.const_tuple_str_plain_self_str_plain_uri_str_plain_msg_tuple, NULL, 3, 0, 0);
code_objects_459cadea1eecac366c03e0a9a504d41f = MAKE_CODE_OBJECT(module_filename_obj, 393, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_9fecf7526e135375de04cd66de1319b1, mod_consts.const_tuple_0d37ee8fb5675d7f464621395d736dff_tuple, NULL, 4, 0, 0);
code_objects_14460883d8d3e5611f00012f0c73332e = MAKE_CODE_OBJECT(module_filename_obj, 106, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___str__, mod_consts.const_str_digest_99f5ec676735a873ab9d53752da5c455, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_0bd09a486318331bb3dd63a2fafbca5e = MAKE_CODE_OBJECT(module_filename_obj, 333, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___str__, mod_consts.const_str_digest_bf1af04c6f3c8605686e9818ca852c8f, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_c08251a3762e5fcd697b10b9d0288de8 = MAKE_CODE_OBJECT(module_filename_obj, 270, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___str__, mod_consts.const_str_digest_5c4e39a6809f26d0dba9caa6d698f567, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_58b817502606124b99d2c21b1e84fdff = MAKE_CODE_OBJECT(module_filename_obj, 346, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___str__, mod_consts.const_str_digest_ab3ecb5fed121c21bce134cee44427f6, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_8aa192c2110baa2996821d35d49473e6 = MAKE_CODE_OBJECT(module_filename_obj, 360, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___str__, mod_consts.const_str_digest_1c60190d3f2e76148ef214f5362f252d, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_4125c2c65c4db8594fa8b12c3d382db7 = MAKE_CODE_OBJECT(module_filename_obj, 190, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___str__, mod_consts.const_str_digest_dd9a459739491effc6822b788ce0d993, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_560b256fe856b918f2df2a7bc7eefb13 = MAKE_CODE_OBJECT(module_filename_obj, 234, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___str__, mod_consts.const_str_digest_3016507a92906f1f180d9d2e1e0522e1, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_3ae2dc275e9bb0713540114971469fd8 = MAKE_CODE_OBJECT(module_filename_obj, 254, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___str__, mod_consts.const_str_digest_917ee890d64b5a8eba783bffd96e0852, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_8033465a674ffdf4004226e7e138c58d = MAKE_CODE_OBJECT(module_filename_obj, 176, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___str__, mod_consts.const_str_digest_bbcf02cba359f26b1e396a6a331d2a9c, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_824be1add127f1c5fb03b39917afdd8b = MAKE_CODE_OBJECT(module_filename_obj, 416, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___str__, mod_consts.const_str_digest_236ad245f84ca3383be66f1b003a7ec0, mod_consts.const_tuple_str_plain_self_str_plain_message_tuple, NULL, 1, 0, 0);
code_objects_a876c2679f4bbbc479080611a3e0c5b0 = MAKE_CODE_OBJECT(module_filename_obj, 124, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_code, mod_consts.const_str_digest_5baa5a99df20e78ac236e337d9040eac, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_b292e5a1bc73403db3f6fe884373f651 = MAKE_CODE_OBJECT(module_filename_obj, 135, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_reason, mod_consts.const_str_digest_5aedef611991585126ba3fc7280f2033, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_f1b6df4c2b547f8ad50e29d04ad683b5 = MAKE_CODE_OBJECT(module_filename_obj, 428, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_set_current_size, mod_consts.const_str_digest_54090fd987650ff97a68c24c2d9ca48b, mod_consts.const_tuple_str_plain_self_str_plain_current_size_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__10___str__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__11___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__12___str__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__13___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__14___str__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__15___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__16___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__17___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__18___str__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__19___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__1___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__20___str__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__21___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__22___str__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__23___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__24___str__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__25_set_current_size(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__2___str__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__3_code(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__4_reason(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__5___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__6___str__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__7___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__8___str__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__9___init__(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_websockets$exceptions$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_rcvd = python_pars[1];
PyObject *par_sent = python_pars[2];
PyObject *par_rcvd_then_sent = python_pars[3];
struct Nuitka_FrameObject *frame_frame_websockets$exceptions$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$exceptions$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$exceptions$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_websockets$exceptions$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$exceptions$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$exceptions$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_246a7b123ab2b2321b13af097aff5a9a, module_websockets$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$exceptions$$$function__1___init__->m_type_description == NULL);
frame_frame_websockets$exceptions$$$function__1___init__ = cache_frame_frame_websockets$exceptions$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$exceptions$$$function__1___init__);
assert(Py_REFCNT(frame_frame_websockets$exceptions$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_rcvd);
tmp_assattr_value_1 = par_rcvd;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_rcvd, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_sent);
tmp_assattr_value_2 = par_sent;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_sent, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_rcvd_then_sent);
tmp_assattr_value_3 = par_rcvd_then_sent;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_rcvd_then_sent, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_rcvd_then_sent);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_cmp_expr_left_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? Py_True : Py_False;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_rcvd);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_or_left_value_1 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? Py_True : Py_False;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_sent);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = Py_None;
tmp_or_right_value_1 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? Py_True : Py_False;
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
tmp_cmp_expr_right_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_cmp_expr_right_1 = tmp_or_left_value_1;
or_end_1:;
tmp_operand_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
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
frame_frame_websockets$exceptions$$$function__1___init__->m_frame.f_lineno = 104;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 104;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$exceptions$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$exceptions$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$exceptions$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$exceptions$$$function__1___init__,
    type_description_1,
    par_self,
    par_rcvd,
    par_sent,
    par_rcvd_then_sent
);


// Release cached frame if used for exception.
if (frame_frame_websockets$exceptions$$$function__1___init__ == cache_frame_frame_websockets$exceptions$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$exceptions$$$function__1___init__);
    cache_frame_frame_websockets$exceptions$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_websockets$exceptions$$$function__1___init__);

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
CHECK_OBJECT(par_rcvd);
Py_DECREF(par_rcvd);
CHECK_OBJECT(par_sent);
Py_DECREF(par_sent);
CHECK_OBJECT(par_rcvd_then_sent);
Py_DECREF(par_rcvd_then_sent);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_rcvd);
Py_DECREF(par_rcvd);
CHECK_OBJECT(par_sent);
Py_DECREF(par_sent);
CHECK_OBJECT(par_rcvd_then_sent);
Py_DECREF(par_rcvd_then_sent);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_websockets$exceptions$$$function__2___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_websockets$exceptions$$$function__2___str__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$exceptions$$$function__2___str__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$exceptions$$$function__2___str__)) {
    Py_XDECREF(cache_frame_frame_websockets$exceptions$$$function__2___str__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$exceptions$$$function__2___str__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$exceptions$$$function__2___str__ = MAKE_FUNCTION_FRAME(tstate, code_objects_14460883d8d3e5611f00012f0c73332e, module_websockets$exceptions, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$exceptions$$$function__2___str__->m_type_description == NULL);
frame_frame_websockets$exceptions$$$function__2___str__ = cache_frame_frame_websockets$exceptions$$$function__2___str__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$exceptions$$$function__2___str__);
assert(Py_REFCNT(frame_frame_websockets$exceptions$$$function__2___str__) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_rcvd);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
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
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_sent);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
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
tmp_return_value = mod_consts.const_str_digest_5ddd6692536f63cf398ded22f3ceedeb;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_3822d5a14c4bab39ecec324d0360f680;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_sent);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
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


exception_lineno = 111;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_09518a89000b7483a56032a605497ffc;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
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
branch_end_2:;
goto branch_end_1;
branch_no_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_sent);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = Py_None;
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
{
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_3ea1de38a36c24234b32bb4d6c38a17b;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_rcvd);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "o";
    goto tuple_build_exception_2;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "o";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_ea95935901e22bd46d0db3cccc946c64;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
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
goto branch_end_3;
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_rcvd_then_sent);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 116;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = mod_consts.const_str_digest_3ea1de38a36c24234b32bb4d6c38a17b;
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_format_spec_3;
PyObject *tmp_format_value_4;
PyObject *tmp_expression_value_8;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_rcvd);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "o";
    goto tuple_build_exception_3;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "o";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_c0a790f470def3c8bfa377d2a2cb0cc5;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_format_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_sent);
if (tmp_format_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "o";
    goto tuple_build_exception_3;
}
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
CHECK_OBJECT(tmp_format_value_4);
Py_DECREF(tmp_format_value_4);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "o";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 3, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_string_concat_values_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_return_value == NULL));
goto frame_return_exit_1;
}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_string_concat_values_4;
PyObject *tmp_tuple_element_4;
tmp_tuple_element_4 = mod_consts.const_str_digest_3822d5a14c4bab39ecec324d0360f680;
tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_5;
PyObject *tmp_expression_value_9;
PyObject *tmp_format_spec_5;
PyObject *tmp_format_value_6;
PyObject *tmp_expression_value_10;
PyObject *tmp_format_spec_6;
PyTuple_SET_ITEM0(tmp_string_concat_values_4, 0, tmp_tuple_element_4);
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_format_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_sent);
if (tmp_format_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "o";
    goto tuple_build_exception_4;
}
tmp_format_spec_5 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
CHECK_OBJECT(tmp_format_value_5);
Py_DECREF(tmp_format_value_5);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "o";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_string_concat_values_4, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = mod_consts.const_str_digest_ac36378dc9b526c72f4c125a60fa90e5;
PyTuple_SET_ITEM0(tmp_string_concat_values_4, 2, tmp_tuple_element_4);
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_format_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_rcvd);
if (tmp_format_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "o";
    goto tuple_build_exception_4;
}
tmp_format_spec_6 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_6, tmp_format_spec_6);
CHECK_OBJECT(tmp_format_value_6);
Py_DECREF(tmp_format_value_6);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "o";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_string_concat_values_4, 3, tmp_tuple_element_4);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_string_concat_values_4);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_4);
CHECK_OBJECT(tmp_string_concat_values_4);
Py_DECREF(tmp_string_concat_values_4);
assert(!(tmp_return_value == NULL));
goto frame_return_exit_1;
}
branch_end_4:;
branch_end_3:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$exceptions$$$function__2___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$exceptions$$$function__2___str__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$exceptions$$$function__2___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$exceptions$$$function__2___str__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_websockets$exceptions$$$function__2___str__ == cache_frame_frame_websockets$exceptions$$$function__2___str__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$exceptions$$$function__2___str__);
    cache_frame_frame_websockets$exceptions$$$function__2___str__ = NULL;
}

assertFrameObject(frame_frame_websockets$exceptions$$$function__2___str__);

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


static PyObject *impl_websockets$exceptions$$$function__3_code(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_websockets$exceptions$$$function__3_code;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$exceptions$$$function__3_code = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$exceptions$$$function__3_code)) {
    Py_XDECREF(cache_frame_frame_websockets$exceptions$$$function__3_code);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$exceptions$$$function__3_code == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$exceptions$$$function__3_code = MAKE_FUNCTION_FRAME(tstate, code_objects_a876c2679f4bbbc479080611a3e0c5b0, module_websockets$exceptions, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$exceptions$$$function__3_code->m_type_description == NULL);
frame_frame_websockets$exceptions$$$function__3_code = cache_frame_frame_websockets$exceptions$$$function__3_code;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$exceptions$$$function__3_code);
assert(Py_REFCNT(frame_frame_websockets$exceptions$$$function__3_code) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_1 = module_var_accessor_websockets$exceptions$warnings(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 125;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_warn);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_b79277a3ba24f288152523547c2152ea;
tmp_args_element_value_2 = module_var_accessor_websockets$exceptions$DeprecationWarning(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DeprecationWarning);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 128;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_websockets$exceptions$$$function__3_code->m_frame.f_lineno = 125;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_rcvd);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
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
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
tmp_expression_value_4 = module_var_accessor_websockets$exceptions$frames(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_frames);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 131;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_CloseCode);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_ABNORMAL_CLOSURE);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_rcvd);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_code);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$exceptions$$$function__3_code, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$exceptions$$$function__3_code->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$exceptions$$$function__3_code, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$exceptions$$$function__3_code,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_websockets$exceptions$$$function__3_code == cache_frame_frame_websockets$exceptions$$$function__3_code) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$exceptions$$$function__3_code);
    cache_frame_frame_websockets$exceptions$$$function__3_code = NULL;
}

assertFrameObject(frame_frame_websockets$exceptions$$$function__3_code);

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


static PyObject *impl_websockets$exceptions$$$function__4_reason(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_websockets$exceptions$$$function__4_reason;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$exceptions$$$function__4_reason = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$exceptions$$$function__4_reason)) {
    Py_XDECREF(cache_frame_frame_websockets$exceptions$$$function__4_reason);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$exceptions$$$function__4_reason == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$exceptions$$$function__4_reason = MAKE_FUNCTION_FRAME(tstate, code_objects_b292e5a1bc73403db3f6fe884373f651, module_websockets$exceptions, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$exceptions$$$function__4_reason->m_type_description == NULL);
frame_frame_websockets$exceptions$$$function__4_reason = cache_frame_frame_websockets$exceptions$$$function__4_reason;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$exceptions$$$function__4_reason);
assert(Py_REFCNT(frame_frame_websockets$exceptions$$$function__4_reason) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_1 = module_var_accessor_websockets$exceptions$warnings(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 136;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_warn);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_abc41c5fc14940b327831ba85451b0ee;
tmp_args_element_value_2 = module_var_accessor_websockets$exceptions$DeprecationWarning(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DeprecationWarning);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 139;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_websockets$exceptions$$$function__4_reason->m_frame.f_lineno = 136;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_rcvd);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
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
tmp_return_value = const_str_empty;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_rcvd);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_reason);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$exceptions$$$function__4_reason, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$exceptions$$$function__4_reason->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$exceptions$$$function__4_reason, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$exceptions$$$function__4_reason,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_websockets$exceptions$$$function__4_reason == cache_frame_frame_websockets$exceptions$$$function__4_reason) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$exceptions$$$function__4_reason);
    cache_frame_frame_websockets$exceptions$$$function__4_reason = NULL;
}

assertFrameObject(frame_frame_websockets$exceptions$$$function__4_reason);

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


static PyObject *impl_websockets$exceptions$$$function__5___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_uri = python_pars[1];
PyObject *par_msg = python_pars[2];
struct Nuitka_FrameObject *frame_frame_websockets$exceptions$$$function__5___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$exceptions$$$function__5___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$exceptions$$$function__5___init__)) {
    Py_XDECREF(cache_frame_frame_websockets$exceptions$$$function__5___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$exceptions$$$function__5___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$exceptions$$$function__5___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_152c5e7ef129cc40460dbebf6da5d8a3, module_websockets$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$exceptions$$$function__5___init__->m_type_description == NULL);
frame_frame_websockets$exceptions$$$function__5___init__ = cache_frame_frame_websockets$exceptions$$$function__5___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$exceptions$$$function__5___init__);
assert(Py_REFCNT(frame_frame_websockets$exceptions$$$function__5___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_uri);
tmp_assattr_value_1 = par_uri;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_uri, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_msg);
tmp_assattr_value_2 = par_msg;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_msg, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$exceptions$$$function__5___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$exceptions$$$function__5___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$exceptions$$$function__5___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$exceptions$$$function__5___init__,
    type_description_1,
    par_self,
    par_uri,
    par_msg
);


// Release cached frame if used for exception.
if (frame_frame_websockets$exceptions$$$function__5___init__ == cache_frame_frame_websockets$exceptions$$$function__5___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$exceptions$$$function__5___init__);
    cache_frame_frame_websockets$exceptions$$$function__5___init__ = NULL;
}

assertFrameObject(frame_frame_websockets$exceptions$$$function__5___init__);

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
CHECK_OBJECT(par_uri);
Py_DECREF(par_uri);
CHECK_OBJECT(par_msg);
Py_DECREF(par_msg);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_uri);
Py_DECREF(par_uri);
CHECK_OBJECT(par_msg);
Py_DECREF(par_msg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_websockets$exceptions$$$function__6___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_websockets$exceptions$$$function__6___str__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$exceptions$$$function__6___str__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$exceptions$$$function__6___str__)) {
    Py_XDECREF(cache_frame_frame_websockets$exceptions$$$function__6___str__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$exceptions$$$function__6___str__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$exceptions$$$function__6___str__ = MAKE_FUNCTION_FRAME(tstate, code_objects_8033465a674ffdf4004226e7e138c58d, module_websockets$exceptions, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$exceptions$$$function__6___str__->m_type_description == NULL);
frame_frame_websockets$exceptions$$$function__6___str__ = cache_frame_frame_websockets$exceptions$$$function__6___str__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$exceptions$$$function__6___str__);
assert(Py_REFCNT(frame_frame_websockets$exceptions$$$function__6___str__) == 2);

// Framed code:
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_format_spec_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_uri);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_57d577734fd0501684d3f85ec170b93a;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_msg);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
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


exception_lineno = 177;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$exceptions$$$function__6___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$exceptions$$$function__6___str__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$exceptions$$$function__6___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$exceptions$$$function__6___str__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_websockets$exceptions$$$function__6___str__ == cache_frame_frame_websockets$exceptions$$$function__6___str__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$exceptions$$$function__6___str__);
    cache_frame_frame_websockets$exceptions$$$function__6___str__ = NULL;
}

assertFrameObject(frame_frame_websockets$exceptions$$$function__6___str__);

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


static PyObject *impl_websockets$exceptions$$$function__7___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_proxy = python_pars[1];
PyObject *par_msg = python_pars[2];
struct Nuitka_FrameObject *frame_frame_websockets$exceptions$$$function__7___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$exceptions$$$function__7___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$exceptions$$$function__7___init__)) {
    Py_XDECREF(cache_frame_frame_websockets$exceptions$$$function__7___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$exceptions$$$function__7___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$exceptions$$$function__7___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_7b16a32a7969c529d961752b8168274e, module_websockets$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$exceptions$$$function__7___init__->m_type_description == NULL);
frame_frame_websockets$exceptions$$$function__7___init__ = cache_frame_frame_websockets$exceptions$$$function__7___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$exceptions$$$function__7___init__);
assert(Py_REFCNT(frame_frame_websockets$exceptions$$$function__7___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_proxy);
tmp_assattr_value_1 = par_proxy;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_proxy, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_msg);
tmp_assattr_value_2 = par_msg;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_msg, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$exceptions$$$function__7___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$exceptions$$$function__7___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$exceptions$$$function__7___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$exceptions$$$function__7___init__,
    type_description_1,
    par_self,
    par_proxy,
    par_msg
);


// Release cached frame if used for exception.
if (frame_frame_websockets$exceptions$$$function__7___init__ == cache_frame_frame_websockets$exceptions$$$function__7___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$exceptions$$$function__7___init__);
    cache_frame_frame_websockets$exceptions$$$function__7___init__ = NULL;
}

assertFrameObject(frame_frame_websockets$exceptions$$$function__7___init__);

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
CHECK_OBJECT(par_proxy);
Py_DECREF(par_proxy);
CHECK_OBJECT(par_msg);
Py_DECREF(par_msg);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_proxy);
Py_DECREF(par_proxy);
CHECK_OBJECT(par_msg);
Py_DECREF(par_msg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_websockets$exceptions$$$function__8___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_websockets$exceptions$$$function__8___str__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$exceptions$$$function__8___str__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$exceptions$$$function__8___str__)) {
    Py_XDECREF(cache_frame_frame_websockets$exceptions$$$function__8___str__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$exceptions$$$function__8___str__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$exceptions$$$function__8___str__ = MAKE_FUNCTION_FRAME(tstate, code_objects_4125c2c65c4db8594fa8b12c3d382db7, module_websockets$exceptions, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$exceptions$$$function__8___str__->m_type_description == NULL);
frame_frame_websockets$exceptions$$$function__8___str__ = cache_frame_frame_websockets$exceptions$$$function__8___str__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$exceptions$$$function__8___str__);
assert(Py_REFCNT(frame_frame_websockets$exceptions$$$function__8___str__) == 2);

// Framed code:
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_format_spec_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_proxy);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_d40f2f58fa9426f9b22e490b0a679a64;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_msg);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
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


exception_lineno = 191;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$exceptions$$$function__8___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$exceptions$$$function__8___str__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$exceptions$$$function__8___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$exceptions$$$function__8___str__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_websockets$exceptions$$$function__8___str__ == cache_frame_frame_websockets$exceptions$$$function__8___str__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$exceptions$$$function__8___str__);
    cache_frame_frame_websockets$exceptions$$$function__8___str__ = NULL;
}

assertFrameObject(frame_frame_websockets$exceptions$$$function__8___str__);

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


static PyObject *impl_websockets$exceptions$$$function__9___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_response = python_pars[1];
struct Nuitka_FrameObject *frame_frame_websockets$exceptions$$$function__9___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$exceptions$$$function__9___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$exceptions$$$function__9___init__)) {
    Py_XDECREF(cache_frame_frame_websockets$exceptions$$$function__9___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$exceptions$$$function__9___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$exceptions$$$function__9___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_ee88baf0b7a37e96e6e6e77a1fd0580d, module_websockets$exceptions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$exceptions$$$function__9___init__->m_type_description == NULL);
frame_frame_websockets$exceptions$$$function__9___init__ = cache_frame_frame_websockets$exceptions$$$function__9___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$exceptions$$$function__9___init__);
assert(Py_REFCNT(frame_frame_websockets$exceptions$$$function__9___init__) == 2);

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


exception_lineno = 232;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$exceptions$$$function__9___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$exceptions$$$function__9___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$exceptions$$$function__9___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$exceptions$$$function__9___init__,
    type_description_1,
    par_self,
    par_response
);


// Release cached frame if used for exception.
if (frame_frame_websockets$exceptions$$$function__9___init__ == cache_frame_frame_websockets$exceptions$$$function__9___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$exceptions$$$function__9___init__);
    cache_frame_frame_websockets$exceptions$$$function__9___init__ = NULL;
}

assertFrameObject(frame_frame_websockets$exceptions$$$function__9___init__);

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


static PyObject *impl_websockets$exceptions$$$function__10___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_websockets$exceptions$$$function__10___str__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$exceptions$$$function__10___str__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$exceptions$$$function__10___str__)) {
    Py_XDECREF(cache_frame_frame_websockets$exceptions$$$function__10___str__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$exceptions$$$function__10___str__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$exceptions$$$function__10___str__ = MAKE_FUNCTION_FRAME(tstate, code_objects_560b256fe856b918f2df2a7bc7eefb13, module_websockets$exceptions, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$exceptions$$$function__10___str__->m_type_description == NULL);
frame_frame_websockets$exceptions$$$function__10___str__ = cache_frame_frame_websockets$exceptions$$$function__10___str__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$exceptions$$$function__10___str__);
assert(Py_REFCNT(frame_frame_websockets$exceptions$$$function__10___str__) == 2);

// Framed code:
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_79d530a965241eb340f4eabbbb588953;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_response);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_status_code);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = mod_consts.const_str_plain_d;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$exceptions$$$function__10___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$exceptions$$$function__10___str__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$exceptions$$$function__10___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$exceptions$$$function__10___str__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_websockets$exceptions$$$function__10___str__ == cache_frame_frame_websockets$exceptions$$$function__10___str__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$exceptions$$$function__10___str__);
    cache_frame_frame_websockets$exceptions$$$function__10___str__ = NULL;
}

assertFrameObject(frame_frame_websockets$exceptions$$$function__10___str__);

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


static PyObject *impl_websockets$exceptions$$$function__11___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_response = python_pars[1];
struct Nuitka_FrameObject *frame_frame_websockets$exceptions$$$function__11___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$exceptions$$$function__11___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$exceptions$$$function__11___init__)) {
    Py_XDECREF(cache_frame_frame_websockets$exceptions$$$function__11___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$exceptions$$$function__11___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$exceptions$$$function__11___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_972cb3410645a40112d6faa98dd84d4c, module_websockets$exceptions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$exceptions$$$function__11___init__->m_type_description == NULL);
frame_frame_websockets$exceptions$$$function__11___init__ = cache_frame_frame_websockets$exceptions$$$function__11___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$exceptions$$$function__11___init__);
assert(Py_REFCNT(frame_frame_websockets$exceptions$$$function__11___init__) == 2);

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


exception_lineno = 252;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$exceptions$$$function__11___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$exceptions$$$function__11___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$exceptions$$$function__11___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$exceptions$$$function__11___init__,
    type_description_1,
    par_self,
    par_response
);


// Release cached frame if used for exception.
if (frame_frame_websockets$exceptions$$$function__11___init__ == cache_frame_frame_websockets$exceptions$$$function__11___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$exceptions$$$function__11___init__);
    cache_frame_frame_websockets$exceptions$$$function__11___init__ = NULL;
}

assertFrameObject(frame_frame_websockets$exceptions$$$function__11___init__);

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


static PyObject *impl_websockets$exceptions$$$function__12___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_websockets$exceptions$$$function__12___str__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$exceptions$$$function__12___str__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$exceptions$$$function__12___str__)) {
    Py_XDECREF(cache_frame_frame_websockets$exceptions$$$function__12___str__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$exceptions$$$function__12___str__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$exceptions$$$function__12___str__ = MAKE_FUNCTION_FRAME(tstate, code_objects_3ae2dc275e9bb0713540114971469fd8, module_websockets$exceptions, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$exceptions$$$function__12___str__->m_type_description == NULL);
frame_frame_websockets$exceptions$$$function__12___str__ = cache_frame_frame_websockets$exceptions$$$function__12___str__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$exceptions$$$function__12___str__);
assert(Py_REFCNT(frame_frame_websockets$exceptions$$$function__12___str__) == 2);

// Framed code:
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_d1ea752403717de424c330c635fb09ea;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_response);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_status_code);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = mod_consts.const_str_plain_d;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$exceptions$$$function__12___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$exceptions$$$function__12___str__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$exceptions$$$function__12___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$exceptions$$$function__12___str__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_websockets$exceptions$$$function__12___str__ == cache_frame_frame_websockets$exceptions$$$function__12___str__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$exceptions$$$function__12___str__);
    cache_frame_frame_websockets$exceptions$$$function__12___str__ = NULL;
}

assertFrameObject(frame_frame_websockets$exceptions$$$function__12___str__);

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


static PyObject *impl_websockets$exceptions$$$function__13___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_name = python_pars[1];
PyObject *par_value = python_pars[2];
struct Nuitka_FrameObject *frame_frame_websockets$exceptions$$$function__13___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$exceptions$$$function__13___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$exceptions$$$function__13___init__)) {
    Py_XDECREF(cache_frame_frame_websockets$exceptions$$$function__13___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$exceptions$$$function__13___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$exceptions$$$function__13___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_2376623826d7665546ad197c6935eec3, module_websockets$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$exceptions$$$function__13___init__->m_type_description == NULL);
frame_frame_websockets$exceptions$$$function__13___init__ = cache_frame_frame_websockets$exceptions$$$function__13___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$exceptions$$$function__13___init__);
assert(Py_REFCNT(frame_frame_websockets$exceptions$$$function__13___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_name);
tmp_assattr_value_1 = par_name;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, const_str_plain_name, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_value);
tmp_assattr_value_2 = par_value;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_value, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$exceptions$$$function__13___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$exceptions$$$function__13___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$exceptions$$$function__13___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$exceptions$$$function__13___init__,
    type_description_1,
    par_self,
    par_name,
    par_value
);


// Release cached frame if used for exception.
if (frame_frame_websockets$exceptions$$$function__13___init__ == cache_frame_frame_websockets$exceptions$$$function__13___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$exceptions$$$function__13___init__);
    cache_frame_frame_websockets$exceptions$$$function__13___init__ = NULL;
}

assertFrameObject(frame_frame_websockets$exceptions$$$function__13___init__);

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
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_websockets$exceptions$$$function__14___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_websockets$exceptions$$$function__14___str__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$exceptions$$$function__14___str__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$exceptions$$$function__14___str__)) {
    Py_XDECREF(cache_frame_frame_websockets$exceptions$$$function__14___str__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$exceptions$$$function__14___str__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$exceptions$$$function__14___str__ = MAKE_FUNCTION_FRAME(tstate, code_objects_c08251a3762e5fcd697b10b9d0288de8, module_websockets$exceptions, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$exceptions$$$function__14___str__->m_type_description == NULL);
frame_frame_websockets$exceptions$$$function__14___str__ = cache_frame_frame_websockets$exceptions$$$function__14___str__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$exceptions$$$function__14___str__);
assert(Py_REFCNT(frame_frame_websockets$exceptions$$$function__14___str__) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_value);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
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
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_969beca75f3ed53dbe7695a9921bc93d;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_name);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
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


exception_lineno = 272;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_db9899258afd6463ba7799404d49e850;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
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
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_value);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = const_str_empty;
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "o";
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
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_c7b258c262ea3fed4984c6a52445a86c;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_name);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "o";
    goto tuple_build_exception_2;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "o";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_db9899258afd6463ba7799404d49e850;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
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
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = mod_consts.const_str_digest_149ccab3e8869a939c31c2a8e4dda395;
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_format_spec_3;
PyObject *tmp_format_value_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_name);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_1 = "o";
    goto tuple_build_exception_3;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_1 = "o";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_7575a812ed39d1b8fef9f8f3a6eb3c0d;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_format_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_value);
if (tmp_format_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_1 = "o";
    goto tuple_build_exception_3;
}
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
CHECK_OBJECT(tmp_format_value_4);
Py_DECREF(tmp_format_value_4);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_1 = "o";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 3, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_string_concat_values_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_return_value == NULL));
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$exceptions$$$function__14___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$exceptions$$$function__14___str__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$exceptions$$$function__14___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$exceptions$$$function__14___str__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_websockets$exceptions$$$function__14___str__ == cache_frame_frame_websockets$exceptions$$$function__14___str__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$exceptions$$$function__14___str__);
    cache_frame_frame_websockets$exceptions$$$function__14___str__ = NULL;
}

assertFrameObject(frame_frame_websockets$exceptions$$$function__14___str__);

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


static PyObject *impl_websockets$exceptions$$$function__15___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_name = python_pars[1];
PyObject *par_error = python_pars[2];
PyObject *par_header = python_pars[3];
PyObject *par_pos = python_pars[4];
struct Nuitka_FrameObject *frame_frame_websockets$exceptions$$$function__15___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$exceptions$$$function__15___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$exceptions$$$function__15___init__)) {
    Py_XDECREF(cache_frame_frame_websockets$exceptions$$$function__15___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$exceptions$$$function__15___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$exceptions$$$function__15___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_fda658dd426db65a0b280ef7cba8f588, module_websockets$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$exceptions$$$function__15___init__->m_type_description == NULL);
frame_frame_websockets$exceptions$$$function__15___init__ = cache_frame_frame_websockets$exceptions$$$function__15___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$exceptions$$$function__15___init__);
assert(Py_REFCNT(frame_frame_websockets$exceptions$$$function__15___init__) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 288;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_websockets$exceptions, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___init__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_name);
tmp_args_element_value_1 = par_name;
CHECK_OBJECT(par_error);
tmp_format_value_1 = par_error;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 288;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_4bda420df3ff9ab2e4df81f3792b6e09;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_pos);
tmp_format_value_2 = par_pos;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_1 = "oooooc";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_789430c10aaa72b7d685699173aceee7;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
CHECK_OBJECT(par_header);
tmp_format_value_3 = par_header;
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_1 = "oooooc";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_2 == NULL));
frame_frame_websockets$exceptions$$$function__15___init__->m_frame.f_lineno = 288;
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


exception_lineno = 288;
type_description_1 = "oooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$exceptions$$$function__15___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$exceptions$$$function__15___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$exceptions$$$function__15___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$exceptions$$$function__15___init__,
    type_description_1,
    par_self,
    par_name,
    par_error,
    par_header,
    par_pos,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_websockets$exceptions$$$function__15___init__ == cache_frame_frame_websockets$exceptions$$$function__15___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$exceptions$$$function__15___init__);
    cache_frame_frame_websockets$exceptions$$$function__15___init__ = NULL;
}

assertFrameObject(frame_frame_websockets$exceptions$$$function__15___init__);

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
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_error);
Py_DECREF(par_error);
CHECK_OBJECT(par_header);
Py_DECREF(par_header);
CHECK_OBJECT(par_pos);
Py_DECREF(par_pos);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_error);
Py_DECREF(par_error);
CHECK_OBJECT(par_header);
Py_DECREF(par_header);
CHECK_OBJECT(par_pos);
Py_DECREF(par_pos);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_websockets$exceptions$$$function__16___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_origin = python_pars[1];
struct Nuitka_FrameObject *frame_frame_websockets$exceptions$$$function__16___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$exceptions$$$function__16___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$exceptions$$$function__16___init__)) {
    Py_XDECREF(cache_frame_frame_websockets$exceptions$$$function__16___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$exceptions$$$function__16___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$exceptions$$$function__16___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_7e8af0de392281de66081414e7c3eb89, module_websockets$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$exceptions$$$function__16___init__->m_type_description == NULL);
frame_frame_websockets$exceptions$$$function__16___init__ = cache_frame_frame_websockets$exceptions$$$function__16___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$exceptions$$$function__16___init__);
assert(Py_REFCNT(frame_frame_websockets$exceptions$$$function__16___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 307;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_websockets$exceptions, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_plain_Origin;
CHECK_OBJECT(par_origin);
tmp_args_element_value_2 = par_origin;
frame_frame_websockets$exceptions$$$function__16___init__->m_frame.f_lineno = 307;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        const_str_plain___init__,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$exceptions$$$function__16___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$exceptions$$$function__16___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$exceptions$$$function__16___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$exceptions$$$function__16___init__,
    type_description_1,
    par_self,
    par_origin,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_websockets$exceptions$$$function__16___init__ == cache_frame_frame_websockets$exceptions$$$function__16___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$exceptions$$$function__16___init__);
    cache_frame_frame_websockets$exceptions$$$function__16___init__ = NULL;
}

assertFrameObject(frame_frame_websockets$exceptions$$$function__16___init__);

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
CHECK_OBJECT(par_origin);
Py_DECREF(par_origin);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_origin);
Py_DECREF(par_origin);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_websockets$exceptions$$$function__17___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_name = python_pars[1];
struct Nuitka_FrameObject *frame_frame_websockets$exceptions$$$function__17___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$exceptions$$$function__17___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$exceptions$$$function__17___init__)) {
    Py_XDECREF(cache_frame_frame_websockets$exceptions$$$function__17___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$exceptions$$$function__17___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$exceptions$$$function__17___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_8abd6457f212ea30ae3b88225cb3cd0a, module_websockets$exceptions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$exceptions$$$function__17___init__->m_type_description == NULL);
frame_frame_websockets$exceptions$$$function__17___init__ = cache_frame_frame_websockets$exceptions$$$function__17___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$exceptions$$$function__17___init__);
assert(Py_REFCNT(frame_frame_websockets$exceptions$$$function__17___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_name);
tmp_assattr_value_1 = par_name;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, const_str_plain_name, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$exceptions$$$function__17___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$exceptions$$$function__17___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$exceptions$$$function__17___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$exceptions$$$function__17___init__,
    type_description_1,
    par_self,
    par_name
);


// Release cached frame if used for exception.
if (frame_frame_websockets$exceptions$$$function__17___init__ == cache_frame_frame_websockets$exceptions$$$function__17___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$exceptions$$$function__17___init__);
    cache_frame_frame_websockets$exceptions$$$function__17___init__ = NULL;
}

assertFrameObject(frame_frame_websockets$exceptions$$$function__17___init__);

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
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_websockets$exceptions$$$function__18___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_websockets$exceptions$$$function__18___str__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$exceptions$$$function__18___str__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$exceptions$$$function__18___str__)) {
    Py_XDECREF(cache_frame_frame_websockets$exceptions$$$function__18___str__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$exceptions$$$function__18___str__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$exceptions$$$function__18___str__ = MAKE_FUNCTION_FRAME(tstate, code_objects_0bd09a486318331bb3dd63a2fafbca5e, module_websockets$exceptions, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$exceptions$$$function__18___str__->m_type_description == NULL);
frame_frame_websockets$exceptions$$$function__18___str__ = cache_frame_frame_websockets$exceptions$$$function__18___str__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$exceptions$$$function__18___str__);
assert(Py_REFCNT(frame_frame_websockets$exceptions$$$function__18___str__) == 2);

// Framed code:
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_898afe39c2502c9068d9fc0ea61da68f;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_name);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
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


exception_lineno = 334;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$exceptions$$$function__18___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$exceptions$$$function__18___str__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$exceptions$$$function__18___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$exceptions$$$function__18___str__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_websockets$exceptions$$$function__18___str__ == cache_frame_frame_websockets$exceptions$$$function__18___str__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$exceptions$$$function__18___str__);
    cache_frame_frame_websockets$exceptions$$$function__18___str__ = NULL;
}

assertFrameObject(frame_frame_websockets$exceptions$$$function__18___str__);

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


static PyObject *impl_websockets$exceptions$$$function__19___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_name = python_pars[1];
struct Nuitka_FrameObject *frame_frame_websockets$exceptions$$$function__19___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$exceptions$$$function__19___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$exceptions$$$function__19___init__)) {
    Py_XDECREF(cache_frame_frame_websockets$exceptions$$$function__19___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$exceptions$$$function__19___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$exceptions$$$function__19___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_d5589bbd16f50c9d6cf808f629f40ba0, module_websockets$exceptions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$exceptions$$$function__19___init__->m_type_description == NULL);
frame_frame_websockets$exceptions$$$function__19___init__ = cache_frame_frame_websockets$exceptions$$$function__19___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$exceptions$$$function__19___init__);
assert(Py_REFCNT(frame_frame_websockets$exceptions$$$function__19___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_name);
tmp_assattr_value_1 = par_name;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, const_str_plain_name, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 344;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$exceptions$$$function__19___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$exceptions$$$function__19___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$exceptions$$$function__19___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$exceptions$$$function__19___init__,
    type_description_1,
    par_self,
    par_name
);


// Release cached frame if used for exception.
if (frame_frame_websockets$exceptions$$$function__19___init__ == cache_frame_frame_websockets$exceptions$$$function__19___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$exceptions$$$function__19___init__);
    cache_frame_frame_websockets$exceptions$$$function__19___init__ = NULL;
}

assertFrameObject(frame_frame_websockets$exceptions$$$function__19___init__);

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
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_websockets$exceptions$$$function__20___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_websockets$exceptions$$$function__20___str__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$exceptions$$$function__20___str__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$exceptions$$$function__20___str__)) {
    Py_XDECREF(cache_frame_frame_websockets$exceptions$$$function__20___str__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$exceptions$$$function__20___str__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$exceptions$$$function__20___str__ = MAKE_FUNCTION_FRAME(tstate, code_objects_58b817502606124b99d2c21b1e84fdff, module_websockets$exceptions, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$exceptions$$$function__20___str__->m_type_description == NULL);
frame_frame_websockets$exceptions$$$function__20___str__ = cache_frame_frame_websockets$exceptions$$$function__20___str__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$exceptions$$$function__20___str__);
assert(Py_REFCNT(frame_frame_websockets$exceptions$$$function__20___str__) == 2);

// Framed code:
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_27ef182f129092279b4b3540cc2bff15;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_name);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
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


exception_lineno = 347;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$exceptions$$$function__20___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$exceptions$$$function__20___str__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$exceptions$$$function__20___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$exceptions$$$function__20___str__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_websockets$exceptions$$$function__20___str__ == cache_frame_frame_websockets$exceptions$$$function__20___str__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$exceptions$$$function__20___str__);
    cache_frame_frame_websockets$exceptions$$$function__20___str__ = NULL;
}

assertFrameObject(frame_frame_websockets$exceptions$$$function__20___str__);

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


static PyObject *impl_websockets$exceptions$$$function__21___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_name = python_pars[1];
PyObject *par_value = python_pars[2];
struct Nuitka_FrameObject *frame_frame_websockets$exceptions$$$function__21___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$exceptions$$$function__21___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$exceptions$$$function__21___init__)) {
    Py_XDECREF(cache_frame_frame_websockets$exceptions$$$function__21___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$exceptions$$$function__21___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$exceptions$$$function__21___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_12b09c6c455fc9af5b63f949dd9d20df, module_websockets$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$exceptions$$$function__21___init__->m_type_description == NULL);
frame_frame_websockets$exceptions$$$function__21___init__ = cache_frame_frame_websockets$exceptions$$$function__21___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$exceptions$$$function__21___init__);
assert(Py_REFCNT(frame_frame_websockets$exceptions$$$function__21___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_name);
tmp_assattr_value_1 = par_name;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, const_str_plain_name, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_value);
tmp_assattr_value_2 = par_value;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_value, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$exceptions$$$function__21___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$exceptions$$$function__21___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$exceptions$$$function__21___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$exceptions$$$function__21___init__,
    type_description_1,
    par_self,
    par_name,
    par_value
);


// Release cached frame if used for exception.
if (frame_frame_websockets$exceptions$$$function__21___init__ == cache_frame_frame_websockets$exceptions$$$function__21___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$exceptions$$$function__21___init__);
    cache_frame_frame_websockets$exceptions$$$function__21___init__ = NULL;
}

assertFrameObject(frame_frame_websockets$exceptions$$$function__21___init__);

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
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_websockets$exceptions$$$function__22___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_websockets$exceptions$$$function__22___str__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$exceptions$$$function__22___str__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$exceptions$$$function__22___str__)) {
    Py_XDECREF(cache_frame_frame_websockets$exceptions$$$function__22___str__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$exceptions$$$function__22___str__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$exceptions$$$function__22___str__ = MAKE_FUNCTION_FRAME(tstate, code_objects_8aa192c2110baa2996821d35d49473e6, module_websockets$exceptions, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$exceptions$$$function__22___str__->m_type_description == NULL);
frame_frame_websockets$exceptions$$$function__22___str__ = cache_frame_frame_websockets$exceptions$$$function__22___str__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$exceptions$$$function__22___str__);
assert(Py_REFCNT(frame_frame_websockets$exceptions$$$function__22___str__) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_value);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;
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
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_efbd6fa0a5fcf4015862b2bf6bbe8d88;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_name);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
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


exception_lineno = 362;
type_description_1 = "o";
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
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_return_value == NULL));
goto frame_return_exit_1;
}
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_value);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = const_str_empty;
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_1 = "o";
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
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_0d31ce28f64edbc8698fd4f3106914b1;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_name);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
type_description_1 = "o";
    goto tuple_build_exception_2;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
type_description_1 = "o";
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
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_return_value == NULL));
goto frame_return_exit_1;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = mod_consts.const_str_digest_2539f986e8baa8bba4653341b61c207f;
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_format_spec_3;
PyObject *tmp_format_value_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_name);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 366;
type_description_1 = "o";
    goto tuple_build_exception_3;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 366;
type_description_1 = "o";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_439d1398e2f3d2739cafa9b75372a63f;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_format_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_value);
if (tmp_format_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 366;
type_description_1 = "o";
    goto tuple_build_exception_3;
}
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
CHECK_OBJECT(tmp_format_value_4);
Py_DECREF(tmp_format_value_4);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 366;
type_description_1 = "o";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 3, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_string_concat_values_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_return_value == NULL));
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$exceptions$$$function__22___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$exceptions$$$function__22___str__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$exceptions$$$function__22___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$exceptions$$$function__22___str__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_websockets$exceptions$$$function__22___str__ == cache_frame_frame_websockets$exceptions$$$function__22___str__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$exceptions$$$function__22___str__);
    cache_frame_frame_websockets$exceptions$$$function__22___str__ = NULL;
}

assertFrameObject(frame_frame_websockets$exceptions$$$function__22___str__);

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


static PyObject *impl_websockets$exceptions$$$function__23___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_size_or_message = python_pars[1];
PyObject *par_max_size = python_pars[2];
PyObject *par_current_size = python_pars[3];
struct Nuitka_FrameObject *frame_frame_websockets$exceptions$$$function__23___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$exceptions$$$function__23___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$exceptions$$$function__23___init__)) {
    Py_XDECREF(cache_frame_frame_websockets$exceptions$$$function__23___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$exceptions$$$function__23___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$exceptions$$$function__23___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_459cadea1eecac366c03e0a9a504d41f, module_websockets$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$exceptions$$$function__23___init__->m_type_description == NULL);
frame_frame_websockets$exceptions$$$function__23___init__ = cache_frame_frame_websockets$exceptions$$$function__23___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$exceptions$$$function__23___init__);
assert(Py_REFCNT(frame_frame_websockets$exceptions$$$function__23___init__) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_size_or_message);
tmp_isinstance_inst_1 = par_size_or_message;
tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 399;
type_description_1 = "oooo";
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
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_max_size);
tmp_cmp_expr_left_1 = par_max_size;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_1;
frame_frame_websockets$exceptions$$$function__23___init__->m_frame.f_lineno = 400;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 400;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_current_size);
tmp_cmp_expr_left_2 = par_current_size;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_2;
frame_frame_websockets$exceptions$$$function__23___init__->m_frame.f_lineno = 401;
tmp_raise_type_2 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 401;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_1 = module_var_accessor_websockets$exceptions$warnings(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 402;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_warn);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 402;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_5f018a64af8422794db9770d75d147ee;
tmp_args_element_value_2 = module_var_accessor_websockets$exceptions$DeprecationWarning(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DeprecationWarning);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 405;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$exceptions$$$function__23___init__->m_frame.f_lineno = 402;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 402;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_size_or_message);
tmp_assattr_value_1 = par_size_or_message;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_message, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_message, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_size_or_message);
tmp_assattr_value_3 = par_size_or_message;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_size, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 410;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_max_size);
tmp_cmp_expr_left_3 = par_max_size;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_3;
frame_frame_websockets$exceptions$$$function__23___init__->m_frame.f_lineno = 411;
tmp_raise_type_3 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 411;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_4:;
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_max_size);
tmp_assattr_value_4 = par_max_size;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_max_size, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 412;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
tmp_assattr_value_5 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_current_size, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 413;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_current_size);
tmp_args_element_value_3 = par_current_size;
frame_frame_websockets$exceptions$$$function__23___init__->m_frame.f_lineno = 414;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_set_current_size, tmp_args_element_value_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 414;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$exceptions$$$function__23___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$exceptions$$$function__23___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$exceptions$$$function__23___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$exceptions$$$function__23___init__,
    type_description_1,
    par_self,
    par_size_or_message,
    par_max_size,
    par_current_size
);


// Release cached frame if used for exception.
if (frame_frame_websockets$exceptions$$$function__23___init__ == cache_frame_frame_websockets$exceptions$$$function__23___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$exceptions$$$function__23___init__);
    cache_frame_frame_websockets$exceptions$$$function__23___init__ = NULL;
}

assertFrameObject(frame_frame_websockets$exceptions$$$function__23___init__);

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
CHECK_OBJECT(par_size_or_message);
Py_DECREF(par_size_or_message);
CHECK_OBJECT(par_max_size);
Py_DECREF(par_max_size);
CHECK_OBJECT(par_current_size);
Py_DECREF(par_current_size);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_size_or_message);
Py_DECREF(par_size_or_message);
CHECK_OBJECT(par_max_size);
Py_DECREF(par_max_size);
CHECK_OBJECT(par_current_size);
Py_DECREF(par_current_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_websockets$exceptions$$$function__24___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_message = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$exceptions$$$function__24___str__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$exceptions$$$function__24___str__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_websockets$exceptions$$$function__24___str__)) {
    Py_XDECREF(cache_frame_frame_websockets$exceptions$$$function__24___str__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$exceptions$$$function__24___str__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$exceptions$$$function__24___str__ = MAKE_FUNCTION_FRAME(tstate, code_objects_824be1add127f1c5fb03b39917afdd8b, module_websockets$exceptions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$exceptions$$$function__24___str__->m_type_description == NULL);
frame_frame_websockets$exceptions$$$function__24___str__ = cache_frame_frame_websockets$exceptions$$$function__24___str__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$exceptions$$$function__24___str__);
assert(Py_REFCNT(frame_frame_websockets$exceptions$$$function__24___str__) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_message);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
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
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_message);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_cd7f7b419d285e50a7c99aecb7a5961c;
assert(var_message == NULL);
Py_INCREF(tmp_assign_source_1);
var_message = tmp_assign_source_1;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_size);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
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
PyObject *tmp_assign_source_2;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_message);
tmp_iadd_expr_left_1 = var_message;
tmp_tuple_element_1 = mod_consts.const_str_digest_d45ff9ccaa193a8d201b97c41d8e3497;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_size);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 422;
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


exception_lineno = 422;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_e74ece5b5076c0387cfb44d9dc3083a7;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_iadd_expr_right_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_iadd_expr_right_1 == NULL));
tmp_result = INPLACE_OPERATION_ADD_UNICODE_UNICODE(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
assert(!(tmp_result == false));
tmp_assign_source_2 = tmp_iadd_expr_left_1;
var_message = tmp_assign_source_2;

}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_current_size);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 423;
type_description_1 = "oo";
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
PyObject *tmp_assign_source_3;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(var_message);
tmp_iadd_expr_left_2 = var_message;
tmp_tuple_element_2 = mod_consts.const_str_digest_ef40e52ea46d2d5784002192c3332439;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_current_size);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;
type_description_1 = "oo";
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
type_description_1 = "oo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_e74ece5b5076c0387cfb44d9dc3083a7;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_iadd_expr_right_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_iadd_expr_right_2 == NULL));
tmp_result = INPLACE_OPERATION_ADD_UNICODE_UNICODE(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
CHECK_OBJECT(tmp_iadd_expr_right_2);
Py_DECREF(tmp_iadd_expr_right_2);
assert(!(tmp_result == false));
tmp_assign_source_3 = tmp_iadd_expr_left_2;
var_message = tmp_assign_source_3;

}
branch_no_3:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iadd_expr_left_3;
PyObject *tmp_iadd_expr_right_3;
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_3;
CHECK_OBJECT(var_message);
tmp_iadd_expr_left_3 = var_message;
tmp_tuple_element_3 = mod_consts.const_str_digest_396dc30c99d6f397b06bba4c1f5b10b9;
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_max_size);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 425;
type_description_1 = "oo";
    goto tuple_build_exception_3;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 425;
type_description_1 = "oo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_4fa7efcb995c96024a30e4abe4b06064;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_string_concat_values_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_iadd_expr_right_3 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_iadd_expr_right_3 == NULL));
tmp_result = INPLACE_OPERATION_ADD_UNICODE_UNICODE(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
CHECK_OBJECT(tmp_iadd_expr_right_3);
Py_DECREF(tmp_iadd_expr_right_3);
assert(!(tmp_result == false));
tmp_assign_source_4 = tmp_iadd_expr_left_3;
var_message = tmp_assign_source_4;

}
CHECK_OBJECT(var_message);
tmp_return_value = var_message;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$exceptions$$$function__24___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$exceptions$$$function__24___str__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$exceptions$$$function__24___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$exceptions$$$function__24___str__,
    type_description_1,
    par_self,
    var_message
);


// Release cached frame if used for exception.
if (frame_frame_websockets$exceptions$$$function__24___str__ == cache_frame_frame_websockets$exceptions$$$function__24___str__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$exceptions$$$function__24___str__);
    cache_frame_frame_websockets$exceptions$$$function__24___str__ = NULL;
}

assertFrameObject(frame_frame_websockets$exceptions$$$function__24___str__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_message);
var_message = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_message);
var_message = NULL;
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


static PyObject *impl_websockets$exceptions$$$function__25_set_current_size(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_current_size = python_pars[1];
PyObject *tmp_inplace_assign_1__value = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$exceptions$$$function__25_set_current_size;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$exceptions$$$function__25_set_current_size = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$exceptions$$$function__25_set_current_size)) {
    Py_XDECREF(cache_frame_frame_websockets$exceptions$$$function__25_set_current_size);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$exceptions$$$function__25_set_current_size == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$exceptions$$$function__25_set_current_size = MAKE_FUNCTION_FRAME(tstate, code_objects_f1b6df4c2b547f8ad50e29d04ad683b5, module_websockets$exceptions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$exceptions$$$function__25_set_current_size->m_type_description == NULL);
frame_frame_websockets$exceptions$$$function__25_set_current_size = cache_frame_frame_websockets$exceptions$$$function__25_set_current_size;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$exceptions$$$function__25_set_current_size);
assert(Py_REFCNT(frame_frame_websockets$exceptions$$$function__25_set_current_size) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_current_size);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
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
frame_frame_websockets$exceptions$$$function__25_set_current_size->m_frame.f_lineno = 429;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 429;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_current_size);
tmp_cmp_expr_left_2 = par_current_size;
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
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_max_size);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;
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
CHECK_OBJECT(par_current_size);
tmp_iadd_expr_right_1 = par_current_size;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;
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
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_max_size, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;
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
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_current_size);
tmp_assattr_value_2 = par_current_size;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_current_size, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 432;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$exceptions$$$function__25_set_current_size, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$exceptions$$$function__25_set_current_size->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$exceptions$$$function__25_set_current_size, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$exceptions$$$function__25_set_current_size,
    type_description_1,
    par_self,
    par_current_size
);


// Release cached frame if used for exception.
if (frame_frame_websockets$exceptions$$$function__25_set_current_size == cache_frame_frame_websockets$exceptions$$$function__25_set_current_size) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$exceptions$$$function__25_set_current_size);
    cache_frame_frame_websockets$exceptions$$$function__25_set_current_size = NULL;
}

assertFrameObject(frame_frame_websockets$exceptions$$$function__25_set_current_size);

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
CHECK_OBJECT(par_current_size);
Py_DECREF(par_current_size);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_current_size);
Py_DECREF(par_current_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__10___str__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__10___str__,
        mod_consts.const_str_plain___str__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3016507a92906f1f180d9d2e1e0522e1,
#endif
        code_objects_560b256fe856b918f2df2a7bc7eefb13,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__11___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__11___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_639726fb9506fa46843482c203abfcbf,
#endif
        code_objects_972cb3410645a40112d6faa98dd84d4c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__12___str__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__12___str__,
        mod_consts.const_str_plain___str__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_917ee890d64b5a8eba783bffd96e0852,
#endif
        code_objects_3ae2dc275e9bb0713540114971469fd8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__13___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__13___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0c93f717a0a970ac34652eaaf1c6bd53,
#endif
        code_objects_2376623826d7665546ad197c6935eec3,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__14___str__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__14___str__,
        mod_consts.const_str_plain___str__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5c4e39a6809f26d0dba9caa6d698f567,
#endif
        code_objects_c08251a3762e5fcd697b10b9d0288de8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__15___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__15___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9e22bbeda6633d097ed8c2452eb81da8,
#endif
        code_objects_fda658dd426db65a0b280ef7cba8f588,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__16___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__16___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_58d3177420d7955967f035f56966aea8,
#endif
        code_objects_7e8af0de392281de66081414e7c3eb89,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__17___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__17___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_41261244a6da9b7ea5e2b7b9078e363d,
#endif
        code_objects_8abd6457f212ea30ae3b88225cb3cd0a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__18___str__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__18___str__,
        mod_consts.const_str_plain___str__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_bf1af04c6f3c8605686e9818ca852c8f,
#endif
        code_objects_0bd09a486318331bb3dd63a2fafbca5e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__19___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__19___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7ada1e6eb58232c13147c8d0a3f1b47f,
#endif
        code_objects_d5589bbd16f50c9d6cf808f629f40ba0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__1___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1abab08ece5d0421385ad37ea7661fae,
#endif
        code_objects_246a7b123ab2b2321b13af097aff5a9a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__20___str__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__20___str__,
        mod_consts.const_str_plain___str__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ab3ecb5fed121c21bce134cee44427f6,
#endif
        code_objects_58b817502606124b99d2c21b1e84fdff,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__21___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__21___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d562e807bcb1085ad3ec2460ab644971,
#endif
        code_objects_12b09c6c455fc9af5b63f949dd9d20df,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__22___str__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__22___str__,
        mod_consts.const_str_plain___str__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1c60190d3f2e76148ef214f5362f252d,
#endif
        code_objects_8aa192c2110baa2996821d35d49473e6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__23___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__23___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9fecf7526e135375de04cd66de1319b1,
#endif
        code_objects_459cadea1eecac366c03e0a9a504d41f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__24___str__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__24___str__,
        mod_consts.const_str_plain___str__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_236ad245f84ca3383be66f1b003a7ec0,
#endif
        code_objects_824be1add127f1c5fb03b39917afdd8b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__25_set_current_size(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__25_set_current_size,
        mod_consts.const_str_plain_set_current_size,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_54090fd987650ff97a68c24c2d9ca48b,
#endif
        code_objects_f1b6df4c2b547f8ad50e29d04ad683b5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__2___str__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__2___str__,
        mod_consts.const_str_plain___str__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_99f5ec676735a873ab9d53752da5c455,
#endif
        code_objects_14460883d8d3e5611f00012f0c73332e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__3_code(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__3_code,
        mod_consts.const_str_plain_code,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5baa5a99df20e78ac236e337d9040eac,
#endif
        code_objects_a876c2679f4bbbc479080611a3e0c5b0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__4_reason(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__4_reason,
        mod_consts.const_str_plain_reason,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5aedef611991585126ba3fc7280f2033,
#endif
        code_objects_b292e5a1bc73403db3f6fe884373f651,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__5___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__5___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2c404a94f1c4f410b0c57b8d8b70c29c,
#endif
        code_objects_152c5e7ef129cc40460dbebf6da5d8a3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__6___str__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__6___str__,
        mod_consts.const_str_plain___str__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_bbcf02cba359f26b1e396a6a331d2a9c,
#endif
        code_objects_8033465a674ffdf4004226e7e138c58d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__7___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__7___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e3221b61a83e43dd098aecd29ecd769b,
#endif
        code_objects_7b16a32a7969c529d961752b8168274e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__8___str__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__8___str__,
        mod_consts.const_str_plain___str__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_dd9a459739491effc6822b788ce0d993,
#endif
        code_objects_4125c2c65c4db8594fa8b12c3d382db7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__9___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__9___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0d9ab8fb9331867b65027b3e68215062,
#endif
        code_objects_ee88baf0b7a37e96e6e6e77a1fd0580d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
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

static function_impl_code const function_table_websockets$exceptions[] = {
impl_websockets$exceptions$$$function__1___init__,
impl_websockets$exceptions$$$function__2___str__,
impl_websockets$exceptions$$$function__3_code,
impl_websockets$exceptions$$$function__4_reason,
impl_websockets$exceptions$$$function__5___init__,
impl_websockets$exceptions$$$function__6___str__,
impl_websockets$exceptions$$$function__7___init__,
impl_websockets$exceptions$$$function__8___str__,
impl_websockets$exceptions$$$function__9___init__,
impl_websockets$exceptions$$$function__10___str__,
impl_websockets$exceptions$$$function__11___init__,
impl_websockets$exceptions$$$function__12___str__,
impl_websockets$exceptions$$$function__13___init__,
impl_websockets$exceptions$$$function__14___str__,
impl_websockets$exceptions$$$function__15___init__,
impl_websockets$exceptions$$$function__16___init__,
impl_websockets$exceptions$$$function__17___init__,
impl_websockets$exceptions$$$function__18___str__,
impl_websockets$exceptions$$$function__19___init__,
impl_websockets$exceptions$$$function__20___str__,
impl_websockets$exceptions$$$function__21___init__,
impl_websockets$exceptions$$$function__22___str__,
impl_websockets$exceptions$$$function__23___init__,
impl_websockets$exceptions$$$function__24___str__,
impl_websockets$exceptions$$$function__25_set_current_size,
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

    return Nuitka_Function_GetFunctionState(function, function_table_websockets$exceptions);
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
        module_websockets$exceptions,
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
        function_table_websockets$exceptions,
        sizeof(function_table_websockets$exceptions) / sizeof(function_impl_code)
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
static char const *module_full_name = "websockets.exceptions";
#endif

// Internal entry point for module code.
PyObject *module_code_websockets$exceptions(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("websockets$exceptions");

    // Store the module for future use.
    module_websockets$exceptions = module;

    moduledict_websockets$exceptions = MODULE_DICT(module_websockets$exceptions);

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
        PRINT_STRING("websockets$exceptions: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("websockets$exceptions: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("websockets$exceptions: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "websockets.exceptions" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initwebsockets$exceptions\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_websockets$exceptions,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_websockets$exceptions,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_websockets$exceptions,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_websockets$exceptions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_websockets$exceptions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_websockets$exceptions);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_websockets$exceptions, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_websockets$exceptions, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_websockets$exceptions, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_websockets$exceptions);
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

        UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
PyObject *outline_6_var___class__ = NULL;
PyObject *outline_7_var___class__ = NULL;
PyObject *outline_8_var___class__ = NULL;
PyObject *outline_9_var___class__ = NULL;
PyObject *outline_10_var___class__ = NULL;
PyObject *outline_11_var___class__ = NULL;
PyObject *outline_12_var___class__ = NULL;
PyObject *outline_13_var___class__ = NULL;
struct Nuitka_CellObject *outline_14_var___class__ = NULL;
PyObject *outline_15_var___class__ = NULL;
struct Nuitka_CellObject *outline_16_var___class__ = NULL;
PyObject *outline_17_var___class__ = NULL;
PyObject *outline_18_var___class__ = NULL;
PyObject *outline_19_var___class__ = NULL;
PyObject *outline_20_var___class__ = NULL;
PyObject *outline_21_var___class__ = NULL;
PyObject *outline_22_var___class__ = NULL;
PyObject *outline_23_var___class__ = NULL;
PyObject *outline_24_var___class__ = NULL;
PyObject *outline_25_var___class__ = NULL;
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
PyObject *tmp_class_container$class_creation_22__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_22__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_22__metaclass = NULL;
PyObject *tmp_class_container$class_creation_22__prepared = NULL;
PyObject *tmp_class_container$class_creation_23__bases = NULL;
PyObject *tmp_class_container$class_creation_23__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_23__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_23__metaclass = NULL;
PyObject *tmp_class_container$class_creation_23__prepared = NULL;
PyObject *tmp_class_container$class_creation_24__bases = NULL;
PyObject *tmp_class_container$class_creation_24__bases_orig = NULL;
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
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$exceptions;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_websockets$exceptions$$$class__1_WebSocketException_73 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *locals_websockets$exceptions$$$class__2_ConnectionClosed_80 = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$exceptions$$$class__2_ConnectionClosed_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
PyObject *locals_websockets$exceptions$$$class__3_ConnectionClosedOK_146 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
PyObject *locals_websockets$exceptions$$$class__4_ConnectionClosedError_156 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
PyObject *locals_websockets$exceptions$$$class__5_InvalidURI_166 = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$exceptions$$$class__5_InvalidURI_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
PyObject *locals_websockets$exceptions$$$class__6_InvalidProxy_180 = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$exceptions$$$class__6_InvalidProxy_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
PyObject *locals_websockets$exceptions$$$class__7_InvalidHandshake_194 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
PyObject *locals_websockets$exceptions$$$class__8_SecurityError_201 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_23;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_24;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
PyObject *locals_websockets$exceptions$$$class__9_ProxyError_211 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_25;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_26;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_27;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
PyObject *locals_websockets$exceptions$$$class__10_InvalidProxyMessage_218 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_28;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_29;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_30;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
PyObject *locals_websockets$exceptions$$$class__11_InvalidProxyStatus_225 = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$exceptions$$$class__11_InvalidProxyStatus_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_31;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_32;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_33;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
PyObject *locals_websockets$exceptions$$$class__12_InvalidMessage_238 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_34;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_35;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_36;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
PyObject *locals_websockets$exceptions$$$class__13_InvalidStatus_245 = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$exceptions$$$class__13_InvalidStatus_6;
NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_37;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_38;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_39;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
PyObject *locals_websockets$exceptions$$$class__14_InvalidHeader_260 = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$exceptions$$$class__14_InvalidHeader_7;
NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_40;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_41;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_42;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
PyObject *locals_websockets$exceptions$$$class__15_InvalidHeaderFormat_279 = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$exceptions$$$class__15_InvalidHeaderFormat_8;
NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_43;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_44;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_45;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
PyObject *locals_websockets$exceptions$$$class__16_InvalidHeaderValue_291 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_46;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_47;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_48;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;
PyObject *locals_websockets$exceptions$$$class__17_InvalidOrigin_300 = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$exceptions$$$class__17_InvalidOrigin_9;
NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_49;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_49;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_50;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_50;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_51;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_51;
PyObject *locals_websockets$exceptions$$$class__18_InvalidUpgrade_310 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_52;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_52;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_53;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_53;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_54;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_54;
PyObject *locals_websockets$exceptions$$$class__19_NegotiationError_317 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_55;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_55;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_56;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_56;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_57;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_57;
PyObject *locals_websockets$exceptions$$$class__20_DuplicateParameter_324 = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$exceptions$$$class__20_DuplicateParameter_10;
NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_58;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_58;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_59;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_59;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_60;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_60;
PyObject *locals_websockets$exceptions$$$class__21_InvalidParameterName_337 = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$exceptions$$$class__21_InvalidParameterName_11;
NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_61;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_61;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_62;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_62;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_63;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_63;
PyObject *locals_websockets$exceptions$$$class__22_InvalidParameterValue_350 = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$exceptions$$$class__22_InvalidParameterValue_12;
NUITKA_MAY_BE_UNUSED char const *type_description_12 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_64;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_64;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_65;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_65;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_66;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_66;
PyObject *locals_websockets$exceptions$$$class__23_ProtocolError_369 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_67;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_67;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_68;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_68;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_69;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_69;
PyObject *locals_websockets$exceptions$$$class__24_PayloadTooBig_381 = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$exceptions$$$class__24_PayloadTooBig_13;
NUITKA_MAY_BE_UNUSED char const *type_description_13 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_70;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_70;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_71;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_71;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_72;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_72;
PyObject *locals_websockets$exceptions$$$class__25_InvalidState_435 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_73;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_73;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_74;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_74;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_75;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_75;
PyObject *locals_websockets$exceptions$$$class__26_ConcurrencyError_450 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_76;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_76;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_77;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_77;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_78;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_78;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_79;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_79;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_fce97af24dfd115307a199aaf3760644;
UPDATE_STRING_DICT0(moduledict_websockets$exceptions, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_websockets$exceptions, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_websockets$exceptions = MAKE_MODULE_FRAME(code_objects_1fd1b41cc23071a639ed47cc01109b9d, module_websockets$exceptions);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$exceptions);
assert(Py_REFCNT(frame_frame_websockets$exceptions) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_websockets$exceptions$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_websockets$exceptions$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_websockets$exceptions, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_warnings;
tmp_globals_arg_value_1 = (PyObject *)moduledict_websockets$exceptions;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_websockets$exceptions->m_frame.f_lineno = 38;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_imports;
tmp_globals_arg_value_2 = (PyObject *)moduledict_websockets$exceptions;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_lazy_import_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_websockets$exceptions->m_frame.f_lineno = 40;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_websockets$exceptions,
        mod_consts.const_str_plain_lazy_import,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_lazy_import);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_lazy_import, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = LIST_COPY(tstate, mod_consts.const_list_dd26408d1eaac394c9104f689b1819a6_list);
UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_7);
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


exception_lineno = 73;

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


exception_lineno = 73;

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


exception_lineno = 73;

    goto try_except_handler_1;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

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


exception_lineno = 73;

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


exception_lineno = 73;

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


exception_lineno = 73;

    goto try_except_handler_1;
}
tmp_tuple_element_1 = mod_consts.const_str_plain_WebSocketException;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_1 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 73;
tmp_assign_source_11 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

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


exception_lineno = 73;

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
PyObject *tmp_name_value_3;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_3 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_3, tmp_default_value_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

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


exception_lineno = 73;

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


exception_lineno = 73;

    goto try_except_handler_1;
}
frame_frame_websockets$exceptions->m_frame.f_lineno = 73;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 73;
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
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_websockets$exceptions$$$class__1_WebSocketException_73 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_4ddd7fcb80f9d65673bce8553d39aa96;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__1_WebSocketException_73, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_digest_9874b01600445be01e9ebd714a66f7c5;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__1_WebSocketException_73, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_plain_WebSocketException;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__1_WebSocketException_73, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_int_pos_73;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__1_WebSocketException_73, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_3;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__1_WebSocketException_73, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

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


exception_lineno = 73;

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
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__1_WebSocketException_73, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_3;
}
branch_no_3:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_3 = mod_consts.const_str_plain_WebSocketException;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_3 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = locals_websockets$exceptions$$$class__1_WebSocketException_73;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 73;
tmp_assign_source_14 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_3;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_14;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_13 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_13);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_websockets$exceptions$$$class__1_WebSocketException_73);
locals_websockets$exceptions$$$class__1_WebSocketException_73 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_websockets$exceptions$$$class__1_WebSocketException_73);
locals_websockets$exceptions$$$class__1_WebSocketException_73 = NULL;
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
exception_lineno = 73;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_WebSocketException, tmp_assign_source_13);
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
tmp_tuple_element_4 = module_var_accessor_websockets$exceptions$WebSocketException(tstate);
if (unlikely(tmp_tuple_element_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WebSocketException);
}

if (tmp_tuple_element_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 80;

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


exception_lineno = 80;

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


exception_lineno = 80;

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


exception_lineno = 80;

    goto try_except_handler_4;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;

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


exception_lineno = 80;

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


exception_lineno = 80;

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
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;

    goto try_except_handler_4;
}
tmp_tuple_element_5 = mod_consts.const_str_plain_ConnectionClosed;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_5 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 80;
tmp_assign_source_19 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;

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


exception_lineno = 80;

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
PyObject *tmp_name_value_4;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_4 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_6 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_4, tmp_default_value_2);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;

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


exception_lineno = 80;

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


exception_lineno = 80;

    goto try_except_handler_4;
}
frame_frame_websockets$exceptions->m_frame.f_lineno = 80;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 80;
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
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_websockets$exceptions$$$class__2_ConnectionClosed_80 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_4ddd7fcb80f9d65673bce8553d39aa96;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__2_ConnectionClosed_80, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_digest_1802528dcf7200d4e0cb064b5d7fb66a;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__2_ConnectionClosed_80, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_plain_ConnectionClosed;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__2_ConnectionClosed_80, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_int_pos_80;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__2_ConnectionClosed_80, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;

    goto try_except_handler_6;
}
frame_frame_websockets$exceptions$$$class__2_ConnectionClosed_2 = MAKE_CLASS_FRAME(tstate, code_objects_cf7eb7055b26868e7ebaa9dfc7ac16be, module_websockets$exceptions, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$exceptions$$$class__2_ConnectionClosed_2);
assert(Py_REFCNT(frame_frame_websockets$exceptions$$$class__2_ConnectionClosed_2) == 2);

// Framed code:
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_1;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_b03d1d41bd56e1a1f6eb8889f07c4ef4);
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__1___init__(tstate, tmp_defaults_1, tmp_annotations_1);

tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__2_ConnectionClosed_80, const_str_plain___init__, tmp_dictset_value);
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
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__2___str__(tstate, tmp_annotations_2);

tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__2_ConnectionClosed_80, mod_consts.const_str_plain___str__, tmp_dictset_value);
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
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_3;
tmp_called_value_4 = PyObject_GetItem(locals_websockets$exceptions$$$class__2_ConnectionClosed_80, mod_consts.const_str_plain_property);

if (tmp_called_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_4 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);

tmp_args_element_value_1 = MAKE_FUNCTION_websockets$exceptions$$$function__3_code(tstate, tmp_annotations_3);

frame_frame_websockets$exceptions$$$class__2_ConnectionClosed_2->m_frame.f_lineno = 123;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__2_ConnectionClosed_80, mod_consts.const_str_plain_code, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_4;
tmp_called_value_5 = PyObject_GetItem(locals_websockets$exceptions$$$class__2_ConnectionClosed_80, mod_consts.const_str_plain_property);

if (tmp_called_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_5 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_2 = MAKE_FUNCTION_websockets$exceptions$$$function__4_reason(tstate, tmp_annotations_4);

frame_frame_websockets$exceptions$$$class__2_ConnectionClosed_2->m_frame.f_lineno = 134;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__2_ConnectionClosed_80, mod_consts.const_str_plain_reason, tmp_dictset_value);
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$exceptions$$$class__2_ConnectionClosed_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$exceptions$$$class__2_ConnectionClosed_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$exceptions$$$class__2_ConnectionClosed_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$exceptions$$$class__2_ConnectionClosed_2,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_websockets$exceptions$$$class__2_ConnectionClosed_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_6;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_rcvd_str_plain_sent_str_plain_rcvd_then_sent_tuple;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__2_ConnectionClosed_80, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;

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


exception_lineno = 80;

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
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__2_ConnectionClosed_80, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;

    goto try_except_handler_6;
}
branch_no_6:;
{
PyObject *tmp_assign_source_22;
PyObject *tmp_called_value_6;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_7;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_6 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_7 = mod_consts.const_str_plain_ConnectionClosed;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_7 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_7);
tmp_tuple_element_7 = locals_websockets$exceptions$$$class__2_ConnectionClosed_80;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 80;
tmp_assign_source_22 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;

    goto try_except_handler_6;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_22;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_21 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_21);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_DECREF(locals_websockets$exceptions$$$class__2_ConnectionClosed_80);
locals_websockets$exceptions$$$class__2_ConnectionClosed_80 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_websockets$exceptions$$$class__2_ConnectionClosed_80);
locals_websockets$exceptions$$$class__2_ConnectionClosed_80 = NULL;
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
exception_lineno = 80;
goto try_except_handler_4;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionClosed, tmp_assign_source_21);
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
tmp_tuple_element_8 = module_var_accessor_websockets$exceptions$ConnectionClosed(tstate);
if (unlikely(tmp_tuple_element_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ConnectionClosed);
}

if (tmp_tuple_element_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 146;

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


exception_lineno = 146;

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


exception_lineno = 146;

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


exception_lineno = 146;

    goto try_except_handler_7;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

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


exception_lineno = 146;

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


exception_lineno = 146;

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
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_9;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_15 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_7;
}
tmp_tuple_element_9 = mod_consts.const_str_plain_ConnectionClosedOK;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_9 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 146;
tmp_assign_source_27 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

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


exception_lineno = 146;

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
PyObject *tmp_name_value_5;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_17 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_5 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_10 = BUILTIN_GETATTR(tstate, tmp_expression_value_17, tmp_name_value_5, tmp_default_value_3);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

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


exception_lineno = 146;

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


exception_lineno = 146;

    goto try_except_handler_7;
}
frame_frame_websockets$exceptions->m_frame.f_lineno = 146;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 146;
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
locals_websockets$exceptions$$$class__3_ConnectionClosedOK_146 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_4ddd7fcb80f9d65673bce8553d39aa96;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__3_ConnectionClosedOK_146, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_digest_46d67fc598415aff3501cd2dfd8c5be3;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__3_ConnectionClosedOK_146, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_plain_ConnectionClosedOK;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__3_ConnectionClosedOK_146, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_int_pos_146;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__3_ConnectionClosedOK_146, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_9;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__3_ConnectionClosedOK_146, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

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


exception_lineno = 146;

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
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__3_ConnectionClosedOK_146, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_9;
}
branch_no_9:;
{
PyObject *tmp_assign_source_30;
PyObject *tmp_called_value_8;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_11;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_8 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_11 = mod_consts.const_str_plain_ConnectionClosedOK;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_11 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_11);
tmp_tuple_element_11 = locals_websockets$exceptions$$$class__3_ConnectionClosedOK_146;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 146;
tmp_assign_source_30 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

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
Py_DECREF(locals_websockets$exceptions$$$class__3_ConnectionClosedOK_146);
locals_websockets$exceptions$$$class__3_ConnectionClosedOK_146 = NULL;
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_websockets$exceptions$$$class__3_ConnectionClosedOK_146);
locals_websockets$exceptions$$$class__3_ConnectionClosedOK_146 = NULL;
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
exception_lineno = 146;
goto try_except_handler_7;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionClosedOK, tmp_assign_source_29);
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
tmp_tuple_element_12 = module_var_accessor_websockets$exceptions$ConnectionClosed(tstate);
if (unlikely(tmp_tuple_element_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ConnectionClosed);
}

if (tmp_tuple_element_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 156;

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


exception_lineno = 156;

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


exception_lineno = 156;

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


exception_lineno = 156;

    goto try_except_handler_10;
}
tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;

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


exception_lineno = 156;

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


exception_lineno = 156;

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
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_21;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_13;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_21 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;

    goto try_except_handler_10;
}
tmp_tuple_element_13 = mod_consts.const_str_plain_ConnectionClosedError;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_13 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 156;
tmp_assign_source_35 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;

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


exception_lineno = 156;

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
PyObject *tmp_name_value_6;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_23 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_6 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_14 = BUILTIN_GETATTR(tstate, tmp_expression_value_23, tmp_name_value_6, tmp_default_value_4);
if (tmp_tuple_element_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;

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


exception_lineno = 156;

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


exception_lineno = 156;

    goto try_except_handler_10;
}
frame_frame_websockets$exceptions->m_frame.f_lineno = 156;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 156;
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
locals_websockets$exceptions$$$class__4_ConnectionClosedError_156 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_4ddd7fcb80f9d65673bce8553d39aa96;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__4_ConnectionClosedError_156, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_str_digest_ac0b8aa8849c3d015f1b6187fb5392fc;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__4_ConnectionClosedError_156, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_str_plain_ConnectionClosedError;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__4_ConnectionClosedError_156, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_int_pos_156;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__4_ConnectionClosedError_156, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;

    goto try_except_handler_12;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__4_ConnectionClosedError_156, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;

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


exception_lineno = 156;

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
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__4_ConnectionClosedError_156, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;

    goto try_except_handler_12;
}
branch_no_12:;
{
PyObject *tmp_assign_source_38;
PyObject *tmp_called_value_10;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_15;
PyObject *tmp_kwargs_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_called_value_10 = tmp_class_container$class_creation_4__metaclass;
tmp_tuple_element_15 = mod_consts.const_str_plain_ConnectionClosedError;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_15 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_15);
tmp_tuple_element_15 = locals_websockets$exceptions$$$class__4_ConnectionClosedError_156;
PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 156;
tmp_assign_source_38 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;

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
Py_DECREF(locals_websockets$exceptions$$$class__4_ConnectionClosedError_156);
locals_websockets$exceptions$$$class__4_ConnectionClosedError_156 = NULL;
goto try_return_handler_11;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_websockets$exceptions$$$class__4_ConnectionClosedError_156);
locals_websockets$exceptions$$$class__4_ConnectionClosedError_156 = NULL;
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
exception_lineno = 156;
goto try_except_handler_10;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionClosedError, tmp_assign_source_37);
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
tmp_tuple_element_16 = module_var_accessor_websockets$exceptions$WebSocketException(tstate);
if (unlikely(tmp_tuple_element_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WebSocketException);
}

if (tmp_tuple_element_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 166;

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


exception_lineno = 166;

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


exception_lineno = 166;

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


exception_lineno = 166;

    goto try_except_handler_13;
}
tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
CHECK_OBJECT(tmp_type_arg_9);
Py_DECREF(tmp_type_arg_9);
if (tmp_metaclass_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;

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


exception_lineno = 166;

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


exception_lineno = 166;

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
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_27;
PyObject *tmp_args_value_9;
PyObject *tmp_tuple_element_17;
PyObject *tmp_kwargs_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_27 = tmp_class_container$class_creation_5__metaclass;
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;

    goto try_except_handler_13;
}
tmp_tuple_element_17 = mod_consts.const_str_plain_InvalidURI;
tmp_args_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_17 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_9 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 166;
tmp_assign_source_43 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_9, tmp_kwargs_value_9);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_value_9);
Py_DECREF(tmp_args_value_9);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;

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


exception_lineno = 166;

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
PyObject *tmp_name_value_7;
PyObject *tmp_default_value_5;
tmp_mod_expr_left_5 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_29 = tmp_class_container$class_creation_5__metaclass;
tmp_name_value_7 = const_str_plain___name__;
tmp_default_value_5 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_18 = BUILTIN_GETATTR(tstate, tmp_expression_value_29, tmp_name_value_7, tmp_default_value_5);
if (tmp_tuple_element_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;

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


exception_lineno = 166;

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


exception_lineno = 166;

    goto try_except_handler_13;
}
frame_frame_websockets$exceptions->m_frame.f_lineno = 166;
tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_5);
CHECK_OBJECT(tmp_make_exception_arg_5);
Py_DECREF(tmp_make_exception_arg_5);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 166;
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
locals_websockets$exceptions$$$class__5_InvalidURI_166 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_4ddd7fcb80f9d65673bce8553d39aa96;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__5_InvalidURI_166, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_str_digest_b8638bc186580ef2beb95eb6770137d5;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__5_InvalidURI_166, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_str_plain_InvalidURI;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__5_InvalidURI_166, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_int_pos_166;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__5_InvalidURI_166, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;

    goto try_except_handler_15;
}
frame_frame_websockets$exceptions$$$class__5_InvalidURI_3 = MAKE_CLASS_FRAME(tstate, code_objects_f2b7b152c019fe467a59913bec0d2567, module_websockets$exceptions, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$exceptions$$$class__5_InvalidURI_3);
assert(Py_REFCNT(frame_frame_websockets$exceptions$$$class__5_InvalidURI_3) == 2);

// Framed code:
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_b93f8f674c0108197b62e12916a39688);

tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__5___init__(tstate, tmp_annotations_5);

tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__5_InvalidURI_166, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__6___str__(tstate, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__5_InvalidURI_166, mod_consts.const_str_plain___str__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$exceptions$$$class__5_InvalidURI_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$exceptions$$$class__5_InvalidURI_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$exceptions$$$class__5_InvalidURI_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$exceptions$$$class__5_InvalidURI_3,
    type_description_2,
    outline_4_var___class__
);



assertFrameObject(frame_frame_websockets$exceptions$$$class__5_InvalidURI_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_15;
skip_nested_handling_2:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_uri_str_plain_msg_tuple;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__5_InvalidURI_166, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;

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


exception_lineno = 166;

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
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__5_InvalidURI_166, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;

    goto try_except_handler_15;
}
branch_no_15:;
{
PyObject *tmp_assign_source_46;
PyObject *tmp_called_value_12;
PyObject *tmp_args_value_10;
PyObject *tmp_tuple_element_19;
PyObject *tmp_kwargs_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_called_value_12 = tmp_class_container$class_creation_5__metaclass;
tmp_tuple_element_19 = mod_consts.const_str_plain_InvalidURI;
tmp_args_value_10 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_19);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_19 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_19);
tmp_tuple_element_19 = locals_websockets$exceptions$$$class__5_InvalidURI_166;
PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_19);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_10 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 166;
tmp_assign_source_46 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_10, tmp_kwargs_value_10);
CHECK_OBJECT(tmp_args_value_10);
Py_DECREF(tmp_args_value_10);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;

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
Py_DECREF(locals_websockets$exceptions$$$class__5_InvalidURI_166);
locals_websockets$exceptions$$$class__5_InvalidURI_166 = NULL;
goto try_return_handler_14;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_websockets$exceptions$$$class__5_InvalidURI_166);
locals_websockets$exceptions$$$class__5_InvalidURI_166 = NULL;
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
exception_lineno = 166;
goto try_except_handler_13;
outline_result_10:;
UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidURI, tmp_assign_source_45);
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
tmp_tuple_element_20 = module_var_accessor_websockets$exceptions$WebSocketException(tstate);
if (unlikely(tmp_tuple_element_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WebSocketException);
}

if (tmp_tuple_element_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 180;

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


exception_lineno = 180;

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


exception_lineno = 180;

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


exception_lineno = 180;

    goto try_except_handler_16;
}
tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
CHECK_OBJECT(tmp_type_arg_11);
Py_DECREF(tmp_type_arg_11);
if (tmp_metaclass_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;

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


exception_lineno = 180;

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


exception_lineno = 180;

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
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_33;
PyObject *tmp_args_value_11;
PyObject *tmp_tuple_element_21;
PyObject *tmp_kwargs_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_33 = tmp_class_container$class_creation_6__metaclass;
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;

    goto try_except_handler_16;
}
tmp_tuple_element_21 = mod_consts.const_str_plain_InvalidProxy;
tmp_args_value_11 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_21);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_21 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_21);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_11 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 180;
tmp_assign_source_51 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_11, tmp_kwargs_value_11);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_value_11);
Py_DECREF(tmp_args_value_11);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;

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


exception_lineno = 180;

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
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_6;
tmp_mod_expr_left_6 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_35 = tmp_class_container$class_creation_6__metaclass;
tmp_name_value_8 = const_str_plain___name__;
tmp_default_value_6 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_22 = BUILTIN_GETATTR(tstate, tmp_expression_value_35, tmp_name_value_8, tmp_default_value_6);
if (tmp_tuple_element_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;

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


exception_lineno = 180;

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


exception_lineno = 180;

    goto try_except_handler_16;
}
frame_frame_websockets$exceptions->m_frame.f_lineno = 180;
tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_6);
CHECK_OBJECT(tmp_make_exception_arg_6);
Py_DECREF(tmp_make_exception_arg_6);
assert(!(tmp_raise_type_6 == NULL));
exception_state.exception_value = tmp_raise_type_6;
exception_lineno = 180;
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
locals_websockets$exceptions$$$class__6_InvalidProxy_180 = tmp_set_locals_6;
Py_INCREF(tmp_set_locals_6);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_4ddd7fcb80f9d65673bce8553d39aa96;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__6_InvalidProxy_180, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;

    goto try_except_handler_18;
}
tmp_dictset_value = mod_consts.const_str_digest_575bdcd445841b07407d6666e62f52a9;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__6_InvalidProxy_180, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;

    goto try_except_handler_18;
}
tmp_dictset_value = mod_consts.const_str_plain_InvalidProxy;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__6_InvalidProxy_180, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;

    goto try_except_handler_18;
}
tmp_dictset_value = mod_consts.const_int_pos_180;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__6_InvalidProxy_180, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;

    goto try_except_handler_18;
}
frame_frame_websockets$exceptions$$$class__6_InvalidProxy_4 = MAKE_CLASS_FRAME(tstate, code_objects_26d0a93c6290cda50757ab7e2fb95727, module_websockets$exceptions, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$exceptions$$$class__6_InvalidProxy_4);
assert(Py_REFCNT(frame_frame_websockets$exceptions$$$class__6_InvalidProxy_4) == 2);

// Framed code:
{
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_f16d99b7f62d385734276f9ccc71ef32);

tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__7___init__(tstate, tmp_annotations_7);

tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__6_InvalidProxy_180, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__8___str__(tstate, tmp_annotations_8);

tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__6_InvalidProxy_180, mod_consts.const_str_plain___str__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$exceptions$$$class__6_InvalidProxy_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$exceptions$$$class__6_InvalidProxy_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$exceptions$$$class__6_InvalidProxy_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$exceptions$$$class__6_InvalidProxy_4,
    type_description_2,
    outline_5_var___class__
);



assertFrameObject(frame_frame_websockets$exceptions$$$class__6_InvalidProxy_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_18;
skip_nested_handling_3:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_proxy_str_plain_msg_tuple;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__6_InvalidProxy_180, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;

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


exception_lineno = 180;

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
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__6_InvalidProxy_180, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;

    goto try_except_handler_18;
}
branch_no_18:;
{
PyObject *tmp_assign_source_54;
PyObject *tmp_called_value_14;
PyObject *tmp_args_value_12;
PyObject *tmp_tuple_element_23;
PyObject *tmp_kwargs_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_called_value_14 = tmp_class_container$class_creation_6__metaclass;
tmp_tuple_element_23 = mod_consts.const_str_plain_InvalidProxy;
tmp_args_value_12 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_23);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_23 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_23);
tmp_tuple_element_23 = locals_websockets$exceptions$$$class__6_InvalidProxy_180;
PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_23);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_12 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 180;
tmp_assign_source_54 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_12, tmp_kwargs_value_12);
CHECK_OBJECT(tmp_args_value_12);
Py_DECREF(tmp_args_value_12);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;

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
Py_DECREF(locals_websockets$exceptions$$$class__6_InvalidProxy_180);
locals_websockets$exceptions$$$class__6_InvalidProxy_180 = NULL;
goto try_return_handler_17;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_websockets$exceptions$$$class__6_InvalidProxy_180);
locals_websockets$exceptions$$$class__6_InvalidProxy_180 = NULL;
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
exception_lineno = 180;
goto try_except_handler_16;
outline_result_12:;
UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidProxy, tmp_assign_source_53);
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
tmp_tuple_element_24 = module_var_accessor_websockets$exceptions$WebSocketException(tstate);
if (unlikely(tmp_tuple_element_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WebSocketException);
}

if (tmp_tuple_element_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 194;

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


exception_lineno = 194;

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


exception_lineno = 194;

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


exception_lineno = 194;

    goto try_except_handler_19;
}
tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
CHECK_OBJECT(tmp_type_arg_13);
Py_DECREF(tmp_type_arg_13);
if (tmp_metaclass_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;

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


exception_lineno = 194;

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


exception_lineno = 194;

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
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_39;
PyObject *tmp_args_value_13;
PyObject *tmp_tuple_element_25;
PyObject *tmp_kwargs_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_39 = tmp_class_container$class_creation_7__metaclass;
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;

    goto try_except_handler_19;
}
tmp_tuple_element_25 = mod_consts.const_str_plain_InvalidHandshake;
tmp_args_value_13 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_25);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_tuple_element_25 = tmp_class_container$class_creation_7__bases;
PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_25);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_13 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 194;
tmp_assign_source_59 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_13, tmp_kwargs_value_13);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_value_13);
Py_DECREF(tmp_args_value_13);
if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;

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


exception_lineno = 194;

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
PyObject *tmp_name_value_9;
PyObject *tmp_default_value_7;
tmp_mod_expr_left_7 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_41 = tmp_class_container$class_creation_7__metaclass;
tmp_name_value_9 = const_str_plain___name__;
tmp_default_value_7 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_26 = BUILTIN_GETATTR(tstate, tmp_expression_value_41, tmp_name_value_9, tmp_default_value_7);
if (tmp_tuple_element_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;

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


exception_lineno = 194;

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


exception_lineno = 194;

    goto try_except_handler_19;
}
frame_frame_websockets$exceptions->m_frame.f_lineno = 194;
tmp_raise_type_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_7);
CHECK_OBJECT(tmp_make_exception_arg_7);
Py_DECREF(tmp_make_exception_arg_7);
assert(!(tmp_raise_type_7 == NULL));
exception_state.exception_value = tmp_raise_type_7;
exception_lineno = 194;
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
locals_websockets$exceptions$$$class__7_InvalidHandshake_194 = tmp_set_locals_7;
Py_INCREF(tmp_set_locals_7);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_4ddd7fcb80f9d65673bce8553d39aa96;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__7_InvalidHandshake_194, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;

    goto try_except_handler_21;
}
tmp_dictset_value = mod_consts.const_str_digest_99a23b61d34295269a0bc5f30590aab0;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__7_InvalidHandshake_194, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;

    goto try_except_handler_21;
}
tmp_dictset_value = mod_consts.const_str_plain_InvalidHandshake;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__7_InvalidHandshake_194, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;

    goto try_except_handler_21;
}
tmp_dictset_value = mod_consts.const_int_pos_194;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__7_InvalidHandshake_194, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;

    goto try_except_handler_21;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__7_InvalidHandshake_194, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;

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


exception_lineno = 194;

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
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__7_InvalidHandshake_194, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;

    goto try_except_handler_21;
}
branch_no_21:;
{
PyObject *tmp_assign_source_62;
PyObject *tmp_called_value_16;
PyObject *tmp_args_value_14;
PyObject *tmp_tuple_element_27;
PyObject *tmp_kwargs_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_called_value_16 = tmp_class_container$class_creation_7__metaclass;
tmp_tuple_element_27 = mod_consts.const_str_plain_InvalidHandshake;
tmp_args_value_14 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_27);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_tuple_element_27 = tmp_class_container$class_creation_7__bases;
PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_27);
tmp_tuple_element_27 = locals_websockets$exceptions$$$class__7_InvalidHandshake_194;
PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_27);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_14 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 194;
tmp_assign_source_62 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_14, tmp_kwargs_value_14);
CHECK_OBJECT(tmp_args_value_14);
Py_DECREF(tmp_args_value_14);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;

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
Py_DECREF(locals_websockets$exceptions$$$class__7_InvalidHandshake_194);
locals_websockets$exceptions$$$class__7_InvalidHandshake_194 = NULL;
goto try_return_handler_20;
// Exception handler code:
try_except_handler_21:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_websockets$exceptions$$$class__7_InvalidHandshake_194);
locals_websockets$exceptions$$$class__7_InvalidHandshake_194 = NULL;
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
exception_lineno = 194;
goto try_except_handler_19;
outline_result_14:;
UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidHandshake, tmp_assign_source_61);
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
tmp_tuple_element_28 = module_var_accessor_websockets$exceptions$InvalidHandshake(tstate);
if (unlikely(tmp_tuple_element_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidHandshake);
}

if (tmp_tuple_element_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 201;

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


exception_lineno = 201;

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


exception_lineno = 201;

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


exception_lineno = 201;

    goto try_except_handler_22;
}
tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
CHECK_OBJECT(tmp_type_arg_15);
Py_DECREF(tmp_type_arg_15);
if (tmp_metaclass_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;

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


exception_lineno = 201;

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


exception_lineno = 201;

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
PyObject *tmp_called_value_17;
PyObject *tmp_expression_value_45;
PyObject *tmp_args_value_15;
PyObject *tmp_tuple_element_29;
PyObject *tmp_kwargs_value_15;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_45 = tmp_class_container$class_creation_8__metaclass;
tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;

    goto try_except_handler_22;
}
tmp_tuple_element_29 = mod_consts.const_str_plain_SecurityError;
tmp_args_value_15 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_29);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_29 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_29);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_15 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 201;
tmp_assign_source_67 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_15, tmp_kwargs_value_15);
CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
CHECK_OBJECT(tmp_args_value_15);
Py_DECREF(tmp_args_value_15);
if (tmp_assign_source_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;

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


exception_lineno = 201;

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
PyObject *tmp_name_value_10;
PyObject *tmp_default_value_8;
tmp_mod_expr_left_8 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_47 = tmp_class_container$class_creation_8__metaclass;
tmp_name_value_10 = const_str_plain___name__;
tmp_default_value_8 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_30 = BUILTIN_GETATTR(tstate, tmp_expression_value_47, tmp_name_value_10, tmp_default_value_8);
if (tmp_tuple_element_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;

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


exception_lineno = 201;

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


exception_lineno = 201;

    goto try_except_handler_22;
}
frame_frame_websockets$exceptions->m_frame.f_lineno = 201;
tmp_raise_type_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_8);
CHECK_OBJECT(tmp_make_exception_arg_8);
Py_DECREF(tmp_make_exception_arg_8);
assert(!(tmp_raise_type_8 == NULL));
exception_state.exception_value = tmp_raise_type_8;
exception_lineno = 201;
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
locals_websockets$exceptions$$$class__8_SecurityError_201 = tmp_set_locals_8;
Py_INCREF(tmp_set_locals_8);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_4ddd7fcb80f9d65673bce8553d39aa96;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__8_SecurityError_201, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;

    goto try_except_handler_24;
}
tmp_dictset_value = mod_consts.const_str_digest_9199e8203977bd437e7c28d4d4e469d0;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__8_SecurityError_201, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;

    goto try_except_handler_24;
}
tmp_dictset_value = mod_consts.const_str_plain_SecurityError;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__8_SecurityError_201, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;

    goto try_except_handler_24;
}
tmp_dictset_value = mod_consts.const_int_pos_201;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__8_SecurityError_201, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;

    goto try_except_handler_24;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__8_SecurityError_201, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;

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


exception_lineno = 201;

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
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__8_SecurityError_201, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;

    goto try_except_handler_24;
}
branch_no_24:;
{
PyObject *tmp_assign_source_70;
PyObject *tmp_called_value_18;
PyObject *tmp_args_value_16;
PyObject *tmp_tuple_element_31;
PyObject *tmp_kwargs_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_called_value_18 = tmp_class_container$class_creation_8__metaclass;
tmp_tuple_element_31 = mod_consts.const_str_plain_SecurityError;
tmp_args_value_16 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_31);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_31 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_31);
tmp_tuple_element_31 = locals_websockets$exceptions$$$class__8_SecurityError_201;
PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_31);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_16 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 201;
tmp_assign_source_70 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_16, tmp_kwargs_value_16);
CHECK_OBJECT(tmp_args_value_16);
Py_DECREF(tmp_args_value_16);
if (tmp_assign_source_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;

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
Py_DECREF(locals_websockets$exceptions$$$class__8_SecurityError_201);
locals_websockets$exceptions$$$class__8_SecurityError_201 = NULL;
goto try_return_handler_23;
// Exception handler code:
try_except_handler_24:;
exception_keeper_lineno_22 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_22 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_websockets$exceptions$$$class__8_SecurityError_201);
locals_websockets$exceptions$$$class__8_SecurityError_201 = NULL;
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
exception_lineno = 201;
goto try_except_handler_22;
outline_result_16:;
UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_SecurityError, tmp_assign_source_69);
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
tmp_tuple_element_32 = module_var_accessor_websockets$exceptions$InvalidHandshake(tstate);
if (unlikely(tmp_tuple_element_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidHandshake);
}

if (tmp_tuple_element_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 211;

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


exception_lineno = 211;

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


exception_lineno = 211;

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


exception_lineno = 211;

    goto try_except_handler_25;
}
tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_17);
CHECK_OBJECT(tmp_type_arg_17);
Py_DECREF(tmp_type_arg_17);
if (tmp_metaclass_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

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


exception_lineno = 211;

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


exception_lineno = 211;

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
PyObject *tmp_called_value_19;
PyObject *tmp_expression_value_51;
PyObject *tmp_args_value_17;
PyObject *tmp_tuple_element_33;
PyObject *tmp_kwargs_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_51 = tmp_class_container$class_creation_9__metaclass;
tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto try_except_handler_25;
}
tmp_tuple_element_33 = mod_consts.const_str_plain_ProxyError;
tmp_args_value_17 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_33);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_tuple_element_33 = tmp_class_container$class_creation_9__bases;
PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_33);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_kwargs_value_17 = tmp_class_container$class_creation_9__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 211;
tmp_assign_source_75 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_17, tmp_kwargs_value_17);
CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
CHECK_OBJECT(tmp_args_value_17);
Py_DECREF(tmp_args_value_17);
if (tmp_assign_source_75 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

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


exception_lineno = 211;

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
PyObject *tmp_name_value_11;
PyObject *tmp_default_value_9;
tmp_mod_expr_left_9 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_53 = tmp_class_container$class_creation_9__metaclass;
tmp_name_value_11 = const_str_plain___name__;
tmp_default_value_9 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_34 = BUILTIN_GETATTR(tstate, tmp_expression_value_53, tmp_name_value_11, tmp_default_value_9);
if (tmp_tuple_element_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

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


exception_lineno = 211;

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


exception_lineno = 211;

    goto try_except_handler_25;
}
frame_frame_websockets$exceptions->m_frame.f_lineno = 211;
tmp_raise_type_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_9);
CHECK_OBJECT(tmp_make_exception_arg_9);
Py_DECREF(tmp_make_exception_arg_9);
assert(!(tmp_raise_type_9 == NULL));
exception_state.exception_value = tmp_raise_type_9;
exception_lineno = 211;
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
locals_websockets$exceptions$$$class__9_ProxyError_211 = tmp_set_locals_9;
Py_INCREF(tmp_set_locals_9);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_4ddd7fcb80f9d65673bce8553d39aa96;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__9_ProxyError_211, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto try_except_handler_27;
}
tmp_dictset_value = mod_consts.const_str_digest_4302af35b98c698caa7e375b87f1e27d;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__9_ProxyError_211, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto try_except_handler_27;
}
tmp_dictset_value = mod_consts.const_str_plain_ProxyError;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__9_ProxyError_211, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto try_except_handler_27;
}
tmp_dictset_value = mod_consts.const_int_pos_211;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__9_ProxyError_211, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto try_except_handler_27;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__9_ProxyError_211, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

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


exception_lineno = 211;

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
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__9_ProxyError_211, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto try_except_handler_27;
}
branch_no_27:;
{
PyObject *tmp_assign_source_78;
PyObject *tmp_called_value_20;
PyObject *tmp_args_value_18;
PyObject *tmp_tuple_element_35;
PyObject *tmp_kwargs_value_18;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_called_value_20 = tmp_class_container$class_creation_9__metaclass;
tmp_tuple_element_35 = mod_consts.const_str_plain_ProxyError;
tmp_args_value_18 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_35);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_tuple_element_35 = tmp_class_container$class_creation_9__bases;
PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_35);
tmp_tuple_element_35 = locals_websockets$exceptions$$$class__9_ProxyError_211;
PyTuple_SET_ITEM0(tmp_args_value_18, 2, tmp_tuple_element_35);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_kwargs_value_18 = tmp_class_container$class_creation_9__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 211;
tmp_assign_source_78 = CALL_FUNCTION(tstate, tmp_called_value_20, tmp_args_value_18, tmp_kwargs_value_18);
CHECK_OBJECT(tmp_args_value_18);
Py_DECREF(tmp_args_value_18);
if (tmp_assign_source_78 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

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
Py_DECREF(locals_websockets$exceptions$$$class__9_ProxyError_211);
locals_websockets$exceptions$$$class__9_ProxyError_211 = NULL;
goto try_return_handler_26;
// Exception handler code:
try_except_handler_27:;
exception_keeper_lineno_25 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_25 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_websockets$exceptions$$$class__9_ProxyError_211);
locals_websockets$exceptions$$$class__9_ProxyError_211 = NULL;
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
exception_lineno = 211;
goto try_except_handler_25;
outline_result_18:;
UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyError, tmp_assign_source_77);
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
tmp_tuple_element_36 = module_var_accessor_websockets$exceptions$ProxyError(tstate);
if (unlikely(tmp_tuple_element_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ProxyError);
}

if (tmp_tuple_element_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 218;

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


exception_lineno = 218;

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


exception_lineno = 218;

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


exception_lineno = 218;

    goto try_except_handler_28;
}
tmp_metaclass_value_10 = BUILTIN_TYPE1(tmp_type_arg_19);
CHECK_OBJECT(tmp_type_arg_19);
Py_DECREF(tmp_type_arg_19);
if (tmp_metaclass_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

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


exception_lineno = 218;

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


exception_lineno = 218;

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
PyObject *tmp_called_value_21;
PyObject *tmp_expression_value_57;
PyObject *tmp_args_value_19;
PyObject *tmp_tuple_element_37;
PyObject *tmp_kwargs_value_19;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_57 = tmp_class_container$class_creation_10__metaclass;
tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

    goto try_except_handler_28;
}
tmp_tuple_element_37 = mod_consts.const_str_plain_InvalidProxyMessage;
tmp_args_value_19 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_37);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_tuple_element_37 = tmp_class_container$class_creation_10__bases;
PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_37);
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
tmp_kwargs_value_19 = tmp_class_container$class_creation_10__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 218;
tmp_assign_source_83 = CALL_FUNCTION(tstate, tmp_called_value_21, tmp_args_value_19, tmp_kwargs_value_19);
CHECK_OBJECT(tmp_called_value_21);
Py_DECREF(tmp_called_value_21);
CHECK_OBJECT(tmp_args_value_19);
Py_DECREF(tmp_args_value_19);
if (tmp_assign_source_83 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

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


exception_lineno = 218;

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
PyObject *tmp_name_value_12;
PyObject *tmp_default_value_10;
tmp_mod_expr_left_10 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_59 = tmp_class_container$class_creation_10__metaclass;
tmp_name_value_12 = const_str_plain___name__;
tmp_default_value_10 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_38 = BUILTIN_GETATTR(tstate, tmp_expression_value_59, tmp_name_value_12, tmp_default_value_10);
if (tmp_tuple_element_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

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


exception_lineno = 218;

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


exception_lineno = 218;

    goto try_except_handler_28;
}
frame_frame_websockets$exceptions->m_frame.f_lineno = 218;
tmp_raise_type_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_10);
CHECK_OBJECT(tmp_make_exception_arg_10);
Py_DECREF(tmp_make_exception_arg_10);
assert(!(tmp_raise_type_10 == NULL));
exception_state.exception_value = tmp_raise_type_10;
exception_lineno = 218;
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
locals_websockets$exceptions$$$class__10_InvalidProxyMessage_218 = tmp_set_locals_10;
Py_INCREF(tmp_set_locals_10);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_4ddd7fcb80f9d65673bce8553d39aa96;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__10_InvalidProxyMessage_218, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

    goto try_except_handler_30;
}
tmp_dictset_value = mod_consts.const_str_digest_63be760c5d18e31b95087c17fb751455;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__10_InvalidProxyMessage_218, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

    goto try_except_handler_30;
}
tmp_dictset_value = mod_consts.const_str_plain_InvalidProxyMessage;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__10_InvalidProxyMessage_218, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

    goto try_except_handler_30;
}
tmp_dictset_value = mod_consts.const_int_pos_218;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__10_InvalidProxyMessage_218, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

    goto try_except_handler_30;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__10_InvalidProxyMessage_218, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

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


exception_lineno = 218;

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
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__10_InvalidProxyMessage_218, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

    goto try_except_handler_30;
}
branch_no_30:;
{
PyObject *tmp_assign_source_86;
PyObject *tmp_called_value_22;
PyObject *tmp_args_value_20;
PyObject *tmp_tuple_element_39;
PyObject *tmp_kwargs_value_20;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_called_value_22 = tmp_class_container$class_creation_10__metaclass;
tmp_tuple_element_39 = mod_consts.const_str_plain_InvalidProxyMessage;
tmp_args_value_20 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_39);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_tuple_element_39 = tmp_class_container$class_creation_10__bases;
PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_39);
tmp_tuple_element_39 = locals_websockets$exceptions$$$class__10_InvalidProxyMessage_218;
PyTuple_SET_ITEM0(tmp_args_value_20, 2, tmp_tuple_element_39);
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
tmp_kwargs_value_20 = tmp_class_container$class_creation_10__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 218;
tmp_assign_source_86 = CALL_FUNCTION(tstate, tmp_called_value_22, tmp_args_value_20, tmp_kwargs_value_20);
CHECK_OBJECT(tmp_args_value_20);
Py_DECREF(tmp_args_value_20);
if (tmp_assign_source_86 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

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
Py_DECREF(locals_websockets$exceptions$$$class__10_InvalidProxyMessage_218);
locals_websockets$exceptions$$$class__10_InvalidProxyMessage_218 = NULL;
goto try_return_handler_29;
// Exception handler code:
try_except_handler_30:;
exception_keeper_lineno_28 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_28 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_websockets$exceptions$$$class__10_InvalidProxyMessage_218);
locals_websockets$exceptions$$$class__10_InvalidProxyMessage_218 = NULL;
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
exception_lineno = 218;
goto try_except_handler_28;
outline_result_20:;
UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidProxyMessage, tmp_assign_source_85);
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
tmp_tuple_element_40 = module_var_accessor_websockets$exceptions$ProxyError(tstate);
if (unlikely(tmp_tuple_element_40 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ProxyError);
}

if (tmp_tuple_element_40 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 225;

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


exception_lineno = 225;

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


exception_lineno = 225;

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


exception_lineno = 225;

    goto try_except_handler_31;
}
tmp_metaclass_value_11 = BUILTIN_TYPE1(tmp_type_arg_21);
CHECK_OBJECT(tmp_type_arg_21);
Py_DECREF(tmp_type_arg_21);
if (tmp_metaclass_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;

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


exception_lineno = 225;

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


exception_lineno = 225;

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
PyObject *tmp_called_value_23;
PyObject *tmp_expression_value_63;
PyObject *tmp_args_value_21;
PyObject *tmp_tuple_element_41;
PyObject *tmp_kwargs_value_21;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_expression_value_63 = tmp_class_container$class_creation_11__metaclass;
tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;

    goto try_except_handler_31;
}
tmp_tuple_element_41 = mod_consts.const_str_plain_InvalidProxyStatus;
tmp_args_value_21 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_21, 0, tmp_tuple_element_41);
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_tuple_element_41 = tmp_class_container$class_creation_11__bases;
PyTuple_SET_ITEM0(tmp_args_value_21, 1, tmp_tuple_element_41);
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
tmp_kwargs_value_21 = tmp_class_container$class_creation_11__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 225;
tmp_assign_source_91 = CALL_FUNCTION(tstate, tmp_called_value_23, tmp_args_value_21, tmp_kwargs_value_21);
CHECK_OBJECT(tmp_called_value_23);
Py_DECREF(tmp_called_value_23);
CHECK_OBJECT(tmp_args_value_21);
Py_DECREF(tmp_args_value_21);
if (tmp_assign_source_91 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;

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


exception_lineno = 225;

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
PyObject *tmp_name_value_13;
PyObject *tmp_default_value_11;
tmp_mod_expr_left_11 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_expression_value_65 = tmp_class_container$class_creation_11__metaclass;
tmp_name_value_13 = const_str_plain___name__;
tmp_default_value_11 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_42 = BUILTIN_GETATTR(tstate, tmp_expression_value_65, tmp_name_value_13, tmp_default_value_11);
if (tmp_tuple_element_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;

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


exception_lineno = 225;

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


exception_lineno = 225;

    goto try_except_handler_31;
}
frame_frame_websockets$exceptions->m_frame.f_lineno = 225;
tmp_raise_type_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_11);
CHECK_OBJECT(tmp_make_exception_arg_11);
Py_DECREF(tmp_make_exception_arg_11);
assert(!(tmp_raise_type_11 == NULL));
exception_state.exception_value = tmp_raise_type_11;
exception_lineno = 225;
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
locals_websockets$exceptions$$$class__11_InvalidProxyStatus_225 = tmp_set_locals_11;
Py_INCREF(tmp_set_locals_11);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_4ddd7fcb80f9d65673bce8553d39aa96;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__11_InvalidProxyStatus_225, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;

    goto try_except_handler_33;
}
tmp_dictset_value = mod_consts.const_str_digest_c70f18162d8431e32590b7b8c0606d6d;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__11_InvalidProxyStatus_225, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;

    goto try_except_handler_33;
}
tmp_dictset_value = mod_consts.const_str_plain_InvalidProxyStatus;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__11_InvalidProxyStatus_225, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;

    goto try_except_handler_33;
}
tmp_dictset_value = mod_consts.const_int_pos_225;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__11_InvalidProxyStatus_225, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;

    goto try_except_handler_33;
}
frame_frame_websockets$exceptions$$$class__11_InvalidProxyStatus_5 = MAKE_CLASS_FRAME(tstate, code_objects_d61c9f9ede207353bb184f8a38ba0468, module_websockets$exceptions, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$exceptions$$$class__11_InvalidProxyStatus_5);
assert(Py_REFCNT(frame_frame_websockets$exceptions$$$class__11_InvalidProxyStatus_5) == 2);

// Framed code:
{
PyObject *tmp_annotations_9;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_7279d1772421c529c658bb03c844c147);

tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__9___init__(tstate, tmp_annotations_9);

tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__11_InvalidProxyStatus_225, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__10___str__(tstate, tmp_annotations_10);

tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__11_InvalidProxyStatus_225, mod_consts.const_str_plain___str__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$exceptions$$$class__11_InvalidProxyStatus_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$exceptions$$$class__11_InvalidProxyStatus_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$exceptions$$$class__11_InvalidProxyStatus_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$exceptions$$$class__11_InvalidProxyStatus_5,
    type_description_2,
    outline_10_var___class__
);



assertFrameObject(frame_frame_websockets$exceptions$$$class__11_InvalidProxyStatus_5);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_33;
skip_nested_handling_4:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_response_tuple;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__11_InvalidProxyStatus_225, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;

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


exception_lineno = 225;

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
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__11_InvalidProxyStatus_225, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;

    goto try_except_handler_33;
}
branch_no_33:;
{
PyObject *tmp_assign_source_94;
PyObject *tmp_called_value_24;
PyObject *tmp_args_value_22;
PyObject *tmp_tuple_element_43;
PyObject *tmp_kwargs_value_22;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_called_value_24 = tmp_class_container$class_creation_11__metaclass;
tmp_tuple_element_43 = mod_consts.const_str_plain_InvalidProxyStatus;
tmp_args_value_22 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_22, 0, tmp_tuple_element_43);
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_tuple_element_43 = tmp_class_container$class_creation_11__bases;
PyTuple_SET_ITEM0(tmp_args_value_22, 1, tmp_tuple_element_43);
tmp_tuple_element_43 = locals_websockets$exceptions$$$class__11_InvalidProxyStatus_225;
PyTuple_SET_ITEM0(tmp_args_value_22, 2, tmp_tuple_element_43);
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
tmp_kwargs_value_22 = tmp_class_container$class_creation_11__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 225;
tmp_assign_source_94 = CALL_FUNCTION(tstate, tmp_called_value_24, tmp_args_value_22, tmp_kwargs_value_22);
CHECK_OBJECT(tmp_args_value_22);
Py_DECREF(tmp_args_value_22);
if (tmp_assign_source_94 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;

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
Py_DECREF(locals_websockets$exceptions$$$class__11_InvalidProxyStatus_225);
locals_websockets$exceptions$$$class__11_InvalidProxyStatus_225 = NULL;
goto try_return_handler_32;
// Exception handler code:
try_except_handler_33:;
exception_keeper_lineno_31 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_31 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_websockets$exceptions$$$class__11_InvalidProxyStatus_225);
locals_websockets$exceptions$$$class__11_InvalidProxyStatus_225 = NULL;
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
exception_lineno = 225;
goto try_except_handler_31;
outline_result_22:;
UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidProxyStatus, tmp_assign_source_93);
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
tmp_tuple_element_44 = module_var_accessor_websockets$exceptions$InvalidHandshake(tstate);
if (unlikely(tmp_tuple_element_44 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidHandshake);
}

if (tmp_tuple_element_44 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 238;

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


exception_lineno = 238;

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


exception_lineno = 238;

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


exception_lineno = 238;

    goto try_except_handler_34;
}
tmp_metaclass_value_12 = BUILTIN_TYPE1(tmp_type_arg_23);
CHECK_OBJECT(tmp_type_arg_23);
Py_DECREF(tmp_type_arg_23);
if (tmp_metaclass_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;

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


exception_lineno = 238;

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


exception_lineno = 238;

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
PyObject *tmp_called_value_25;
PyObject *tmp_expression_value_69;
PyObject *tmp_args_value_23;
PyObject *tmp_tuple_element_45;
PyObject *tmp_kwargs_value_23;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_expression_value_69 = tmp_class_container$class_creation_12__metaclass;
tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;

    goto try_except_handler_34;
}
tmp_tuple_element_45 = mod_consts.const_str_plain_InvalidMessage;
tmp_args_value_23 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_23, 0, tmp_tuple_element_45);
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_tuple_element_45 = tmp_class_container$class_creation_12__bases;
PyTuple_SET_ITEM0(tmp_args_value_23, 1, tmp_tuple_element_45);
CHECK_OBJECT(tmp_class_container$class_creation_12__class_decl_dict);
tmp_kwargs_value_23 = tmp_class_container$class_creation_12__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 238;
tmp_assign_source_99 = CALL_FUNCTION(tstate, tmp_called_value_25, tmp_args_value_23, tmp_kwargs_value_23);
CHECK_OBJECT(tmp_called_value_25);
Py_DECREF(tmp_called_value_25);
CHECK_OBJECT(tmp_args_value_23);
Py_DECREF(tmp_args_value_23);
if (tmp_assign_source_99 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;

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


exception_lineno = 238;

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
PyObject *tmp_name_value_14;
PyObject *tmp_default_value_12;
tmp_mod_expr_left_12 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_expression_value_71 = tmp_class_container$class_creation_12__metaclass;
tmp_name_value_14 = const_str_plain___name__;
tmp_default_value_12 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_46 = BUILTIN_GETATTR(tstate, tmp_expression_value_71, tmp_name_value_14, tmp_default_value_12);
if (tmp_tuple_element_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;

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


exception_lineno = 238;

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


exception_lineno = 238;

    goto try_except_handler_34;
}
frame_frame_websockets$exceptions->m_frame.f_lineno = 238;
tmp_raise_type_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_12);
CHECK_OBJECT(tmp_make_exception_arg_12);
Py_DECREF(tmp_make_exception_arg_12);
assert(!(tmp_raise_type_12 == NULL));
exception_state.exception_value = tmp_raise_type_12;
exception_lineno = 238;
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
locals_websockets$exceptions$$$class__12_InvalidMessage_238 = tmp_set_locals_12;
Py_INCREF(tmp_set_locals_12);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_4ddd7fcb80f9d65673bce8553d39aa96;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__12_InvalidMessage_238, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;

    goto try_except_handler_36;
}
tmp_dictset_value = mod_consts.const_str_digest_a5f9e82043f49138e6728bdd2d71229c;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__12_InvalidMessage_238, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;

    goto try_except_handler_36;
}
tmp_dictset_value = mod_consts.const_str_plain_InvalidMessage;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__12_InvalidMessage_238, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;

    goto try_except_handler_36;
}
tmp_dictset_value = mod_consts.const_int_pos_238;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__12_InvalidMessage_238, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;

    goto try_except_handler_36;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__12_InvalidMessage_238, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;

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


exception_lineno = 238;

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
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__12_InvalidMessage_238, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;

    goto try_except_handler_36;
}
branch_no_36:;
{
PyObject *tmp_assign_source_102;
PyObject *tmp_called_value_26;
PyObject *tmp_args_value_24;
PyObject *tmp_tuple_element_47;
PyObject *tmp_kwargs_value_24;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_called_value_26 = tmp_class_container$class_creation_12__metaclass;
tmp_tuple_element_47 = mod_consts.const_str_plain_InvalidMessage;
tmp_args_value_24 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_24, 0, tmp_tuple_element_47);
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_tuple_element_47 = tmp_class_container$class_creation_12__bases;
PyTuple_SET_ITEM0(tmp_args_value_24, 1, tmp_tuple_element_47);
tmp_tuple_element_47 = locals_websockets$exceptions$$$class__12_InvalidMessage_238;
PyTuple_SET_ITEM0(tmp_args_value_24, 2, tmp_tuple_element_47);
CHECK_OBJECT(tmp_class_container$class_creation_12__class_decl_dict);
tmp_kwargs_value_24 = tmp_class_container$class_creation_12__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 238;
tmp_assign_source_102 = CALL_FUNCTION(tstate, tmp_called_value_26, tmp_args_value_24, tmp_kwargs_value_24);
CHECK_OBJECT(tmp_args_value_24);
Py_DECREF(tmp_args_value_24);
if (tmp_assign_source_102 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;

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
Py_DECREF(locals_websockets$exceptions$$$class__12_InvalidMessage_238);
locals_websockets$exceptions$$$class__12_InvalidMessage_238 = NULL;
goto try_return_handler_35;
// Exception handler code:
try_except_handler_36:;
exception_keeper_lineno_34 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_34 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_websockets$exceptions$$$class__12_InvalidMessage_238);
locals_websockets$exceptions$$$class__12_InvalidMessage_238 = NULL;
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
exception_lineno = 238;
goto try_except_handler_34;
outline_result_24:;
UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidMessage, tmp_assign_source_101);
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
tmp_tuple_element_48 = module_var_accessor_websockets$exceptions$InvalidHandshake(tstate);
if (unlikely(tmp_tuple_element_48 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidHandshake);
}

if (tmp_tuple_element_48 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 245;

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


exception_lineno = 245;

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


exception_lineno = 245;

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


exception_lineno = 245;

    goto try_except_handler_37;
}
tmp_metaclass_value_13 = BUILTIN_TYPE1(tmp_type_arg_25);
CHECK_OBJECT(tmp_type_arg_25);
Py_DECREF(tmp_type_arg_25);
if (tmp_metaclass_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;

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


exception_lineno = 245;

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


exception_lineno = 245;

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
PyObject *tmp_called_value_27;
PyObject *tmp_expression_value_75;
PyObject *tmp_args_value_25;
PyObject *tmp_tuple_element_49;
PyObject *tmp_kwargs_value_25;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
tmp_expression_value_75 = tmp_class_container$class_creation_13__metaclass;
tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;

    goto try_except_handler_37;
}
tmp_tuple_element_49 = mod_consts.const_str_plain_InvalidStatus;
tmp_args_value_25 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_25, 0, tmp_tuple_element_49);
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_tuple_element_49 = tmp_class_container$class_creation_13__bases;
PyTuple_SET_ITEM0(tmp_args_value_25, 1, tmp_tuple_element_49);
CHECK_OBJECT(tmp_class_container$class_creation_13__class_decl_dict);
tmp_kwargs_value_25 = tmp_class_container$class_creation_13__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 245;
tmp_assign_source_107 = CALL_FUNCTION(tstate, tmp_called_value_27, tmp_args_value_25, tmp_kwargs_value_25);
CHECK_OBJECT(tmp_called_value_27);
Py_DECREF(tmp_called_value_27);
CHECK_OBJECT(tmp_args_value_25);
Py_DECREF(tmp_args_value_25);
if (tmp_assign_source_107 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;

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


exception_lineno = 245;

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
PyObject *tmp_name_value_15;
PyObject *tmp_default_value_13;
tmp_mod_expr_left_13 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
tmp_expression_value_77 = tmp_class_container$class_creation_13__metaclass;
tmp_name_value_15 = const_str_plain___name__;
tmp_default_value_13 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_50 = BUILTIN_GETATTR(tstate, tmp_expression_value_77, tmp_name_value_15, tmp_default_value_13);
if (tmp_tuple_element_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;

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


exception_lineno = 245;

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


exception_lineno = 245;

    goto try_except_handler_37;
}
frame_frame_websockets$exceptions->m_frame.f_lineno = 245;
tmp_raise_type_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_13);
CHECK_OBJECT(tmp_make_exception_arg_13);
Py_DECREF(tmp_make_exception_arg_13);
assert(!(tmp_raise_type_13 == NULL));
exception_state.exception_value = tmp_raise_type_13;
exception_lineno = 245;
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
locals_websockets$exceptions$$$class__13_InvalidStatus_245 = tmp_set_locals_13;
Py_INCREF(tmp_set_locals_13);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_4ddd7fcb80f9d65673bce8553d39aa96;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__13_InvalidStatus_245, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;

    goto try_except_handler_39;
}
tmp_dictset_value = mod_consts.const_str_digest_6d32eace8c982f3927cc1fe406922642;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__13_InvalidStatus_245, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;

    goto try_except_handler_39;
}
tmp_dictset_value = mod_consts.const_str_plain_InvalidStatus;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__13_InvalidStatus_245, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;

    goto try_except_handler_39;
}
tmp_dictset_value = mod_consts.const_int_pos_245;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__13_InvalidStatus_245, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;

    goto try_except_handler_39;
}
frame_frame_websockets$exceptions$$$class__13_InvalidStatus_6 = MAKE_CLASS_FRAME(tstate, code_objects_d33a3b84d31f6e2623f70b313824461e, module_websockets$exceptions, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$exceptions$$$class__13_InvalidStatus_6);
assert(Py_REFCNT(frame_frame_websockets$exceptions$$$class__13_InvalidStatus_6) == 2);

// Framed code:
{
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_7279d1772421c529c658bb03c844c147);

tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__11___init__(tstate, tmp_annotations_11);

tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__13_InvalidStatus_245, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
}
{
PyObject *tmp_annotations_12;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__12___str__(tstate, tmp_annotations_12);

tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__13_InvalidStatus_245, mod_consts.const_str_plain___str__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$exceptions$$$class__13_InvalidStatus_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$exceptions$$$class__13_InvalidStatus_6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$exceptions$$$class__13_InvalidStatus_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$exceptions$$$class__13_InvalidStatus_6,
    type_description_2,
    outline_12_var___class__
);



assertFrameObject(frame_frame_websockets$exceptions$$$class__13_InvalidStatus_6);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_5;
frame_no_exception_5:;
goto skip_nested_handling_5;
nested_frame_exit_5:;

goto try_except_handler_39;
skip_nested_handling_5:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_response_tuple;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__13_InvalidStatus_245, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;

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


exception_lineno = 245;

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
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__13_InvalidStatus_245, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;

    goto try_except_handler_39;
}
branch_no_39:;
{
PyObject *tmp_assign_source_110;
PyObject *tmp_called_value_28;
PyObject *tmp_args_value_26;
PyObject *tmp_tuple_element_51;
PyObject *tmp_kwargs_value_26;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
tmp_called_value_28 = tmp_class_container$class_creation_13__metaclass;
tmp_tuple_element_51 = mod_consts.const_str_plain_InvalidStatus;
tmp_args_value_26 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_26, 0, tmp_tuple_element_51);
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_tuple_element_51 = tmp_class_container$class_creation_13__bases;
PyTuple_SET_ITEM0(tmp_args_value_26, 1, tmp_tuple_element_51);
tmp_tuple_element_51 = locals_websockets$exceptions$$$class__13_InvalidStatus_245;
PyTuple_SET_ITEM0(tmp_args_value_26, 2, tmp_tuple_element_51);
CHECK_OBJECT(tmp_class_container$class_creation_13__class_decl_dict);
tmp_kwargs_value_26 = tmp_class_container$class_creation_13__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 245;
tmp_assign_source_110 = CALL_FUNCTION(tstate, tmp_called_value_28, tmp_args_value_26, tmp_kwargs_value_26);
CHECK_OBJECT(tmp_args_value_26);
Py_DECREF(tmp_args_value_26);
if (tmp_assign_source_110 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;

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
Py_DECREF(locals_websockets$exceptions$$$class__13_InvalidStatus_245);
locals_websockets$exceptions$$$class__13_InvalidStatus_245 = NULL;
goto try_return_handler_38;
// Exception handler code:
try_except_handler_39:;
exception_keeper_lineno_37 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_37 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_websockets$exceptions$$$class__13_InvalidStatus_245);
locals_websockets$exceptions$$$class__13_InvalidStatus_245 = NULL;
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
exception_lineno = 245;
goto try_except_handler_37;
outline_result_26:;
UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidStatus, tmp_assign_source_109);
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
tmp_tuple_element_52 = module_var_accessor_websockets$exceptions$InvalidHandshake(tstate);
if (unlikely(tmp_tuple_element_52 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidHandshake);
}

if (tmp_tuple_element_52 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 260;

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


exception_lineno = 260;

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


exception_lineno = 260;

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


exception_lineno = 260;

    goto try_except_handler_40;
}
tmp_metaclass_value_14 = BUILTIN_TYPE1(tmp_type_arg_27);
CHECK_OBJECT(tmp_type_arg_27);
Py_DECREF(tmp_type_arg_27);
if (tmp_metaclass_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

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


exception_lineno = 260;

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


exception_lineno = 260;

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
PyObject *tmp_called_value_29;
PyObject *tmp_expression_value_81;
PyObject *tmp_args_value_27;
PyObject *tmp_tuple_element_53;
PyObject *tmp_kwargs_value_27;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
tmp_expression_value_81 = tmp_class_container$class_creation_14__metaclass;
tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_40;
}
tmp_tuple_element_53 = mod_consts.const_str_plain_InvalidHeader;
tmp_args_value_27 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_27, 0, tmp_tuple_element_53);
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_tuple_element_53 = tmp_class_container$class_creation_14__bases;
PyTuple_SET_ITEM0(tmp_args_value_27, 1, tmp_tuple_element_53);
CHECK_OBJECT(tmp_class_container$class_creation_14__class_decl_dict);
tmp_kwargs_value_27 = tmp_class_container$class_creation_14__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 260;
tmp_assign_source_115 = CALL_FUNCTION(tstate, tmp_called_value_29, tmp_args_value_27, tmp_kwargs_value_27);
CHECK_OBJECT(tmp_called_value_29);
Py_DECREF(tmp_called_value_29);
CHECK_OBJECT(tmp_args_value_27);
Py_DECREF(tmp_args_value_27);
if (tmp_assign_source_115 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

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


exception_lineno = 260;

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
PyObject *tmp_name_value_16;
PyObject *tmp_default_value_14;
tmp_mod_expr_left_14 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
tmp_expression_value_83 = tmp_class_container$class_creation_14__metaclass;
tmp_name_value_16 = const_str_plain___name__;
tmp_default_value_14 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_54 = BUILTIN_GETATTR(tstate, tmp_expression_value_83, tmp_name_value_16, tmp_default_value_14);
if (tmp_tuple_element_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

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


exception_lineno = 260;

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


exception_lineno = 260;

    goto try_except_handler_40;
}
frame_frame_websockets$exceptions->m_frame.f_lineno = 260;
tmp_raise_type_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_14);
CHECK_OBJECT(tmp_make_exception_arg_14);
Py_DECREF(tmp_make_exception_arg_14);
assert(!(tmp_raise_type_14 == NULL));
exception_state.exception_value = tmp_raise_type_14;
exception_lineno = 260;
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
locals_websockets$exceptions$$$class__14_InvalidHeader_260 = tmp_set_locals_14;
Py_INCREF(tmp_set_locals_14);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_4ddd7fcb80f9d65673bce8553d39aa96;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__14_InvalidHeader_260, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_42;
}
tmp_dictset_value = mod_consts.const_str_digest_a7b1765a56def8ab44dd507bf8989d52;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__14_InvalidHeader_260, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_42;
}
tmp_dictset_value = mod_consts.const_str_plain_InvalidHeader;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__14_InvalidHeader_260, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_42;
}
tmp_dictset_value = mod_consts.const_int_pos_260;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__14_InvalidHeader_260, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_42;
}
frame_frame_websockets$exceptions$$$class__14_InvalidHeader_7 = MAKE_CLASS_FRAME(tstate, code_objects_32809f3bed7ce31542abe4460f522ce0, module_websockets$exceptions, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$exceptions$$$class__14_InvalidHeader_7);
assert(Py_REFCNT(frame_frame_websockets$exceptions$$$class__14_InvalidHeader_7) == 2);

// Framed code:
{
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_13;
tmp_defaults_2 = mod_consts.const_tuple_none_tuple;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_7744c89851d4c08b756f2ae247325f55);
Py_INCREF(tmp_defaults_2);

tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__13___init__(tstate, tmp_defaults_2, tmp_annotations_13);

tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__14_InvalidHeader_260, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
}
{
PyObject *tmp_annotations_14;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__14___str__(tstate, tmp_annotations_14);

tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__14_InvalidHeader_260, mod_consts.const_str_plain___str__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$exceptions$$$class__14_InvalidHeader_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$exceptions$$$class__14_InvalidHeader_7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$exceptions$$$class__14_InvalidHeader_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$exceptions$$$class__14_InvalidHeader_7,
    type_description_2,
    outline_13_var___class__
);



assertFrameObject(frame_frame_websockets$exceptions$$$class__14_InvalidHeader_7);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_6;
frame_no_exception_6:;
goto skip_nested_handling_6;
nested_frame_exit_6:;

goto try_except_handler_42;
skip_nested_handling_6:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_name_str_plain_value_tuple;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__14_InvalidHeader_260, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

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


exception_lineno = 260;

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
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__14_InvalidHeader_260, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_42;
}
branch_no_42:;
{
PyObject *tmp_assign_source_118;
PyObject *tmp_called_value_30;
PyObject *tmp_args_value_28;
PyObject *tmp_tuple_element_55;
PyObject *tmp_kwargs_value_28;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
tmp_called_value_30 = tmp_class_container$class_creation_14__metaclass;
tmp_tuple_element_55 = mod_consts.const_str_plain_InvalidHeader;
tmp_args_value_28 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_28, 0, tmp_tuple_element_55);
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_tuple_element_55 = tmp_class_container$class_creation_14__bases;
PyTuple_SET_ITEM0(tmp_args_value_28, 1, tmp_tuple_element_55);
tmp_tuple_element_55 = locals_websockets$exceptions$$$class__14_InvalidHeader_260;
PyTuple_SET_ITEM0(tmp_args_value_28, 2, tmp_tuple_element_55);
CHECK_OBJECT(tmp_class_container$class_creation_14__class_decl_dict);
tmp_kwargs_value_28 = tmp_class_container$class_creation_14__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 260;
tmp_assign_source_118 = CALL_FUNCTION(tstate, tmp_called_value_30, tmp_args_value_28, tmp_kwargs_value_28);
CHECK_OBJECT(tmp_args_value_28);
Py_DECREF(tmp_args_value_28);
if (tmp_assign_source_118 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

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
Py_DECREF(locals_websockets$exceptions$$$class__14_InvalidHeader_260);
locals_websockets$exceptions$$$class__14_InvalidHeader_260 = NULL;
goto try_return_handler_41;
// Exception handler code:
try_except_handler_42:;
exception_keeper_lineno_40 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_40 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_websockets$exceptions$$$class__14_InvalidHeader_260);
locals_websockets$exceptions$$$class__14_InvalidHeader_260 = NULL;
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
exception_lineno = 260;
goto try_except_handler_40;
outline_result_28:;
UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidHeader, tmp_assign_source_117);
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
tmp_tuple_element_56 = module_var_accessor_websockets$exceptions$InvalidHeader(tstate);
if (unlikely(tmp_tuple_element_56 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidHeader);
}

if (tmp_tuple_element_56 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 279;

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


exception_lineno = 279;

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


exception_lineno = 279;

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


exception_lineno = 279;

    goto try_except_handler_43;
}
tmp_metaclass_value_15 = BUILTIN_TYPE1(tmp_type_arg_29);
CHECK_OBJECT(tmp_type_arg_29);
Py_DECREF(tmp_type_arg_29);
if (tmp_metaclass_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;

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


exception_lineno = 279;

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


exception_lineno = 279;

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
PyObject *tmp_called_value_31;
PyObject *tmp_expression_value_87;
PyObject *tmp_args_value_29;
PyObject *tmp_tuple_element_57;
PyObject *tmp_kwargs_value_29;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
tmp_expression_value_87 = tmp_class_container$class_creation_15__metaclass;
tmp_called_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;

    goto try_except_handler_43;
}
tmp_tuple_element_57 = mod_consts.const_str_plain_InvalidHeaderFormat;
tmp_args_value_29 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_29, 0, tmp_tuple_element_57);
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_tuple_element_57 = tmp_class_container$class_creation_15__bases;
PyTuple_SET_ITEM0(tmp_args_value_29, 1, tmp_tuple_element_57);
CHECK_OBJECT(tmp_class_container$class_creation_15__class_decl_dict);
tmp_kwargs_value_29 = tmp_class_container$class_creation_15__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 279;
tmp_assign_source_123 = CALL_FUNCTION(tstate, tmp_called_value_31, tmp_args_value_29, tmp_kwargs_value_29);
CHECK_OBJECT(tmp_called_value_31);
Py_DECREF(tmp_called_value_31);
CHECK_OBJECT(tmp_args_value_29);
Py_DECREF(tmp_args_value_29);
if (tmp_assign_source_123 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;

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


exception_lineno = 279;

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
PyObject *tmp_name_value_17;
PyObject *tmp_default_value_15;
tmp_mod_expr_left_15 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
tmp_expression_value_89 = tmp_class_container$class_creation_15__metaclass;
tmp_name_value_17 = const_str_plain___name__;
tmp_default_value_15 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_58 = BUILTIN_GETATTR(tstate, tmp_expression_value_89, tmp_name_value_17, tmp_default_value_15);
if (tmp_tuple_element_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;

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


exception_lineno = 279;

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


exception_lineno = 279;

    goto try_except_handler_43;
}
frame_frame_websockets$exceptions->m_frame.f_lineno = 279;
tmp_raise_type_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_15);
CHECK_OBJECT(tmp_make_exception_arg_15);
Py_DECREF(tmp_make_exception_arg_15);
assert(!(tmp_raise_type_15 == NULL));
exception_state.exception_value = tmp_raise_type_15;
exception_lineno = 279;
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
outline_14_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_15;
CHECK_OBJECT(tmp_class_container$class_creation_15__prepared);
tmp_set_locals_15 = tmp_class_container$class_creation_15__prepared;
locals_websockets$exceptions$$$class__15_InvalidHeaderFormat_279 = tmp_set_locals_15;
Py_INCREF(tmp_set_locals_15);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_4ddd7fcb80f9d65673bce8553d39aa96;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__15_InvalidHeaderFormat_279, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;

    goto try_except_handler_45;
}
tmp_dictset_value = mod_consts.const_str_digest_b5439b263fd6296b6141592c1542b486;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__15_InvalidHeaderFormat_279, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;

    goto try_except_handler_45;
}
tmp_dictset_value = mod_consts.const_str_plain_InvalidHeaderFormat;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__15_InvalidHeaderFormat_279, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;

    goto try_except_handler_45;
}
tmp_dictset_value = mod_consts.const_int_pos_279;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__15_InvalidHeaderFormat_279, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;

    goto try_except_handler_45;
}
frame_frame_websockets$exceptions$$$class__15_InvalidHeaderFormat_8 = MAKE_CLASS_FRAME(tstate, code_objects_8b9d2605875c4e1e8cc278148c39bdfd, module_websockets$exceptions, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$exceptions$$$class__15_InvalidHeaderFormat_8);
assert(Py_REFCNT(frame_frame_websockets$exceptions$$$class__15_InvalidHeaderFormat_8) == 2);

// Framed code:
{
PyObject *tmp_annotations_15;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_8a958da2c0b29f334a8c20c0ff5a3e67);
tmp_closure_1[0] = outline_14_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__15___init__(tstate, tmp_annotations_15, tmp_closure_1);

tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__15_InvalidHeaderFormat_279, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$exceptions$$$class__15_InvalidHeaderFormat_8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$exceptions$$$class__15_InvalidHeaderFormat_8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$exceptions$$$class__15_InvalidHeaderFormat_8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$exceptions$$$class__15_InvalidHeaderFormat_8,
    type_description_2,
    outline_14_var___class__
);



assertFrameObject(frame_frame_websockets$exceptions$$$class__15_InvalidHeaderFormat_8);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_7;
frame_no_exception_7:;
goto skip_nested_handling_7;
nested_frame_exit_7:;

goto try_except_handler_45;
skip_nested_handling_7:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__15_InvalidHeaderFormat_279, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;

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


exception_lineno = 279;

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
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__15_InvalidHeaderFormat_279, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;

    goto try_except_handler_45;
}
branch_no_45:;
{
PyObject *tmp_assign_source_126;
PyObject *tmp_called_value_32;
PyObject *tmp_args_value_30;
PyObject *tmp_tuple_element_59;
PyObject *tmp_kwargs_value_30;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
tmp_called_value_32 = tmp_class_container$class_creation_15__metaclass;
tmp_tuple_element_59 = mod_consts.const_str_plain_InvalidHeaderFormat;
tmp_args_value_30 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_30, 0, tmp_tuple_element_59);
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_tuple_element_59 = tmp_class_container$class_creation_15__bases;
PyTuple_SET_ITEM0(tmp_args_value_30, 1, tmp_tuple_element_59);
tmp_tuple_element_59 = locals_websockets$exceptions$$$class__15_InvalidHeaderFormat_279;
PyTuple_SET_ITEM0(tmp_args_value_30, 2, tmp_tuple_element_59);
CHECK_OBJECT(tmp_class_container$class_creation_15__class_decl_dict);
tmp_kwargs_value_30 = tmp_class_container$class_creation_15__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 279;
tmp_assign_source_126 = CALL_FUNCTION(tstate, tmp_called_value_32, tmp_args_value_30, tmp_kwargs_value_30);
CHECK_OBJECT(tmp_args_value_30);
Py_DECREF(tmp_args_value_30);
if (tmp_assign_source_126 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;

    goto try_except_handler_45;
}
assert(Nuitka_Cell_GET(outline_14_var___class__) == NULL);
Nuitka_Cell_SET(outline_14_var___class__, tmp_assign_source_126);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_14_var___class__));
tmp_assign_source_125 = Nuitka_Cell_GET(outline_14_var___class__);
Py_INCREF(tmp_assign_source_125);
goto try_return_handler_45;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_45:;
Py_DECREF(locals_websockets$exceptions$$$class__15_InvalidHeaderFormat_279);
locals_websockets$exceptions$$$class__15_InvalidHeaderFormat_279 = NULL;
goto try_return_handler_44;
// Exception handler code:
try_except_handler_45:;
exception_keeper_lineno_43 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_43 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_websockets$exceptions$$$class__15_InvalidHeaderFormat_279);
locals_websockets$exceptions$$$class__15_InvalidHeaderFormat_279 = NULL;
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
exception_lineno = 279;
goto try_except_handler_43;
outline_result_30:;
UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidHeaderFormat, tmp_assign_source_125);
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
tmp_tuple_element_60 = module_var_accessor_websockets$exceptions$InvalidHeader(tstate);
if (unlikely(tmp_tuple_element_60 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidHeader);
}

if (tmp_tuple_element_60 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 291;

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


exception_lineno = 291;

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


exception_lineno = 291;

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


exception_lineno = 291;

    goto try_except_handler_46;
}
tmp_metaclass_value_16 = BUILTIN_TYPE1(tmp_type_arg_31);
CHECK_OBJECT(tmp_type_arg_31);
Py_DECREF(tmp_type_arg_31);
if (tmp_metaclass_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;

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


exception_lineno = 291;

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


exception_lineno = 291;

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
PyObject *tmp_called_value_33;
PyObject *tmp_expression_value_93;
PyObject *tmp_args_value_31;
PyObject *tmp_tuple_element_61;
PyObject *tmp_kwargs_value_31;
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
tmp_expression_value_93 = tmp_class_container$class_creation_16__metaclass;
tmp_called_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;

    goto try_except_handler_46;
}
tmp_tuple_element_61 = mod_consts.const_str_plain_InvalidHeaderValue;
tmp_args_value_31 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_31, 0, tmp_tuple_element_61);
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_tuple_element_61 = tmp_class_container$class_creation_16__bases;
PyTuple_SET_ITEM0(tmp_args_value_31, 1, tmp_tuple_element_61);
CHECK_OBJECT(tmp_class_container$class_creation_16__class_decl_dict);
tmp_kwargs_value_31 = tmp_class_container$class_creation_16__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 291;
tmp_assign_source_131 = CALL_FUNCTION(tstate, tmp_called_value_33, tmp_args_value_31, tmp_kwargs_value_31);
CHECK_OBJECT(tmp_called_value_33);
Py_DECREF(tmp_called_value_33);
CHECK_OBJECT(tmp_args_value_31);
Py_DECREF(tmp_args_value_31);
if (tmp_assign_source_131 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;

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


exception_lineno = 291;

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
PyObject *tmp_name_value_18;
PyObject *tmp_default_value_16;
tmp_mod_expr_left_16 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
tmp_expression_value_95 = tmp_class_container$class_creation_16__metaclass;
tmp_name_value_18 = const_str_plain___name__;
tmp_default_value_16 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_62 = BUILTIN_GETATTR(tstate, tmp_expression_value_95, tmp_name_value_18, tmp_default_value_16);
if (tmp_tuple_element_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;

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


exception_lineno = 291;

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


exception_lineno = 291;

    goto try_except_handler_46;
}
frame_frame_websockets$exceptions->m_frame.f_lineno = 291;
tmp_raise_type_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_16);
CHECK_OBJECT(tmp_make_exception_arg_16);
Py_DECREF(tmp_make_exception_arg_16);
assert(!(tmp_raise_type_16 == NULL));
exception_state.exception_value = tmp_raise_type_16;
exception_lineno = 291;
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
locals_websockets$exceptions$$$class__16_InvalidHeaderValue_291 = tmp_set_locals_16;
Py_INCREF(tmp_set_locals_16);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_4ddd7fcb80f9d65673bce8553d39aa96;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__16_InvalidHeaderValue_291, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;

    goto try_except_handler_48;
}
tmp_dictset_value = mod_consts.const_str_digest_63b66cb5fe1dfad83c4ea5525633e8cd;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__16_InvalidHeaderValue_291, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;

    goto try_except_handler_48;
}
tmp_dictset_value = mod_consts.const_str_plain_InvalidHeaderValue;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__16_InvalidHeaderValue_291, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;

    goto try_except_handler_48;
}
tmp_dictset_value = mod_consts.const_int_pos_291;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__16_InvalidHeaderValue_291, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;

    goto try_except_handler_48;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__16_InvalidHeaderValue_291, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;

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


exception_lineno = 291;

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
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__16_InvalidHeaderValue_291, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;

    goto try_except_handler_48;
}
branch_no_48:;
{
PyObject *tmp_assign_source_134;
PyObject *tmp_called_value_34;
PyObject *tmp_args_value_32;
PyObject *tmp_tuple_element_63;
PyObject *tmp_kwargs_value_32;
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
tmp_called_value_34 = tmp_class_container$class_creation_16__metaclass;
tmp_tuple_element_63 = mod_consts.const_str_plain_InvalidHeaderValue;
tmp_args_value_32 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_32, 0, tmp_tuple_element_63);
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_tuple_element_63 = tmp_class_container$class_creation_16__bases;
PyTuple_SET_ITEM0(tmp_args_value_32, 1, tmp_tuple_element_63);
tmp_tuple_element_63 = locals_websockets$exceptions$$$class__16_InvalidHeaderValue_291;
PyTuple_SET_ITEM0(tmp_args_value_32, 2, tmp_tuple_element_63);
CHECK_OBJECT(tmp_class_container$class_creation_16__class_decl_dict);
tmp_kwargs_value_32 = tmp_class_container$class_creation_16__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 291;
tmp_assign_source_134 = CALL_FUNCTION(tstate, tmp_called_value_34, tmp_args_value_32, tmp_kwargs_value_32);
CHECK_OBJECT(tmp_args_value_32);
Py_DECREF(tmp_args_value_32);
if (tmp_assign_source_134 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;

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
Py_DECREF(locals_websockets$exceptions$$$class__16_InvalidHeaderValue_291);
locals_websockets$exceptions$$$class__16_InvalidHeaderValue_291 = NULL;
goto try_return_handler_47;
// Exception handler code:
try_except_handler_48:;
exception_keeper_lineno_46 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_46 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_websockets$exceptions$$$class__16_InvalidHeaderValue_291);
locals_websockets$exceptions$$$class__16_InvalidHeaderValue_291 = NULL;
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
exception_lineno = 291;
goto try_except_handler_46;
outline_result_32:;
UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidHeaderValue, tmp_assign_source_133);
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
tmp_tuple_element_64 = module_var_accessor_websockets$exceptions$InvalidHeader(tstate);
if (unlikely(tmp_tuple_element_64 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidHeader);
}

if (tmp_tuple_element_64 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 300;

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


exception_lineno = 300;

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


exception_lineno = 300;

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


exception_lineno = 300;

    goto try_except_handler_49;
}
tmp_metaclass_value_17 = BUILTIN_TYPE1(tmp_type_arg_33);
CHECK_OBJECT(tmp_type_arg_33);
Py_DECREF(tmp_type_arg_33);
if (tmp_metaclass_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;

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


exception_lineno = 300;

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


exception_lineno = 300;

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
PyObject *tmp_called_value_35;
PyObject *tmp_expression_value_99;
PyObject *tmp_args_value_33;
PyObject *tmp_tuple_element_65;
PyObject *tmp_kwargs_value_33;
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
tmp_expression_value_99 = tmp_class_container$class_creation_17__metaclass;
tmp_called_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;

    goto try_except_handler_49;
}
tmp_tuple_element_65 = mod_consts.const_str_plain_InvalidOrigin;
tmp_args_value_33 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_33, 0, tmp_tuple_element_65);
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_tuple_element_65 = tmp_class_container$class_creation_17__bases;
PyTuple_SET_ITEM0(tmp_args_value_33, 1, tmp_tuple_element_65);
CHECK_OBJECT(tmp_class_container$class_creation_17__class_decl_dict);
tmp_kwargs_value_33 = tmp_class_container$class_creation_17__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 300;
tmp_assign_source_139 = CALL_FUNCTION(tstate, tmp_called_value_35, tmp_args_value_33, tmp_kwargs_value_33);
CHECK_OBJECT(tmp_called_value_35);
Py_DECREF(tmp_called_value_35);
CHECK_OBJECT(tmp_args_value_33);
Py_DECREF(tmp_args_value_33);
if (tmp_assign_source_139 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;

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


exception_lineno = 300;

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
PyObject *tmp_name_value_19;
PyObject *tmp_default_value_17;
tmp_mod_expr_left_17 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
tmp_expression_value_101 = tmp_class_container$class_creation_17__metaclass;
tmp_name_value_19 = const_str_plain___name__;
tmp_default_value_17 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_66 = BUILTIN_GETATTR(tstate, tmp_expression_value_101, tmp_name_value_19, tmp_default_value_17);
if (tmp_tuple_element_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;

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


exception_lineno = 300;

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


exception_lineno = 300;

    goto try_except_handler_49;
}
frame_frame_websockets$exceptions->m_frame.f_lineno = 300;
tmp_raise_type_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_17);
CHECK_OBJECT(tmp_make_exception_arg_17);
Py_DECREF(tmp_make_exception_arg_17);
assert(!(tmp_raise_type_17 == NULL));
exception_state.exception_value = tmp_raise_type_17;
exception_lineno = 300;
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
outline_16_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_17;
CHECK_OBJECT(tmp_class_container$class_creation_17__prepared);
tmp_set_locals_17 = tmp_class_container$class_creation_17__prepared;
locals_websockets$exceptions$$$class__17_InvalidOrigin_300 = tmp_set_locals_17;
Py_INCREF(tmp_set_locals_17);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_4ddd7fcb80f9d65673bce8553d39aa96;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__17_InvalidOrigin_300, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;

    goto try_except_handler_51;
}
tmp_dictset_value = mod_consts.const_str_digest_c0494952d3c40f6b39c148b929ef7222;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__17_InvalidOrigin_300, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;

    goto try_except_handler_51;
}
tmp_dictset_value = mod_consts.const_str_plain_InvalidOrigin;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__17_InvalidOrigin_300, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;

    goto try_except_handler_51;
}
tmp_dictset_value = mod_consts.const_int_pos_300;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__17_InvalidOrigin_300, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;

    goto try_except_handler_51;
}
frame_frame_websockets$exceptions$$$class__17_InvalidOrigin_9 = MAKE_CLASS_FRAME(tstate, code_objects_355faad5e6843c2491031a84e7f0607a, module_websockets$exceptions, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$exceptions$$$class__17_InvalidOrigin_9);
assert(Py_REFCNT(frame_frame_websockets$exceptions$$$class__17_InvalidOrigin_9) == 2);

// Framed code:
{
PyObject *tmp_annotations_16;
struct Nuitka_CellObject *tmp_closure_2[1];
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_db2ab5d1aface60a274f53bba0c27f0f);
tmp_closure_2[0] = outline_16_var___class__;
Py_INCREF(tmp_closure_2[0]);
tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__16___init__(tstate, tmp_annotations_16, tmp_closure_2);

tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__17_InvalidOrigin_300, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$exceptions$$$class__17_InvalidOrigin_9, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$exceptions$$$class__17_InvalidOrigin_9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$exceptions$$$class__17_InvalidOrigin_9, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$exceptions$$$class__17_InvalidOrigin_9,
    type_description_2,
    outline_16_var___class__
);



assertFrameObject(frame_frame_websockets$exceptions$$$class__17_InvalidOrigin_9);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_8;
frame_no_exception_8:;
goto skip_nested_handling_8;
nested_frame_exit_8:;

goto try_except_handler_51;
skip_nested_handling_8:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__17_InvalidOrigin_300, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;

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


exception_lineno = 300;

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
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__17_InvalidOrigin_300, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;

    goto try_except_handler_51;
}
branch_no_51:;
{
PyObject *tmp_assign_source_142;
PyObject *tmp_called_value_36;
PyObject *tmp_args_value_34;
PyObject *tmp_tuple_element_67;
PyObject *tmp_kwargs_value_34;
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
tmp_called_value_36 = tmp_class_container$class_creation_17__metaclass;
tmp_tuple_element_67 = mod_consts.const_str_plain_InvalidOrigin;
tmp_args_value_34 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_34, 0, tmp_tuple_element_67);
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_tuple_element_67 = tmp_class_container$class_creation_17__bases;
PyTuple_SET_ITEM0(tmp_args_value_34, 1, tmp_tuple_element_67);
tmp_tuple_element_67 = locals_websockets$exceptions$$$class__17_InvalidOrigin_300;
PyTuple_SET_ITEM0(tmp_args_value_34, 2, tmp_tuple_element_67);
CHECK_OBJECT(tmp_class_container$class_creation_17__class_decl_dict);
tmp_kwargs_value_34 = tmp_class_container$class_creation_17__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 300;
tmp_assign_source_142 = CALL_FUNCTION(tstate, tmp_called_value_36, tmp_args_value_34, tmp_kwargs_value_34);
CHECK_OBJECT(tmp_args_value_34);
Py_DECREF(tmp_args_value_34);
if (tmp_assign_source_142 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;

    goto try_except_handler_51;
}
assert(Nuitka_Cell_GET(outline_16_var___class__) == NULL);
Nuitka_Cell_SET(outline_16_var___class__, tmp_assign_source_142);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_16_var___class__));
tmp_assign_source_141 = Nuitka_Cell_GET(outline_16_var___class__);
Py_INCREF(tmp_assign_source_141);
goto try_return_handler_51;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_51:;
Py_DECREF(locals_websockets$exceptions$$$class__17_InvalidOrigin_300);
locals_websockets$exceptions$$$class__17_InvalidOrigin_300 = NULL;
goto try_return_handler_50;
// Exception handler code:
try_except_handler_51:;
exception_keeper_lineno_49 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_49 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_websockets$exceptions$$$class__17_InvalidOrigin_300);
locals_websockets$exceptions$$$class__17_InvalidOrigin_300 = NULL;
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
exception_lineno = 300;
goto try_except_handler_49;
outline_result_34:;
UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidOrigin, tmp_assign_source_141);
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
tmp_tuple_element_68 = module_var_accessor_websockets$exceptions$InvalidHeader(tstate);
if (unlikely(tmp_tuple_element_68 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidHeader);
}

if (tmp_tuple_element_68 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 310;

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


exception_lineno = 310;

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


exception_lineno = 310;

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


exception_lineno = 310;

    goto try_except_handler_52;
}
tmp_metaclass_value_18 = BUILTIN_TYPE1(tmp_type_arg_35);
CHECK_OBJECT(tmp_type_arg_35);
Py_DECREF(tmp_type_arg_35);
if (tmp_metaclass_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;

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


exception_lineno = 310;

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


exception_lineno = 310;

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
PyObject *tmp_called_value_37;
PyObject *tmp_expression_value_105;
PyObject *tmp_args_value_35;
PyObject *tmp_tuple_element_69;
PyObject *tmp_kwargs_value_35;
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
tmp_expression_value_105 = tmp_class_container$class_creation_18__metaclass;
tmp_called_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_105, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;

    goto try_except_handler_52;
}
tmp_tuple_element_69 = mod_consts.const_str_plain_InvalidUpgrade;
tmp_args_value_35 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_35, 0, tmp_tuple_element_69);
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_tuple_element_69 = tmp_class_container$class_creation_18__bases;
PyTuple_SET_ITEM0(tmp_args_value_35, 1, tmp_tuple_element_69);
CHECK_OBJECT(tmp_class_container$class_creation_18__class_decl_dict);
tmp_kwargs_value_35 = tmp_class_container$class_creation_18__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 310;
tmp_assign_source_147 = CALL_FUNCTION(tstate, tmp_called_value_37, tmp_args_value_35, tmp_kwargs_value_35);
CHECK_OBJECT(tmp_called_value_37);
Py_DECREF(tmp_called_value_37);
CHECK_OBJECT(tmp_args_value_35);
Py_DECREF(tmp_args_value_35);
if (tmp_assign_source_147 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;

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


exception_lineno = 310;

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
PyObject *tmp_name_value_20;
PyObject *tmp_default_value_18;
tmp_mod_expr_left_18 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
tmp_expression_value_107 = tmp_class_container$class_creation_18__metaclass;
tmp_name_value_20 = const_str_plain___name__;
tmp_default_value_18 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_70 = BUILTIN_GETATTR(tstate, tmp_expression_value_107, tmp_name_value_20, tmp_default_value_18);
if (tmp_tuple_element_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;

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


exception_lineno = 310;

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


exception_lineno = 310;

    goto try_except_handler_52;
}
frame_frame_websockets$exceptions->m_frame.f_lineno = 310;
tmp_raise_type_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_18);
CHECK_OBJECT(tmp_make_exception_arg_18);
Py_DECREF(tmp_make_exception_arg_18);
assert(!(tmp_raise_type_18 == NULL));
exception_state.exception_value = tmp_raise_type_18;
exception_lineno = 310;
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
locals_websockets$exceptions$$$class__18_InvalidUpgrade_310 = tmp_set_locals_18;
Py_INCREF(tmp_set_locals_18);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_4ddd7fcb80f9d65673bce8553d39aa96;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__18_InvalidUpgrade_310, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;

    goto try_except_handler_54;
}
tmp_dictset_value = mod_consts.const_str_digest_e97abcddd6089ca7256e3614df93cb9c;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__18_InvalidUpgrade_310, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;

    goto try_except_handler_54;
}
tmp_dictset_value = mod_consts.const_str_plain_InvalidUpgrade;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__18_InvalidUpgrade_310, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;

    goto try_except_handler_54;
}
tmp_dictset_value = mod_consts.const_int_pos_310;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__18_InvalidUpgrade_310, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;

    goto try_except_handler_54;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__18_InvalidUpgrade_310, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;

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


exception_lineno = 310;

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
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__18_InvalidUpgrade_310, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;

    goto try_except_handler_54;
}
branch_no_54:;
{
PyObject *tmp_assign_source_150;
PyObject *tmp_called_value_38;
PyObject *tmp_args_value_36;
PyObject *tmp_tuple_element_71;
PyObject *tmp_kwargs_value_36;
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
tmp_called_value_38 = tmp_class_container$class_creation_18__metaclass;
tmp_tuple_element_71 = mod_consts.const_str_plain_InvalidUpgrade;
tmp_args_value_36 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_36, 0, tmp_tuple_element_71);
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_tuple_element_71 = tmp_class_container$class_creation_18__bases;
PyTuple_SET_ITEM0(tmp_args_value_36, 1, tmp_tuple_element_71);
tmp_tuple_element_71 = locals_websockets$exceptions$$$class__18_InvalidUpgrade_310;
PyTuple_SET_ITEM0(tmp_args_value_36, 2, tmp_tuple_element_71);
CHECK_OBJECT(tmp_class_container$class_creation_18__class_decl_dict);
tmp_kwargs_value_36 = tmp_class_container$class_creation_18__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 310;
tmp_assign_source_150 = CALL_FUNCTION(tstate, tmp_called_value_38, tmp_args_value_36, tmp_kwargs_value_36);
CHECK_OBJECT(tmp_args_value_36);
Py_DECREF(tmp_args_value_36);
if (tmp_assign_source_150 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;

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
Py_DECREF(locals_websockets$exceptions$$$class__18_InvalidUpgrade_310);
locals_websockets$exceptions$$$class__18_InvalidUpgrade_310 = NULL;
goto try_return_handler_53;
// Exception handler code:
try_except_handler_54:;
exception_keeper_lineno_52 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_52 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_websockets$exceptions$$$class__18_InvalidUpgrade_310);
locals_websockets$exceptions$$$class__18_InvalidUpgrade_310 = NULL;
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
exception_lineno = 310;
goto try_except_handler_52;
outline_result_36:;
UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidUpgrade, tmp_assign_source_149);
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
tmp_tuple_element_72 = module_var_accessor_websockets$exceptions$InvalidHandshake(tstate);
if (unlikely(tmp_tuple_element_72 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidHandshake);
}

if (tmp_tuple_element_72 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 317;

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


exception_lineno = 317;

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


exception_lineno = 317;

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


exception_lineno = 317;

    goto try_except_handler_55;
}
tmp_metaclass_value_19 = BUILTIN_TYPE1(tmp_type_arg_37);
CHECK_OBJECT(tmp_type_arg_37);
Py_DECREF(tmp_type_arg_37);
if (tmp_metaclass_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;

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


exception_lineno = 317;

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


exception_lineno = 317;

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
PyObject *tmp_called_value_39;
PyObject *tmp_expression_value_111;
PyObject *tmp_args_value_37;
PyObject *tmp_tuple_element_73;
PyObject *tmp_kwargs_value_37;
CHECK_OBJECT(tmp_class_container$class_creation_19__metaclass);
tmp_expression_value_111 = tmp_class_container$class_creation_19__metaclass;
tmp_called_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_111, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;

    goto try_except_handler_55;
}
tmp_tuple_element_73 = mod_consts.const_str_plain_NegotiationError;
tmp_args_value_37 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_37, 0, tmp_tuple_element_73);
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
tmp_tuple_element_73 = tmp_class_container$class_creation_19__bases;
PyTuple_SET_ITEM0(tmp_args_value_37, 1, tmp_tuple_element_73);
CHECK_OBJECT(tmp_class_container$class_creation_19__class_decl_dict);
tmp_kwargs_value_37 = tmp_class_container$class_creation_19__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 317;
tmp_assign_source_155 = CALL_FUNCTION(tstate, tmp_called_value_39, tmp_args_value_37, tmp_kwargs_value_37);
CHECK_OBJECT(tmp_called_value_39);
Py_DECREF(tmp_called_value_39);
CHECK_OBJECT(tmp_args_value_37);
Py_DECREF(tmp_args_value_37);
if (tmp_assign_source_155 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;

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


exception_lineno = 317;

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
PyObject *tmp_name_value_21;
PyObject *tmp_default_value_19;
tmp_mod_expr_left_19 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_19__metaclass);
tmp_expression_value_113 = tmp_class_container$class_creation_19__metaclass;
tmp_name_value_21 = const_str_plain___name__;
tmp_default_value_19 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_74 = BUILTIN_GETATTR(tstate, tmp_expression_value_113, tmp_name_value_21, tmp_default_value_19);
if (tmp_tuple_element_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;

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


exception_lineno = 317;

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


exception_lineno = 317;

    goto try_except_handler_55;
}
frame_frame_websockets$exceptions->m_frame.f_lineno = 317;
tmp_raise_type_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_19);
CHECK_OBJECT(tmp_make_exception_arg_19);
Py_DECREF(tmp_make_exception_arg_19);
assert(!(tmp_raise_type_19 == NULL));
exception_state.exception_value = tmp_raise_type_19;
exception_lineno = 317;
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
locals_websockets$exceptions$$$class__19_NegotiationError_317 = tmp_set_locals_19;
Py_INCREF(tmp_set_locals_19);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_4ddd7fcb80f9d65673bce8553d39aa96;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__19_NegotiationError_317, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;

    goto try_except_handler_57;
}
tmp_dictset_value = mod_consts.const_str_digest_bd0f78853a060bb25fbbadd6528e8274;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__19_NegotiationError_317, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;

    goto try_except_handler_57;
}
tmp_dictset_value = mod_consts.const_str_plain_NegotiationError;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__19_NegotiationError_317, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;

    goto try_except_handler_57;
}
tmp_dictset_value = mod_consts.const_int_pos_317;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__19_NegotiationError_317, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;

    goto try_except_handler_57;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__19_NegotiationError_317, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;

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


exception_lineno = 317;

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
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__19_NegotiationError_317, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;

    goto try_except_handler_57;
}
branch_no_57:;
{
PyObject *tmp_assign_source_158;
PyObject *tmp_called_value_40;
PyObject *tmp_args_value_38;
PyObject *tmp_tuple_element_75;
PyObject *tmp_kwargs_value_38;
CHECK_OBJECT(tmp_class_container$class_creation_19__metaclass);
tmp_called_value_40 = tmp_class_container$class_creation_19__metaclass;
tmp_tuple_element_75 = mod_consts.const_str_plain_NegotiationError;
tmp_args_value_38 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_38, 0, tmp_tuple_element_75);
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
tmp_tuple_element_75 = tmp_class_container$class_creation_19__bases;
PyTuple_SET_ITEM0(tmp_args_value_38, 1, tmp_tuple_element_75);
tmp_tuple_element_75 = locals_websockets$exceptions$$$class__19_NegotiationError_317;
PyTuple_SET_ITEM0(tmp_args_value_38, 2, tmp_tuple_element_75);
CHECK_OBJECT(tmp_class_container$class_creation_19__class_decl_dict);
tmp_kwargs_value_38 = tmp_class_container$class_creation_19__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 317;
tmp_assign_source_158 = CALL_FUNCTION(tstate, tmp_called_value_40, tmp_args_value_38, tmp_kwargs_value_38);
CHECK_OBJECT(tmp_args_value_38);
Py_DECREF(tmp_args_value_38);
if (tmp_assign_source_158 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;

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
Py_DECREF(locals_websockets$exceptions$$$class__19_NegotiationError_317);
locals_websockets$exceptions$$$class__19_NegotiationError_317 = NULL;
goto try_return_handler_56;
// Exception handler code:
try_except_handler_57:;
exception_keeper_lineno_55 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_55 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_websockets$exceptions$$$class__19_NegotiationError_317);
locals_websockets$exceptions$$$class__19_NegotiationError_317 = NULL;
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
exception_lineno = 317;
goto try_except_handler_55;
outline_result_38:;
UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_NegotiationError, tmp_assign_source_157);
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
tmp_tuple_element_76 = module_var_accessor_websockets$exceptions$NegotiationError(tstate);
if (unlikely(tmp_tuple_element_76 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NegotiationError);
}

if (tmp_tuple_element_76 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 324;

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


exception_lineno = 324;

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


exception_lineno = 324;

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


exception_lineno = 324;

    goto try_except_handler_58;
}
tmp_metaclass_value_20 = BUILTIN_TYPE1(tmp_type_arg_39);
CHECK_OBJECT(tmp_type_arg_39);
Py_DECREF(tmp_type_arg_39);
if (tmp_metaclass_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

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


exception_lineno = 324;

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


exception_lineno = 324;

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
PyObject *tmp_called_value_41;
PyObject *tmp_expression_value_117;
PyObject *tmp_args_value_39;
PyObject *tmp_tuple_element_77;
PyObject *tmp_kwargs_value_39;
CHECK_OBJECT(tmp_class_container$class_creation_20__metaclass);
tmp_expression_value_117 = tmp_class_container$class_creation_20__metaclass;
tmp_called_value_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_117, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto try_except_handler_58;
}
tmp_tuple_element_77 = mod_consts.const_str_plain_DuplicateParameter;
tmp_args_value_39 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_39, 0, tmp_tuple_element_77);
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
tmp_tuple_element_77 = tmp_class_container$class_creation_20__bases;
PyTuple_SET_ITEM0(tmp_args_value_39, 1, tmp_tuple_element_77);
CHECK_OBJECT(tmp_class_container$class_creation_20__class_decl_dict);
tmp_kwargs_value_39 = tmp_class_container$class_creation_20__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 324;
tmp_assign_source_163 = CALL_FUNCTION(tstate, tmp_called_value_41, tmp_args_value_39, tmp_kwargs_value_39);
CHECK_OBJECT(tmp_called_value_41);
Py_DECREF(tmp_called_value_41);
CHECK_OBJECT(tmp_args_value_39);
Py_DECREF(tmp_args_value_39);
if (tmp_assign_source_163 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

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


exception_lineno = 324;

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
PyObject *tmp_name_value_22;
PyObject *tmp_default_value_20;
tmp_mod_expr_left_20 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_20__metaclass);
tmp_expression_value_119 = tmp_class_container$class_creation_20__metaclass;
tmp_name_value_22 = const_str_plain___name__;
tmp_default_value_20 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_78 = BUILTIN_GETATTR(tstate, tmp_expression_value_119, tmp_name_value_22, tmp_default_value_20);
if (tmp_tuple_element_78 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

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


exception_lineno = 324;

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


exception_lineno = 324;

    goto try_except_handler_58;
}
frame_frame_websockets$exceptions->m_frame.f_lineno = 324;
tmp_raise_type_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_20);
CHECK_OBJECT(tmp_make_exception_arg_20);
Py_DECREF(tmp_make_exception_arg_20);
assert(!(tmp_raise_type_20 == NULL));
exception_state.exception_value = tmp_raise_type_20;
exception_lineno = 324;
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
locals_websockets$exceptions$$$class__20_DuplicateParameter_324 = tmp_set_locals_20;
Py_INCREF(tmp_set_locals_20);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_4ddd7fcb80f9d65673bce8553d39aa96;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__20_DuplicateParameter_324, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto try_except_handler_60;
}
tmp_dictset_value = mod_consts.const_str_digest_b7f952ebdffd92575fb94b1cf852974b;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__20_DuplicateParameter_324, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto try_except_handler_60;
}
tmp_dictset_value = mod_consts.const_str_plain_DuplicateParameter;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__20_DuplicateParameter_324, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto try_except_handler_60;
}
tmp_dictset_value = mod_consts.const_int_pos_324;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__20_DuplicateParameter_324, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto try_except_handler_60;
}
frame_frame_websockets$exceptions$$$class__20_DuplicateParameter_10 = MAKE_CLASS_FRAME(tstate, code_objects_33c9ac3818196952631eaab65b16d6fa, module_websockets$exceptions, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$exceptions$$$class__20_DuplicateParameter_10);
assert(Py_REFCNT(frame_frame_websockets$exceptions$$$class__20_DuplicateParameter_10) == 2);

// Framed code:
{
PyObject *tmp_annotations_17;
tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_b4dbf171e32ba52d1e21954b404db78a);

tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__17___init__(tstate, tmp_annotations_17);

tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__20_DuplicateParameter_324, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
}
{
PyObject *tmp_annotations_18;
tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__18___str__(tstate, tmp_annotations_18);

tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__20_DuplicateParameter_324, mod_consts.const_str_plain___str__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_2 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$exceptions$$$class__20_DuplicateParameter_10, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$exceptions$$$class__20_DuplicateParameter_10->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$exceptions$$$class__20_DuplicateParameter_10, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$exceptions$$$class__20_DuplicateParameter_10,
    type_description_2,
    outline_19_var___class__
);



assertFrameObject(frame_frame_websockets$exceptions$$$class__20_DuplicateParameter_10);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_9;
frame_no_exception_9:;
goto skip_nested_handling_9;
nested_frame_exit_9:;

goto try_except_handler_60;
skip_nested_handling_9:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_name_tuple;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__20_DuplicateParameter_324, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

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


exception_lineno = 324;

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
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__20_DuplicateParameter_324, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto try_except_handler_60;
}
branch_no_60:;
{
PyObject *tmp_assign_source_166;
PyObject *tmp_called_value_42;
PyObject *tmp_args_value_40;
PyObject *tmp_tuple_element_79;
PyObject *tmp_kwargs_value_40;
CHECK_OBJECT(tmp_class_container$class_creation_20__metaclass);
tmp_called_value_42 = tmp_class_container$class_creation_20__metaclass;
tmp_tuple_element_79 = mod_consts.const_str_plain_DuplicateParameter;
tmp_args_value_40 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_40, 0, tmp_tuple_element_79);
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
tmp_tuple_element_79 = tmp_class_container$class_creation_20__bases;
PyTuple_SET_ITEM0(tmp_args_value_40, 1, tmp_tuple_element_79);
tmp_tuple_element_79 = locals_websockets$exceptions$$$class__20_DuplicateParameter_324;
PyTuple_SET_ITEM0(tmp_args_value_40, 2, tmp_tuple_element_79);
CHECK_OBJECT(tmp_class_container$class_creation_20__class_decl_dict);
tmp_kwargs_value_40 = tmp_class_container$class_creation_20__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 324;
tmp_assign_source_166 = CALL_FUNCTION(tstate, tmp_called_value_42, tmp_args_value_40, tmp_kwargs_value_40);
CHECK_OBJECT(tmp_args_value_40);
Py_DECREF(tmp_args_value_40);
if (tmp_assign_source_166 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

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
Py_DECREF(locals_websockets$exceptions$$$class__20_DuplicateParameter_324);
locals_websockets$exceptions$$$class__20_DuplicateParameter_324 = NULL;
goto try_return_handler_59;
// Exception handler code:
try_except_handler_60:;
exception_keeper_lineno_58 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_58 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_websockets$exceptions$$$class__20_DuplicateParameter_324);
locals_websockets$exceptions$$$class__20_DuplicateParameter_324 = NULL;
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
exception_lineno = 324;
goto try_except_handler_58;
outline_result_40:;
UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_DuplicateParameter, tmp_assign_source_165);
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
tmp_tuple_element_80 = module_var_accessor_websockets$exceptions$NegotiationError(tstate);
if (unlikely(tmp_tuple_element_80 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NegotiationError);
}

if (tmp_tuple_element_80 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 337;

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


exception_lineno = 337;

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


exception_lineno = 337;

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


exception_lineno = 337;

    goto try_except_handler_61;
}
tmp_metaclass_value_21 = BUILTIN_TYPE1(tmp_type_arg_41);
CHECK_OBJECT(tmp_type_arg_41);
Py_DECREF(tmp_type_arg_41);
if (tmp_metaclass_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;

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


exception_lineno = 337;

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


exception_lineno = 337;

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
PyObject *tmp_called_value_43;
PyObject *tmp_expression_value_123;
PyObject *tmp_args_value_41;
PyObject *tmp_tuple_element_81;
PyObject *tmp_kwargs_value_41;
CHECK_OBJECT(tmp_class_container$class_creation_21__metaclass);
tmp_expression_value_123 = tmp_class_container$class_creation_21__metaclass;
tmp_called_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_123, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;

    goto try_except_handler_61;
}
tmp_tuple_element_81 = mod_consts.const_str_plain_InvalidParameterName;
tmp_args_value_41 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_41, 0, tmp_tuple_element_81);
CHECK_OBJECT(tmp_class_container$class_creation_21__bases);
tmp_tuple_element_81 = tmp_class_container$class_creation_21__bases;
PyTuple_SET_ITEM0(tmp_args_value_41, 1, tmp_tuple_element_81);
CHECK_OBJECT(tmp_class_container$class_creation_21__class_decl_dict);
tmp_kwargs_value_41 = tmp_class_container$class_creation_21__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 337;
tmp_assign_source_171 = CALL_FUNCTION(tstate, tmp_called_value_43, tmp_args_value_41, tmp_kwargs_value_41);
CHECK_OBJECT(tmp_called_value_43);
Py_DECREF(tmp_called_value_43);
CHECK_OBJECT(tmp_args_value_41);
Py_DECREF(tmp_args_value_41);
if (tmp_assign_source_171 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;

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


exception_lineno = 337;

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
PyObject *tmp_name_value_23;
PyObject *tmp_default_value_21;
tmp_mod_expr_left_21 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_21__metaclass);
tmp_expression_value_125 = tmp_class_container$class_creation_21__metaclass;
tmp_name_value_23 = const_str_plain___name__;
tmp_default_value_21 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_82 = BUILTIN_GETATTR(tstate, tmp_expression_value_125, tmp_name_value_23, tmp_default_value_21);
if (tmp_tuple_element_82 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;

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


exception_lineno = 337;

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


exception_lineno = 337;

    goto try_except_handler_61;
}
frame_frame_websockets$exceptions->m_frame.f_lineno = 337;
tmp_raise_type_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_21);
CHECK_OBJECT(tmp_make_exception_arg_21);
Py_DECREF(tmp_make_exception_arg_21);
assert(!(tmp_raise_type_21 == NULL));
exception_state.exception_value = tmp_raise_type_21;
exception_lineno = 337;
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
{
PyObject *tmp_set_locals_21;
CHECK_OBJECT(tmp_class_container$class_creation_21__prepared);
tmp_set_locals_21 = tmp_class_container$class_creation_21__prepared;
locals_websockets$exceptions$$$class__21_InvalidParameterName_337 = tmp_set_locals_21;
Py_INCREF(tmp_set_locals_21);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_4ddd7fcb80f9d65673bce8553d39aa96;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__21_InvalidParameterName_337, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;

    goto try_except_handler_63;
}
tmp_dictset_value = mod_consts.const_str_digest_5a99decb45e3342ed1326789996226bf;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__21_InvalidParameterName_337, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;

    goto try_except_handler_63;
}
tmp_dictset_value = mod_consts.const_str_plain_InvalidParameterName;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__21_InvalidParameterName_337, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;

    goto try_except_handler_63;
}
tmp_dictset_value = mod_consts.const_int_pos_337;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__21_InvalidParameterName_337, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;

    goto try_except_handler_63;
}
frame_frame_websockets$exceptions$$$class__21_InvalidParameterName_11 = MAKE_CLASS_FRAME(tstate, code_objects_cd954f073a1ff0ef59cadd5e6604caf0, module_websockets$exceptions, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$exceptions$$$class__21_InvalidParameterName_11);
assert(Py_REFCNT(frame_frame_websockets$exceptions$$$class__21_InvalidParameterName_11) == 2);

// Framed code:
{
PyObject *tmp_annotations_19;
tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_b4dbf171e32ba52d1e21954b404db78a);

tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__19___init__(tstate, tmp_annotations_19);

tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__21_InvalidParameterName_337, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;
type_description_2 = "o";
    goto frame_exception_exit_11;
}
}
{
PyObject *tmp_annotations_20;
tmp_annotations_20 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__20___str__(tstate, tmp_annotations_20);

tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__21_InvalidParameterName_337, mod_consts.const_str_plain___str__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_2 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$exceptions$$$class__21_InvalidParameterName_11, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$exceptions$$$class__21_InvalidParameterName_11->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$exceptions$$$class__21_InvalidParameterName_11, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$exceptions$$$class__21_InvalidParameterName_11,
    type_description_2,
    outline_20_var___class__
);



assertFrameObject(frame_frame_websockets$exceptions$$$class__21_InvalidParameterName_11);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_10;
frame_no_exception_10:;
goto skip_nested_handling_10;
nested_frame_exit_10:;

goto try_except_handler_63;
skip_nested_handling_10:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_name_tuple;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__21_InvalidParameterName_337, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;

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


exception_lineno = 337;

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
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__21_InvalidParameterName_337, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;

    goto try_except_handler_63;
}
branch_no_63:;
{
PyObject *tmp_assign_source_174;
PyObject *tmp_called_value_44;
PyObject *tmp_args_value_42;
PyObject *tmp_tuple_element_83;
PyObject *tmp_kwargs_value_42;
CHECK_OBJECT(tmp_class_container$class_creation_21__metaclass);
tmp_called_value_44 = tmp_class_container$class_creation_21__metaclass;
tmp_tuple_element_83 = mod_consts.const_str_plain_InvalidParameterName;
tmp_args_value_42 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_42, 0, tmp_tuple_element_83);
CHECK_OBJECT(tmp_class_container$class_creation_21__bases);
tmp_tuple_element_83 = tmp_class_container$class_creation_21__bases;
PyTuple_SET_ITEM0(tmp_args_value_42, 1, tmp_tuple_element_83);
tmp_tuple_element_83 = locals_websockets$exceptions$$$class__21_InvalidParameterName_337;
PyTuple_SET_ITEM0(tmp_args_value_42, 2, tmp_tuple_element_83);
CHECK_OBJECT(tmp_class_container$class_creation_21__class_decl_dict);
tmp_kwargs_value_42 = tmp_class_container$class_creation_21__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 337;
tmp_assign_source_174 = CALL_FUNCTION(tstate, tmp_called_value_44, tmp_args_value_42, tmp_kwargs_value_42);
CHECK_OBJECT(tmp_args_value_42);
Py_DECREF(tmp_args_value_42);
if (tmp_assign_source_174 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;

    goto try_except_handler_63;
}
assert(outline_20_var___class__ == NULL);
outline_20_var___class__ = tmp_assign_source_174;
}
CHECK_OBJECT(outline_20_var___class__);
tmp_assign_source_173 = outline_20_var___class__;
Py_INCREF(tmp_assign_source_173);
goto try_return_handler_63;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_63:;
Py_DECREF(locals_websockets$exceptions$$$class__21_InvalidParameterName_337);
locals_websockets$exceptions$$$class__21_InvalidParameterName_337 = NULL;
goto try_return_handler_62;
// Exception handler code:
try_except_handler_63:;
exception_keeper_lineno_61 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_61 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_websockets$exceptions$$$class__21_InvalidParameterName_337);
locals_websockets$exceptions$$$class__21_InvalidParameterName_337 = NULL;
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
exception_lineno = 337;
goto try_except_handler_61;
outline_result_42:;
UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidParameterName, tmp_assign_source_173);
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
PyObject *tmp_tuple_element_84;
tmp_tuple_element_84 = module_var_accessor_websockets$exceptions$NegotiationError(tstate);
if (unlikely(tmp_tuple_element_84 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NegotiationError);
}

if (tmp_tuple_element_84 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 350;

    goto try_except_handler_64;
}
tmp_assign_source_175 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_175, 0, tmp_tuple_element_84);
assert(tmp_class_container$class_creation_22__bases_orig == NULL);
tmp_class_container$class_creation_22__bases_orig = tmp_assign_source_175;
}
{
PyObject *tmp_assign_source_176;
PyObject *tmp_direct_call_arg1_22;
CHECK_OBJECT(tmp_class_container$class_creation_22__bases_orig);
tmp_direct_call_arg1_22 = tmp_class_container$class_creation_22__bases_orig;
Py_INCREF(tmp_direct_call_arg1_22);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_22};
    tmp_assign_source_176 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_176 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;

    goto try_except_handler_64;
}
assert(tmp_class_container$class_creation_22__bases == NULL);
tmp_class_container$class_creation_22__bases = tmp_assign_source_176;
}
{
PyObject *tmp_assign_source_177;
tmp_assign_source_177 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_22__class_decl_dict == NULL);
tmp_class_container$class_creation_22__class_decl_dict = tmp_assign_source_177;
}
{
PyObject *tmp_assign_source_178;
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


exception_lineno = 350;

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


exception_lineno = 350;

    goto try_except_handler_64;
}
tmp_metaclass_value_22 = BUILTIN_TYPE1(tmp_type_arg_43);
CHECK_OBJECT(tmp_type_arg_43);
Py_DECREF(tmp_type_arg_43);
if (tmp_metaclass_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;

    goto try_except_handler_64;
}
goto condexpr_end_22;
condexpr_false_22:;
tmp_metaclass_value_22 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_22);
condexpr_end_22:;
CHECK_OBJECT(tmp_class_container$class_creation_22__bases);
tmp_bases_value_22 = tmp_class_container$class_creation_22__bases;
tmp_assign_source_178 = SELECT_METACLASS(tstate, tmp_metaclass_value_22, tmp_bases_value_22);
CHECK_OBJECT(tmp_metaclass_value_22);
Py_DECREF(tmp_metaclass_value_22);
if (tmp_assign_source_178 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;

    goto try_except_handler_64;
}
assert(tmp_class_container$class_creation_22__metaclass == NULL);
tmp_class_container$class_creation_22__metaclass = tmp_assign_source_178;
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


exception_lineno = 350;

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
PyObject *tmp_assign_source_179;
PyObject *tmp_called_value_45;
PyObject *tmp_expression_value_129;
PyObject *tmp_args_value_43;
PyObject *tmp_tuple_element_85;
PyObject *tmp_kwargs_value_43;
CHECK_OBJECT(tmp_class_container$class_creation_22__metaclass);
tmp_expression_value_129 = tmp_class_container$class_creation_22__metaclass;
tmp_called_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_129, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;

    goto try_except_handler_64;
}
tmp_tuple_element_85 = mod_consts.const_str_plain_InvalidParameterValue;
tmp_args_value_43 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_43, 0, tmp_tuple_element_85);
CHECK_OBJECT(tmp_class_container$class_creation_22__bases);
tmp_tuple_element_85 = tmp_class_container$class_creation_22__bases;
PyTuple_SET_ITEM0(tmp_args_value_43, 1, tmp_tuple_element_85);
CHECK_OBJECT(tmp_class_container$class_creation_22__class_decl_dict);
tmp_kwargs_value_43 = tmp_class_container$class_creation_22__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 350;
tmp_assign_source_179 = CALL_FUNCTION(tstate, tmp_called_value_45, tmp_args_value_43, tmp_kwargs_value_43);
CHECK_OBJECT(tmp_called_value_45);
Py_DECREF(tmp_called_value_45);
CHECK_OBJECT(tmp_args_value_43);
Py_DECREF(tmp_args_value_43);
if (tmp_assign_source_179 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;

    goto try_except_handler_64;
}
assert(tmp_class_container$class_creation_22__prepared == NULL);
tmp_class_container$class_creation_22__prepared = tmp_assign_source_179;
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


exception_lineno = 350;

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
PyObject *tmp_tuple_element_86;
PyObject *tmp_expression_value_131;
PyObject *tmp_name_value_24;
PyObject *tmp_default_value_22;
tmp_mod_expr_left_22 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_22__metaclass);
tmp_expression_value_131 = tmp_class_container$class_creation_22__metaclass;
tmp_name_value_24 = const_str_plain___name__;
tmp_default_value_22 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_86 = BUILTIN_GETATTR(tstate, tmp_expression_value_131, tmp_name_value_24, tmp_default_value_22);
if (tmp_tuple_element_86 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;

    goto try_except_handler_64;
}
tmp_mod_expr_right_22 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_132;
PyObject *tmp_type_arg_44;
PyTuple_SET_ITEM(tmp_mod_expr_right_22, 0, tmp_tuple_element_86);
CHECK_OBJECT(tmp_class_container$class_creation_22__prepared);
tmp_type_arg_44 = tmp_class_container$class_creation_22__prepared;
tmp_expression_value_132 = BUILTIN_TYPE1(tmp_type_arg_44);
assert(!(tmp_expression_value_132 == NULL));
tmp_tuple_element_86 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_132, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_132);
Py_DECREF(tmp_expression_value_132);
if (tmp_tuple_element_86 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;

    goto tuple_build_exception_22;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_22, 1, tmp_tuple_element_86);
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


exception_lineno = 350;

    goto try_except_handler_64;
}
frame_frame_websockets$exceptions->m_frame.f_lineno = 350;
tmp_raise_type_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_22);
CHECK_OBJECT(tmp_make_exception_arg_22);
Py_DECREF(tmp_make_exception_arg_22);
assert(!(tmp_raise_type_22 == NULL));
exception_state.exception_value = tmp_raise_type_22;
exception_lineno = 350;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_64;
}
branch_no_65:;
goto branch_end_64;
branch_no_64:;
{
PyObject *tmp_assign_source_180;
tmp_assign_source_180 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_22__prepared == NULL);
tmp_class_container$class_creation_22__prepared = tmp_assign_source_180;
}
branch_end_64:;
{
PyObject *tmp_assign_source_181;
{
PyObject *tmp_set_locals_22;
CHECK_OBJECT(tmp_class_container$class_creation_22__prepared);
tmp_set_locals_22 = tmp_class_container$class_creation_22__prepared;
locals_websockets$exceptions$$$class__22_InvalidParameterValue_350 = tmp_set_locals_22;
Py_INCREF(tmp_set_locals_22);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_4ddd7fcb80f9d65673bce8553d39aa96;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__22_InvalidParameterValue_350, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;

    goto try_except_handler_66;
}
tmp_dictset_value = mod_consts.const_str_digest_07ca39c7dfc2bfcd912bf41085b789d2;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__22_InvalidParameterValue_350, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;

    goto try_except_handler_66;
}
tmp_dictset_value = mod_consts.const_str_plain_InvalidParameterValue;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__22_InvalidParameterValue_350, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;

    goto try_except_handler_66;
}
tmp_dictset_value = mod_consts.const_int_pos_350;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__22_InvalidParameterValue_350, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;

    goto try_except_handler_66;
}
frame_frame_websockets$exceptions$$$class__22_InvalidParameterValue_12 = MAKE_CLASS_FRAME(tstate, code_objects_85f5b8f179b1916001e00f7a1124b01e, module_websockets$exceptions, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$exceptions$$$class__22_InvalidParameterValue_12);
assert(Py_REFCNT(frame_frame_websockets$exceptions$$$class__22_InvalidParameterValue_12) == 2);

// Framed code:
{
PyObject *tmp_annotations_21;
tmp_annotations_21 = DICT_COPY(tstate, mod_consts.const_dict_7744c89851d4c08b756f2ae247325f55);

tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__21___init__(tstate, tmp_annotations_21);

tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__22_InvalidParameterValue_350, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_2 = "o";
    goto frame_exception_exit_12;
}
}
{
PyObject *tmp_annotations_22;
tmp_annotations_22 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__22___str__(tstate, tmp_annotations_22);

tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__22_InvalidParameterValue_350, mod_consts.const_str_plain___str__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_2 = "o";
    goto frame_exception_exit_12;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_11;
frame_exception_exit_12:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$exceptions$$$class__22_InvalidParameterValue_12, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$exceptions$$$class__22_InvalidParameterValue_12->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$exceptions$$$class__22_InvalidParameterValue_12, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$exceptions$$$class__22_InvalidParameterValue_12,
    type_description_2,
    outline_21_var___class__
);



assertFrameObject(frame_frame_websockets$exceptions$$$class__22_InvalidParameterValue_12);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_11;
frame_no_exception_11:;
goto skip_nested_handling_11;
nested_frame_exit_11:;

goto try_except_handler_66;
skip_nested_handling_11:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_name_str_plain_value_tuple;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__22_InvalidParameterValue_350, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;

    goto try_except_handler_66;
}
{
nuitka_bool tmp_condition_result_88;
PyObject *tmp_cmp_expr_left_22;
PyObject *tmp_cmp_expr_right_22;
CHECK_OBJECT(tmp_class_container$class_creation_22__bases);
tmp_cmp_expr_left_22 = tmp_class_container$class_creation_22__bases;
CHECK_OBJECT(tmp_class_container$class_creation_22__bases_orig);
tmp_cmp_expr_right_22 = tmp_class_container$class_creation_22__bases_orig;
tmp_condition_result_88 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_22, tmp_cmp_expr_right_22);
if (tmp_condition_result_88 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;

    goto try_except_handler_66;
}
if (tmp_condition_result_88 == NUITKA_BOOL_TRUE) {
    goto branch_yes_66;
} else {
    goto branch_no_66;
}
}
branch_yes_66:;
CHECK_OBJECT(tmp_class_container$class_creation_22__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_22__bases_orig;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__22_InvalidParameterValue_350, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;

    goto try_except_handler_66;
}
branch_no_66:;
{
PyObject *tmp_assign_source_182;
PyObject *tmp_called_value_46;
PyObject *tmp_args_value_44;
PyObject *tmp_tuple_element_87;
PyObject *tmp_kwargs_value_44;
CHECK_OBJECT(tmp_class_container$class_creation_22__metaclass);
tmp_called_value_46 = tmp_class_container$class_creation_22__metaclass;
tmp_tuple_element_87 = mod_consts.const_str_plain_InvalidParameterValue;
tmp_args_value_44 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_44, 0, tmp_tuple_element_87);
CHECK_OBJECT(tmp_class_container$class_creation_22__bases);
tmp_tuple_element_87 = tmp_class_container$class_creation_22__bases;
PyTuple_SET_ITEM0(tmp_args_value_44, 1, tmp_tuple_element_87);
tmp_tuple_element_87 = locals_websockets$exceptions$$$class__22_InvalidParameterValue_350;
PyTuple_SET_ITEM0(tmp_args_value_44, 2, tmp_tuple_element_87);
CHECK_OBJECT(tmp_class_container$class_creation_22__class_decl_dict);
tmp_kwargs_value_44 = tmp_class_container$class_creation_22__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 350;
tmp_assign_source_182 = CALL_FUNCTION(tstate, tmp_called_value_46, tmp_args_value_44, tmp_kwargs_value_44);
CHECK_OBJECT(tmp_args_value_44);
Py_DECREF(tmp_args_value_44);
if (tmp_assign_source_182 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;

    goto try_except_handler_66;
}
assert(outline_21_var___class__ == NULL);
outline_21_var___class__ = tmp_assign_source_182;
}
CHECK_OBJECT(outline_21_var___class__);
tmp_assign_source_181 = outline_21_var___class__;
Py_INCREF(tmp_assign_source_181);
goto try_return_handler_66;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_66:;
Py_DECREF(locals_websockets$exceptions$$$class__22_InvalidParameterValue_350);
locals_websockets$exceptions$$$class__22_InvalidParameterValue_350 = NULL;
goto try_return_handler_65;
// Exception handler code:
try_except_handler_66:;
exception_keeper_lineno_64 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_64 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_websockets$exceptions$$$class__22_InvalidParameterValue_350);
locals_websockets$exceptions$$$class__22_InvalidParameterValue_350 = NULL;
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
exception_lineno = 350;
goto try_except_handler_64;
outline_result_44:;
UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidParameterValue, tmp_assign_source_181);
}
goto try_end_22;
// Exception handler code:
try_except_handler_64:;
exception_keeper_lineno_66 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_66 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_22__bases_orig);
tmp_class_container$class_creation_22__bases_orig = NULL;
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
CHECK_OBJECT(tmp_class_container$class_creation_22__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_22__bases_orig);
Py_DECREF(tmp_class_container$class_creation_22__bases_orig);
tmp_class_container$class_creation_22__bases_orig = NULL;
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
PyObject *tmp_assign_source_183;
PyObject *tmp_tuple_element_88;
tmp_tuple_element_88 = module_var_accessor_websockets$exceptions$WebSocketException(tstate);
if (unlikely(tmp_tuple_element_88 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WebSocketException);
}

if (tmp_tuple_element_88 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 369;

    goto try_except_handler_67;
}
tmp_assign_source_183 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_183, 0, tmp_tuple_element_88);
assert(tmp_class_container$class_creation_23__bases_orig == NULL);
tmp_class_container$class_creation_23__bases_orig = tmp_assign_source_183;
}
{
PyObject *tmp_assign_source_184;
PyObject *tmp_direct_call_arg1_23;
CHECK_OBJECT(tmp_class_container$class_creation_23__bases_orig);
tmp_direct_call_arg1_23 = tmp_class_container$class_creation_23__bases_orig;
Py_INCREF(tmp_direct_call_arg1_23);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_23};
    tmp_assign_source_184 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_184 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;

    goto try_except_handler_67;
}
assert(tmp_class_container$class_creation_23__bases == NULL);
tmp_class_container$class_creation_23__bases = tmp_assign_source_184;
}
{
PyObject *tmp_assign_source_185;
tmp_assign_source_185 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_23__class_decl_dict == NULL);
tmp_class_container$class_creation_23__class_decl_dict = tmp_assign_source_185;
}
{
PyObject *tmp_assign_source_186;
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


exception_lineno = 369;

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


exception_lineno = 369;

    goto try_except_handler_67;
}
tmp_metaclass_value_23 = BUILTIN_TYPE1(tmp_type_arg_45);
CHECK_OBJECT(tmp_type_arg_45);
Py_DECREF(tmp_type_arg_45);
if (tmp_metaclass_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;

    goto try_except_handler_67;
}
goto condexpr_end_23;
condexpr_false_23:;
tmp_metaclass_value_23 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_23);
condexpr_end_23:;
CHECK_OBJECT(tmp_class_container$class_creation_23__bases);
tmp_bases_value_23 = tmp_class_container$class_creation_23__bases;
tmp_assign_source_186 = SELECT_METACLASS(tstate, tmp_metaclass_value_23, tmp_bases_value_23);
CHECK_OBJECT(tmp_metaclass_value_23);
Py_DECREF(tmp_metaclass_value_23);
if (tmp_assign_source_186 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;

    goto try_except_handler_67;
}
assert(tmp_class_container$class_creation_23__metaclass == NULL);
tmp_class_container$class_creation_23__metaclass = tmp_assign_source_186;
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


exception_lineno = 369;

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
PyObject *tmp_assign_source_187;
PyObject *tmp_called_value_47;
PyObject *tmp_expression_value_135;
PyObject *tmp_args_value_45;
PyObject *tmp_tuple_element_89;
PyObject *tmp_kwargs_value_45;
CHECK_OBJECT(tmp_class_container$class_creation_23__metaclass);
tmp_expression_value_135 = tmp_class_container$class_creation_23__metaclass;
tmp_called_value_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_135, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;

    goto try_except_handler_67;
}
tmp_tuple_element_89 = mod_consts.const_str_plain_ProtocolError;
tmp_args_value_45 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_45, 0, tmp_tuple_element_89);
CHECK_OBJECT(tmp_class_container$class_creation_23__bases);
tmp_tuple_element_89 = tmp_class_container$class_creation_23__bases;
PyTuple_SET_ITEM0(tmp_args_value_45, 1, tmp_tuple_element_89);
CHECK_OBJECT(tmp_class_container$class_creation_23__class_decl_dict);
tmp_kwargs_value_45 = tmp_class_container$class_creation_23__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 369;
tmp_assign_source_187 = CALL_FUNCTION(tstate, tmp_called_value_47, tmp_args_value_45, tmp_kwargs_value_45);
CHECK_OBJECT(tmp_called_value_47);
Py_DECREF(tmp_called_value_47);
CHECK_OBJECT(tmp_args_value_45);
Py_DECREF(tmp_args_value_45);
if (tmp_assign_source_187 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;

    goto try_except_handler_67;
}
assert(tmp_class_container$class_creation_23__prepared == NULL);
tmp_class_container$class_creation_23__prepared = tmp_assign_source_187;
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


exception_lineno = 369;

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
PyObject *tmp_tuple_element_90;
PyObject *tmp_expression_value_137;
PyObject *tmp_name_value_25;
PyObject *tmp_default_value_23;
tmp_mod_expr_left_23 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_23__metaclass);
tmp_expression_value_137 = tmp_class_container$class_creation_23__metaclass;
tmp_name_value_25 = const_str_plain___name__;
tmp_default_value_23 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_90 = BUILTIN_GETATTR(tstate, tmp_expression_value_137, tmp_name_value_25, tmp_default_value_23);
if (tmp_tuple_element_90 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;

    goto try_except_handler_67;
}
tmp_mod_expr_right_23 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_138;
PyObject *tmp_type_arg_46;
PyTuple_SET_ITEM(tmp_mod_expr_right_23, 0, tmp_tuple_element_90);
CHECK_OBJECT(tmp_class_container$class_creation_23__prepared);
tmp_type_arg_46 = tmp_class_container$class_creation_23__prepared;
tmp_expression_value_138 = BUILTIN_TYPE1(tmp_type_arg_46);
assert(!(tmp_expression_value_138 == NULL));
tmp_tuple_element_90 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_138, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_138);
Py_DECREF(tmp_expression_value_138);
if (tmp_tuple_element_90 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;

    goto tuple_build_exception_23;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_23, 1, tmp_tuple_element_90);
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


exception_lineno = 369;

    goto try_except_handler_67;
}
frame_frame_websockets$exceptions->m_frame.f_lineno = 369;
tmp_raise_type_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_23);
CHECK_OBJECT(tmp_make_exception_arg_23);
Py_DECREF(tmp_make_exception_arg_23);
assert(!(tmp_raise_type_23 == NULL));
exception_state.exception_value = tmp_raise_type_23;
exception_lineno = 369;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_67;
}
branch_no_68:;
goto branch_end_67;
branch_no_67:;
{
PyObject *tmp_assign_source_188;
tmp_assign_source_188 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_23__prepared == NULL);
tmp_class_container$class_creation_23__prepared = tmp_assign_source_188;
}
branch_end_67:;
{
PyObject *tmp_assign_source_189;
{
PyObject *tmp_set_locals_23;
CHECK_OBJECT(tmp_class_container$class_creation_23__prepared);
tmp_set_locals_23 = tmp_class_container$class_creation_23__prepared;
locals_websockets$exceptions$$$class__23_ProtocolError_369 = tmp_set_locals_23;
Py_INCREF(tmp_set_locals_23);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_4ddd7fcb80f9d65673bce8553d39aa96;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__23_ProtocolError_369, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;

    goto try_except_handler_69;
}
tmp_dictset_value = mod_consts.const_str_digest_653668184d83883663197cffda2e7686;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__23_ProtocolError_369, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;

    goto try_except_handler_69;
}
tmp_dictset_value = mod_consts.const_str_plain_ProtocolError;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__23_ProtocolError_369, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;

    goto try_except_handler_69;
}
tmp_dictset_value = mod_consts.const_int_pos_369;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__23_ProtocolError_369, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;

    goto try_except_handler_69;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__23_ProtocolError_369, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;

    goto try_except_handler_69;
}
{
nuitka_bool tmp_condition_result_92;
PyObject *tmp_cmp_expr_left_23;
PyObject *tmp_cmp_expr_right_23;
CHECK_OBJECT(tmp_class_container$class_creation_23__bases);
tmp_cmp_expr_left_23 = tmp_class_container$class_creation_23__bases;
CHECK_OBJECT(tmp_class_container$class_creation_23__bases_orig);
tmp_cmp_expr_right_23 = tmp_class_container$class_creation_23__bases_orig;
tmp_condition_result_92 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_23, tmp_cmp_expr_right_23);
if (tmp_condition_result_92 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;

    goto try_except_handler_69;
}
if (tmp_condition_result_92 == NUITKA_BOOL_TRUE) {
    goto branch_yes_69;
} else {
    goto branch_no_69;
}
}
branch_yes_69:;
CHECK_OBJECT(tmp_class_container$class_creation_23__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_23__bases_orig;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__23_ProtocolError_369, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;

    goto try_except_handler_69;
}
branch_no_69:;
{
PyObject *tmp_assign_source_190;
PyObject *tmp_called_value_48;
PyObject *tmp_args_value_46;
PyObject *tmp_tuple_element_91;
PyObject *tmp_kwargs_value_46;
CHECK_OBJECT(tmp_class_container$class_creation_23__metaclass);
tmp_called_value_48 = tmp_class_container$class_creation_23__metaclass;
tmp_tuple_element_91 = mod_consts.const_str_plain_ProtocolError;
tmp_args_value_46 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_46, 0, tmp_tuple_element_91);
CHECK_OBJECT(tmp_class_container$class_creation_23__bases);
tmp_tuple_element_91 = tmp_class_container$class_creation_23__bases;
PyTuple_SET_ITEM0(tmp_args_value_46, 1, tmp_tuple_element_91);
tmp_tuple_element_91 = locals_websockets$exceptions$$$class__23_ProtocolError_369;
PyTuple_SET_ITEM0(tmp_args_value_46, 2, tmp_tuple_element_91);
CHECK_OBJECT(tmp_class_container$class_creation_23__class_decl_dict);
tmp_kwargs_value_46 = tmp_class_container$class_creation_23__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 369;
tmp_assign_source_190 = CALL_FUNCTION(tstate, tmp_called_value_48, tmp_args_value_46, tmp_kwargs_value_46);
CHECK_OBJECT(tmp_args_value_46);
Py_DECREF(tmp_args_value_46);
if (tmp_assign_source_190 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;

    goto try_except_handler_69;
}
assert(outline_22_var___class__ == NULL);
outline_22_var___class__ = tmp_assign_source_190;
}
CHECK_OBJECT(outline_22_var___class__);
tmp_assign_source_189 = outline_22_var___class__;
Py_INCREF(tmp_assign_source_189);
goto try_return_handler_69;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_69:;
Py_DECREF(locals_websockets$exceptions$$$class__23_ProtocolError_369);
locals_websockets$exceptions$$$class__23_ProtocolError_369 = NULL;
goto try_return_handler_68;
// Exception handler code:
try_except_handler_69:;
exception_keeper_lineno_67 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_67 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_websockets$exceptions$$$class__23_ProtocolError_369);
locals_websockets$exceptions$$$class__23_ProtocolError_369 = NULL;
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
exception_lineno = 369;
goto try_except_handler_67;
outline_result_46:;
UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_ProtocolError, tmp_assign_source_189);
}
goto try_end_23;
// Exception handler code:
try_except_handler_67:;
exception_keeper_lineno_69 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_69 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_23__bases_orig);
tmp_class_container$class_creation_23__bases_orig = NULL;
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
CHECK_OBJECT(tmp_class_container$class_creation_23__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_23__bases_orig);
Py_DECREF(tmp_class_container$class_creation_23__bases_orig);
tmp_class_container$class_creation_23__bases_orig = NULL;
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
PyObject *tmp_assign_source_191;
PyObject *tmp_tuple_element_92;
tmp_tuple_element_92 = module_var_accessor_websockets$exceptions$WebSocketException(tstate);
if (unlikely(tmp_tuple_element_92 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WebSocketException);
}

if (tmp_tuple_element_92 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 381;

    goto try_except_handler_70;
}
tmp_assign_source_191 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_191, 0, tmp_tuple_element_92);
assert(tmp_class_container$class_creation_24__bases_orig == NULL);
tmp_class_container$class_creation_24__bases_orig = tmp_assign_source_191;
}
{
PyObject *tmp_assign_source_192;
PyObject *tmp_direct_call_arg1_24;
CHECK_OBJECT(tmp_class_container$class_creation_24__bases_orig);
tmp_direct_call_arg1_24 = tmp_class_container$class_creation_24__bases_orig;
Py_INCREF(tmp_direct_call_arg1_24);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_24};
    tmp_assign_source_192 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_192 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;

    goto try_except_handler_70;
}
assert(tmp_class_container$class_creation_24__bases == NULL);
tmp_class_container$class_creation_24__bases = tmp_assign_source_192;
}
{
PyObject *tmp_assign_source_193;
tmp_assign_source_193 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_24__class_decl_dict == NULL);
tmp_class_container$class_creation_24__class_decl_dict = tmp_assign_source_193;
}
{
PyObject *tmp_assign_source_194;
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


exception_lineno = 381;

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


exception_lineno = 381;

    goto try_except_handler_70;
}
tmp_metaclass_value_24 = BUILTIN_TYPE1(tmp_type_arg_47);
CHECK_OBJECT(tmp_type_arg_47);
Py_DECREF(tmp_type_arg_47);
if (tmp_metaclass_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;

    goto try_except_handler_70;
}
goto condexpr_end_24;
condexpr_false_24:;
tmp_metaclass_value_24 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_24);
condexpr_end_24:;
CHECK_OBJECT(tmp_class_container$class_creation_24__bases);
tmp_bases_value_24 = tmp_class_container$class_creation_24__bases;
tmp_assign_source_194 = SELECT_METACLASS(tstate, tmp_metaclass_value_24, tmp_bases_value_24);
CHECK_OBJECT(tmp_metaclass_value_24);
Py_DECREF(tmp_metaclass_value_24);
if (tmp_assign_source_194 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;

    goto try_except_handler_70;
}
assert(tmp_class_container$class_creation_24__metaclass == NULL);
tmp_class_container$class_creation_24__metaclass = tmp_assign_source_194;
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


exception_lineno = 381;

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
PyObject *tmp_assign_source_195;
PyObject *tmp_called_value_49;
PyObject *tmp_expression_value_141;
PyObject *tmp_args_value_47;
PyObject *tmp_tuple_element_93;
PyObject *tmp_kwargs_value_47;
CHECK_OBJECT(tmp_class_container$class_creation_24__metaclass);
tmp_expression_value_141 = tmp_class_container$class_creation_24__metaclass;
tmp_called_value_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_141, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;

    goto try_except_handler_70;
}
tmp_tuple_element_93 = mod_consts.const_str_plain_PayloadTooBig;
tmp_args_value_47 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_47, 0, tmp_tuple_element_93);
CHECK_OBJECT(tmp_class_container$class_creation_24__bases);
tmp_tuple_element_93 = tmp_class_container$class_creation_24__bases;
PyTuple_SET_ITEM0(tmp_args_value_47, 1, tmp_tuple_element_93);
CHECK_OBJECT(tmp_class_container$class_creation_24__class_decl_dict);
tmp_kwargs_value_47 = tmp_class_container$class_creation_24__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 381;
tmp_assign_source_195 = CALL_FUNCTION(tstate, tmp_called_value_49, tmp_args_value_47, tmp_kwargs_value_47);
CHECK_OBJECT(tmp_called_value_49);
Py_DECREF(tmp_called_value_49);
CHECK_OBJECT(tmp_args_value_47);
Py_DECREF(tmp_args_value_47);
if (tmp_assign_source_195 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;

    goto try_except_handler_70;
}
assert(tmp_class_container$class_creation_24__prepared == NULL);
tmp_class_container$class_creation_24__prepared = tmp_assign_source_195;
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


exception_lineno = 381;

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
PyObject *tmp_tuple_element_94;
PyObject *tmp_expression_value_143;
PyObject *tmp_name_value_26;
PyObject *tmp_default_value_24;
tmp_mod_expr_left_24 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_24__metaclass);
tmp_expression_value_143 = tmp_class_container$class_creation_24__metaclass;
tmp_name_value_26 = const_str_plain___name__;
tmp_default_value_24 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_94 = BUILTIN_GETATTR(tstate, tmp_expression_value_143, tmp_name_value_26, tmp_default_value_24);
if (tmp_tuple_element_94 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;

    goto try_except_handler_70;
}
tmp_mod_expr_right_24 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_144;
PyObject *tmp_type_arg_48;
PyTuple_SET_ITEM(tmp_mod_expr_right_24, 0, tmp_tuple_element_94);
CHECK_OBJECT(tmp_class_container$class_creation_24__prepared);
tmp_type_arg_48 = tmp_class_container$class_creation_24__prepared;
tmp_expression_value_144 = BUILTIN_TYPE1(tmp_type_arg_48);
assert(!(tmp_expression_value_144 == NULL));
tmp_tuple_element_94 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_144, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_144);
Py_DECREF(tmp_expression_value_144);
if (tmp_tuple_element_94 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;

    goto tuple_build_exception_24;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_24, 1, tmp_tuple_element_94);
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


exception_lineno = 381;

    goto try_except_handler_70;
}
frame_frame_websockets$exceptions->m_frame.f_lineno = 381;
tmp_raise_type_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_24);
CHECK_OBJECT(tmp_make_exception_arg_24);
Py_DECREF(tmp_make_exception_arg_24);
assert(!(tmp_raise_type_24 == NULL));
exception_state.exception_value = tmp_raise_type_24;
exception_lineno = 381;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_70;
}
branch_no_71:;
goto branch_end_70;
branch_no_70:;
{
PyObject *tmp_assign_source_196;
tmp_assign_source_196 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_24__prepared == NULL);
tmp_class_container$class_creation_24__prepared = tmp_assign_source_196;
}
branch_end_70:;
{
PyObject *tmp_assign_source_197;
{
PyObject *tmp_set_locals_24;
CHECK_OBJECT(tmp_class_container$class_creation_24__prepared);
tmp_set_locals_24 = tmp_class_container$class_creation_24__prepared;
locals_websockets$exceptions$$$class__24_PayloadTooBig_381 = tmp_set_locals_24;
Py_INCREF(tmp_set_locals_24);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_4ddd7fcb80f9d65673bce8553d39aa96;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__24_PayloadTooBig_381, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;

    goto try_except_handler_72;
}
tmp_dictset_value = mod_consts.const_str_digest_6df84fb5df66c174babb5b6190adff20;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__24_PayloadTooBig_381, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;

    goto try_except_handler_72;
}
tmp_dictset_value = mod_consts.const_str_plain_PayloadTooBig;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__24_PayloadTooBig_381, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;

    goto try_except_handler_72;
}
tmp_dictset_value = mod_consts.const_int_pos_381;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__24_PayloadTooBig_381, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;

    goto try_except_handler_72;
}
frame_frame_websockets$exceptions$$$class__24_PayloadTooBig_13 = MAKE_CLASS_FRAME(tstate, code_objects_14037143a340fd7c1dc896e2d3d43615, module_websockets$exceptions, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$exceptions$$$class__24_PayloadTooBig_13);
assert(Py_REFCNT(frame_frame_websockets$exceptions$$$class__24_PayloadTooBig_13) == 2);

// Framed code:
{
PyObject *tmp_defaults_3;
PyObject *tmp_annotations_23;
tmp_defaults_3 = mod_consts.const_tuple_none_none_tuple;
tmp_annotations_23 = DICT_COPY(tstate, mod_consts.const_dict_d84cd453391bb18a0d01dd89551c28c3);
Py_INCREF(tmp_defaults_3);

tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__23___init__(tstate, tmp_defaults_3, tmp_annotations_23);

tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__24_PayloadTooBig_381, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 393;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
}
{
PyObject *tmp_annotations_24;
tmp_annotations_24 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__24___str__(tstate, tmp_annotations_24);

tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__24_PayloadTooBig_381, mod_consts.const_str_plain___str__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
}
{
PyObject *tmp_annotations_25;
tmp_annotations_25 = DICT_COPY(tstate, mod_consts.const_dict_a3d056fd32bd869615b2228b68f1d8fe);

tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__25_set_current_size(tstate, tmp_annotations_25);

tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__24_PayloadTooBig_381, mod_consts.const_str_plain_set_current_size, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 428;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_12;
frame_exception_exit_13:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$exceptions$$$class__24_PayloadTooBig_13, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$exceptions$$$class__24_PayloadTooBig_13->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$exceptions$$$class__24_PayloadTooBig_13, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$exceptions$$$class__24_PayloadTooBig_13,
    type_description_2,
    outline_23_var___class__
);



assertFrameObject(frame_frame_websockets$exceptions$$$class__24_PayloadTooBig_13);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_12;
frame_no_exception_12:;
goto skip_nested_handling_12;
nested_frame_exit_12:;

goto try_except_handler_72;
skip_nested_handling_12:;
tmp_dictset_value = mod_consts.const_tuple_ec0123b3f3affca81e2b417c786b765e_tuple;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__24_PayloadTooBig_381, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;

    goto try_except_handler_72;
}
{
nuitka_bool tmp_condition_result_96;
PyObject *tmp_cmp_expr_left_24;
PyObject *tmp_cmp_expr_right_24;
CHECK_OBJECT(tmp_class_container$class_creation_24__bases);
tmp_cmp_expr_left_24 = tmp_class_container$class_creation_24__bases;
CHECK_OBJECT(tmp_class_container$class_creation_24__bases_orig);
tmp_cmp_expr_right_24 = tmp_class_container$class_creation_24__bases_orig;
tmp_condition_result_96 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_24, tmp_cmp_expr_right_24);
if (tmp_condition_result_96 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;

    goto try_except_handler_72;
}
if (tmp_condition_result_96 == NUITKA_BOOL_TRUE) {
    goto branch_yes_72;
} else {
    goto branch_no_72;
}
}
branch_yes_72:;
CHECK_OBJECT(tmp_class_container$class_creation_24__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_24__bases_orig;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__24_PayloadTooBig_381, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;

    goto try_except_handler_72;
}
branch_no_72:;
{
PyObject *tmp_assign_source_198;
PyObject *tmp_called_value_50;
PyObject *tmp_args_value_48;
PyObject *tmp_tuple_element_95;
PyObject *tmp_kwargs_value_48;
CHECK_OBJECT(tmp_class_container$class_creation_24__metaclass);
tmp_called_value_50 = tmp_class_container$class_creation_24__metaclass;
tmp_tuple_element_95 = mod_consts.const_str_plain_PayloadTooBig;
tmp_args_value_48 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_48, 0, tmp_tuple_element_95);
CHECK_OBJECT(tmp_class_container$class_creation_24__bases);
tmp_tuple_element_95 = tmp_class_container$class_creation_24__bases;
PyTuple_SET_ITEM0(tmp_args_value_48, 1, tmp_tuple_element_95);
tmp_tuple_element_95 = locals_websockets$exceptions$$$class__24_PayloadTooBig_381;
PyTuple_SET_ITEM0(tmp_args_value_48, 2, tmp_tuple_element_95);
CHECK_OBJECT(tmp_class_container$class_creation_24__class_decl_dict);
tmp_kwargs_value_48 = tmp_class_container$class_creation_24__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 381;
tmp_assign_source_198 = CALL_FUNCTION(tstate, tmp_called_value_50, tmp_args_value_48, tmp_kwargs_value_48);
CHECK_OBJECT(tmp_args_value_48);
Py_DECREF(tmp_args_value_48);
if (tmp_assign_source_198 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;

    goto try_except_handler_72;
}
assert(outline_23_var___class__ == NULL);
outline_23_var___class__ = tmp_assign_source_198;
}
CHECK_OBJECT(outline_23_var___class__);
tmp_assign_source_197 = outline_23_var___class__;
Py_INCREF(tmp_assign_source_197);
goto try_return_handler_72;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_72:;
Py_DECREF(locals_websockets$exceptions$$$class__24_PayloadTooBig_381);
locals_websockets$exceptions$$$class__24_PayloadTooBig_381 = NULL;
goto try_return_handler_71;
// Exception handler code:
try_except_handler_72:;
exception_keeper_lineno_70 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_70 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_websockets$exceptions$$$class__24_PayloadTooBig_381);
locals_websockets$exceptions$$$class__24_PayloadTooBig_381 = NULL;
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
exception_lineno = 381;
goto try_except_handler_70;
outline_result_48:;
UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_PayloadTooBig, tmp_assign_source_197);
}
goto try_end_24;
// Exception handler code:
try_except_handler_70:;
exception_keeper_lineno_72 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_72 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_24__bases_orig);
tmp_class_container$class_creation_24__bases_orig = NULL;
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
CHECK_OBJECT(tmp_class_container$class_creation_24__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_24__bases_orig);
Py_DECREF(tmp_class_container$class_creation_24__bases_orig);
tmp_class_container$class_creation_24__bases_orig = NULL;
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
PyObject *tmp_assign_source_199;
PyObject *tmp_tuple_element_96;
tmp_tuple_element_96 = module_var_accessor_websockets$exceptions$WebSocketException(tstate);
if (unlikely(tmp_tuple_element_96 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WebSocketException);
}

if (tmp_tuple_element_96 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 435;

    goto try_except_handler_73;
}
tmp_assign_source_199 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_assign_source_199, 0, tmp_tuple_element_96);
tmp_tuple_element_96 = PyExc_AssertionError;
PyTuple_SET_ITEM0(tmp_assign_source_199, 1, tmp_tuple_element_96);
assert(tmp_class_container$class_creation_25__bases_orig == NULL);
tmp_class_container$class_creation_25__bases_orig = tmp_assign_source_199;
}
{
PyObject *tmp_assign_source_200;
PyObject *tmp_direct_call_arg1_25;
CHECK_OBJECT(tmp_class_container$class_creation_25__bases_orig);
tmp_direct_call_arg1_25 = tmp_class_container$class_creation_25__bases_orig;
Py_INCREF(tmp_direct_call_arg1_25);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_25};
    tmp_assign_source_200 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_200 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;

    goto try_except_handler_73;
}
assert(tmp_class_container$class_creation_25__bases == NULL);
tmp_class_container$class_creation_25__bases = tmp_assign_source_200;
}
{
PyObject *tmp_assign_source_201;
tmp_assign_source_201 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_25__class_decl_dict == NULL);
tmp_class_container$class_creation_25__class_decl_dict = tmp_assign_source_201;
}
{
PyObject *tmp_assign_source_202;
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


exception_lineno = 435;

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


exception_lineno = 435;

    goto try_except_handler_73;
}
tmp_metaclass_value_25 = BUILTIN_TYPE1(tmp_type_arg_49);
CHECK_OBJECT(tmp_type_arg_49);
Py_DECREF(tmp_type_arg_49);
if (tmp_metaclass_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;

    goto try_except_handler_73;
}
goto condexpr_end_25;
condexpr_false_25:;
tmp_metaclass_value_25 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_25);
condexpr_end_25:;
CHECK_OBJECT(tmp_class_container$class_creation_25__bases);
tmp_bases_value_25 = tmp_class_container$class_creation_25__bases;
tmp_assign_source_202 = SELECT_METACLASS(tstate, tmp_metaclass_value_25, tmp_bases_value_25);
CHECK_OBJECT(tmp_metaclass_value_25);
Py_DECREF(tmp_metaclass_value_25);
if (tmp_assign_source_202 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;

    goto try_except_handler_73;
}
assert(tmp_class_container$class_creation_25__metaclass == NULL);
tmp_class_container$class_creation_25__metaclass = tmp_assign_source_202;
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


exception_lineno = 435;

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
PyObject *tmp_assign_source_203;
PyObject *tmp_called_value_51;
PyObject *tmp_expression_value_147;
PyObject *tmp_args_value_49;
PyObject *tmp_tuple_element_97;
PyObject *tmp_kwargs_value_49;
CHECK_OBJECT(tmp_class_container$class_creation_25__metaclass);
tmp_expression_value_147 = tmp_class_container$class_creation_25__metaclass;
tmp_called_value_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_147, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;

    goto try_except_handler_73;
}
tmp_tuple_element_97 = mod_consts.const_str_plain_InvalidState;
tmp_args_value_49 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_49, 0, tmp_tuple_element_97);
CHECK_OBJECT(tmp_class_container$class_creation_25__bases);
tmp_tuple_element_97 = tmp_class_container$class_creation_25__bases;
PyTuple_SET_ITEM0(tmp_args_value_49, 1, tmp_tuple_element_97);
CHECK_OBJECT(tmp_class_container$class_creation_25__class_decl_dict);
tmp_kwargs_value_49 = tmp_class_container$class_creation_25__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 435;
tmp_assign_source_203 = CALL_FUNCTION(tstate, tmp_called_value_51, tmp_args_value_49, tmp_kwargs_value_49);
CHECK_OBJECT(tmp_called_value_51);
Py_DECREF(tmp_called_value_51);
CHECK_OBJECT(tmp_args_value_49);
Py_DECREF(tmp_args_value_49);
if (tmp_assign_source_203 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;

    goto try_except_handler_73;
}
assert(tmp_class_container$class_creation_25__prepared == NULL);
tmp_class_container$class_creation_25__prepared = tmp_assign_source_203;
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


exception_lineno = 435;

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
PyObject *tmp_tuple_element_98;
PyObject *tmp_expression_value_149;
PyObject *tmp_name_value_27;
PyObject *tmp_default_value_25;
tmp_mod_expr_left_25 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_25__metaclass);
tmp_expression_value_149 = tmp_class_container$class_creation_25__metaclass;
tmp_name_value_27 = const_str_plain___name__;
tmp_default_value_25 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_98 = BUILTIN_GETATTR(tstate, tmp_expression_value_149, tmp_name_value_27, tmp_default_value_25);
if (tmp_tuple_element_98 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;

    goto try_except_handler_73;
}
tmp_mod_expr_right_25 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_150;
PyObject *tmp_type_arg_50;
PyTuple_SET_ITEM(tmp_mod_expr_right_25, 0, tmp_tuple_element_98);
CHECK_OBJECT(tmp_class_container$class_creation_25__prepared);
tmp_type_arg_50 = tmp_class_container$class_creation_25__prepared;
tmp_expression_value_150 = BUILTIN_TYPE1(tmp_type_arg_50);
assert(!(tmp_expression_value_150 == NULL));
tmp_tuple_element_98 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_150, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_150);
Py_DECREF(tmp_expression_value_150);
if (tmp_tuple_element_98 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;

    goto tuple_build_exception_25;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_25, 1, tmp_tuple_element_98);
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


exception_lineno = 435;

    goto try_except_handler_73;
}
frame_frame_websockets$exceptions->m_frame.f_lineno = 435;
tmp_raise_type_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_25);
CHECK_OBJECT(tmp_make_exception_arg_25);
Py_DECREF(tmp_make_exception_arg_25);
assert(!(tmp_raise_type_25 == NULL));
exception_state.exception_value = tmp_raise_type_25;
exception_lineno = 435;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_73;
}
branch_no_74:;
goto branch_end_73;
branch_no_73:;
{
PyObject *tmp_assign_source_204;
tmp_assign_source_204 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_25__prepared == NULL);
tmp_class_container$class_creation_25__prepared = tmp_assign_source_204;
}
branch_end_73:;
{
PyObject *tmp_assign_source_205;
{
PyObject *tmp_set_locals_25;
CHECK_OBJECT(tmp_class_container$class_creation_25__prepared);
tmp_set_locals_25 = tmp_class_container$class_creation_25__prepared;
locals_websockets$exceptions$$$class__25_InvalidState_435 = tmp_set_locals_25;
Py_INCREF(tmp_set_locals_25);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_4ddd7fcb80f9d65673bce8553d39aa96;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__25_InvalidState_435, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;

    goto try_except_handler_75;
}
tmp_dictset_value = mod_consts.const_str_digest_c6d48521d5ad277033c9e13f48a0db8c;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__25_InvalidState_435, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;

    goto try_except_handler_75;
}
tmp_dictset_value = mod_consts.const_str_plain_InvalidState;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__25_InvalidState_435, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;

    goto try_except_handler_75;
}
tmp_dictset_value = mod_consts.const_int_pos_435;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__25_InvalidState_435, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;

    goto try_except_handler_75;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__25_InvalidState_435, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;

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


exception_lineno = 435;

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
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__25_InvalidState_435, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;

    goto try_except_handler_75;
}
branch_no_75:;
{
PyObject *tmp_assign_source_206;
PyObject *tmp_called_value_52;
PyObject *tmp_args_value_50;
PyObject *tmp_tuple_element_99;
PyObject *tmp_kwargs_value_50;
CHECK_OBJECT(tmp_class_container$class_creation_25__metaclass);
tmp_called_value_52 = tmp_class_container$class_creation_25__metaclass;
tmp_tuple_element_99 = mod_consts.const_str_plain_InvalidState;
tmp_args_value_50 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_50, 0, tmp_tuple_element_99);
CHECK_OBJECT(tmp_class_container$class_creation_25__bases);
tmp_tuple_element_99 = tmp_class_container$class_creation_25__bases;
PyTuple_SET_ITEM0(tmp_args_value_50, 1, tmp_tuple_element_99);
tmp_tuple_element_99 = locals_websockets$exceptions$$$class__25_InvalidState_435;
PyTuple_SET_ITEM0(tmp_args_value_50, 2, tmp_tuple_element_99);
CHECK_OBJECT(tmp_class_container$class_creation_25__class_decl_dict);
tmp_kwargs_value_50 = tmp_class_container$class_creation_25__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 435;
tmp_assign_source_206 = CALL_FUNCTION(tstate, tmp_called_value_52, tmp_args_value_50, tmp_kwargs_value_50);
CHECK_OBJECT(tmp_args_value_50);
Py_DECREF(tmp_args_value_50);
if (tmp_assign_source_206 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;

    goto try_except_handler_75;
}
assert(outline_24_var___class__ == NULL);
outline_24_var___class__ = tmp_assign_source_206;
}
CHECK_OBJECT(outline_24_var___class__);
tmp_assign_source_205 = outline_24_var___class__;
Py_INCREF(tmp_assign_source_205);
goto try_return_handler_75;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_75:;
Py_DECREF(locals_websockets$exceptions$$$class__25_InvalidState_435);
locals_websockets$exceptions$$$class__25_InvalidState_435 = NULL;
goto try_return_handler_74;
// Exception handler code:
try_except_handler_75:;
exception_keeper_lineno_73 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_73 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_websockets$exceptions$$$class__25_InvalidState_435);
locals_websockets$exceptions$$$class__25_InvalidState_435 = NULL;
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
exception_lineno = 435;
goto try_except_handler_73;
outline_result_50:;
UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidState, tmp_assign_source_205);
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
PyObject *tmp_assign_source_207;
PyObject *tmp_tuple_element_100;
tmp_tuple_element_100 = module_var_accessor_websockets$exceptions$WebSocketException(tstate);
if (unlikely(tmp_tuple_element_100 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WebSocketException);
}

if (tmp_tuple_element_100 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 450;

    goto try_except_handler_76;
}
tmp_assign_source_207 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_assign_source_207, 0, tmp_tuple_element_100);
tmp_tuple_element_100 = PyExc_RuntimeError;
PyTuple_SET_ITEM0(tmp_assign_source_207, 1, tmp_tuple_element_100);
assert(tmp_class_container$class_creation_26__bases_orig == NULL);
tmp_class_container$class_creation_26__bases_orig = tmp_assign_source_207;
}
{
PyObject *tmp_assign_source_208;
PyObject *tmp_direct_call_arg1_26;
CHECK_OBJECT(tmp_class_container$class_creation_26__bases_orig);
tmp_direct_call_arg1_26 = tmp_class_container$class_creation_26__bases_orig;
Py_INCREF(tmp_direct_call_arg1_26);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_26};
    tmp_assign_source_208 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_208 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 450;

    goto try_except_handler_76;
}
assert(tmp_class_container$class_creation_26__bases == NULL);
tmp_class_container$class_creation_26__bases = tmp_assign_source_208;
}
{
PyObject *tmp_assign_source_209;
tmp_assign_source_209 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_26__class_decl_dict == NULL);
tmp_class_container$class_creation_26__class_decl_dict = tmp_assign_source_209;
}
{
PyObject *tmp_assign_source_210;
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


exception_lineno = 450;

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


exception_lineno = 450;

    goto try_except_handler_76;
}
tmp_metaclass_value_26 = BUILTIN_TYPE1(tmp_type_arg_51);
CHECK_OBJECT(tmp_type_arg_51);
Py_DECREF(tmp_type_arg_51);
if (tmp_metaclass_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 450;

    goto try_except_handler_76;
}
goto condexpr_end_26;
condexpr_false_26:;
tmp_metaclass_value_26 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_26);
condexpr_end_26:;
CHECK_OBJECT(tmp_class_container$class_creation_26__bases);
tmp_bases_value_26 = tmp_class_container$class_creation_26__bases;
tmp_assign_source_210 = SELECT_METACLASS(tstate, tmp_metaclass_value_26, tmp_bases_value_26);
CHECK_OBJECT(tmp_metaclass_value_26);
Py_DECREF(tmp_metaclass_value_26);
if (tmp_assign_source_210 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 450;

    goto try_except_handler_76;
}
assert(tmp_class_container$class_creation_26__metaclass == NULL);
tmp_class_container$class_creation_26__metaclass = tmp_assign_source_210;
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


exception_lineno = 450;

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
PyObject *tmp_assign_source_211;
PyObject *tmp_called_value_53;
PyObject *tmp_expression_value_153;
PyObject *tmp_args_value_51;
PyObject *tmp_tuple_element_101;
PyObject *tmp_kwargs_value_51;
CHECK_OBJECT(tmp_class_container$class_creation_26__metaclass);
tmp_expression_value_153 = tmp_class_container$class_creation_26__metaclass;
tmp_called_value_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_153, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 450;

    goto try_except_handler_76;
}
tmp_tuple_element_101 = mod_consts.const_str_plain_ConcurrencyError;
tmp_args_value_51 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_51, 0, tmp_tuple_element_101);
CHECK_OBJECT(tmp_class_container$class_creation_26__bases);
tmp_tuple_element_101 = tmp_class_container$class_creation_26__bases;
PyTuple_SET_ITEM0(tmp_args_value_51, 1, tmp_tuple_element_101);
CHECK_OBJECT(tmp_class_container$class_creation_26__class_decl_dict);
tmp_kwargs_value_51 = tmp_class_container$class_creation_26__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 450;
tmp_assign_source_211 = CALL_FUNCTION(tstate, tmp_called_value_53, tmp_args_value_51, tmp_kwargs_value_51);
CHECK_OBJECT(tmp_called_value_53);
Py_DECREF(tmp_called_value_53);
CHECK_OBJECT(tmp_args_value_51);
Py_DECREF(tmp_args_value_51);
if (tmp_assign_source_211 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 450;

    goto try_except_handler_76;
}
assert(tmp_class_container$class_creation_26__prepared == NULL);
tmp_class_container$class_creation_26__prepared = tmp_assign_source_211;
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


exception_lineno = 450;

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
PyObject *tmp_tuple_element_102;
PyObject *tmp_expression_value_155;
PyObject *tmp_name_value_28;
PyObject *tmp_default_value_26;
tmp_mod_expr_left_26 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_26__metaclass);
tmp_expression_value_155 = tmp_class_container$class_creation_26__metaclass;
tmp_name_value_28 = const_str_plain___name__;
tmp_default_value_26 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_102 = BUILTIN_GETATTR(tstate, tmp_expression_value_155, tmp_name_value_28, tmp_default_value_26);
if (tmp_tuple_element_102 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 450;

    goto try_except_handler_76;
}
tmp_mod_expr_right_26 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_156;
PyObject *tmp_type_arg_52;
PyTuple_SET_ITEM(tmp_mod_expr_right_26, 0, tmp_tuple_element_102);
CHECK_OBJECT(tmp_class_container$class_creation_26__prepared);
tmp_type_arg_52 = tmp_class_container$class_creation_26__prepared;
tmp_expression_value_156 = BUILTIN_TYPE1(tmp_type_arg_52);
assert(!(tmp_expression_value_156 == NULL));
tmp_tuple_element_102 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_156, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_156);
Py_DECREF(tmp_expression_value_156);
if (tmp_tuple_element_102 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 450;

    goto tuple_build_exception_26;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_26, 1, tmp_tuple_element_102);
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


exception_lineno = 450;

    goto try_except_handler_76;
}
frame_frame_websockets$exceptions->m_frame.f_lineno = 450;
tmp_raise_type_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_26);
CHECK_OBJECT(tmp_make_exception_arg_26);
Py_DECREF(tmp_make_exception_arg_26);
assert(!(tmp_raise_type_26 == NULL));
exception_state.exception_value = tmp_raise_type_26;
exception_lineno = 450;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_76;
}
branch_no_77:;
goto branch_end_76;
branch_no_76:;
{
PyObject *tmp_assign_source_212;
tmp_assign_source_212 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_26__prepared == NULL);
tmp_class_container$class_creation_26__prepared = tmp_assign_source_212;
}
branch_end_76:;
{
PyObject *tmp_assign_source_213;
{
PyObject *tmp_set_locals_26;
CHECK_OBJECT(tmp_class_container$class_creation_26__prepared);
tmp_set_locals_26 = tmp_class_container$class_creation_26__prepared;
locals_websockets$exceptions$$$class__26_ConcurrencyError_450 = tmp_set_locals_26;
Py_INCREF(tmp_set_locals_26);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_4ddd7fcb80f9d65673bce8553d39aa96;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__26_ConcurrencyError_450, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 450;

    goto try_except_handler_78;
}
tmp_dictset_value = mod_consts.const_str_digest_a86d608fcd987eab5ff5a1ef07754a87;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__26_ConcurrencyError_450, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 450;

    goto try_except_handler_78;
}
tmp_dictset_value = mod_consts.const_str_plain_ConcurrencyError;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__26_ConcurrencyError_450, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 450;

    goto try_except_handler_78;
}
tmp_dictset_value = mod_consts.const_int_pos_450;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__26_ConcurrencyError_450, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 450;

    goto try_except_handler_78;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__26_ConcurrencyError_450, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 450;

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


exception_lineno = 450;

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
tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__26_ConcurrencyError_450, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 450;

    goto try_except_handler_78;
}
branch_no_78:;
{
PyObject *tmp_assign_source_214;
PyObject *tmp_called_value_54;
PyObject *tmp_args_value_52;
PyObject *tmp_tuple_element_103;
PyObject *tmp_kwargs_value_52;
CHECK_OBJECT(tmp_class_container$class_creation_26__metaclass);
tmp_called_value_54 = tmp_class_container$class_creation_26__metaclass;
tmp_tuple_element_103 = mod_consts.const_str_plain_ConcurrencyError;
tmp_args_value_52 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_52, 0, tmp_tuple_element_103);
CHECK_OBJECT(tmp_class_container$class_creation_26__bases);
tmp_tuple_element_103 = tmp_class_container$class_creation_26__bases;
PyTuple_SET_ITEM0(tmp_args_value_52, 1, tmp_tuple_element_103);
tmp_tuple_element_103 = locals_websockets$exceptions$$$class__26_ConcurrencyError_450;
PyTuple_SET_ITEM0(tmp_args_value_52, 2, tmp_tuple_element_103);
CHECK_OBJECT(tmp_class_container$class_creation_26__class_decl_dict);
tmp_kwargs_value_52 = tmp_class_container$class_creation_26__class_decl_dict;
frame_frame_websockets$exceptions->m_frame.f_lineno = 450;
tmp_assign_source_214 = CALL_FUNCTION(tstate, tmp_called_value_54, tmp_args_value_52, tmp_kwargs_value_52);
CHECK_OBJECT(tmp_args_value_52);
Py_DECREF(tmp_args_value_52);
if (tmp_assign_source_214 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 450;

    goto try_except_handler_78;
}
assert(outline_25_var___class__ == NULL);
outline_25_var___class__ = tmp_assign_source_214;
}
CHECK_OBJECT(outline_25_var___class__);
tmp_assign_source_213 = outline_25_var___class__;
Py_INCREF(tmp_assign_source_213);
goto try_return_handler_78;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_78:;
Py_DECREF(locals_websockets$exceptions$$$class__26_ConcurrencyError_450);
locals_websockets$exceptions$$$class__26_ConcurrencyError_450 = NULL;
goto try_return_handler_77;
// Exception handler code:
try_except_handler_78:;
exception_keeper_lineno_76 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_76 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_websockets$exceptions$$$class__26_ConcurrencyError_450);
locals_websockets$exceptions$$$class__26_ConcurrencyError_450 = NULL;
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
exception_lineno = 450;
goto try_except_handler_76;
outline_result_52:;
UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_ConcurrencyError, tmp_assign_source_213);
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
PyObject *tmp_assign_source_215;
PyObject *tmp_name_value_29;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_29 = const_str_empty;
tmp_globals_arg_value_3 = (PyObject *)moduledict_websockets$exceptions;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_frames_str_plain_http11_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_websockets$exceptions->m_frame.f_lineno = 461;
tmp_assign_source_215 = IMPORT_MODULE5(tstate, tmp_name_value_29, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_215 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 461;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_215;
}
// Tried code:
{
PyObject *tmp_assign_source_216;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_216 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_websockets$exceptions,
        mod_consts.const_str_plain_frames,
        const_int_0
    );
} else {
    tmp_assign_source_216 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_frames);
}

if (tmp_assign_source_216 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 461;

    goto try_except_handler_79;
}
UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_frames, tmp_assign_source_216);
}
{
PyObject *tmp_assign_source_217;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_217 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_websockets$exceptions,
        mod_consts.const_str_plain_http11,
        const_int_0
    );
} else {
    tmp_assign_source_217 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_http11);
}

if (tmp_assign_source_217 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 461;

    goto try_except_handler_79;
}
UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_http11, tmp_assign_source_217);
}
goto try_end_27;
// Exception handler code:
try_except_handler_79:;
exception_keeper_lineno_79 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_79 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_1__module);
CHECK_OBJECT(tmp_import_from_1__module);
Py_DECREF(tmp_import_from_1__module);
tmp_import_from_1__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_79;
exception_lineno = exception_keeper_lineno_79;

goto frame_exception_exit_1;
// End of try:
try_end_27:;
CHECK_OBJECT(tmp_import_from_1__module);
CHECK_OBJECT(tmp_import_from_1__module);
Py_DECREF(tmp_import_from_1__module);
tmp_import_from_1__module = NULL;
{
PyObject *tmp_called_value_55;
PyObject *tmp_call_result_1;
PyObject *tmp_args_value_53;
PyObject *tmp_tuple_element_104;
PyObject *tmp_kwargs_value_53;
tmp_called_value_55 = module_var_accessor_websockets$exceptions$lazy_import(tstate);
if (unlikely(tmp_called_value_55 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lazy_import);
}

if (tmp_called_value_55 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 464;

    goto frame_exception_exit_1;
}
tmp_tuple_element_104 = (PyObject *)moduledict_websockets$exceptions;
tmp_args_value_53 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_53, 0, tmp_tuple_element_104);
tmp_kwargs_value_53 = DEEP_COPY_DICT(tstate, mod_consts.const_dict_124cea7af0517060b79c08e4f311735f);
frame_frame_websockets$exceptions->m_frame.f_lineno = 464;
tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_55, tmp_args_value_53, tmp_kwargs_value_53);
CHECK_OBJECT(tmp_args_value_53);
Py_DECREF(tmp_args_value_53);
CHECK_OBJECT(tmp_kwargs_value_53);
Py_DECREF(tmp_kwargs_value_53);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 464;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_13;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$exceptions, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$exceptions->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$exceptions, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_websockets$exceptions);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_13:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("websockets$exceptions", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "websockets.exceptions" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_websockets$exceptions);
    return module_websockets$exceptions;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("websockets$exceptions", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

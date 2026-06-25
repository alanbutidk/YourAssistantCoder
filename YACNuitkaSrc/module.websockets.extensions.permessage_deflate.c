/* Generated code for Python module 'websockets$extensions$permessage_deflate'
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



/* The "module_websockets$extensions$permessage_deflate" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_websockets$extensions$permessage_deflate;
PyDictObject *moduledict_websockets$extensions$permessage_deflate;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_tuple_false_true_tuple;
PyObject *const_int_pos_8;
PyObject *const_int_pos_15;
PyObject *const_str_plain_wbits;
PyObject *const_str_plain_remote_no_context_takeover;
PyObject *const_str_plain_local_no_context_takeover;
PyObject *const_str_plain_remote_max_window_bits;
PyObject *const_str_plain_local_max_window_bits;
PyObject *const_str_plain_compress_settings;
PyObject *const_str_plain_zlib;
PyObject *const_str_plain_decompressobj;
PyObject *const_tuple_str_plain_wbits_tuple;
PyObject *const_str_plain_decoder;
PyObject *const_str_plain_compressobj;
PyObject *const_str_plain_encoder;
PyObject *const_str_plain_decode_cont_data;
PyObject *const_str_digest_c10e84bee074718edad3b0ad6a805b82;
PyObject *const_str_digest_98b489f182306c00dedcf803bb1d6fef;
PyObject *const_str_digest_249ab79ba1ad79f562470660f4e32319;
PyObject *const_str_digest_e2ab18791b6596c6038f88b74b4704b4;
PyObject *const_str_digest_e980e65240554dbcb0ab0b9b8310370f;
PyObject *const_str_chr_41;
PyObject *const_str_plain_opcode;
PyObject *const_str_plain_frames;
PyObject *const_str_plain_CTRL_OPCODES;
PyObject *const_str_plain_OP_CONT;
PyObject *const_str_plain_fin;
PyObject *const_str_plain_rsv1;
PyObject *const_str_plain_data;
PyObject *const_str_plain__EMPTY_UNCOMPRESSED_BLOCK;
PyObject *const_str_plain_decompress;
PyObject *const_str_plain_unconsumed_tail;
PyObject *const_str_plain_PayloadTooBig;
PyObject *const_str_plain_error;
PyObject *const_str_plain_ProtocolError;
PyObject *const_tuple_str_digest_92203632173c30415ca8c31a3b845b9d_tuple;
PyObject *const_str_plain_Frame;
PyObject *const_str_plain_rsv2;
PyObject *const_str_plain_rsv3;
PyObject *const_str_digest_c930139b81667e31fb581632a18b7c30;
PyObject *const_str_plain_compress;
PyObject *const_str_plain_flush;
PyObject *const_str_plain_Z_SYNC_FLUSH;
PyObject *const_slice_int_neg_4_none_none;
PyObject *const_slice_none_int_neg_4_none;
PyObject *const_str_digest_c7bd42b79e5d8c02251b43374d20c465;
PyObject *const_tuple_str_plain_server_no_context_takeover_none_tuple;
PyObject *const_tuple_str_plain_client_no_context_takeover_none_tuple;
PyObject *const_str_plain_server_max_window_bits;
PyObject *const_tuple_str_plain_client_max_window_bits_none_tuple;
PyObject *const_str_plain_client_max_window_bits;
PyObject *const_str_digest_d3a29b2f6685155f693350b3300b1895;
PyObject *const_str_plain_server_no_context_takeover;
PyObject *const_str_plain_DuplicateParameter;
PyObject *const_str_plain_InvalidParameterValue;
PyObject *const_str_plain_client_no_context_takeover;
PyObject *const_str_plain__MAX_WINDOW_BITS_VALUES;
PyObject *const_str_plain_InvalidParameterName;
PyObject *const_str_digest_b0fa69a29f282d08a4184133a201d95f;
PyObject *const_str_digest_d4c6f6d59f858d6a7e099c3db92c206c;
PyObject *const_str_digest_91b9bac1baf9ed06e4a3f564b5596ae3;
PyObject *const_str_digest_099327bfd1e8b261a19d9baa7ba949dc;
PyObject *const_str_digest_a179c08a3f5f1955770c299a03c04918;
PyObject *const_str_plain__build_parameters;
PyObject *const_str_digest_04e988f451cec288f7af9a08447c9d97;
PyObject *const_str_plain_NegotiationError;
PyObject *const_str_digest_54513e969a74200107b4e2e767d9d1c0;
PyObject *const_str_plain__extract_parameters;
PyObject *const_dict_79542d96dd5e3965cf71aca264e8d189;
PyObject *const_tuple_str_digest_00052a1e063247d51719106d13c4746f_tuple;
PyObject *const_tuple_str_digest_a89c065d99d35121b80ee103d4fb6e1d_tuple;
PyObject *const_tuple_str_digest_21134e2e156c463750b9f022fa763ac3_tuple;
PyObject *const_tuple_str_digest_314e71e7da3e98b95da004969462abf7_tuple;
PyObject *const_tuple_str_digest_d97962600fb08e301b1aed17e172ad78_tuple;
PyObject *const_str_plain_PerMessageDeflate;
PyObject *const_str_digest_c27ecd866ab726224f251dd7448ca03a;
PyObject *const_str_plain_self;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_7322af661785e5137e703f26f7c6ca8d;
PyObject *const_str_plain_ClientPerMessageDeflateFactory;
PyObject *const_tuple_dict_8418af9c661d5b75fe018d2207c320cb_tuple;
PyObject *const_tuple_str_plain_compress_settings_tuple;
PyObject *const_str_plain_extensions;
PyObject *const_str_digest_b21bc56b5062087773048e931f6e0ca4;
PyObject *const_str_digest_0e2440386ea78059d29f9dec48115d24;
PyObject *const_str_digest_2ee638e4f9addcf8577875c75861bd9d;
PyObject *const_str_digest_1cc454d9f70ac50b5e0f0c2cd3c52292;
PyObject *const_str_plain_require_client_max_window_bits;
PyObject *const_str_digest_e928b6f8f0c62f6f9ccf6edbfd65ac31;
PyObject *const_dict_fc81db492db7a16b4c23d5e95b79977a;
PyObject *const_tuple_str_digest_38cebe81fdfa5b441ab5a441d6c56553_tuple;
PyObject *const_str_digest_c0c390169658744fceb1900dcbbedaa5;
PyObject *const_str_digest_b30ca9af6e0a6141cf34e68449b8fe39;
PyObject *const_str_plain_ServerPerMessageDeflateFactory;
PyObject *const_tuple_int_pos_12_int_pos_12_dict_8418af9c661d5b75fe018d2207c320cb_tuple;
PyObject *const_tuple_68c981209ca10d9441e73f14da690bfd_tuple;
PyObject *const_str_digest_c3826d3b55c3177d0f07e0d1e66a4ace;
PyObject *const_str_digest_93f97c5f134a74c2003dd0c6ac295afd;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
PyObject *const_tuple_str_plain_Sequence_tuple;
PyObject *const_str_plain_Sequence;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_Literal;
PyObject *const_tuple_str_plain_frames_tuple;
PyObject *const_int_pos_2;
PyObject *const_str_plain_exceptions;
PyObject *const_tuple_d4d1241b77eb0028ee5ae78ab2a00fbf_tuple;
PyObject *const_str_plain_typing;
PyObject *const_tuple_83ccdc8beeec41eeab73cbad6ceeafc3_tuple;
PyObject *const_str_plain_BytesLike;
PyObject *const_str_plain_ExtensionName;
PyObject *const_str_plain_ExtensionParameter;
PyObject *const_str_plain_base;
PyObject *const_tuple_409cd71a9f91f1e1c7b636b1bfa5e055_tuple;
PyObject *const_str_plain_ClientExtensionFactory;
PyObject *const_str_plain_Extension;
PyObject *const_str_plain_ServerExtensionFactory;
PyObject *const_list_0cb022d28e4d2d95c0451f65e47f5a08_list;
PyObject *const_bytes_digest_4e69fbf728e33ad1a4bd582763689e5d;
PyObject *const_xrange_8_16;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_1cd615c9c7c9240af135c4a3ac3422eb;
PyObject *const_str_digest_ed9c829c87ee4162c52a7d15807d7caa;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_33;
PyObject *const_str_plain___firstlineno__;
PyObject *const_tuple_str_digest_f94a7f1709d232bef66090e158c3c489_tuple;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_6dcb583cb628ce52e413ee031d009704;
PyObject *const_str_digest_486293ccf10cfc6b8cb6758d320366c2;
PyObject *const_dict_e8d16ece775461636da8aedac2f07d6b;
PyObject *const_str_plain___repr__;
PyObject *const_str_digest_bd9acee54ece92714b10ff0b173c640b;
PyObject *const_dict_941c36190bd5a33903fe24d231e219ad;
PyObject *const_dict_c04f60f63fcc55182ba198ff6f16f46a;
PyObject *const_str_plain_decode;
PyObject *const_str_digest_2d2f01567441eddc178b85bb5097d810;
PyObject *const_dict_dc08552453e7e97fc97b32a4b9c78af5;
PyObject *const_str_plain_encode;
PyObject *const_str_digest_dae140afa7a0e72e99ac249732b40639;
PyObject *const_tuple_1364c606a4096c508ca02f3a952ed45a_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_dict_7542c8623e449d1cb467384145e5efc0;
PyObject *const_dict_66386e192c49d4dc46d7525b6ece563f;
PyObject *const_str_digest_55c30d0c7d4897c0e3863a128c73508a;
PyObject *const_int_pos_298;
PyObject *const_tuple_false_false_none_true_none_tuple;
PyObject *const_dict_e1ddeb2dad3e831c139bb802c5f6ac27;
PyObject *const_str_digest_eabeb705064fe346caf790181fe28ca8;
PyObject *const_dict_7d5343c206102798af6657547d2cd14d;
PyObject *const_str_plain_get_request_params;
PyObject *const_str_digest_3aa1e38b07e52b178e94011317e8e3ec;
PyObject *const_dict_a3973982c3835d7267d813c3dd056557;
PyObject *const_str_plain_process_response_params;
PyObject *const_str_digest_a06e95cdb30fd0668a9cec405de48464;
PyObject *const_tuple_abc9055bca592d44d6a7206031f1db9f_tuple;
PyObject *const_dict_49c69c18623e9b58c04d5d145ef1283c;
PyObject *const_str_plain_enable_client_permessage_deflate;
PyObject *const_str_digest_89ee7863fbc07534e7cb759d845281a4;
PyObject *const_int_pos_498;
PyObject *const_tuple_false_false_none_none_none_false_tuple;
PyObject *const_dict_7722afae97baf8b06dc92453c47bcb07;
PyObject *const_str_digest_a96c233b5ef36c3c43f26110349b2cd2;
PyObject *const_dict_e0c3e9acd6cba7009bfa22e3a902a9db;
PyObject *const_str_plain_process_request_params;
PyObject *const_str_digest_bb9c93350ed9258f8b9dd34181ca95d8;
PyObject *const_tuple_9e80f4ce538d0417d538e530310b0f2e_tuple;
PyObject *const_dict_71c51b6e1b0b6e0ab53bd806dae73a6e;
PyObject *const_str_plain_enable_server_permessage_deflate;
PyObject *const_str_digest_fabd41daac75e6322d02cd9d6d0d2e99;
PyObject *const_tuple_5796900caa90a8a731cc807768852e5e_tuple;
PyObject *const_tuple_1e5492d15980b40d9fbebb14be454b0d_tuple;
PyObject *const_tuple_d094636bbd27d37d4d4d56aca98d63c1_tuple;
PyObject *const_str_digest_6dd7a8a72317698cc476047b124fdc89;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_76fd80f5f3d8c066197ae941ff7a1508_tuple;
PyObject *const_tuple_eec6c3ca194ae4abe715b009137d77a3_tuple;
PyObject *const_tuple_58f165cae785805ed5d4ef12c976da63_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_53d7af5b3fb10972d2b9da61018e9039_tuple;
PyObject *const_tuple_9516be38606a7bc0728d72014d3572d6_tuple;
PyObject *const_tuple_3ec763917f15ee511dab8935b8a4cb41_tuple;
PyObject *const_tuple_str_plain_extensions_tuple;
PyObject *const_tuple_str_plain_self_str_plain_frame_str_plain_data_tuple;
PyObject *const_tuple_d81ec672e37b8ad81dfbde3eb022100a_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[192];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("websockets.extensions.permessage_deflate"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_tuple_false_true_tuple);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_int_pos_8);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_int_pos_15);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_wbits);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_remote_no_context_takeover);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_local_no_context_takeover);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_remote_max_window_bits);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_local_max_window_bits);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_compress_settings);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_zlib);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_decompressobj);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_wbits_tuple);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_decoder);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_compressobj);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_encoder);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode_cont_data);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_c10e84bee074718edad3b0ad6a805b82);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_98b489f182306c00dedcf803bb1d6fef);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_249ab79ba1ad79f562470660f4e32319);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_e2ab18791b6596c6038f88b74b4704b4);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_e980e65240554dbcb0ab0b9b8310370f);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_chr_41);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_opcode);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_frames);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_CTRL_OPCODES);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_OP_CONT);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_fin);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_rsv1);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_data);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain__EMPTY_UNCOMPRESSED_BLOCK);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_decompress);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_unconsumed_tail);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_PayloadTooBig);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_error);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_ProtocolError);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_92203632173c30415ca8c31a3b845b9d_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_Frame);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_rsv2);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_rsv3);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_c930139b81667e31fb581632a18b7c30);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_compress);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_flush);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_Z_SYNC_FLUSH);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_slice_int_neg_4_none_none);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_neg_4_none);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_c7bd42b79e5d8c02251b43374d20c465);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_server_no_context_takeover_none_tuple);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_client_no_context_takeover_none_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_server_max_window_bits);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_client_max_window_bits_none_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_client_max_window_bits);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_d3a29b2f6685155f693350b3300b1895);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_server_no_context_takeover);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_DuplicateParameter);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidParameterValue);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_client_no_context_takeover);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain__MAX_WINDOW_BITS_VALUES);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidParameterName);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_b0fa69a29f282d08a4184133a201d95f);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_d4c6f6d59f858d6a7e099c3db92c206c);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_91b9bac1baf9ed06e4a3f564b5596ae3);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_099327bfd1e8b261a19d9baa7ba949dc);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_a179c08a3f5f1955770c299a03c04918);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain__build_parameters);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_04e988f451cec288f7af9a08447c9d97);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_NegotiationError);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_54513e969a74200107b4e2e767d9d1c0);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain__extract_parameters);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_dict_79542d96dd5e3965cf71aca264e8d189);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_00052a1e063247d51719106d13c4746f_tuple);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a89c065d99d35121b80ee103d4fb6e1d_tuple);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_21134e2e156c463750b9f022fa763ac3_tuple);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_314e71e7da3e98b95da004969462abf7_tuple);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_d97962600fb08e301b1aed17e172ad78_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_PerMessageDeflate);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_c27ecd866ab726224f251dd7448ca03a);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_7322af661785e5137e703f26f7c6ca8d);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_ClientPerMessageDeflateFactory);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_dict_8418af9c661d5b75fe018d2207c320cb_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_compress_settings_tuple);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_extensions);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_digest_b21bc56b5062087773048e931f6e0ca4);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_digest_0e2440386ea78059d29f9dec48115d24);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_2ee638e4f9addcf8577875c75861bd9d);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_digest_1cc454d9f70ac50b5e0f0c2cd3c52292);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_require_client_max_window_bits);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_digest_e928b6f8f0c62f6f9ccf6edbfd65ac31);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_dict_fc81db492db7a16b4c23d5e95b79977a);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_38cebe81fdfa5b441ab5a441d6c56553_tuple);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_digest_c0c390169658744fceb1900dcbbedaa5);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_digest_b30ca9af6e0a6141cf34e68449b8fe39);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_ServerPerMessageDeflateFactory);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_12_int_pos_12_dict_8418af9c661d5b75fe018d2207c320cb_tuple);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_tuple_68c981209ca10d9441e73f14da690bfd_tuple);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_digest_c3826d3b55c3177d0f07e0d1e66a4ace);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_digest_93f97c5f134a74c2003dd0c6ac295afd);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Sequence_tuple);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_Literal);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_frames_tuple);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_tuple_d4d1241b77eb0028ee5ae78ab2a00fbf_tuple);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_83ccdc8beeec41eeab73cbad6ceeafc3_tuple);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_BytesLike);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_ExtensionName);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_ExtensionParameter);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_base);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_tuple_409cd71a9f91f1e1c7b636b1bfa5e055_tuple);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_ClientExtensionFactory);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_Extension);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_ServerExtensionFactory);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_list_0cb022d28e4d2d95c0451f65e47f5a08_list);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_4e69fbf728e33ad1a4bd582763689e5d);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_xrange_8_16);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_1cd615c9c7c9240af135c4a3ac3422eb);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_digest_ed9c829c87ee4162c52a7d15807d7caa);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_int_pos_33);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_f94a7f1709d232bef66090e158c3c489_tuple);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_dict_6dcb583cb628ce52e413ee031d009704);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_digest_486293ccf10cfc6b8cb6758d320366c2);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain___repr__);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_digest_bd9acee54ece92714b10ff0b173c640b);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_dict_941c36190bd5a33903fe24d231e219ad);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_dict_c04f60f63fcc55182ba198ff6f16f46a);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_digest_2d2f01567441eddc178b85bb5097d810);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_dict_dc08552453e7e97fc97b32a4b9c78af5);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_digest_dae140afa7a0e72e99ac249732b40639);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_tuple_1364c606a4096c508ca02f3a952ed45a_tuple);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_dict_7542c8623e449d1cb467384145e5efc0);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_dict_66386e192c49d4dc46d7525b6ece563f);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_digest_55c30d0c7d4897c0e3863a128c73508a);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_int_pos_298);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_tuple_false_false_none_true_none_tuple);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_dict_e1ddeb2dad3e831c139bb802c5f6ac27);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_digest_eabeb705064fe346caf790181fe28ca8);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_dict_7d5343c206102798af6657547d2cd14d);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_request_params);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_digest_3aa1e38b07e52b178e94011317e8e3ec);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_dict_a3973982c3835d7267d813c3dd056557);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain_process_response_params);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_digest_a06e95cdb30fd0668a9cec405de48464);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_tuple_abc9055bca592d44d6a7206031f1db9f_tuple);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_dict_49c69c18623e9b58c04d5d145ef1283c);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain_enable_client_permessage_deflate);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_digest_89ee7863fbc07534e7cb759d845281a4);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_int_pos_498);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_tuple_false_false_none_none_none_false_tuple);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_dict_7722afae97baf8b06dc92453c47bcb07);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_digest_a96c233b5ef36c3c43f26110349b2cd2);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_dict_e0c3e9acd6cba7009bfa22e3a902a9db);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain_process_request_params);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_digest_bb9c93350ed9258f8b9dd34181ca95d8);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_tuple_9e80f4ce538d0417d538e530310b0f2e_tuple);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_dict_71c51b6e1b0b6e0ab53bd806dae73a6e);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_plain_enable_server_permessage_deflate);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_digest_fabd41daac75e6322d02cd9d6d0d2e99);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_tuple_5796900caa90a8a731cc807768852e5e_tuple);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_tuple_1e5492d15980b40d9fbebb14be454b0d_tuple);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_tuple_d094636bbd27d37d4d4d56aca98d63c1_tuple);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_digest_6dd7a8a72317698cc476047b124fdc89);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_tuple_76fd80f5f3d8c066197ae941ff7a1508_tuple);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_tuple_eec6c3ca194ae4abe715b009137d77a3_tuple);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_tuple_58f165cae785805ed5d4ef12c976da63_tuple);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_tuple_53d7af5b3fb10972d2b9da61018e9039_tuple);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_tuple_9516be38606a7bc0728d72014d3572d6_tuple);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_tuple_3ec763917f15ee511dab8935b8a4cb41_tuple);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_extensions_tuple);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_frame_str_plain_data_tuple);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_tuple_d81ec672e37b8ad81dfbde3eb022100a_tuple);
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
void checkModuleConstants_websockets$extensions$permessage_deflate(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_tuple_false_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_true_tuple);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_int_pos_8));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_8);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_int_pos_15));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_15);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_wbits));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wbits);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_remote_no_context_takeover));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_remote_no_context_takeover);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_local_no_context_takeover));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_local_no_context_takeover);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_remote_max_window_bits));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_remote_max_window_bits);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_local_max_window_bits));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_local_max_window_bits);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_compress_settings));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_compress_settings);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_zlib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_zlib);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_decompressobj));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decompressobj);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_wbits_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_wbits_tuple);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_decoder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decoder);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_compressobj));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_compressobj);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_encoder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encoder);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode_cont_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decode_cont_data);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_c10e84bee074718edad3b0ad6a805b82));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c10e84bee074718edad3b0ad6a805b82);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_98b489f182306c00dedcf803bb1d6fef));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_98b489f182306c00dedcf803bb1d6fef);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_249ab79ba1ad79f562470660f4e32319));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_249ab79ba1ad79f562470660f4e32319);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_e2ab18791b6596c6038f88b74b4704b4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e2ab18791b6596c6038f88b74b4704b4);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_e980e65240554dbcb0ab0b9b8310370f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e980e65240554dbcb0ab0b9b8310370f);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_chr_41));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_41);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_opcode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_opcode);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_frames));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_frames);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_CTRL_OPCODES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CTRL_OPCODES);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_OP_CONT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OP_CONT);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_fin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fin);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_rsv1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rsv1);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_data);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain__EMPTY_UNCOMPRESSED_BLOCK));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__EMPTY_UNCOMPRESSED_BLOCK);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_decompress));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decompress);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_unconsumed_tail));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unconsumed_tail);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_PayloadTooBig));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PayloadTooBig);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_error);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_ProtocolError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ProtocolError);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_92203632173c30415ca8c31a3b845b9d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_92203632173c30415ca8c31a3b845b9d_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_Frame));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Frame);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_rsv2));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rsv2);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_rsv3));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rsv3);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_c930139b81667e31fb581632a18b7c30));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c930139b81667e31fb581632a18b7c30);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_compress));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_compress);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_flush));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_flush);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_Z_SYNC_FLUSH));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Z_SYNC_FLUSH);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_slice_int_neg_4_none_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_int_neg_4_none_none);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_neg_4_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_int_neg_4_none);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_c7bd42b79e5d8c02251b43374d20c465));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c7bd42b79e5d8c02251b43374d20c465);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_server_no_context_takeover_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_server_no_context_takeover_none_tuple);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_client_no_context_takeover_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_client_no_context_takeover_none_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_server_max_window_bits));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_server_max_window_bits);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_client_max_window_bits_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_client_max_window_bits_none_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_client_max_window_bits));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_client_max_window_bits);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_d3a29b2f6685155f693350b3300b1895));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d3a29b2f6685155f693350b3300b1895);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_server_no_context_takeover));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_server_no_context_takeover);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_DuplicateParameter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DuplicateParameter);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidParameterValue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidParameterValue);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_client_no_context_takeover));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_client_no_context_takeover);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain__MAX_WINDOW_BITS_VALUES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__MAX_WINDOW_BITS_VALUES);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidParameterName));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidParameterName);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_b0fa69a29f282d08a4184133a201d95f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b0fa69a29f282d08a4184133a201d95f);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_d4c6f6d59f858d6a7e099c3db92c206c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d4c6f6d59f858d6a7e099c3db92c206c);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_91b9bac1baf9ed06e4a3f564b5596ae3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_91b9bac1baf9ed06e4a3f564b5596ae3);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_099327bfd1e8b261a19d9baa7ba949dc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_099327bfd1e8b261a19d9baa7ba949dc);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_a179c08a3f5f1955770c299a03c04918));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a179c08a3f5f1955770c299a03c04918);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain__build_parameters));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__build_parameters);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_04e988f451cec288f7af9a08447c9d97));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_04e988f451cec288f7af9a08447c9d97);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_NegotiationError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NegotiationError);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_54513e969a74200107b4e2e767d9d1c0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_54513e969a74200107b4e2e767d9d1c0);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain__extract_parameters));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__extract_parameters);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_dict_79542d96dd5e3965cf71aca264e8d189));
CHECK_OBJECT_DEEP(mod_consts.const_dict_79542d96dd5e3965cf71aca264e8d189);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_00052a1e063247d51719106d13c4746f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_00052a1e063247d51719106d13c4746f_tuple);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a89c065d99d35121b80ee103d4fb6e1d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_a89c065d99d35121b80ee103d4fb6e1d_tuple);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_21134e2e156c463750b9f022fa763ac3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_21134e2e156c463750b9f022fa763ac3_tuple);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_314e71e7da3e98b95da004969462abf7_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_314e71e7da3e98b95da004969462abf7_tuple);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_d97962600fb08e301b1aed17e172ad78_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_d97962600fb08e301b1aed17e172ad78_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_PerMessageDeflate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PerMessageDeflate);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_c27ecd866ab726224f251dd7448ca03a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c27ecd866ab726224f251dd7448ca03a);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_7322af661785e5137e703f26f7c6ca8d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7322af661785e5137e703f26f7c6ca8d);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_ClientPerMessageDeflateFactory));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ClientPerMessageDeflateFactory);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_dict_8418af9c661d5b75fe018d2207c320cb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_dict_8418af9c661d5b75fe018d2207c320cb_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_compress_settings_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_compress_settings_tuple);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extensions);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_digest_b21bc56b5062087773048e931f6e0ca4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b21bc56b5062087773048e931f6e0ca4);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_digest_0e2440386ea78059d29f9dec48115d24));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0e2440386ea78059d29f9dec48115d24);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_2ee638e4f9addcf8577875c75861bd9d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2ee638e4f9addcf8577875c75861bd9d);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_digest_1cc454d9f70ac50b5e0f0c2cd3c52292));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1cc454d9f70ac50b5e0f0c2cd3c52292);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_require_client_max_window_bits));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_require_client_max_window_bits);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_digest_e928b6f8f0c62f6f9ccf6edbfd65ac31));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e928b6f8f0c62f6f9ccf6edbfd65ac31);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_dict_fc81db492db7a16b4c23d5e95b79977a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_fc81db492db7a16b4c23d5e95b79977a);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_38cebe81fdfa5b441ab5a441d6c56553_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_38cebe81fdfa5b441ab5a441d6c56553_tuple);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_digest_c0c390169658744fceb1900dcbbedaa5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c0c390169658744fceb1900dcbbedaa5);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_digest_b30ca9af6e0a6141cf34e68449b8fe39));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b30ca9af6e0a6141cf34e68449b8fe39);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_ServerPerMessageDeflateFactory));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ServerPerMessageDeflateFactory);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_12_int_pos_12_dict_8418af9c661d5b75fe018d2207c320cb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_12_int_pos_12_dict_8418af9c661d5b75fe018d2207c320cb_tuple);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_tuple_68c981209ca10d9441e73f14da690bfd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_68c981209ca10d9441e73f14da690bfd_tuple);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_digest_c3826d3b55c3177d0f07e0d1e66a4ace));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c3826d3b55c3177d0f07e0d1e66a4ace);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_digest_93f97c5f134a74c2003dd0c6ac295afd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_93f97c5f134a74c2003dd0c6ac295afd);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Sequence_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Sequence_tuple);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Sequence);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_Literal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Literal);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_frames_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_frames_tuple);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_tuple_d4d1241b77eb0028ee5ae78ab2a00fbf_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d4d1241b77eb0028ee5ae78ab2a00fbf_tuple);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_83ccdc8beeec41eeab73cbad6ceeafc3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_83ccdc8beeec41eeab73cbad6ceeafc3_tuple);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_BytesLike));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BytesLike);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_ExtensionName));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ExtensionName);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_ExtensionParameter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ExtensionParameter);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_base));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_base);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_tuple_409cd71a9f91f1e1c7b636b1bfa5e055_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_409cd71a9f91f1e1c7b636b1bfa5e055_tuple);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_ClientExtensionFactory));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ClientExtensionFactory);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_Extension));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Extension);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_ServerExtensionFactory));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ServerExtensionFactory);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_list_0cb022d28e4d2d95c0451f65e47f5a08_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_0cb022d28e4d2d95c0451f65e47f5a08_list);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_4e69fbf728e33ad1a4bd582763689e5d));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_digest_4e69fbf728e33ad1a4bd582763689e5d);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_xrange_8_16));
CHECK_OBJECT_DEEP(mod_consts.const_xrange_8_16);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_1cd615c9c7c9240af135c4a3ac3422eb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1cd615c9c7c9240af135c4a3ac3422eb);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_digest_ed9c829c87ee4162c52a7d15807d7caa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ed9c829c87ee4162c52a7d15807d7caa);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_int_pos_33));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_33);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_f94a7f1709d232bef66090e158c3c489_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_f94a7f1709d232bef66090e158c3c489_tuple);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_dict_6dcb583cb628ce52e413ee031d009704));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6dcb583cb628ce52e413ee031d009704);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_digest_486293ccf10cfc6b8cb6758d320366c2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_486293ccf10cfc6b8cb6758d320366c2);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain___repr__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___repr__);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_digest_bd9acee54ece92714b10ff0b173c640b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bd9acee54ece92714b10ff0b173c640b);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_dict_941c36190bd5a33903fe24d231e219ad));
CHECK_OBJECT_DEEP(mod_consts.const_dict_941c36190bd5a33903fe24d231e219ad);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_dict_c04f60f63fcc55182ba198ff6f16f46a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c04f60f63fcc55182ba198ff6f16f46a);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decode);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_digest_2d2f01567441eddc178b85bb5097d810));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2d2f01567441eddc178b85bb5097d810);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_dict_dc08552453e7e97fc97b32a4b9c78af5));
CHECK_OBJECT_DEEP(mod_consts.const_dict_dc08552453e7e97fc97b32a4b9c78af5);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encode);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_digest_dae140afa7a0e72e99ac249732b40639));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dae140afa7a0e72e99ac249732b40639);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_tuple_1364c606a4096c508ca02f3a952ed45a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1364c606a4096c508ca02f3a952ed45a_tuple);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_dict_7542c8623e449d1cb467384145e5efc0));
CHECK_OBJECT_DEEP(mod_consts.const_dict_7542c8623e449d1cb467384145e5efc0);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_dict_66386e192c49d4dc46d7525b6ece563f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_66386e192c49d4dc46d7525b6ece563f);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_digest_55c30d0c7d4897c0e3863a128c73508a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_55c30d0c7d4897c0e3863a128c73508a);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_int_pos_298));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_298);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_tuple_false_false_none_true_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_false_none_true_none_tuple);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_dict_e1ddeb2dad3e831c139bb802c5f6ac27));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e1ddeb2dad3e831c139bb802c5f6ac27);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_digest_eabeb705064fe346caf790181fe28ca8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eabeb705064fe346caf790181fe28ca8);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_dict_7d5343c206102798af6657547d2cd14d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_7d5343c206102798af6657547d2cd14d);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_request_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_request_params);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_digest_3aa1e38b07e52b178e94011317e8e3ec));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3aa1e38b07e52b178e94011317e8e3ec);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_dict_a3973982c3835d7267d813c3dd056557));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a3973982c3835d7267d813c3dd056557);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain_process_response_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_process_response_params);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_digest_a06e95cdb30fd0668a9cec405de48464));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a06e95cdb30fd0668a9cec405de48464);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_tuple_abc9055bca592d44d6a7206031f1db9f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_abc9055bca592d44d6a7206031f1db9f_tuple);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_dict_49c69c18623e9b58c04d5d145ef1283c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_49c69c18623e9b58c04d5d145ef1283c);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain_enable_client_permessage_deflate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_enable_client_permessage_deflate);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_digest_89ee7863fbc07534e7cb759d845281a4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_89ee7863fbc07534e7cb759d845281a4);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_int_pos_498));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_498);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_tuple_false_false_none_none_none_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_false_none_none_none_false_tuple);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_dict_7722afae97baf8b06dc92453c47bcb07));
CHECK_OBJECT_DEEP(mod_consts.const_dict_7722afae97baf8b06dc92453c47bcb07);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_digest_a96c233b5ef36c3c43f26110349b2cd2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a96c233b5ef36c3c43f26110349b2cd2);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_dict_e0c3e9acd6cba7009bfa22e3a902a9db));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e0c3e9acd6cba7009bfa22e3a902a9db);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain_process_request_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_process_request_params);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_digest_bb9c93350ed9258f8b9dd34181ca95d8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bb9c93350ed9258f8b9dd34181ca95d8);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_tuple_9e80f4ce538d0417d538e530310b0f2e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9e80f4ce538d0417d538e530310b0f2e_tuple);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_dict_71c51b6e1b0b6e0ab53bd806dae73a6e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_71c51b6e1b0b6e0ab53bd806dae73a6e);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_plain_enable_server_permessage_deflate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_enable_server_permessage_deflate);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_digest_fabd41daac75e6322d02cd9d6d0d2e99));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fabd41daac75e6322d02cd9d6d0d2e99);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_tuple_5796900caa90a8a731cc807768852e5e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5796900caa90a8a731cc807768852e5e_tuple);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_tuple_1e5492d15980b40d9fbebb14be454b0d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1e5492d15980b40d9fbebb14be454b0d_tuple);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_tuple_d094636bbd27d37d4d4d56aca98d63c1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d094636bbd27d37d4d4d56aca98d63c1_tuple);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_digest_6dd7a8a72317698cc476047b124fdc89));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6dd7a8a72317698cc476047b124fdc89);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_tuple_76fd80f5f3d8c066197ae941ff7a1508_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_76fd80f5f3d8c066197ae941ff7a1508_tuple);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_tuple_eec6c3ca194ae4abe715b009137d77a3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_eec6c3ca194ae4abe715b009137d77a3_tuple);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_tuple_58f165cae785805ed5d4ef12c976da63_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_58f165cae785805ed5d4ef12c976da63_tuple);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_tuple_53d7af5b3fb10972d2b9da61018e9039_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_53d7af5b3fb10972d2b9da61018e9039_tuple);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_tuple_9516be38606a7bc0728d72014d3572d6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9516be38606a7bc0728d72014d3572d6_tuple);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_tuple_3ec763917f15ee511dab8935b8a4cb41_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_3ec763917f15ee511dab8935b8a4cb41_tuple);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_extensions_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_extensions_tuple);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_frame_str_plain_data_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_frame_str_plain_data_tuple);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_tuple_d81ec672e37b8ad81dfbde3eb022100a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d81ec672e37b8ad81dfbde3eb022100a_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 20
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
static PyObject *module_var_accessor_websockets$extensions$permessage_deflate$ClientExtensionFactory(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$extensions$permessage_deflate->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$extensions$permessage_deflate->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_ClientExtensionFactory);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$extensions$permessage_deflate->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ClientExtensionFactory);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ClientExtensionFactory, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ClientExtensionFactory);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ClientExtensionFactory, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_ClientExtensionFactory);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_ClientExtensionFactory);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ClientExtensionFactory);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$extensions$permessage_deflate$ClientPerMessageDeflateFactory(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$extensions$permessage_deflate->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$extensions$permessage_deflate->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_ClientPerMessageDeflateFactory);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$extensions$permessage_deflate->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ClientPerMessageDeflateFactory);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ClientPerMessageDeflateFactory, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ClientPerMessageDeflateFactory);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ClientPerMessageDeflateFactory, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_ClientPerMessageDeflateFactory);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_ClientPerMessageDeflateFactory);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ClientPerMessageDeflateFactory);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$extensions$permessage_deflate$DuplicateParameter(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$extensions$permessage_deflate->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$extensions$permessage_deflate->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_DuplicateParameter);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$extensions$permessage_deflate->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DuplicateParameter);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DuplicateParameter, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DuplicateParameter);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DuplicateParameter, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_DuplicateParameter);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_DuplicateParameter);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DuplicateParameter);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$extensions$permessage_deflate$Extension(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$extensions$permessage_deflate->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$extensions$permessage_deflate->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_Extension);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$extensions$permessage_deflate->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Extension);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Extension, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Extension);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Extension, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_Extension);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_Extension);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Extension);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$extensions$permessage_deflate$ExtensionName(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$extensions$permessage_deflate->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$extensions$permessage_deflate->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_ExtensionName);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$extensions$permessage_deflate->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ExtensionName);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ExtensionName, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ExtensionName);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ExtensionName, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_ExtensionName);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_ExtensionName);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ExtensionName);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$extensions$permessage_deflate$InvalidParameterName(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$extensions$permessage_deflate->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$extensions$permessage_deflate->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidParameterName);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$extensions$permessage_deflate->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InvalidParameterName);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InvalidParameterName, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InvalidParameterName);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InvalidParameterName, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidParameterName);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidParameterName);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidParameterName);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$extensions$permessage_deflate$InvalidParameterValue(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$extensions$permessage_deflate->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$extensions$permessage_deflate->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidParameterValue);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$extensions$permessage_deflate->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InvalidParameterValue);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InvalidParameterValue, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InvalidParameterValue);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InvalidParameterValue, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidParameterValue);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidParameterValue);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidParameterValue);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$extensions$permessage_deflate$NegotiationError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$extensions$permessage_deflate->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$extensions$permessage_deflate->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_NegotiationError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$extensions$permessage_deflate->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_NegotiationError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_NegotiationError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_NegotiationError);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$extensions$permessage_deflate$PayloadTooBig(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$extensions$permessage_deflate->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$extensions$permessage_deflate->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_PayloadTooBig);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$extensions$permessage_deflate->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_PayloadTooBig);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_PayloadTooBig);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PayloadTooBig);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$extensions$permessage_deflate$PerMessageDeflate(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$extensions$permessage_deflate->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$extensions$permessage_deflate->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_PerMessageDeflate);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$extensions$permessage_deflate->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PerMessageDeflate);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PerMessageDeflate, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PerMessageDeflate);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PerMessageDeflate, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_PerMessageDeflate);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_PerMessageDeflate);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PerMessageDeflate);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$extensions$permessage_deflate$ProtocolError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$extensions$permessage_deflate->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$extensions$permessage_deflate->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_ProtocolError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$extensions$permessage_deflate->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_ProtocolError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_ProtocolError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ProtocolError);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$extensions$permessage_deflate$ServerExtensionFactory(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$extensions$permessage_deflate->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$extensions$permessage_deflate->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_ServerExtensionFactory);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$extensions$permessage_deflate->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ServerExtensionFactory);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ServerExtensionFactory, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ServerExtensionFactory);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ServerExtensionFactory, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_ServerExtensionFactory);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_ServerExtensionFactory);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ServerExtensionFactory);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$extensions$permessage_deflate$ServerPerMessageDeflateFactory(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$extensions$permessage_deflate->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$extensions$permessage_deflate->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_ServerPerMessageDeflateFactory);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$extensions$permessage_deflate->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ServerPerMessageDeflateFactory);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ServerPerMessageDeflateFactory, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ServerPerMessageDeflateFactory);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ServerPerMessageDeflateFactory, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_ServerPerMessageDeflateFactory);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_ServerPerMessageDeflateFactory);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ServerPerMessageDeflateFactory);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$extensions$permessage_deflate$_EMPTY_UNCOMPRESSED_BLOCK(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$extensions$permessage_deflate->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$extensions$permessage_deflate->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain__EMPTY_UNCOMPRESSED_BLOCK);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$extensions$permessage_deflate->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__EMPTY_UNCOMPRESSED_BLOCK);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__EMPTY_UNCOMPRESSED_BLOCK, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__EMPTY_UNCOMPRESSED_BLOCK);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__EMPTY_UNCOMPRESSED_BLOCK, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain__EMPTY_UNCOMPRESSED_BLOCK);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain__EMPTY_UNCOMPRESSED_BLOCK);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__EMPTY_UNCOMPRESSED_BLOCK);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$extensions$permessage_deflate$_MAX_WINDOW_BITS_VALUES(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$extensions$permessage_deflate->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$extensions$permessage_deflate->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain__MAX_WINDOW_BITS_VALUES);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$extensions$permessage_deflate->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__MAX_WINDOW_BITS_VALUES);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__MAX_WINDOW_BITS_VALUES, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__MAX_WINDOW_BITS_VALUES);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__MAX_WINDOW_BITS_VALUES, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain__MAX_WINDOW_BITS_VALUES);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain__MAX_WINDOW_BITS_VALUES);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__MAX_WINDOW_BITS_VALUES);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$extensions$permessage_deflate$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$extensions$permessage_deflate->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$extensions$permessage_deflate->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$extensions$permessage_deflate->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$extensions$permessage_deflate$_build_parameters(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$extensions$permessage_deflate->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$extensions$permessage_deflate->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain__build_parameters);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$extensions$permessage_deflate->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__build_parameters);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__build_parameters, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__build_parameters);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__build_parameters, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain__build_parameters);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain__build_parameters);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__build_parameters);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$extensions$permessage_deflate$_extract_parameters(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$extensions$permessage_deflate->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$extensions$permessage_deflate->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain__extract_parameters);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$extensions$permessage_deflate->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__extract_parameters);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__extract_parameters, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__extract_parameters);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__extract_parameters, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain__extract_parameters);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain__extract_parameters);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__extract_parameters);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$extensions$permessage_deflate$frames(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$extensions$permessage_deflate->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$extensions$permessage_deflate->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_frames);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$extensions$permessage_deflate->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_frames);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_frames);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_frames);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$extensions$permessage_deflate$zlib(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$extensions$permessage_deflate->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$extensions$permessage_deflate->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_zlib);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$extensions$permessage_deflate->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_zlib);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_zlib, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_zlib);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_zlib, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_zlib);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_zlib);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_zlib);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_f3fdd95577b1dd0d59480570cabfd1d9;
static PyCodeObject *code_objects_8370eec31917d030f893ece8cfac8c78;
static PyCodeObject *code_objects_f775255cef5d73e2273f7fb655252f9e;
static PyCodeObject *code_objects_bf84ffe51af2ac44295188d169cc5f1e;
static PyCodeObject *code_objects_bcec8e8b4ec602481effe76f78ca15ab;
static PyCodeObject *code_objects_39e2135090366470df1cd48b5b6b0ced;
static PyCodeObject *code_objects_b622438608ec81a13add00746101db5a;
static PyCodeObject *code_objects_7b53e648ba8098f349d6b43238314ec0;
static PyCodeObject *code_objects_4ff587d22418f2aa1447a07428c2dc58;
static PyCodeObject *code_objects_40ca3c73ce2b8e05af9ba5724c7c1903;
static PyCodeObject *code_objects_cba6c20a3b2f5bd3d7efc4c38f88c3f9;
static PyCodeObject *code_objects_945de4cb1bdb5b3481801a71359a188a;
static PyCodeObject *code_objects_2479fe4a5ba4a2975da6087bc3cb29f1;
static PyCodeObject *code_objects_2c99e2c1f62d8e3c49ad7c181a50a2eb;
static PyCodeObject *code_objects_75cadeb27d44742cf732bcb3d63785d4;
static PyCodeObject *code_objects_5764f210c9da164945ca1e484ae6f060;
static PyCodeObject *code_objects_4a75ea5677c5033c47fc90e7517887e5;
static PyCodeObject *code_objects_ecde6adb0efd9761a5dadab724ff3be3;
static PyCodeObject *code_objects_d3b58d26f126fa487407f540bc4832d9;
static PyCodeObject *code_objects_936770eaee7c8967f2e804b6e561e74d;
static PyCodeObject *code_objects_2aeff945c1774c6d7b4967f388110c7a;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_fabd41daac75e6322d02cd9d6d0d2e99); CHECK_OBJECT(module_filename_obj);
code_objects_f3fdd95577b1dd0d59480570cabfd1d9 = MAKE_CODE_OBJECT(module_filename_obj, 379, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_7322af661785e5137e703f26f7c6ca8d, mod_consts.const_tuple_5796900caa90a8a731cc807768852e5e_tuple, NULL, 1, 0, 0);
code_objects_8370eec31917d030f893ece8cfac8c78 = MAKE_CODE_OBJECT(module_filename_obj, 573, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_b30ca9af6e0a6141cf34e68449b8fe39, mod_consts.const_tuple_5796900caa90a8a731cc807768852e5e_tuple, NULL, 1, 0, 0);
code_objects_f775255cef5d73e2273f7fb655252f9e = MAKE_CODE_OBJECT(module_filename_obj, 486, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_0e2440386ea78059d29f9dec48115d24, mod_consts.const_tuple_1e5492d15980b40d9fbebb14be454b0d_tuple, NULL, 1, 0, 0);
code_objects_bf84ffe51af2ac44295188d169cc5f1e = MAKE_CODE_OBJECT(module_filename_obj, 688, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_93f97c5f134a74c2003dd0c6ac295afd, mod_consts.const_tuple_d094636bbd27d37d4d4d56aca98d63c1_tuple, NULL, 1, 0, 0);
code_objects_bcec8e8b4ec602481effe76f78ca15ab = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_6dd7a8a72317698cc476047b124fdc89, mod_consts.const_str_digest_6dd7a8a72317698cc476047b124fdc89, NULL, NULL, 0, 0, 0);
code_objects_39e2135090366470df1cd48b5b6b0ced = MAKE_CODE_OBJECT(module_filename_obj, 298, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ClientPerMessageDeflateFactory, mod_consts.const_str_plain_ClientPerMessageDeflateFactory, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_b622438608ec81a13add00746101db5a = MAKE_CODE_OBJECT(module_filename_obj, 33, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_PerMessageDeflate, mod_consts.const_str_plain_PerMessageDeflate, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_7b53e648ba8098f349d6b43238314ec0 = MAKE_CODE_OBJECT(module_filename_obj, 498, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ServerPerMessageDeflateFactory, mod_consts.const_str_plain_ServerPerMessageDeflateFactory, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_4ff587d22418f2aa1447a07428c2dc58 = MAKE_CODE_OBJECT(module_filename_obj, 324, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_eabeb705064fe346caf790181fe28ca8, mod_consts.const_tuple_76fd80f5f3d8c066197ae941ff7a1508_tuple, NULL, 6, 0, 0);
code_objects_40ca3c73ce2b8e05af9ba5724c7c1903 = MAKE_CODE_OBJECT(module_filename_obj, 41, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_486293ccf10cfc6b8cb6758d320366c2, mod_consts.const_tuple_eec6c3ca194ae4abe715b009137d77a3_tuple, NULL, 6, 0, 0);
code_objects_cba6c20a3b2f5bd3d7efc4c38f88c3f9 = MAKE_CODE_OBJECT(module_filename_obj, 527, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_a96c233b5ef36c3c43f26110349b2cd2, mod_consts.const_tuple_58f165cae785805ed5d4ef12c976da63_tuple, NULL, 7, 0, 0);
code_objects_945de4cb1bdb5b3481801a71359a188a = MAKE_CODE_OBJECT(module_filename_obj, 83, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_bd9acee54ece92714b10ff0b173c640b, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_2479fe4a5ba4a2975da6087bc3cb29f1 = MAKE_CODE_OBJECT(module_filename_obj, 213, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__build_parameters, mod_consts.const_str_plain__build_parameters, mod_consts.const_tuple_53d7af5b3fb10972d2b9da61018e9039_tuple, NULL, 4, 0, 0);
code_objects_2c99e2c1f62d8e3c49ad7c181a50a2eb = MAKE_CODE_OBJECT(module_filename_obj, 237, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__extract_parameters, mod_consts.const_str_plain__extract_parameters, mod_consts.const_tuple_9516be38606a7bc0728d72014d3572d6_tuple, NULL, 1, 1, 0);
code_objects_75cadeb27d44742cf732bcb3d63785d4 = MAKE_CODE_OBJECT(module_filename_obj, 92, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_decode, mod_consts.const_str_digest_2d2f01567441eddc178b85bb5097d810, mod_consts.const_tuple_3ec763917f15ee511dab8935b8a4cb41_tuple, NULL, 2, 1, 0);
code_objects_5764f210c9da164945ca1e484ae6f060 = MAKE_CODE_OBJECT(module_filename_obj, 474, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_enable_client_permessage_deflate, mod_consts.const_str_plain_enable_client_permessage_deflate, mod_consts.const_tuple_str_plain_extensions_tuple, NULL, 1, 0, 0);
code_objects_4a75ea5677c5033c47fc90e7517887e5 = MAKE_CODE_OBJECT(module_filename_obj, 676, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_enable_server_permessage_deflate, mod_consts.const_str_plain_enable_server_permessage_deflate, mod_consts.const_tuple_str_plain_extensions_tuple, NULL, 1, 0, 0);
code_objects_ecde6adb0efd9761a5dadab724ff3be3 = MAKE_CODE_OBJECT(module_filename_obj, 165, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_encode, mod_consts.const_str_digest_dae140afa7a0e72e99ac249732b40639, mod_consts.const_tuple_str_plain_self_str_plain_frame_str_plain_data_tuple, NULL, 2, 0, 0);
code_objects_d3b58d26f126fa487407f540bc4832d9 = MAKE_CODE_OBJECT(module_filename_obj, 356, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_request_params, mod_consts.const_str_digest_3aa1e38b07e52b178e94011317e8e3ec, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_936770eaee7c8967f2e804b6e561e74d = MAKE_CODE_OBJECT(module_filename_obj, 562, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_process_request_params, mod_consts.const_str_digest_bb9c93350ed9258f8b9dd34181ca95d8, mod_consts.const_tuple_d81ec672e37b8ad81dfbde3eb022100a_tuple, NULL, 3, 0, 0);
code_objects_2aeff945c1774c6d7b4967f388110c7a = MAKE_CODE_OBJECT(module_filename_obj, 368, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_process_response_params, mod_consts.const_str_digest_a06e95cdb30fd0668a9cec405de48464, mod_consts.const_tuple_d81ec672e37b8ad81dfbde3eb022100a_tuple, NULL, 3, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_websockets$extensions$permessage_deflate$$$function__9_process_response_params$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_websockets$extensions$permessage_deflate$$$function__12_process_request_params$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_keywords_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__11___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__12_process_request_params(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__1___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__2___repr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__3_decode(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__4_encode(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__5__build_parameters(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__6__extract_parameters(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__7___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__8_get_request_params(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__9_process_response_params(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_websockets$extensions$permessage_deflate$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_remote_no_context_takeover = python_pars[1];
PyObject *par_local_no_context_takeover = python_pars[2];
PyObject *par_remote_max_window_bits = python_pars[3];
PyObject *par_local_max_window_bits = python_pars[4];
PyObject *par_compress_settings = python_pars[5];
PyObject *tmp_comparison_chain_1__comparison_result = NULL;
PyObject *tmp_comparison_chain_1__operand_2 = NULL;
PyObject *tmp_comparison_chain_2__comparison_result = NULL;
PyObject *tmp_comparison_chain_2__operand_2 = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$extensions$permessage_deflate$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$extensions$permessage_deflate$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_compress_settings);
tmp_cmp_expr_left_1 = par_compress_settings;
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
tmp_assign_source_1 = MAKE_DICT_EMPTY(tstate);
{
    PyObject *old = par_compress_settings;
    assert(old != NULL);
    par_compress_settings = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
// Tried code:
if (isFrameUnusable(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$extensions$permessage_deflate$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$extensions$permessage_deflate$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_40ca3c73ce2b8e05af9ba5724c7c1903, module_websockets$extensions$permessage_deflate, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__1___init__->m_type_description == NULL);
frame_frame_websockets$extensions$permessage_deflate$$$function__1___init__ = cache_frame_frame_websockets$extensions$permessage_deflate$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$extensions$permessage_deflate$$$function__1___init__);
assert(Py_REFCNT(frame_frame_websockets$extensions$permessage_deflate$$$function__1___init__) == 2);

// Framed code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_remote_no_context_takeover);
tmp_cmp_expr_left_2 = par_remote_no_context_takeover;
tmp_cmp_expr_right_2 = mod_consts.const_tuple_false_true_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "oooooo";
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
PyObject *tmp_raise_type_1;
frame_frame_websockets$extensions$permessage_deflate$$$function__1___init__->m_frame.f_lineno = 56;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 56;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_local_no_context_takeover);
tmp_cmp_expr_left_3 = par_local_no_context_takeover;
tmp_cmp_expr_right_3 = mod_consts.const_tuple_false_true_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "oooooo";
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
frame_frame_websockets$extensions$permessage_deflate$$$function__1___init__->m_frame.f_lineno = 57;
tmp_raise_type_2 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 57;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(par_remote_max_window_bits);
tmp_assign_source_2 = par_remote_max_window_bits;
assert(tmp_comparison_chain_1__operand_2 == NULL);
Py_INCREF(tmp_assign_source_2);
tmp_comparison_chain_1__operand_2 = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = mod_consts.const_int_pos_8;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_right_4 = tmp_comparison_chain_1__operand_2;
tmp_assign_source_3 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
assert(tmp_comparison_chain_1__comparison_result == NULL);
tmp_comparison_chain_1__comparison_result = tmp_assign_source_3;
}
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_2 = tmp_comparison_chain_1__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_condition_result_5 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_1 = tmp_comparison_chain_1__comparison_result;
Py_INCREF(tmp_operand_value_1);
goto try_return_handler_2;
branch_no_5:;
{
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_left_5 = tmp_comparison_chain_1__operand_2;
tmp_cmp_expr_right_5 = mod_consts.const_int_pos_15;
tmp_operand_value_1 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "oooooo";
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

CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
Py_DECREF(tmp_comparison_chain_1__operand_2);
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
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "oooooo";
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
frame_frame_websockets$extensions$permessage_deflate$$$function__1___init__->m_frame.f_lineno = 58;
tmp_raise_type_3 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 58;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto frame_exception_exit_1;
}
branch_no_4:;
{
bool tmp_condition_result_6;
PyObject *tmp_operand_value_3;
{
PyObject *tmp_assign_source_4;
CHECK_OBJECT(par_local_max_window_bits);
tmp_assign_source_4 = par_local_max_window_bits;
assert(tmp_comparison_chain_2__operand_2 == NULL);
Py_INCREF(tmp_assign_source_4);
tmp_comparison_chain_2__operand_2 = tmp_assign_source_4;
}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
tmp_cmp_expr_left_6 = mod_consts.const_int_pos_8;
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
tmp_cmp_expr_right_6 = tmp_comparison_chain_2__operand_2;
tmp_assign_source_5 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
assert(tmp_comparison_chain_2__comparison_result == NULL);
tmp_comparison_chain_2__comparison_result = tmp_assign_source_5;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_4;
CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
tmp_operand_value_4 = tmp_comparison_chain_2__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
tmp_condition_result_7 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
tmp_operand_value_3 = tmp_comparison_chain_2__comparison_result;
Py_INCREF(tmp_operand_value_3);
goto try_return_handler_3;
branch_no_7:;
{
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
tmp_cmp_expr_left_7 = tmp_comparison_chain_2__operand_2;
tmp_cmp_expr_right_7 = mod_consts.const_int_pos_15;
tmp_operand_value_3 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oooooo";
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

CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
Py_DECREF(tmp_comparison_chain_2__operand_2);
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
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_raise_type_4;
frame_frame_websockets$extensions$permessage_deflate$$$function__1___init__->m_frame.f_lineno = 59;
tmp_raise_type_4 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 59;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto frame_exception_exit_1;
}
branch_no_6:;
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
tmp_cmp_expr_left_8 = mod_consts.const_str_plain_wbits;
CHECK_OBJECT(par_compress_settings);
tmp_cmp_expr_right_8 = par_compress_settings;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_8, tmp_cmp_expr_left_8);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_raise_type_5;
frame_frame_websockets$extensions$permessage_deflate$$$function__1___init__->m_frame.f_lineno = 60;
tmp_raise_type_5 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 60;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto frame_exception_exit_1;
}
branch_no_8:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_remote_no_context_takeover);
tmp_assattr_value_1 = par_remote_no_context_takeover;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_remote_no_context_takeover, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_local_no_context_takeover);
tmp_assattr_value_2 = par_local_no_context_takeover;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_local_no_context_takeover, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_remote_max_window_bits);
tmp_assattr_value_3 = par_remote_max_window_bits;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_remote_max_window_bits, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_local_max_window_bits);
tmp_assattr_value_4 = par_local_max_window_bits;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_local_max_window_bits, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(par_compress_settings);
tmp_assattr_value_5 = par_compress_settings;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_compress_settings, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_9;
PyObject *tmp_operand_value_5;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_operand_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_remote_no_context_takeover);
if (tmp_operand_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
CHECK_OBJECT(tmp_operand_value_5);
Py_DECREF(tmp_operand_value_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_operand_value_6;
PyObject *tmp_expression_value_3;
PyObject *tmp_assattr_target_6;
tmp_expression_value_2 = module_var_accessor_websockets$extensions$permessage_deflate$zlib(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_zlib);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_decompressobj);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_operand_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_remote_max_window_bits);
if (tmp_operand_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 69;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_6);
CHECK_OBJECT(tmp_operand_value_6);
Py_DECREF(tmp_operand_value_6);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 69;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$extensions$permessage_deflate$$$function__1___init__->m_frame.f_lineno = 69;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_assattr_value_6 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_wbits_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_assattr_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain_decoder, tmp_assattr_value_6);
CHECK_OBJECT(tmp_assattr_value_6);
Py_DECREF(tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
branch_no_9:;
{
bool tmp_condition_result_10;
PyObject *tmp_operand_value_7;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_operand_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_local_no_context_takeover);
if (tmp_operand_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
CHECK_OBJECT(tmp_operand_value_7);
Py_DECREF(tmp_operand_value_7);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_10 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_operand_value_8;
PyObject *tmp_expression_value_6;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_assattr_target_7;
tmp_expression_value_5 = module_var_accessor_websockets$extensions$permessage_deflate$zlib(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_zlib);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 72;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_compressobj);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = mod_consts.const_str_plain_wbits;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_operand_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_local_max_window_bits);
if (tmp_operand_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg1_1);

exception_lineno = 73;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_dict_value_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_8);
CHECK_OBJECT(tmp_operand_value_8);
Py_DECREF(tmp_operand_value_8);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg1_1);

exception_lineno = 73;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg2_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_direct_call_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_direct_call_arg3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_compress_settings);
if (tmp_direct_call_arg3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg1_1);
Py_DECREF(tmp_direct_call_arg2_1);

exception_lineno = 74;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_assattr_value_7 = impl___main__$$$helper_function_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_assattr_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain_encoder, tmp_assattr_value_7);
CHECK_OBJECT(tmp_assattr_value_7);
Py_DECREF(tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
branch_no_10:;
{
PyObject *tmp_assattr_value_8;
PyObject *tmp_assattr_target_8;
tmp_assattr_value_8 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_8 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain_decode_cont_data, tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$extensions$permessage_deflate$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$extensions$permessage_deflate$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$extensions$permessage_deflate$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$extensions$permessage_deflate$$$function__1___init__,
    type_description_1,
    par_self,
    par_remote_no_context_takeover,
    par_local_no_context_takeover,
    par_remote_max_window_bits,
    par_local_max_window_bits,
    par_compress_settings
);


// Release cached frame if used for exception.
if (frame_frame_websockets$extensions$permessage_deflate$$$function__1___init__ == cache_frame_frame_websockets$extensions$permessage_deflate$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__1___init__);
    cache_frame_frame_websockets$extensions$permessage_deflate$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_websockets$extensions$permessage_deflate$$$function__1___init__);

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
CHECK_OBJECT(par_compress_settings);
CHECK_OBJECT(par_compress_settings);
Py_DECREF(par_compress_settings);
par_compress_settings = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_compress_settings);
CHECK_OBJECT(par_compress_settings);
Py_DECREF(par_compress_settings);
par_compress_settings = NULL;
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
CHECK_OBJECT(par_remote_no_context_takeover);
Py_DECREF(par_remote_no_context_takeover);
CHECK_OBJECT(par_local_no_context_takeover);
Py_DECREF(par_local_no_context_takeover);
CHECK_OBJECT(par_remote_max_window_bits);
Py_DECREF(par_remote_max_window_bits);
CHECK_OBJECT(par_local_max_window_bits);
Py_DECREF(par_local_max_window_bits);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_remote_no_context_takeover);
Py_DECREF(par_remote_no_context_takeover);
CHECK_OBJECT(par_local_no_context_takeover);
Py_DECREF(par_local_no_context_takeover);
CHECK_OBJECT(par_remote_max_window_bits);
Py_DECREF(par_remote_max_window_bits);
CHECK_OBJECT(par_local_max_window_bits);
Py_DECREF(par_local_max_window_bits);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_websockets$extensions$permessage_deflate$$$function__2___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_websockets$extensions$permessage_deflate$$$function__2___repr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$extensions$permessage_deflate$$$function__2___repr__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__2___repr__)) {
    Py_XDECREF(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__2___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$extensions$permessage_deflate$$$function__2___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$extensions$permessage_deflate$$$function__2___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_945de4cb1bdb5b3481801a71359a188a, module_websockets$extensions$permessage_deflate, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__2___repr__->m_type_description == NULL);
frame_frame_websockets$extensions$permessage_deflate$$$function__2___repr__ = cache_frame_frame_websockets$extensions$permessage_deflate$$$function__2___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$extensions$permessage_deflate$$$function__2___repr__);
assert(Py_REFCNT(frame_frame_websockets$extensions$permessage_deflate$$$function__2___repr__) == 2);

// Framed code:
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_98b489f182306c00dedcf803bb1d6fef;
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
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_remote_no_context_takeover);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
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


exception_lineno = 86;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_249ab79ba1ad79f562470660f4e32319;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_local_no_context_takeover);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
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


exception_lineno = 87;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_e2ab18791b6596c6038f88b74b4704b4;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_remote_max_window_bits);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
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


exception_lineno = 88;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_e980e65240554dbcb0ab0b9b8310370f;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 6, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_format_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_local_max_window_bits);
if (tmp_format_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
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


exception_lineno = 89;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$extensions$permessage_deflate$$$function__2___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$extensions$permessage_deflate$$$function__2___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$extensions$permessage_deflate$$$function__2___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$extensions$permessage_deflate$$$function__2___repr__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_websockets$extensions$permessage_deflate$$$function__2___repr__ == cache_frame_frame_websockets$extensions$permessage_deflate$$$function__2___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__2___repr__);
    cache_frame_frame_websockets$extensions$permessage_deflate$$$function__2___repr__ = NULL;
}

assertFrameObject(frame_frame_websockets$extensions$permessage_deflate$$$function__2___repr__);

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


static PyObject *impl_websockets$extensions$permessage_deflate$$$function__3_decode(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_frame = python_pars[1];
PyObject *par_max_size = python_pars[2];
PyObject *var_data = NULL;
PyObject *var_max_length = NULL;
PyObject *var_exc = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$extensions$permessage_deflate$$$function__3_decode;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$extensions$permessage_deflate$$$function__3_decode = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__3_decode)) {
    Py_XDECREF(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__3_decode);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$extensions$permessage_deflate$$$function__3_decode == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$extensions$permessage_deflate$$$function__3_decode = MAKE_FUNCTION_FRAME(tstate, code_objects_75cadeb27d44742cf732bcb3d63785d4, module_websockets$extensions$permessage_deflate, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__3_decode->m_type_description == NULL);
frame_frame_websockets$extensions$permessage_deflate$$$function__3_decode = cache_frame_frame_websockets$extensions$permessage_deflate$$$function__3_decode;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$extensions$permessage_deflate$$$function__3_decode);
assert(Py_REFCNT(frame_frame_websockets$extensions$permessage_deflate$$$function__3_decode) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_frame);
tmp_expression_value_1 = par_frame;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_opcode);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_websockets$extensions$permessage_deflate$frames(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_frames);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 103;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_CTRL_OPCODES);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 103;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "oooooo";
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
CHECK_OBJECT(par_frame);
tmp_return_value = par_frame;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_frame);
tmp_expression_value_3 = par_frame;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_opcode);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = module_var_accessor_websockets$extensions$permessage_deflate$frames(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_frames);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 109;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_OP_CONT);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 109;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_decode_cont_data);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "oooooo";
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
CHECK_OBJECT(par_frame);
tmp_return_value = par_frame;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_frame);
tmp_expression_value_6 = par_frame;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_fin);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 112;
type_description_1 = "oooooo";
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
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_decode_cont_data, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
branch_no_4:;
goto branch_end_2;
branch_no_2:;
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_frame);
tmp_expression_value_7 = par_frame;
tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_rsv1);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oooooo";
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
CHECK_OBJECT(par_frame);
tmp_return_value = par_frame;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_5:;
{
bool tmp_condition_result_6;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(par_frame);
tmp_expression_value_8 = par_frame;
tmp_operand_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_fin);
if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = Py_True;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_decode_cont_data, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
branch_no_6:;
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_expression_value_9;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_remote_no_context_takeover);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 126;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
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
PyObject *tmp_assattr_value_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_11;
PyObject *tmp_assattr_target_3;
tmp_expression_value_10 = module_var_accessor_websockets$extensions$permessage_deflate$zlib(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_zlib);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_decompressobj);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_operand_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_remote_max_window_bits);
if (tmp_operand_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 127;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_4);
CHECK_OBJECT(tmp_operand_value_4);
Py_DECREF(tmp_operand_value_4);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 127;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$extensions$permessage_deflate$$$function__3_decode->m_frame.f_lineno = 127;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_assattr_value_3 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_wbits_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_decoder, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
branch_no_7:;
branch_end_2:;
{
nuitka_bool tmp_condition_result_8;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_12;
PyObject *tmp_attribute_value_3;
int tmp_truth_name_3;
PyObject *tmp_cmp_expr_left_3;
nuitka_digit tmp_cmp_expr_right_3;
PyObject *tmp_len_arg_1;
PyObject *tmp_expression_value_13;
bool tmp_tmp_and_right_value_1_cbool_1;
CHECK_OBJECT(par_frame);
tmp_expression_value_12 = par_frame;
tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_fin);
if (tmp_attribute_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_3);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_3);

exception_lineno = 133;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_3);
Py_DECREF(tmp_attribute_value_3);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_frame);
tmp_expression_value_13 = par_frame;
tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_data);
if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_3 = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = 2044;
tmp_tmp_and_right_value_1_cbool_1 = RICH_COMPARE_LT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
tmp_and_right_value_1 = tmp_tmp_and_right_value_1_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_8 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_8 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_bytes_arg_1;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(par_frame);
tmp_expression_value_14 = par_frame;
tmp_bytes_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_data);
if (tmp_bytes_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_1 = BUILTIN_BYTES1(tstate, tmp_bytes_arg_1);
CHECK_OBJECT(tmp_bytes_arg_1);
Py_DECREF(tmp_bytes_arg_1);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = module_var_accessor_websockets$extensions$permessage_deflate$_EMPTY_UNCOMPRESSED_BLOCK(tstate);
if (unlikely(tmp_add_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__EMPTY_UNCOMPRESSED_BLOCK);
}

if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 136;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_data == NULL);
var_data = tmp_assign_source_1;
}
goto branch_end_8;
branch_no_8:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(par_frame);
tmp_expression_value_15 = par_frame;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_data);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_data == NULL);
var_data = tmp_assign_source_2;
}
branch_end_8:;
{
PyObject *tmp_assign_source_3;
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(par_max_size);
tmp_cmp_expr_left_4 = par_max_size;
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_9 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_9 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_assign_source_3 = const_int_0;
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(par_max_size);
tmp_assign_source_3 = par_max_size;
condexpr_end_1:;
assert(var_max_length == NULL);
Py_INCREF(tmp_assign_source_3);
var_max_length = tmp_assign_source_3;
}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_16 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_decoder);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_data);
tmp_args_element_value_1 = var_data;
CHECK_OBJECT(var_max_length);
tmp_args_element_value_2 = var_max_length;
frame_frame_websockets$extensions$permessage_deflate$$$function__3_decode->m_frame.f_lineno = 141;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_4 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_decompress,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_data;
    assert(old != NULL);
    var_data = tmp_assign_source_4;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_10;
PyObject *tmp_expression_value_17;
PyObject *tmp_expression_value_18;
PyObject *tmp_attribute_value_4;
int tmp_truth_name_4;
CHECK_OBJECT(par_self);
tmp_expression_value_18 = par_self;
tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_decoder);
if (tmp_expression_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_attribute_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_unconsumed_tail);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_attribute_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_attribute_value_4);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_4);

exception_lineno = 142;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_condition_result_10 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_4);
Py_DECREF(tmp_attribute_value_4);
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(par_max_size);
tmp_cmp_expr_left_5 = par_max_size;
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_11 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_raise_type_1;
frame_frame_websockets$extensions$permessage_deflate$$$function__3_decode->m_frame.f_lineno = 143;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 143;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto try_except_handler_2;
}
branch_no_10:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_2 = module_var_accessor_websockets$extensions$permessage_deflate$PayloadTooBig(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PayloadTooBig);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 144;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_3 = Py_None;
CHECK_OBJECT(par_max_size);
tmp_args_element_value_4 = par_max_size;
frame_frame_websockets$extensions$permessage_deflate$$$function__3_decode->m_frame.f_lineno = 144;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_raise_type_input_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 144;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto try_except_handler_2;
}
branch_no_9:;
{
nuitka_bool tmp_condition_result_12;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_expression_value_19;
PyObject *tmp_attribute_value_5;
int tmp_truth_name_5;
PyObject *tmp_cmp_expr_left_6;
nuitka_digit tmp_cmp_expr_right_6;
PyObject *tmp_len_arg_2;
PyObject *tmp_expression_value_20;
bool tmp_tmp_and_right_value_2_cbool_1;
CHECK_OBJECT(par_frame);
tmp_expression_value_19 = par_frame;
tmp_attribute_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_fin);
if (tmp_attribute_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_attribute_value_5);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_5);

exception_lineno = 145;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_and_left_value_2 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_5);
Py_DECREF(tmp_attribute_value_5);
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_frame);
tmp_expression_value_20 = par_frame;
tmp_len_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_data);
if (tmp_len_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_left_6 = BUILTIN_LEN(tstate, tmp_len_arg_2);
CHECK_OBJECT(tmp_len_arg_2);
Py_DECREF(tmp_len_arg_2);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_6 = 2044;
tmp_tmp_and_right_value_2_cbool_1 = RICH_COMPARE_GE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
tmp_and_right_value_2 = tmp_tmp_and_right_value_2_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_12 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_12 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_21;
PyObject *tmp_expression_value_22;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_22 = par_self;
tmp_expression_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_decoder);
if (tmp_expression_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_decompress);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_5 = module_var_accessor_websockets$extensions$permessage_deflate$_EMPTY_UNCOMPRESSED_BLOCK(tstate);
if (unlikely(tmp_args_element_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__EMPTY_UNCOMPRESSED_BLOCK);
}

if (tmp_args_element_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 147;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
frame_frame_websockets$extensions$permessage_deflate$$$function__3_decode->m_frame.f_lineno = 147;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_11:;
goto try_end_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$extensions$permessage_deflate$$$function__3_decode, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$extensions$permessage_deflate$$$function__3_decode, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_expression_value_23;
tmp_cmp_expr_left_7 = EXC_TYPE(tstate);
tmp_expression_value_23 = module_var_accessor_websockets$extensions$permessage_deflate$zlib(tstate);
if (unlikely(tmp_expression_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_zlib);
}

if (tmp_expression_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 148;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
tmp_cmp_expr_right_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_error);
if (tmp_cmp_expr_right_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
CHECK_OBJECT(tmp_cmp_expr_right_7);
Py_DECREF(tmp_cmp_expr_right_7);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
tmp_condition_result_13 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_13 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_5); 
assert(var_exc == NULL);
Py_INCREF(tmp_assign_source_5);
var_exc = tmp_assign_source_5;
}
// Tried code:
{
PyObject *tmp_raise_type_3;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_4;
PyObject *tmp_raise_cause_1;
tmp_called_value_4 = module_var_accessor_websockets$extensions$permessage_deflate$ProtocolError(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ProtocolError);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 149;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
frame_frame_websockets$extensions$permessage_deflate$$$function__3_decode->m_frame.f_lineno = 149;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_digest_92203632173c30415ca8c31a3b845b9d_tuple);

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_exc);
tmp_raise_cause_1 = var_exc;
exception_state.exception_value = tmp_raise_type_3;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 149;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "oooooo";
goto try_except_handler_4;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
goto branch_end_12;
branch_no_12:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 140;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_websockets$extensions$permessage_deflate$$$function__3_decode->m_frame)) {
        frame_frame_websockets$extensions$permessage_deflate$$$function__3_decode->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooo";
goto try_except_handler_3;
branch_end_12:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
// End of try:
try_end_1:;
{
nuitka_bool tmp_condition_result_14;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
PyObject *tmp_expression_value_24;
PyObject *tmp_attribute_value_6;
int tmp_truth_name_6;
PyObject *tmp_expression_value_25;
PyObject *tmp_attribute_value_7;
int tmp_truth_name_7;
CHECK_OBJECT(par_frame);
tmp_expression_value_24 = par_frame;
tmp_attribute_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_fin);
if (tmp_attribute_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_attribute_value_6);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_6);

exception_lineno = 152;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_3 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_6);
Py_DECREF(tmp_attribute_value_6);
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(par_self);
tmp_expression_value_25 = par_self;
tmp_attribute_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_remote_no_context_takeover);
if (tmp_attribute_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_7 = CHECK_IF_TRUE(tmp_attribute_value_7);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_7);

exception_lineno = 152;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_3 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_7);
Py_DECREF(tmp_attribute_value_7);
tmp_condition_result_14 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_condition_result_14 = tmp_and_left_value_3;
and_end_3:;
if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_attrdel_target_1;
CHECK_OBJECT(par_self);
tmp_attrdel_target_1 = par_self;
tmp_res = PyObject_DelAttr(tmp_attrdel_target_1, mod_consts.const_str_plain_decoder);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
branch_no_13:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_26;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_27;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_28;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_expression_value_29;
PyObject *tmp_args_element_value_11;
PyObject *tmp_expression_value_30;
tmp_expression_value_26 = module_var_accessor_websockets$extensions$permessage_deflate$frames(tstate);
if (unlikely(tmp_expression_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_frames);
}

if (tmp_expression_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 155;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_Frame);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_frame);
tmp_expression_value_27 = par_frame;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_opcode);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 156;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_data);
tmp_args_element_value_7 = var_data;
CHECK_OBJECT(par_frame);
tmp_expression_value_28 = par_frame;
tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_fin);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_args_element_value_6);

exception_lineno = 158;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_9 = Py_False;
CHECK_OBJECT(par_frame);
tmp_expression_value_29 = par_frame;
tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_rsv2);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_8);

exception_lineno = 161;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_frame);
tmp_expression_value_30 = par_frame;
tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_rsv3);
if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_10);

exception_lineno = 162;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$extensions$permessage_deflate$$$function__3_decode->m_frame.f_lineno = 155;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$extensions$permessage_deflate$$$function__3_decode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$extensions$permessage_deflate$$$function__3_decode->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$extensions$permessage_deflate$$$function__3_decode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$extensions$permessage_deflate$$$function__3_decode,
    type_description_1,
    par_self,
    par_frame,
    par_max_size,
    var_data,
    var_max_length,
    var_exc
);


// Release cached frame if used for exception.
if (frame_frame_websockets$extensions$permessage_deflate$$$function__3_decode == cache_frame_frame_websockets$extensions$permessage_deflate$$$function__3_decode) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__3_decode);
    cache_frame_frame_websockets$extensions$permessage_deflate$$$function__3_decode = NULL;
}

assertFrameObject(frame_frame_websockets$extensions$permessage_deflate$$$function__3_decode);

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
Py_XDECREF(var_max_length);
var_max_length = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_data);
var_data = NULL;
Py_XDECREF(var_max_length);
var_max_length = NULL;
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
CHECK_OBJECT(par_frame);
Py_DECREF(par_frame);
CHECK_OBJECT(par_max_size);
Py_DECREF(par_max_size);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_frame);
Py_DECREF(par_frame);
CHECK_OBJECT(par_max_size);
Py_DECREF(par_max_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_websockets$extensions$permessage_deflate$$$function__4_encode(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_frame = python_pars[1];
PyObject *var_data = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$extensions$permessage_deflate$$$function__4_encode;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$extensions$permessage_deflate$$$function__4_encode = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__4_encode)) {
    Py_XDECREF(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__4_encode);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$extensions$permessage_deflate$$$function__4_encode == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$extensions$permessage_deflate$$$function__4_encode = MAKE_FUNCTION_FRAME(tstate, code_objects_ecde6adb0efd9761a5dadab724ff3be3, module_websockets$extensions$permessage_deflate, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__4_encode->m_type_description == NULL);
frame_frame_websockets$extensions$permessage_deflate$$$function__4_encode = cache_frame_frame_websockets$extensions$permessage_deflate$$$function__4_encode;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$extensions$permessage_deflate$$$function__4_encode);
assert(Py_REFCNT(frame_frame_websockets$extensions$permessage_deflate$$$function__4_encode) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_frame);
tmp_expression_value_1 = par_frame;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_opcode);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_websockets$extensions$permessage_deflate$frames(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_frames);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 171;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_CTRL_OPCODES);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 171;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "ooo";
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
CHECK_OBJECT(par_frame);
tmp_return_value = par_frame;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_frame);
tmp_expression_value_3 = par_frame;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_opcode);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = module_var_accessor_websockets$extensions$permessage_deflate$frames(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_frames);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 177;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_OP_CONT);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 177;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_local_no_context_takeover);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 179;
type_description_1 = "ooo";
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
PyObject *tmp_assattr_value_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_assattr_target_1;
tmp_expression_value_6 = module_var_accessor_websockets$extensions$permessage_deflate$zlib(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_zlib);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 180;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_compressobj);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = mod_consts.const_str_plain_wbits;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_local_max_window_bits);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg1_1);

exception_lineno = 181;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_dict_value_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg1_1);

exception_lineno = 181;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg2_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_direct_call_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_direct_call_arg3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_compress_settings);
if (tmp_direct_call_arg3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg1_1);
Py_DECREF(tmp_direct_call_arg2_1);

exception_lineno = 182;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_assattr_value_1 = impl___main__$$$helper_function_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_encoder, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
branch_no_3:;
branch_no_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_encoder);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_compress);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_frame);
tmp_expression_value_11 = par_frame;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_data);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 187;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$extensions$permessage_deflate$$$function__4_encode->m_frame.f_lineno = 187;
tmp_add_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_13 = par_self;
tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_encoder);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 187;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_flush);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 187;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_14 = module_var_accessor_websockets$extensions$permessage_deflate$zlib(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_zlib);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_add_expr_left_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 187;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_Z_SYNC_FLUSH);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 187;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$extensions$permessage_deflate$$$function__4_encode->m_frame.f_lineno = 187;
tmp_add_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 187;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_data == NULL);
var_data = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_expression_value_15;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_frame);
tmp_expression_value_15 = par_frame;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_fin);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 188;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_data);
tmp_expression_value_16 = var_data;
tmp_subscript_value_1 = mod_consts.const_slice_int_neg_4_none_none;
tmp_cmp_expr_left_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_1);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = module_var_accessor_websockets$extensions$permessage_deflate$_EMPTY_UNCOMPRESSED_BLOCK(tstate);
if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__EMPTY_UNCOMPRESSED_BLOCK);
}

if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 191;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_2 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooo";
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
PyObject *tmp_raise_type_1;
frame_frame_websockets$extensions$permessage_deflate$$$function__4_encode->m_frame.f_lineno = 191;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 191;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_5:;
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_4;
nuitka_digit tmp_cmp_expr_right_4;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(var_data);
tmp_len_arg_1 = var_data;
tmp_cmp_expr_left_4 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = 2048;
tmp_condition_result_6 = RICH_COMPARE_LT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_data);
tmp_expression_value_17 = var_data;
tmp_subscript_value_2 = mod_consts.const_slice_none_int_neg_4_none;
tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_data;
    assert(old != NULL);
    var_data = tmp_assign_source_2;
    Py_DECREF(old);
}

}
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_18;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_subscript_value_3;
tmp_called_value_3 = (PyObject *)&PyMemoryView_Type;
CHECK_OBJECT(var_data);
tmp_args_element_value_3 = var_data;
frame_frame_websockets$extensions$permessage_deflate$$$function__4_encode->m_frame.f_lineno = 196;
tmp_expression_value_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
if (tmp_expression_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_3 = mod_consts.const_slice_none_int_neg_4_none;
tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_data;
    assert(old != NULL);
    var_data = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_end_6:;
branch_no_4:;
{
nuitka_bool tmp_condition_result_7;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_19;
PyObject *tmp_attribute_value_3;
int tmp_truth_name_3;
PyObject *tmp_expression_value_20;
PyObject *tmp_attribute_value_4;
int tmp_truth_name_4;
CHECK_OBJECT(par_frame);
tmp_expression_value_19 = par_frame;
tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_fin);
if (tmp_attribute_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_3);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_3);

exception_lineno = 199;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_3);
Py_DECREF(tmp_attribute_value_3);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_20 = par_self;
tmp_attribute_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_local_no_context_takeover);
if (tmp_attribute_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_attribute_value_4);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_4);

exception_lineno = 199;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_4);
Py_DECREF(tmp_attribute_value_4);
tmp_condition_result_7 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_7 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_attrdel_target_1;
CHECK_OBJECT(par_self);
tmp_attrdel_target_1 = par_self;
tmp_res = PyObject_DelAttr(tmp_attrdel_target_1, mod_consts.const_str_plain_encoder);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
branch_no_7:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_21;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_22;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_23;
PyObject *tmp_args_element_value_7;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_24;
PyObject *tmp_expression_value_25;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_26;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_27;
tmp_expression_value_21 = module_var_accessor_websockets$extensions$permessage_deflate$frames(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_frames);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 202;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_Frame);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_frame);
tmp_expression_value_22 = par_frame;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_opcode);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 203;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_data);
tmp_args_element_value_5 = var_data;
CHECK_OBJECT(par_frame);
tmp_expression_value_23 = par_frame;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_fin);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 205;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_frame);
tmp_expression_value_24 = par_frame;
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_opcode);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_6);

exception_lineno = 207;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_25 = module_var_accessor_websockets$extensions$permessage_deflate$frames(tstate);
if (unlikely(tmp_expression_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_frames);
}

if (tmp_expression_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_6);
Py_DECREF(tmp_cmp_expr_left_5);

exception_lineno = 207;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_OP_CONT);
if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_6);
Py_DECREF(tmp_cmp_expr_left_5);

exception_lineno = 207;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_7 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? Py_True : Py_False;
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
CHECK_OBJECT(tmp_cmp_expr_right_5);
Py_DECREF(tmp_cmp_expr_right_5);
CHECK_OBJECT(par_frame);
tmp_expression_value_26 = par_frame;
tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_rsv2);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_6);

exception_lineno = 208;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_frame);
tmp_expression_value_27 = par_frame;
tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_rsv3);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_8);

exception_lineno = 209;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$extensions$permessage_deflate$$$function__4_encode->m_frame.f_lineno = 202;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$extensions$permessage_deflate$$$function__4_encode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$extensions$permessage_deflate$$$function__4_encode->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$extensions$permessage_deflate$$$function__4_encode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$extensions$permessage_deflate$$$function__4_encode,
    type_description_1,
    par_self,
    par_frame,
    var_data
);


// Release cached frame if used for exception.
if (frame_frame_websockets$extensions$permessage_deflate$$$function__4_encode == cache_frame_frame_websockets$extensions$permessage_deflate$$$function__4_encode) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__4_encode);
    cache_frame_frame_websockets$extensions$permessage_deflate$$$function__4_encode = NULL;
}

assertFrameObject(frame_frame_websockets$extensions$permessage_deflate$$$function__4_encode);

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


static PyObject *impl_websockets$extensions$permessage_deflate$$$function__5__build_parameters(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_server_no_context_takeover = python_pars[0];
PyObject *par_client_no_context_takeover = python_pars[1];
PyObject *par_server_max_window_bits = python_pars[2];
PyObject *par_client_max_window_bits = python_pars[3];
PyObject *var_params = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$extensions$permessage_deflate$$$function__5__build_parameters;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$extensions$permessage_deflate$$$function__5__build_parameters = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_params == NULL);
var_params = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__5__build_parameters)) {
    Py_XDECREF(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__5__build_parameters);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$extensions$permessage_deflate$$$function__5__build_parameters == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$extensions$permessage_deflate$$$function__5__build_parameters = MAKE_FUNCTION_FRAME(tstate, code_objects_2479fe4a5ba4a2975da6087bc3cb29f1, module_websockets$extensions$permessage_deflate, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__5__build_parameters->m_type_description == NULL);
frame_frame_websockets$extensions$permessage_deflate$$$function__5__build_parameters = cache_frame_frame_websockets$extensions$permessage_deflate$$$function__5__build_parameters;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$extensions$permessage_deflate$$$function__5__build_parameters);
assert(Py_REFCNT(frame_frame_websockets$extensions$permessage_deflate$$$function__5__build_parameters) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_server_no_context_takeover);
tmp_truth_name_1 = CHECK_IF_TRUE(par_server_no_context_takeover);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "ooooo";
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
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
CHECK_OBJECT(var_params);
tmp_list_arg_value_1 = var_params;
tmp_item_value_1 = mod_consts.const_tuple_str_plain_server_no_context_takeover_none_tuple;
tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_client_no_context_takeover);
tmp_truth_name_2 = CHECK_IF_TRUE(par_client_no_context_takeover);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "ooooo";
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
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_2;
CHECK_OBJECT(var_params);
tmp_list_arg_value_2 = var_params;
tmp_item_value_2 = mod_consts.const_tuple_str_plain_client_no_context_takeover_none_tuple;
tmp_result = LIST_APPEND0(tmp_list_arg_value_2, tmp_item_value_2);
assert(!(tmp_result == false));
}
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_3;
CHECK_OBJECT(par_server_max_window_bits);
tmp_truth_name_3 = CHECK_IF_TRUE(par_server_max_window_bits);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_list_arg_value_3;
PyObject *tmp_item_value_3;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_params);
tmp_list_arg_value_3 = var_params;
tmp_tuple_element_1 = mod_consts.const_str_plain_server_max_window_bits;
tmp_item_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_unicode_arg_1;
PyTuple_SET_ITEM0(tmp_item_value_3, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_server_max_window_bits);
tmp_unicode_arg_1 = par_server_max_window_bits;
tmp_tuple_element_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_item_value_3, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_item_value_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_result = LIST_APPEND1(tmp_list_arg_value_3, tmp_item_value_3);
assert(!(tmp_result == false));
}
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_client_max_window_bits);
tmp_cmp_expr_left_1 = par_client_max_window_bits;
tmp_cmp_expr_right_1 = Py_True;
tmp_condition_result_4 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_list_arg_value_4;
PyObject *tmp_item_value_4;
CHECK_OBJECT(var_params);
tmp_list_arg_value_4 = var_params;
tmp_item_value_4 = mod_consts.const_tuple_str_plain_client_max_window_bits_none_tuple;
tmp_result = LIST_APPEND0(tmp_list_arg_value_4, tmp_item_value_4);
assert(!(tmp_result == false));
}
goto branch_end_4;
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_4;
CHECK_OBJECT(par_client_max_window_bits);
tmp_truth_name_4 = CHECK_IF_TRUE(par_client_max_window_bits);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_list_arg_value_5;
PyObject *tmp_item_value_5;
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(var_params);
tmp_list_arg_value_5 = var_params;
tmp_tuple_element_2 = mod_consts.const_str_plain_client_max_window_bits;
tmp_item_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_unicode_arg_2;
PyTuple_SET_ITEM0(tmp_item_value_5, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_client_max_window_bits);
tmp_unicode_arg_2 = par_client_max_window_bits;
tmp_tuple_element_2 = BUILTIN_UNICODE1(tmp_unicode_arg_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "ooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_item_value_5, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_item_value_5);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_result = LIST_APPEND1(tmp_list_arg_value_5, tmp_item_value_5);
assert(!(tmp_result == false));
}
branch_no_5:;
branch_end_4:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$extensions$permessage_deflate$$$function__5__build_parameters, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$extensions$permessage_deflate$$$function__5__build_parameters->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$extensions$permessage_deflate$$$function__5__build_parameters, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$extensions$permessage_deflate$$$function__5__build_parameters,
    type_description_1,
    par_server_no_context_takeover,
    par_client_no_context_takeover,
    par_server_max_window_bits,
    par_client_max_window_bits,
    var_params
);


// Release cached frame if used for exception.
if (frame_frame_websockets$extensions$permessage_deflate$$$function__5__build_parameters == cache_frame_frame_websockets$extensions$permessage_deflate$$$function__5__build_parameters) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__5__build_parameters);
    cache_frame_frame_websockets$extensions$permessage_deflate$$$function__5__build_parameters = NULL;
}

assertFrameObject(frame_frame_websockets$extensions$permessage_deflate$$$function__5__build_parameters);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_params);
tmp_return_value = var_params;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_params);
CHECK_OBJECT(var_params);
Py_DECREF(var_params);
var_params = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_params);
CHECK_OBJECT(var_params);
Py_DECREF(var_params);
var_params = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_server_no_context_takeover);
Py_DECREF(par_server_no_context_takeover);
CHECK_OBJECT(par_client_no_context_takeover);
Py_DECREF(par_client_no_context_takeover);
CHECK_OBJECT(par_server_max_window_bits);
Py_DECREF(par_server_max_window_bits);
CHECK_OBJECT(par_client_max_window_bits);
Py_DECREF(par_client_max_window_bits);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_server_no_context_takeover);
Py_DECREF(par_server_no_context_takeover);
CHECK_OBJECT(par_client_no_context_takeover);
Py_DECREF(par_client_no_context_takeover);
CHECK_OBJECT(par_server_max_window_bits);
Py_DECREF(par_server_max_window_bits);
CHECK_OBJECT(par_client_max_window_bits);
Py_DECREF(par_client_max_window_bits);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_websockets$extensions$permessage_deflate$$$function__6__extract_parameters(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_params = python_pars[0];
PyObject *par_is_server = python_pars[1];
PyObject *var_server_no_context_takeover = NULL;
PyObject *var_client_no_context_takeover = NULL;
PyObject *var_server_max_window_bits = NULL;
PyObject *var_client_max_window_bits = NULL;
PyObject *var_name = NULL;
PyObject *var_value = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$extensions$permessage_deflate$$$function__6__extract_parameters;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$extensions$permessage_deflate$$$function__6__extract_parameters = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_False;
assert(var_server_no_context_takeover == NULL);
Py_INCREF(tmp_assign_source_1);
var_server_no_context_takeover = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = Py_False;
assert(var_client_no_context_takeover == NULL);
Py_INCREF(tmp_assign_source_2);
var_client_no_context_takeover = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = Py_None;
assert(var_server_max_window_bits == NULL);
Py_INCREF(tmp_assign_source_3);
var_server_max_window_bits = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Py_None;
assert(var_client_max_window_bits == NULL);
Py_INCREF(tmp_assign_source_4);
var_client_max_window_bits = tmp_assign_source_4;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__6__extract_parameters)) {
    Py_XDECREF(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__6__extract_parameters);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$extensions$permessage_deflate$$$function__6__extract_parameters == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$extensions$permessage_deflate$$$function__6__extract_parameters = MAKE_FUNCTION_FRAME(tstate, code_objects_2c99e2c1f62d8e3c49ad7c181a50a2eb, module_websockets$extensions$permessage_deflate, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__6__extract_parameters->m_type_description == NULL);
frame_frame_websockets$extensions$permessage_deflate$$$function__6__extract_parameters = cache_frame_frame_websockets$extensions$permessage_deflate$$$function__6__extract_parameters;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$extensions$permessage_deflate$$$function__6__extract_parameters);
assert(Py_REFCNT(frame_frame_websockets$extensions$permessage_deflate$$$function__6__extract_parameters) == 2);

// Framed code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_params);
tmp_iter_arg_1 = par_params;
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_5;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_6 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooo";
exception_lineno = 252;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
tmp_assign_source_7 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 252;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_9 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 252;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
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



exception_lineno = 252;
type_description_1 = "oooooooo";
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
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_10 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_name;
    var_name = tmp_assign_source_10;
    Py_INCREF(var_name);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_value;
    var_value = tmp_assign_source_11;
    Py_INCREF(var_value);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_name);
tmp_cmp_expr_left_1 = var_name;
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_server_no_context_takeover;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
if (var_server_no_context_takeover == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_server_no_context_takeover);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 254;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_truth_name_1 = CHECK_IF_TRUE(var_server_no_context_takeover);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_websockets$extensions$permessage_deflate$DuplicateParameter(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DuplicateParameter);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 255;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_name);
tmp_args_element_value_1 = var_name;
frame_frame_websockets$extensions$permessage_deflate$$$function__6__extract_parameters->m_frame.f_lineno = 255;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 255;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto try_except_handler_2;
}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_value);
tmp_cmp_expr_left_2 = var_value;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = Py_True;
{
    PyObject *old = var_server_no_context_takeover;
    var_server_no_context_takeover = tmp_assign_source_12;
    Py_INCREF(var_server_no_context_takeover);
    Py_XDECREF(old);
}

}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_2 = module_var_accessor_websockets$extensions$permessage_deflate$InvalidParameterValue(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidParameterValue);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 259;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_name);
tmp_args_element_value_2 = var_name;
CHECK_OBJECT(var_value);
tmp_args_element_value_3 = var_value;
frame_frame_websockets$extensions$permessage_deflate$$$function__6__extract_parameters->m_frame.f_lineno = 259;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_raise_type_input_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 259;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto try_except_handler_2;
}
branch_end_3:;
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_name);
tmp_cmp_expr_left_3 = var_name;
tmp_cmp_expr_right_3 = mod_consts.const_str_plain_client_no_context_takeover;
tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "oooooooo";
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
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
if (var_client_no_context_takeover == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_client_no_context_takeover);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 262;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_truth_name_2 = CHECK_IF_TRUE(var_client_no_context_takeover);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
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
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_3 = module_var_accessor_websockets$extensions$permessage_deflate$DuplicateParameter(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DuplicateParameter);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 263;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_name);
tmp_args_element_value_4 = var_name;
frame_frame_websockets$extensions$permessage_deflate$$$function__6__extract_parameters->m_frame.f_lineno = 263;
tmp_raise_type_input_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
CHECK_OBJECT(tmp_raise_type_input_3);
Py_DECREF(tmp_raise_type_input_3);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 263;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto try_except_handler_2;
}
branch_no_5:;
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_value);
tmp_cmp_expr_left_4 = var_value;
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
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = Py_True;
{
    PyObject *old = var_client_no_context_takeover;
    var_client_no_context_takeover = tmp_assign_source_13;
    Py_INCREF(var_client_no_context_takeover);
    Py_XDECREF(old);
}

}
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_raise_type_input_4;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_value_4 = module_var_accessor_websockets$extensions$permessage_deflate$InvalidParameterValue(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidParameterValue);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 267;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_name);
tmp_args_element_value_5 = var_name;
CHECK_OBJECT(var_value);
tmp_args_element_value_6 = var_value;
frame_frame_websockets$extensions$permessage_deflate$$$function__6__extract_parameters->m_frame.f_lineno = 267;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_raise_type_input_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

if (tmp_raise_type_input_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_raise_type_4 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_4);
CHECK_OBJECT(tmp_raise_type_input_4);
Py_DECREF(tmp_raise_type_input_4);
if (tmp_raise_type_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 267;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto try_except_handler_2;
}
branch_end_6:;
goto branch_end_4;
branch_no_4:;
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(var_name);
tmp_cmp_expr_left_5 = var_name;
tmp_cmp_expr_right_5 = mod_consts.const_str_plain_server_max_window_bits;
tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
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
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
if (var_server_max_window_bits == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_server_max_window_bits);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 270;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_cmp_expr_left_6 = var_server_max_window_bits;
tmp_cmp_expr_right_6 = Py_None;
tmp_condition_result_8 = (tmp_cmp_expr_left_6 != tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_raise_type_5;
PyObject *tmp_raise_type_input_5;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_7;
tmp_called_value_5 = module_var_accessor_websockets$extensions$permessage_deflate$DuplicateParameter(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DuplicateParameter);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 271;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_name);
tmp_args_element_value_7 = var_name;
frame_frame_websockets$extensions$permessage_deflate$$$function__6__extract_parameters->m_frame.f_lineno = 271;
tmp_raise_type_input_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_7);
if (tmp_raise_type_input_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_raise_type_5 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_5);
CHECK_OBJECT(tmp_raise_type_input_5);
Py_DECREF(tmp_raise_type_input_5);
if (tmp_raise_type_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 271;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto try_except_handler_2;
}
branch_no_8:;
{
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(var_value);
tmp_cmp_expr_left_7 = var_value;
tmp_cmp_expr_right_7 = module_var_accessor_websockets$extensions$permessage_deflate$_MAX_WINDOW_BITS_VALUES(tstate);
if (unlikely(tmp_cmp_expr_right_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__MAX_WINDOW_BITS_VALUES);
}

if (tmp_cmp_expr_right_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 272;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_7, tmp_cmp_expr_left_7);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
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
PyObject *tmp_assign_source_14;
PyObject *tmp_int_arg_1;
CHECK_OBJECT(var_value);
tmp_int_arg_1 = var_value;
tmp_assign_source_14 = PyNumber_Int(tmp_int_arg_1);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_server_max_window_bits;
    var_server_max_window_bits = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
goto branch_end_9;
branch_no_9:;
{
PyObject *tmp_raise_type_6;
PyObject *tmp_raise_type_input_6;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_called_value_6 = module_var_accessor_websockets$extensions$permessage_deflate$InvalidParameterValue(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidParameterValue);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 275;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_name);
tmp_args_element_value_8 = var_name;
CHECK_OBJECT(var_value);
tmp_args_element_value_9 = var_value;
frame_frame_websockets$extensions$permessage_deflate$$$function__6__extract_parameters->m_frame.f_lineno = 275;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_raise_type_input_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

if (tmp_raise_type_input_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_raise_type_6 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_6);
CHECK_OBJECT(tmp_raise_type_input_6);
Py_DECREF(tmp_raise_type_input_6);
if (tmp_raise_type_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_6;
exception_lineno = 275;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto try_except_handler_2;
}
branch_end_9:;
goto branch_end_7;
branch_no_7:;
{
nuitka_bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(var_name);
tmp_cmp_expr_left_8 = var_name;
tmp_cmp_expr_right_8 = mod_consts.const_str_plain_client_max_window_bits;
tmp_condition_result_10 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
if (var_client_max_window_bits == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_client_max_window_bits);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 278;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_cmp_expr_left_9 = var_client_max_window_bits;
tmp_cmp_expr_right_9 = Py_None;
tmp_condition_result_11 = (tmp_cmp_expr_left_9 != tmp_cmp_expr_right_9) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_raise_type_7;
PyObject *tmp_raise_type_input_7;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_10;
tmp_called_value_7 = module_var_accessor_websockets$extensions$permessage_deflate$DuplicateParameter(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DuplicateParameter);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 279;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_name);
tmp_args_element_value_10 = var_name;
frame_frame_websockets$extensions$permessage_deflate$$$function__6__extract_parameters->m_frame.f_lineno = 279;
tmp_raise_type_input_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_10);
if (tmp_raise_type_input_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_raise_type_7 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_7);
CHECK_OBJECT(tmp_raise_type_input_7);
Py_DECREF(tmp_raise_type_input_7);
if (tmp_raise_type_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_7;
exception_lineno = 279;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto try_except_handler_2;
}
branch_no_11:;
{
nuitka_bool tmp_condition_result_12;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_3;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
CHECK_OBJECT(par_is_server);
tmp_truth_name_3 = CHECK_IF_TRUE(par_is_server);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_and_left_value_1 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_value);
tmp_cmp_expr_left_10 = var_value;
tmp_cmp_expr_right_10 = Py_None;
tmp_and_right_value_1 = (tmp_cmp_expr_left_10 == tmp_cmp_expr_right_10) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_12 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_12 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = Py_True;
{
    PyObject *old = var_client_max_window_bits;
    var_client_max_window_bits = tmp_assign_source_15;
    Py_INCREF(var_client_max_window_bits);
    Py_XDECREF(old);
}

}
goto branch_end_12;
branch_no_12:;
{
bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
CHECK_OBJECT(var_value);
tmp_cmp_expr_left_11 = var_value;
tmp_cmp_expr_right_11 = module_var_accessor_websockets$extensions$permessage_deflate$_MAX_WINDOW_BITS_VALUES(tstate);
if (unlikely(tmp_cmp_expr_right_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__MAX_WINDOW_BITS_VALUES);
}

if (tmp_cmp_expr_right_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 282;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_11, tmp_cmp_expr_left_11);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_13 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_13 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_int_arg_2;
CHECK_OBJECT(var_value);
tmp_int_arg_2 = var_value;
tmp_assign_source_16 = PyNumber_Int(tmp_int_arg_2);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_client_max_window_bits;
    var_client_max_window_bits = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
goto branch_end_13;
branch_no_13:;
{
PyObject *tmp_raise_type_8;
PyObject *tmp_raise_type_input_8;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
tmp_called_value_8 = module_var_accessor_websockets$extensions$permessage_deflate$InvalidParameterValue(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidParameterValue);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 285;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_name);
tmp_args_element_value_11 = var_name;
CHECK_OBJECT(var_value);
tmp_args_element_value_12 = var_value;
frame_frame_websockets$extensions$permessage_deflate$$$function__6__extract_parameters->m_frame.f_lineno = 285;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_raise_type_input_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

if (tmp_raise_type_input_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_raise_type_8 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_8);
CHECK_OBJECT(tmp_raise_type_input_8);
Py_DECREF(tmp_raise_type_input_8);
if (tmp_raise_type_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_8;
exception_lineno = 285;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto try_except_handler_2;
}
branch_end_13:;
branch_end_12:;
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_raise_type_9;
PyObject *tmp_raise_type_input_9;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_13;
tmp_called_value_9 = module_var_accessor_websockets$extensions$permessage_deflate$InvalidParameterName(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidParameterName);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 288;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_name);
tmp_args_element_value_13 = var_name;
frame_frame_websockets$extensions$permessage_deflate$$$function__6__extract_parameters->m_frame.f_lineno = 288;
tmp_raise_type_input_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_13);
if (tmp_raise_type_input_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_raise_type_9 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_9);
CHECK_OBJECT(tmp_raise_type_input_9);
Py_DECREF(tmp_raise_type_input_9);
if (tmp_raise_type_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_9;
exception_lineno = 288;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto try_except_handler_2;
}
branch_end_10:;
branch_end_7:;
branch_end_4:;
branch_end_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

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
PyObject *tmp_tuple_element_1;
if (var_server_no_context_takeover == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_server_no_context_takeover);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 291;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_tuple_element_1 = var_server_no_context_takeover;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
if (var_client_no_context_takeover == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_client_no_context_takeover);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 292;
type_description_1 = "oooooooo";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = var_client_no_context_takeover;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
if (var_server_max_window_bits == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_server_max_window_bits);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 293;
type_description_1 = "oooooooo";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = var_server_max_window_bits;
PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
if (var_client_max_window_bits == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_client_max_window_bits);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 294;
type_description_1 = "oooooooo";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = var_client_max_window_bits;
PyTuple_SET_ITEM0(tmp_return_value, 3, tmp_tuple_element_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$extensions$permessage_deflate$$$function__6__extract_parameters, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$extensions$permessage_deflate$$$function__6__extract_parameters->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$extensions$permessage_deflate$$$function__6__extract_parameters, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$extensions$permessage_deflate$$$function__6__extract_parameters,
    type_description_1,
    par_params,
    par_is_server,
    var_server_no_context_takeover,
    var_client_no_context_takeover,
    var_server_max_window_bits,
    var_client_max_window_bits,
    var_name,
    var_value
);


// Release cached frame if used for exception.
if (frame_frame_websockets$extensions$permessage_deflate$$$function__6__extract_parameters == cache_frame_frame_websockets$extensions$permessage_deflate$$$function__6__extract_parameters) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__6__extract_parameters);
    cache_frame_frame_websockets$extensions$permessage_deflate$$$function__6__extract_parameters = NULL;
}

assertFrameObject(frame_frame_websockets$extensions$permessage_deflate$$$function__6__extract_parameters);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_server_no_context_takeover);
var_server_no_context_takeover = NULL;
Py_XDECREF(var_client_no_context_takeover);
var_client_no_context_takeover = NULL;
Py_XDECREF(var_server_max_window_bits);
var_server_max_window_bits = NULL;
Py_XDECREF(var_client_max_window_bits);
var_client_max_window_bits = NULL;
Py_XDECREF(var_name);
var_name = NULL;
Py_XDECREF(var_value);
var_value = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_server_no_context_takeover);
var_server_no_context_takeover = NULL;
Py_XDECREF(var_client_no_context_takeover);
var_client_no_context_takeover = NULL;
Py_XDECREF(var_server_max_window_bits);
var_server_max_window_bits = NULL;
Py_XDECREF(var_client_max_window_bits);
var_client_max_window_bits = NULL;
Py_XDECREF(var_name);
var_name = NULL;
Py_XDECREF(var_value);
var_value = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_params);
Py_DECREF(par_params);
CHECK_OBJECT(par_is_server);
Py_DECREF(par_is_server);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_params);
Py_DECREF(par_params);
CHECK_OBJECT(par_is_server);
Py_DECREF(par_is_server);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_websockets$extensions$permessage_deflate$$$function__7___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_server_no_context_takeover = python_pars[1];
PyObject *par_client_no_context_takeover = python_pars[2];
PyObject *par_server_max_window_bits = python_pars[3];
PyObject *par_client_max_window_bits = python_pars[4];
PyObject *par_compress_settings = python_pars[5];
PyObject *tmp_comparison_chain_1__comparison_result = NULL;
PyObject *tmp_comparison_chain_1__operand_2 = NULL;
PyObject *tmp_comparison_chain_2__comparison_result = NULL;
PyObject *tmp_comparison_chain_2__operand_2 = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$extensions$permessage_deflate$$$function__7___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$extensions$permessage_deflate$$$function__7___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__7___init__)) {
    Py_XDECREF(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__7___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$extensions$permessage_deflate$$$function__7___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$extensions$permessage_deflate$$$function__7___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_4ff587d22418f2aa1447a07428c2dc58, module_websockets$extensions$permessage_deflate, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__7___init__->m_type_description == NULL);
frame_frame_websockets$extensions$permessage_deflate$$$function__7___init__ = cache_frame_frame_websockets$extensions$permessage_deflate$$$function__7___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$extensions$permessage_deflate$$$function__7___init__);
assert(Py_REFCNT(frame_frame_websockets$extensions$permessage_deflate$$$function__7___init__) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_server_max_window_bits);
tmp_cmp_expr_left_1 = par_server_max_window_bits;
tmp_cmp_expr_right_1 = Py_None;
tmp_or_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? Py_True : Py_False;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
{
PyObject *tmp_assign_source_1;
CHECK_OBJECT(par_server_max_window_bits);
tmp_assign_source_1 = par_server_max_window_bits;
assert(tmp_comparison_chain_1__operand_2 == NULL);
Py_INCREF(tmp_assign_source_1);
tmp_comparison_chain_1__operand_2 = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = mod_consts.const_int_pos_8;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_right_2 = tmp_comparison_chain_1__operand_2;
tmp_assign_source_2 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "oooooo";
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


exception_lineno = 336;
type_description_1 = "oooooo";
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
tmp_cmp_expr_right_3 = mod_consts.const_int_pos_15;
tmp_or_right_value_1 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "oooooo";
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

CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
Py_DECREF(tmp_comparison_chain_1__operand_2);
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


exception_lineno = 336;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_d4c6f6d59f858d6a7e099c3db92c206c;
frame_frame_websockets$extensions$permessage_deflate$$$function__7___init__->m_frame.f_lineno = 337;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 337;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_3;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
int tmp_or_left_truth_3;
PyObject *tmp_or_left_value_3;
PyObject *tmp_or_right_value_3;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(par_client_max_window_bits);
tmp_cmp_expr_left_4 = par_client_max_window_bits;
tmp_cmp_expr_right_4 = Py_None;
tmp_or_left_value_2 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? Py_True : Py_False;
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(par_client_max_window_bits);
tmp_cmp_expr_left_5 = par_client_max_window_bits;
tmp_cmp_expr_right_5 = Py_True;
tmp_or_left_value_3 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? Py_True : Py_False;
tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(par_client_max_window_bits);
tmp_assign_source_3 = par_client_max_window_bits;
assert(tmp_comparison_chain_2__operand_2 == NULL);
Py_INCREF(tmp_assign_source_3);
tmp_comparison_chain_2__operand_2 = tmp_assign_source_3;
}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
tmp_cmp_expr_left_6 = mod_consts.const_int_pos_8;
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
tmp_cmp_expr_right_6 = tmp_comparison_chain_2__operand_2;
tmp_assign_source_4 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
assert(tmp_comparison_chain_2__comparison_result == NULL);
tmp_comparison_chain_2__comparison_result = tmp_assign_source_4;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_4;
CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
tmp_operand_value_4 = tmp_comparison_chain_2__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_1 = "oooooo";
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
CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
tmp_or_right_value_3 = tmp_comparison_chain_2__comparison_result;
Py_INCREF(tmp_or_right_value_3);
goto try_return_handler_2;
branch_no_4:;
{
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
tmp_cmp_expr_left_7 = tmp_comparison_chain_2__operand_2;
tmp_cmp_expr_right_7 = mod_consts.const_int_pos_15;
tmp_or_right_value_3 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_or_right_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
goto try_return_handler_2;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
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
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
Py_DECREF(tmp_comparison_chain_2__operand_2);
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
tmp_or_right_value_2 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
Py_INCREF(tmp_or_left_value_3);
tmp_or_right_value_2 = tmp_or_left_value_3;
or_end_3:;
tmp_operand_value_3 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
Py_INCREF(tmp_or_left_value_2);
tmp_operand_value_3 = tmp_or_left_value_2;
or_end_2:;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_1 = "oooooo";
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
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_91b9bac1baf9ed06e4a3f564b5596ae3;
frame_frame_websockets$extensions$permessage_deflate$$$function__7___init__->m_frame.f_lineno = 343;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 343;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
bool tmp_condition_result_5;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(par_compress_settings);
tmp_cmp_expr_left_8 = par_compress_settings;
tmp_cmp_expr_right_8 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_8 != tmp_cmp_expr_right_8) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
tmp_cmp_expr_left_9 = mod_consts.const_str_plain_wbits;
CHECK_OBJECT(par_compress_settings);
tmp_cmp_expr_right_9 = par_compress_settings;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_9, tmp_cmp_expr_left_9);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 344;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 1) ? true : false;
tmp_condition_result_5 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_5 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
tmp_make_exception_arg_3 = mod_consts.const_str_digest_099327bfd1e8b261a19d9baa7ba949dc;
frame_frame_websockets$extensions$permessage_deflate$$$function__7___init__->m_frame.f_lineno = 345;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 345;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto frame_exception_exit_1;
}
branch_no_5:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_server_no_context_takeover);
tmp_assattr_value_1 = par_server_no_context_takeover;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_server_no_context_takeover, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_client_no_context_takeover);
tmp_assattr_value_2 = par_client_no_context_takeover;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_client_no_context_takeover, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_server_max_window_bits);
tmp_assattr_value_3 = par_server_max_window_bits;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_server_max_window_bits, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_client_max_window_bits);
tmp_assattr_value_4 = par_client_max_window_bits;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_client_max_window_bits, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(par_compress_settings);
tmp_assattr_value_5 = par_compress_settings;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_compress_settings, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$extensions$permessage_deflate$$$function__7___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$extensions$permessage_deflate$$$function__7___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$extensions$permessage_deflate$$$function__7___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$extensions$permessage_deflate$$$function__7___init__,
    type_description_1,
    par_self,
    par_server_no_context_takeover,
    par_client_no_context_takeover,
    par_server_max_window_bits,
    par_client_max_window_bits,
    par_compress_settings
);


// Release cached frame if used for exception.
if (frame_frame_websockets$extensions$permessage_deflate$$$function__7___init__ == cache_frame_frame_websockets$extensions$permessage_deflate$$$function__7___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__7___init__);
    cache_frame_frame_websockets$extensions$permessage_deflate$$$function__7___init__ = NULL;
}

assertFrameObject(frame_frame_websockets$extensions$permessage_deflate$$$function__7___init__);

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
CHECK_OBJECT(par_server_no_context_takeover);
Py_DECREF(par_server_no_context_takeover);
CHECK_OBJECT(par_client_no_context_takeover);
Py_DECREF(par_client_no_context_takeover);
CHECK_OBJECT(par_server_max_window_bits);
Py_DECREF(par_server_max_window_bits);
CHECK_OBJECT(par_client_max_window_bits);
Py_DECREF(par_client_max_window_bits);
CHECK_OBJECT(par_compress_settings);
Py_DECREF(par_compress_settings);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_server_no_context_takeover);
Py_DECREF(par_server_no_context_takeover);
CHECK_OBJECT(par_client_no_context_takeover);
Py_DECREF(par_client_no_context_takeover);
CHECK_OBJECT(par_server_max_window_bits);
Py_DECREF(par_server_max_window_bits);
CHECK_OBJECT(par_client_max_window_bits);
Py_DECREF(par_client_max_window_bits);
CHECK_OBJECT(par_compress_settings);
Py_DECREF(par_compress_settings);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_websockets$extensions$permessage_deflate$$$function__8_get_request_params(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_websockets$extensions$permessage_deflate$$$function__8_get_request_params;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$extensions$permessage_deflate$$$function__8_get_request_params = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__8_get_request_params)) {
    Py_XDECREF(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__8_get_request_params);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$extensions$permessage_deflate$$$function__8_get_request_params == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$extensions$permessage_deflate$$$function__8_get_request_params = MAKE_FUNCTION_FRAME(tstate, code_objects_d3b58d26f126fa487407f540bc4832d9, module_websockets$extensions$permessage_deflate, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__8_get_request_params->m_type_description == NULL);
frame_frame_websockets$extensions$permessage_deflate$$$function__8_get_request_params = cache_frame_frame_websockets$extensions$permessage_deflate$$$function__8_get_request_params;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$extensions$permessage_deflate$$$function__8_get_request_params);
assert(Py_REFCNT(frame_frame_websockets$extensions$permessage_deflate$$$function__8_get_request_params) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_4;
tmp_called_value_1 = module_var_accessor_websockets$extensions$permessage_deflate$_build_parameters(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__build_parameters);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 361;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_server_no_context_takeover);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_client_no_context_takeover);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 363;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_server_max_window_bits);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 364;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_client_max_window_bits);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 365;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_websockets$extensions$permessage_deflate$$$function__8_get_request_params->m_frame.f_lineno = 361;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$extensions$permessage_deflate$$$function__8_get_request_params, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$extensions$permessage_deflate$$$function__8_get_request_params->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$extensions$permessage_deflate$$$function__8_get_request_params, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$extensions$permessage_deflate$$$function__8_get_request_params,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_websockets$extensions$permessage_deflate$$$function__8_get_request_params == cache_frame_frame_websockets$extensions$permessage_deflate$$$function__8_get_request_params) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__8_get_request_params);
    cache_frame_frame_websockets$extensions$permessage_deflate$$$function__8_get_request_params = NULL;
}

assertFrameObject(frame_frame_websockets$extensions$permessage_deflate$$$function__8_get_request_params);

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


static PyObject *impl_websockets$extensions$permessage_deflate$$$function__9_process_response_params(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
PyObject *par_params = python_pars[1];
PyObject *par_accepted_extensions = python_pars[2];
PyObject *var_server_no_context_takeover = NULL;
PyObject *var_client_no_context_takeover = NULL;
PyObject *var_server_max_window_bits = NULL;
PyObject *var_client_max_window_bits = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__element_4 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$extensions$permessage_deflate$$$function__9_process_response_params;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$extensions$permessage_deflate$$$function__9_process_response_params = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__9_process_response_params)) {
    Py_XDECREF(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__9_process_response_params);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$extensions$permessage_deflate$$$function__9_process_response_params == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$extensions$permessage_deflate$$$function__9_process_response_params = MAKE_FUNCTION_FRAME(tstate, code_objects_2aeff945c1774c6d7b4967f388110c7a, module_websockets$extensions$permessage_deflate, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__9_process_response_params->m_type_description == NULL);
frame_frame_websockets$extensions$permessage_deflate$$$function__9_process_response_params = cache_frame_frame_websockets$extensions$permessage_deflate$$$function__9_process_response_params;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$extensions$permessage_deflate$$$function__9_process_response_params);
assert(Py_REFCNT(frame_frame_websockets$extensions$permessage_deflate$$$function__9_process_response_params) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_any_arg_1;
PyObject *tmp_capi_result_1;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_accepted_extensions);
tmp_iter_arg_1 = par_accepted_extensions;
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_1;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_closure_1[1] = par_self;
Py_INCREF(tmp_closure_1[1]);
tmp_any_arg_1 = MAKE_GENERATOR_websockets$extensions$permessage_deflate$$$function__9_process_response_params$$$genexpr__1_genexpr(tstate, tmp_closure_1);

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
tmp_capi_result_1 = BUILTIN_ANY(tstate, tmp_any_arg_1);
CHECK_OBJECT(tmp_any_arg_1);
Py_DECREF(tmp_any_arg_1);
if (tmp_capi_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = CHECK_IF_TRUE(tmp_capi_result_1) == 1;
CHECK_OBJECT(tmp_capi_result_1);
Py_DECREF(tmp_capi_result_1);
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
tmp_called_value_1 = module_var_accessor_websockets$extensions$permessage_deflate$NegotiationError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NegotiationError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 380;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_54513e969a74200107b4e2e767d9d1c0;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_1 = Nuitka_Cell_GET(par_self);
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_name);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;
type_description_1 = "coooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;
type_description_1 = "coooooo";
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
frame_frame_websockets$extensions$permessage_deflate$$$function__9_process_response_params->m_frame.f_lineno = 380;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 380;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "coooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
tmp_called_value_2 = module_var_accessor_websockets$extensions$permessage_deflate$_extract_parameters(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__extract_parameters);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 390;
type_description_1 = "coooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_params);
tmp_tuple_element_2 = par_params;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_79542d96dd5e3965cf71aca264e8d189);
frame_frame_websockets$extensions$permessage_deflate$$$function__9_process_response_params->m_frame.f_lineno = 390;
tmp_iter_arg_2 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 390;
type_description_1 = "coooooo";
    goto try_except_handler_3;
}
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 385;
type_description_1 = "coooooo";
    goto try_except_handler_3;
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
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 4);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 385;
type_description_1 = "coooooo";
    goto try_except_handler_4;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 4);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 385;
type_description_1 = "coooooo";
    goto try_except_handler_4;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 4);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 385;
type_description_1 = "coooooo";
    goto try_except_handler_4;
}
assert(tmp_tuple_unpack_1__element_3 == NULL);
tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 3, 4);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 385;
type_description_1 = "coooooo";
    goto try_except_handler_4;
}
assert(tmp_tuple_unpack_1__element_4 == NULL);
tmp_tuple_unpack_1__element_4 = tmp_assign_source_6;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 4);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 385;
type_description_1 = "coooooo";
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
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_4);
tmp_tuple_unpack_1__element_4 = NULL;
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
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
assert(var_server_no_context_takeover == NULL);
Py_INCREF(tmp_assign_source_7);
var_server_no_context_takeover = tmp_assign_source_7;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
assert(var_client_no_context_takeover == NULL);
Py_INCREF(tmp_assign_source_8);
var_client_no_context_takeover = tmp_assign_source_8;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_assign_source_9 = tmp_tuple_unpack_1__element_3;
assert(var_server_max_window_bits == NULL);
Py_INCREF(tmp_assign_source_9);
var_server_max_window_bits = tmp_assign_source_9;
}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
tmp_assign_source_10 = tmp_tuple_unpack_1__element_4;
assert(var_client_max_window_bits == NULL);
Py_INCREF(tmp_assign_source_10);
var_client_max_window_bits = tmp_assign_source_10;
}
Py_XDECREF(tmp_tuple_unpack_1__element_4);
tmp_tuple_unpack_1__element_4 = NULL;

{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_2 = Nuitka_Cell_GET(par_self);
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_server_no_context_takeover);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 404;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 404;
type_description_1 = "coooooo";
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
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_server_no_context_takeover);
tmp_operand_value_1 = var_server_no_context_takeover;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 405;
type_description_1 = "coooooo";
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
PyObject *tmp_called_value_3;
tmp_called_value_3 = module_var_accessor_websockets$extensions$permessage_deflate$NegotiationError(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NegotiationError);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 406;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$extensions$permessage_deflate$$$function__9_process_response_params->m_frame.f_lineno = 406;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_digest_00052a1e063247d51719106d13c4746f_tuple);

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 406;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "coooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
branch_no_2:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_expression_value_3;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_2;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_3 = Nuitka_Cell_GET(par_self);
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_client_no_context_takeover);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 417;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(var_client_no_context_takeover);
tmp_operand_value_2 = var_client_no_context_takeover;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
type_description_1 = "coooooo";
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
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = Py_True;
{
    PyObject *old = var_client_no_context_takeover;
    assert(old != NULL);
    var_client_no_context_takeover = tmp_assign_source_11;
    Py_INCREF(var_client_no_context_takeover);
    Py_DECREF(old);
}

}
branch_no_5:;
branch_no_4:;
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_4 = Nuitka_Cell_GET(par_self);
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_server_max_window_bits);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_6 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_server_max_window_bits);
tmp_cmp_expr_left_2 = var_server_max_window_bits;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_7 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_raise_type_input_3;
PyObject *tmp_called_value_4;
tmp_called_value_4 = module_var_accessor_websockets$extensions$permessage_deflate$NegotiationError(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NegotiationError);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 436;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$extensions$permessage_deflate$$$function__9_process_response_params->m_frame.f_lineno = 436;
tmp_raise_type_input_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_digest_a89c065d99d35121b80ee103d4fb6e1d_tuple);

if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 436;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
CHECK_OBJECT(tmp_raise_type_input_3);
Py_DECREF(tmp_raise_type_input_3);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 436;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 436;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "coooooo";
goto frame_exception_exit_1;
}
goto branch_end_7;
branch_no_7:;
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(var_server_max_window_bits);
tmp_cmp_expr_left_3 = var_server_max_window_bits;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_5 = Nuitka_Cell_GET(par_self);
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_server_max_window_bits);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 437;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 437;
type_description_1 = "coooooo";
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
PyObject *tmp_raise_type_4;
PyObject *tmp_raise_type_input_4;
PyObject *tmp_called_value_5;
tmp_called_value_5 = module_var_accessor_websockets$extensions$permessage_deflate$NegotiationError(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NegotiationError);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 438;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$extensions$permessage_deflate$$$function__9_process_response_params->m_frame.f_lineno = 438;
tmp_raise_type_input_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_digest_21134e2e156c463750b9f022fa763ac3_tuple);

if (tmp_raise_type_input_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_4 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_4);
CHECK_OBJECT(tmp_raise_type_input_4);
Py_DECREF(tmp_raise_type_input_4);
if (tmp_raise_type_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 438;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "coooooo";
goto frame_exception_exit_1;
}
branch_no_8:;
branch_end_7:;
branch_no_6:;
{
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_6 = Nuitka_Cell_GET(par_self);
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_client_max_window_bits);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_9 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(var_client_max_window_bits);
tmp_cmp_expr_left_5 = var_client_max_window_bits;
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_10 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_raise_type_5;
PyObject *tmp_raise_type_input_5;
PyObject *tmp_called_value_6;
tmp_called_value_6 = module_var_accessor_websockets$extensions$permessage_deflate$NegotiationError(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NegotiationError);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 454;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$extensions$permessage_deflate$$$function__9_process_response_params->m_frame.f_lineno = 454;
tmp_raise_type_input_5 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts.const_tuple_str_digest_314e71e7da3e98b95da004969462abf7_tuple);

if (tmp_raise_type_input_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_5 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_5);
CHECK_OBJECT(tmp_raise_type_input_5);
Py_DECREF(tmp_raise_type_input_5);
if (tmp_raise_type_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 454;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "coooooo";
goto frame_exception_exit_1;
}
branch_no_10:;
goto branch_end_9;
branch_no_9:;
{
bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_7 = Nuitka_Cell_GET(par_self);
tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_client_max_window_bits);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 456;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_6 = Py_True;
tmp_condition_result_11 = (tmp_cmp_expr_left_6 != tmp_cmp_expr_right_6) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
if (tmp_condition_result_11 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(var_client_max_window_bits);
tmp_cmp_expr_left_7 = var_client_max_window_bits;
tmp_cmp_expr_right_7 = Py_None;
tmp_condition_result_12 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_8 = Nuitka_Cell_GET(par_self);
tmp_assign_source_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_client_max_window_bits);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 461;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_client_max_window_bits;
    assert(old != NULL);
    var_client_max_window_bits = tmp_assign_source_12;
    Py_DECREF(old);
}

}
goto branch_end_12;
branch_no_12:;
{
nuitka_bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(var_client_max_window_bits);
tmp_cmp_expr_left_8 = var_client_max_window_bits;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_9 = Nuitka_Cell_GET(par_self);
tmp_cmp_expr_right_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_client_max_window_bits);
if (tmp_cmp_expr_right_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 462;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_13 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_right_8);
Py_DECREF(tmp_cmp_expr_right_8);
if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 462;
type_description_1 = "coooooo";
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
PyObject *tmp_raise_type_6;
PyObject *tmp_raise_type_input_6;
PyObject *tmp_called_value_7;
tmp_called_value_7 = module_var_accessor_websockets$extensions$permessage_deflate$NegotiationError(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NegotiationError);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 463;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$extensions$permessage_deflate$$$function__9_process_response_params->m_frame.f_lineno = 463;
tmp_raise_type_input_6 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_7, mod_consts.const_tuple_str_digest_d97962600fb08e301b1aed17e172ad78_tuple);

if (tmp_raise_type_input_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 463;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_6 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_6);
CHECK_OBJECT(tmp_raise_type_input_6);
Py_DECREF(tmp_raise_type_input_6);
if (tmp_raise_type_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 463;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_6;
exception_lineno = 463;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "coooooo";
goto frame_exception_exit_1;
}
branch_no_13:;
branch_end_12:;
branch_no_11:;
branch_end_9:;
{
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_args_element_value_5;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_10;
tmp_called_value_8 = module_var_accessor_websockets$extensions$permessage_deflate$PerMessageDeflate(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PerMessageDeflate);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 465;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_server_no_context_takeover);
tmp_args_element_value_2 = var_server_no_context_takeover;
CHECK_OBJECT(var_client_no_context_takeover);
tmp_args_element_value_3 = var_client_no_context_takeover;
CHECK_OBJECT(var_server_max_window_bits);
tmp_or_left_value_1 = var_server_max_window_bits;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 468;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_or_right_value_1 = mod_consts.const_int_pos_15;
tmp_args_element_value_4 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_args_element_value_4 = tmp_or_left_value_1;
or_end_1:;
CHECK_OBJECT(var_client_max_window_bits);
tmp_or_left_value_2 = var_client_max_window_bits;
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 469;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
tmp_or_right_value_2 = mod_consts.const_int_pos_15;
tmp_args_element_value_5 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_args_element_value_5 = tmp_or_left_value_2;
or_end_2:;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_10 = Nuitka_Cell_GET(par_self);
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_compress_settings);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 470;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$extensions$permessage_deflate$$$function__9_process_response_params->m_frame.f_lineno = 465;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 465;
type_description_1 = "coooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$extensions$permessage_deflate$$$function__9_process_response_params, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$extensions$permessage_deflate$$$function__9_process_response_params->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$extensions$permessage_deflate$$$function__9_process_response_params, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$extensions$permessage_deflate$$$function__9_process_response_params,
    type_description_1,
    par_self,
    par_params,
    par_accepted_extensions,
    var_server_no_context_takeover,
    var_client_no_context_takeover,
    var_server_max_window_bits,
    var_client_max_window_bits
);


// Release cached frame if used for exception.
if (frame_frame_websockets$extensions$permessage_deflate$$$function__9_process_response_params == cache_frame_frame_websockets$extensions$permessage_deflate$$$function__9_process_response_params) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__9_process_response_params);
    cache_frame_frame_websockets$extensions$permessage_deflate$$$function__9_process_response_params = NULL;
}

assertFrameObject(frame_frame_websockets$extensions$permessage_deflate$$$function__9_process_response_params);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(var_server_no_context_takeover);
CHECK_OBJECT(var_server_no_context_takeover);
Py_DECREF(var_server_no_context_takeover);
var_server_no_context_takeover = NULL;
CHECK_OBJECT(var_client_no_context_takeover);
CHECK_OBJECT(var_client_no_context_takeover);
Py_DECREF(var_client_no_context_takeover);
var_client_no_context_takeover = NULL;
CHECK_OBJECT(var_server_max_window_bits);
CHECK_OBJECT(var_server_max_window_bits);
Py_DECREF(var_server_max_window_bits);
var_server_max_window_bits = NULL;
CHECK_OBJECT(var_client_max_window_bits);
CHECK_OBJECT(var_client_max_window_bits);
Py_DECREF(var_client_max_window_bits);
var_client_max_window_bits = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
Py_XDECREF(var_server_no_context_takeover);
var_server_no_context_takeover = NULL;
Py_XDECREF(var_client_no_context_takeover);
var_client_no_context_takeover = NULL;
Py_XDECREF(var_server_max_window_bits);
var_server_max_window_bits = NULL;
Py_XDECREF(var_client_max_window_bits);
var_client_max_window_bits = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_params);
Py_DECREF(par_params);
CHECK_OBJECT(par_accepted_extensions);
Py_DECREF(par_accepted_extensions);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_params);
Py_DECREF(par_params);
CHECK_OBJECT(par_accepted_extensions);
Py_DECREF(par_accepted_extensions);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct websockets$extensions$permessage_deflate$$$function__9_process_response_params$$$genexpr__1_genexpr_locals {
PyObject *var_other;
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

static PyObject *websockets$extensions$permessage_deflate$$$function__9_process_response_params$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct websockets$extensions$permessage_deflate$$$function__9_process_response_params$$$genexpr__1_genexpr_locals *generator_heap = (struct websockets$extensions$permessage_deflate$$$function__9_process_response_params$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_other = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_f3fdd95577b1dd0d59480570cabfd1d9, module_websockets$extensions$permessage_deflate, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
generator_heap->type_description_1 = "Noc";
generator_heap->exception_lineno = 379;
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
    PyObject *old = generator_heap->var_other;
    generator_heap->var_other = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_other);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_other);
tmp_expression_value_2 = generator_heap->var_other;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_name);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 379;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
Py_DECREF(tmp_cmp_expr_left_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 379;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}

tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_name);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

generator_heap->exception_lineno = 379;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
tmp_expression_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 379;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 379;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 379;
generator_heap->type_description_1 = "Noc";
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
    generator_heap->var_other,
    generator->m_closure[1]
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

Py_XDECREF(generator_heap->var_other);
generator_heap->var_other = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_other);
generator_heap->var_other = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_websockets$extensions$permessage_deflate$$$function__9_process_response_params$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        websockets$extensions$permessage_deflate$$$function__9_process_response_params$$$genexpr__1_genexpr_context,
        module_websockets$extensions$permessage_deflate,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_7322af661785e5137e703f26f7c6ca8d,
#endif
        code_objects_f3fdd95577b1dd0d59480570cabfd1d9,
        closure,
        2,
#if 1
        sizeof(struct websockets$extensions$permessage_deflate$$$function__9_process_response_params$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_extensions = python_pars[0];
PyObject *tmp_genexpr_1__$0 = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
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
// Tried code:
if (isFrameUnusable(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate)) {
    Py_XDECREF(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate = MAKE_FUNCTION_FRAME(tstate, code_objects_5764f210c9da164945ca1e484ae6f060, module_websockets$extensions$permessage_deflate, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate->m_type_description == NULL);
frame_frame_websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate = cache_frame_frame_websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate);
assert(Py_REFCNT(frame_frame_websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate) == 2);

// Framed code:
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_any_arg_1;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_extensions);
tmp_iter_arg_1 = par_extensions;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 488;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_2;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_any_arg_1 = MAKE_GENERATOR_websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate$$$genexpr__1_genexpr(tstate, tmp_closure_1);

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
tmp_operand_value_1 = BUILTIN_ANY(tstate, tmp_any_arg_1);
CHECK_OBJECT(tmp_any_arg_1);
Py_DECREF(tmp_any_arg_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 486;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_list_arg_1;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_call_args_kw_split_1;
CHECK_OBJECT(par_extensions);
tmp_list_arg_1 = par_extensions;
tmp_add_expr_left_1 = MAKE_LIST(tstate, tmp_list_arg_1);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 490;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = module_var_accessor_websockets$extensions$permessage_deflate$ClientPerMessageDeflateFactory(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ClientPerMessageDeflateFactory);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 491;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_call_args_kw_split_1 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts.const_tuple_dict_8418af9c661d5b75fe018d2207c320cb_tuple, "d");
frame_frame_websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate->m_frame.f_lineno = 491;
tmp_list_element_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(tmp_call_args_kw_split_1, 0), mod_consts.const_tuple_str_plain_compress_settings_tuple);
CHECK_OBJECT(tmp_call_args_kw_split_1);
Py_DECREF(tmp_call_args_kw_split_1);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 491;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_add_expr_right_1, 0, tmp_list_element_1);
tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_LIST_LIST(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
assert(!(tmp_assign_source_3 == NULL));
{
    PyObject *old = par_extensions;
    assert(old != NULL);
    par_extensions = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_no_2:;
if (par_extensions == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_extensions);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 495;
type_description_1 = "o";
    goto frame_exception_exit_1;
}

tmp_return_value = par_extensions;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate,
    type_description_1,
    par_extensions
);


// Release cached frame if used for exception.
if (frame_frame_websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate == cache_frame_frame_websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate);
    cache_frame_frame_websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate = NULL;
}

assertFrameObject(frame_frame_websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_extensions);
par_extensions = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_extensions);
par_extensions = NULL;
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



#if 1
struct websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate$$$genexpr__1_genexpr_locals {
PyObject *var_extension_factory;
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

static PyObject *websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate$$$genexpr__1_genexpr_locals *generator_heap = (struct websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_extension_factory = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_f775255cef5d73e2273f7fb655252f9e, module_websockets$extensions$permessage_deflate, sizeof(void *)+sizeof(void *));
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
generator_heap->exception_lineno = 486;
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
    PyObject *old = generator_heap->var_extension_factory;
    generator_heap->var_extension_factory = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_extension_factory);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_extension_factory);
tmp_expression_value_2 = generator_heap->var_extension_factory;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_name);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 487;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_expression_value_3 = module_var_accessor_websockets$extensions$permessage_deflate$ClientPerMessageDeflateFactory(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_ClientPerMessageDeflateFactory);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

generator_heap->exception_lineno = 487;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_name);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

generator_heap->exception_lineno = 487;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_expression_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 487;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 487;
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


generator_heap->exception_lineno = 486;
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
    generator_heap->var_extension_factory
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

Py_XDECREF(generator_heap->var_extension_factory);
generator_heap->var_extension_factory = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_extension_factory);
generator_heap->var_extension_factory = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate$$$genexpr__1_genexpr_context,
        module_websockets$extensions$permessage_deflate,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_0e2440386ea78059d29f9dec48115d24,
#endif
        code_objects_f775255cef5d73e2273f7fb655252f9e,
        closure,
        1,
#if 1
        sizeof(struct websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_websockets$extensions$permessage_deflate$$$function__11___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_server_no_context_takeover = python_pars[1];
PyObject *par_client_no_context_takeover = python_pars[2];
PyObject *par_server_max_window_bits = python_pars[3];
PyObject *par_client_max_window_bits = python_pars[4];
PyObject *par_compress_settings = python_pars[5];
PyObject *par_require_client_max_window_bits = python_pars[6];
PyObject *tmp_comparison_chain_1__comparison_result = NULL;
PyObject *tmp_comparison_chain_1__operand_2 = NULL;
PyObject *tmp_comparison_chain_2__comparison_result = NULL;
PyObject *tmp_comparison_chain_2__operand_2 = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$extensions$permessage_deflate$$$function__11___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$extensions$permessage_deflate$$$function__11___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__11___init__)) {
    Py_XDECREF(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__11___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$extensions$permessage_deflate$$$function__11___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$extensions$permessage_deflate$$$function__11___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_cba6c20a3b2f5bd3d7efc4c38f88c3f9, module_websockets$extensions$permessage_deflate, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__11___init__->m_type_description == NULL);
frame_frame_websockets$extensions$permessage_deflate$$$function__11___init__ = cache_frame_frame_websockets$extensions$permessage_deflate$$$function__11___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$extensions$permessage_deflate$$$function__11___init__);
assert(Py_REFCNT(frame_frame_websockets$extensions$permessage_deflate$$$function__11___init__) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_server_max_window_bits);
tmp_cmp_expr_left_1 = par_server_max_window_bits;
tmp_cmp_expr_right_1 = Py_None;
tmp_or_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? Py_True : Py_False;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
{
PyObject *tmp_assign_source_1;
CHECK_OBJECT(par_server_max_window_bits);
tmp_assign_source_1 = par_server_max_window_bits;
assert(tmp_comparison_chain_1__operand_2 == NULL);
Py_INCREF(tmp_assign_source_1);
tmp_comparison_chain_1__operand_2 = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = mod_consts.const_int_pos_8;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_right_2 = tmp_comparison_chain_1__operand_2;
tmp_assign_source_2 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 540;
type_description_1 = "ooooooo";
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


exception_lineno = 540;
type_description_1 = "ooooooo";
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
tmp_cmp_expr_right_3 = mod_consts.const_int_pos_15;
tmp_or_right_value_1 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 540;
type_description_1 = "ooooooo";
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

CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
Py_DECREF(tmp_comparison_chain_1__operand_2);
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


exception_lineno = 540;
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_d4c6f6d59f858d6a7e099c3db92c206c;
frame_frame_websockets$extensions$permessage_deflate$$$function__11___init__->m_frame.f_lineno = 541;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 541;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_3;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(par_client_max_window_bits);
tmp_cmp_expr_left_4 = par_client_max_window_bits;
tmp_cmp_expr_right_4 = Py_None;
tmp_or_left_value_2 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? Py_True : Py_False;
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(par_client_max_window_bits);
tmp_assign_source_3 = par_client_max_window_bits;
assert(tmp_comparison_chain_2__operand_2 == NULL);
Py_INCREF(tmp_assign_source_3);
tmp_comparison_chain_2__operand_2 = tmp_assign_source_3;
}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = mod_consts.const_int_pos_8;
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
tmp_cmp_expr_right_5 = tmp_comparison_chain_2__operand_2;
tmp_assign_source_4 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 542;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
assert(tmp_comparison_chain_2__comparison_result == NULL);
tmp_comparison_chain_2__comparison_result = tmp_assign_source_4;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_4;
CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
tmp_operand_value_4 = tmp_comparison_chain_2__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 542;
type_description_1 = "ooooooo";
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
CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
tmp_or_right_value_2 = tmp_comparison_chain_2__comparison_result;
Py_INCREF(tmp_or_right_value_2);
goto try_return_handler_2;
branch_no_4:;
{
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
tmp_cmp_expr_left_6 = tmp_comparison_chain_2__operand_2;
tmp_cmp_expr_right_6 = mod_consts.const_int_pos_15;
tmp_or_right_value_2 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_or_right_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 542;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
goto try_return_handler_2;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
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
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
Py_DECREF(tmp_comparison_chain_2__operand_2);
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
tmp_operand_value_3 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
Py_INCREF(tmp_or_left_value_2);
tmp_operand_value_3 = tmp_or_left_value_2;
or_end_2:;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 542;
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
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_91b9bac1baf9ed06e4a3f564b5596ae3;
frame_frame_websockets$extensions$permessage_deflate$$$function__11___init__->m_frame.f_lineno = 543;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 543;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
bool tmp_condition_result_5;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(par_compress_settings);
tmp_cmp_expr_left_7 = par_compress_settings;
tmp_cmp_expr_right_7 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_7 != tmp_cmp_expr_right_7) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
tmp_cmp_expr_left_8 = mod_consts.const_str_plain_wbits;
CHECK_OBJECT(par_compress_settings);
tmp_cmp_expr_right_8 = par_compress_settings;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_8, tmp_cmp_expr_left_8);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 544;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 1) ? true : false;
tmp_condition_result_5 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_5 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
tmp_make_exception_arg_3 = mod_consts.const_str_digest_2ee638e4f9addcf8577875c75861bd9d;
frame_frame_websockets$extensions$permessage_deflate$$$function__11___init__->m_frame.f_lineno = 545;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 545;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooo";
goto frame_exception_exit_1;
}
branch_no_5:;
{
nuitka_bool tmp_condition_result_6;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
int tmp_truth_name_1;
CHECK_OBJECT(par_client_max_window_bits);
tmp_cmp_expr_left_9 = par_client_max_window_bits;
tmp_cmp_expr_right_9 = Py_None;
tmp_and_left_value_2 = (tmp_cmp_expr_left_9 == tmp_cmp_expr_right_9) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_require_client_max_window_bits);
tmp_truth_name_1 = CHECK_IF_TRUE(par_require_client_max_window_bits);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 549;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_condition_result_6 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_6 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_make_exception_arg_4;
tmp_make_exception_arg_4 = mod_consts.const_str_digest_1cc454d9f70ac50b5e0f0c2cd3c52292;
frame_frame_websockets$extensions$permessage_deflate$$$function__11___init__->m_frame.f_lineno = 550;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 550;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooo";
goto frame_exception_exit_1;
}
branch_no_6:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_server_no_context_takeover);
tmp_assattr_value_1 = par_server_no_context_takeover;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_server_no_context_takeover, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 555;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_client_no_context_takeover);
tmp_assattr_value_2 = par_client_no_context_takeover;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_client_no_context_takeover, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 556;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_server_max_window_bits);
tmp_assattr_value_3 = par_server_max_window_bits;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_server_max_window_bits, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 557;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_client_max_window_bits);
tmp_assattr_value_4 = par_client_max_window_bits;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_client_max_window_bits, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 558;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(par_compress_settings);
tmp_assattr_value_5 = par_compress_settings;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_compress_settings, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 559;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
CHECK_OBJECT(par_require_client_max_window_bits);
tmp_assattr_value_6 = par_require_client_max_window_bits;
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain_require_client_max_window_bits, tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 560;
type_description_1 = "ooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$extensions$permessage_deflate$$$function__11___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$extensions$permessage_deflate$$$function__11___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$extensions$permessage_deflate$$$function__11___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$extensions$permessage_deflate$$$function__11___init__,
    type_description_1,
    par_self,
    par_server_no_context_takeover,
    par_client_no_context_takeover,
    par_server_max_window_bits,
    par_client_max_window_bits,
    par_compress_settings,
    par_require_client_max_window_bits
);


// Release cached frame if used for exception.
if (frame_frame_websockets$extensions$permessage_deflate$$$function__11___init__ == cache_frame_frame_websockets$extensions$permessage_deflate$$$function__11___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__11___init__);
    cache_frame_frame_websockets$extensions$permessage_deflate$$$function__11___init__ = NULL;
}

assertFrameObject(frame_frame_websockets$extensions$permessage_deflate$$$function__11___init__);

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
CHECK_OBJECT(par_server_no_context_takeover);
Py_DECREF(par_server_no_context_takeover);
CHECK_OBJECT(par_client_no_context_takeover);
Py_DECREF(par_client_no_context_takeover);
CHECK_OBJECT(par_server_max_window_bits);
Py_DECREF(par_server_max_window_bits);
CHECK_OBJECT(par_client_max_window_bits);
Py_DECREF(par_client_max_window_bits);
CHECK_OBJECT(par_compress_settings);
Py_DECREF(par_compress_settings);
CHECK_OBJECT(par_require_client_max_window_bits);
Py_DECREF(par_require_client_max_window_bits);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_server_no_context_takeover);
Py_DECREF(par_server_no_context_takeover);
CHECK_OBJECT(par_client_no_context_takeover);
Py_DECREF(par_client_no_context_takeover);
CHECK_OBJECT(par_server_max_window_bits);
Py_DECREF(par_server_max_window_bits);
CHECK_OBJECT(par_client_max_window_bits);
Py_DECREF(par_client_max_window_bits);
CHECK_OBJECT(par_compress_settings);
Py_DECREF(par_compress_settings);
CHECK_OBJECT(par_require_client_max_window_bits);
Py_DECREF(par_require_client_max_window_bits);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_websockets$extensions$permessage_deflate$$$function__12_process_request_params(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
PyObject *par_params = python_pars[1];
PyObject *par_accepted_extensions = python_pars[2];
PyObject *var_server_no_context_takeover = NULL;
PyObject *var_client_no_context_takeover = NULL;
PyObject *var_server_max_window_bits = NULL;
PyObject *var_client_max_window_bits = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__element_4 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$extensions$permessage_deflate$$$function__12_process_request_params;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$extensions$permessage_deflate$$$function__12_process_request_params = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__12_process_request_params)) {
    Py_XDECREF(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__12_process_request_params);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$extensions$permessage_deflate$$$function__12_process_request_params == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$extensions$permessage_deflate$$$function__12_process_request_params = MAKE_FUNCTION_FRAME(tstate, code_objects_936770eaee7c8967f2e804b6e561e74d, module_websockets$extensions$permessage_deflate, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__12_process_request_params->m_type_description == NULL);
frame_frame_websockets$extensions$permessage_deflate$$$function__12_process_request_params = cache_frame_frame_websockets$extensions$permessage_deflate$$$function__12_process_request_params;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$extensions$permessage_deflate$$$function__12_process_request_params);
assert(Py_REFCNT(frame_frame_websockets$extensions$permessage_deflate$$$function__12_process_request_params) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_any_arg_1;
PyObject *tmp_capi_result_1;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_accepted_extensions);
tmp_iter_arg_1 = par_accepted_extensions;
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 573;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_1;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_closure_1[1] = par_self;
Py_INCREF(tmp_closure_1[1]);
tmp_any_arg_1 = MAKE_GENERATOR_websockets$extensions$permessage_deflate$$$function__12_process_request_params$$$genexpr__1_genexpr(tstate, tmp_closure_1);

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
tmp_capi_result_1 = BUILTIN_ANY(tstate, tmp_any_arg_1);
CHECK_OBJECT(tmp_any_arg_1);
Py_DECREF(tmp_any_arg_1);
if (tmp_capi_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 573;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = CHECK_IF_TRUE(tmp_capi_result_1) == 1;
CHECK_OBJECT(tmp_capi_result_1);
Py_DECREF(tmp_capi_result_1);
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
tmp_called_value_1 = module_var_accessor_websockets$extensions$permessage_deflate$NegotiationError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NegotiationError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 574;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_e928b6f8f0c62f6f9ccf6edbfd65ac31;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_1 = Nuitka_Cell_GET(par_self);
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_name);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 574;
type_description_1 = "coooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 574;
type_description_1 = "coooooo";
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
frame_frame_websockets$extensions$permessage_deflate$$$function__12_process_request_params->m_frame.f_lineno = 574;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 574;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 574;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 574;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "coooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
tmp_called_value_2 = module_var_accessor_websockets$extensions$permessage_deflate$_extract_parameters(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__extract_parameters);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 582;
type_description_1 = "coooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_params);
tmp_tuple_element_2 = par_params;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_fc81db492db7a16b4c23d5e95b79977a);
frame_frame_websockets$extensions$permessage_deflate$$$function__12_process_request_params->m_frame.f_lineno = 582;
tmp_iter_arg_2 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 582;
type_description_1 = "coooooo";
    goto try_except_handler_3;
}
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 577;
type_description_1 = "coooooo";
    goto try_except_handler_3;
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
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 4);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 577;
type_description_1 = "coooooo";
    goto try_except_handler_4;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 4);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 577;
type_description_1 = "coooooo";
    goto try_except_handler_4;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 4);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 577;
type_description_1 = "coooooo";
    goto try_except_handler_4;
}
assert(tmp_tuple_unpack_1__element_3 == NULL);
tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 3, 4);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 577;
type_description_1 = "coooooo";
    goto try_except_handler_4;
}
assert(tmp_tuple_unpack_1__element_4 == NULL);
tmp_tuple_unpack_1__element_4 = tmp_assign_source_6;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 4);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 577;
type_description_1 = "coooooo";
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
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_4);
tmp_tuple_unpack_1__element_4 = NULL;
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
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
assert(var_server_no_context_takeover == NULL);
Py_INCREF(tmp_assign_source_7);
var_server_no_context_takeover = tmp_assign_source_7;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
assert(var_client_no_context_takeover == NULL);
Py_INCREF(tmp_assign_source_8);
var_client_no_context_takeover = tmp_assign_source_8;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_assign_source_9 = tmp_tuple_unpack_1__element_3;
assert(var_server_max_window_bits == NULL);
Py_INCREF(tmp_assign_source_9);
var_server_max_window_bits = tmp_assign_source_9;
}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
tmp_assign_source_10 = tmp_tuple_unpack_1__element_4;
assert(var_client_max_window_bits == NULL);
Py_INCREF(tmp_assign_source_10);
var_client_max_window_bits = tmp_assign_source_10;
}
Py_XDECREF(tmp_tuple_unpack_1__element_4);
tmp_tuple_unpack_1__element_4 = NULL;

{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_2 = Nuitka_Cell_GET(par_self);
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_server_no_context_takeover);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 598;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 598;
type_description_1 = "coooooo";
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
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_server_no_context_takeover);
tmp_operand_value_1 = var_server_no_context_takeover;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 599;
type_description_1 = "coooooo";
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
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = Py_True;
{
    PyObject *old = var_server_no_context_takeover;
    assert(old != NULL);
    var_server_no_context_takeover = tmp_assign_source_11;
    Py_INCREF(var_server_no_context_takeover);
    Py_DECREF(old);
}

}
branch_no_3:;
branch_no_2:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_expression_value_3;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_2;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_3 = Nuitka_Cell_GET(par_self);
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_client_no_context_takeover);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 611;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 611;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(var_client_no_context_takeover);
tmp_operand_value_2 = var_client_no_context_takeover;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 612;
type_description_1 = "coooooo";
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
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = Py_True;
{
    PyObject *old = var_client_no_context_takeover;
    assert(old != NULL);
    var_client_no_context_takeover = tmp_assign_source_12;
    Py_INCREF(var_client_no_context_takeover);
    Py_DECREF(old);
}

}
branch_no_5:;
branch_no_4:;
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_4 = Nuitka_Cell_GET(par_self);
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_server_max_window_bits);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 625;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_6 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_server_max_window_bits);
tmp_cmp_expr_left_2 = var_server_max_window_bits;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_7 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_5 = Nuitka_Cell_GET(par_self);
tmp_assign_source_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_server_max_window_bits);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 630;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_server_max_window_bits;
    assert(old != NULL);
    var_server_max_window_bits = tmp_assign_source_13;
    Py_DECREF(old);
}

}
goto branch_end_7;
branch_no_7:;
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_server_max_window_bits);
tmp_cmp_expr_left_3 = var_server_max_window_bits;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_6 = Nuitka_Cell_GET(par_self);
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_server_max_window_bits);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 631;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 631;
type_description_1 = "coooooo";
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
PyObject *tmp_assign_source_14;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_7 = Nuitka_Cell_GET(par_self);
tmp_assign_source_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_server_max_window_bits);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 632;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_server_max_window_bits;
    assert(old != NULL);
    var_server_max_window_bits = tmp_assign_source_14;
    Py_DECREF(old);
}

}
branch_no_8:;
branch_end_7:;
branch_no_6:;
{
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_8 = Nuitka_Cell_GET(par_self);
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_client_max_window_bits);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 646;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_9 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(var_client_max_window_bits);
tmp_cmp_expr_left_5 = var_client_max_window_bits;
tmp_cmp_expr_right_5 = Py_True;
tmp_condition_result_10 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_9 = Nuitka_Cell_GET(par_self);
tmp_assign_source_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_client_max_window_bits);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 648;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_client_max_window_bits;
    assert(old != NULL);
    var_client_max_window_bits = tmp_assign_source_15;
    Py_DECREF(old);
}

}
branch_no_10:;
goto branch_end_9;
branch_no_9:;
{
bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(var_client_max_window_bits);
tmp_cmp_expr_left_6 = var_client_max_window_bits;
tmp_cmp_expr_right_6 = Py_None;
tmp_condition_result_11 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_expression_value_10;
PyObject *tmp_attribute_value_3;
int tmp_truth_name_3;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_10 = Nuitka_Cell_GET(par_self);
tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_require_client_max_window_bits);
if (tmp_attribute_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 652;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_3);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_3);

exception_lineno = 652;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_12 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_3);
Py_DECREF(tmp_attribute_value_3);
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_3;
tmp_called_value_3 = module_var_accessor_websockets$extensions$permessage_deflate$NegotiationError(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NegotiationError);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 653;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
frame_frame_websockets$extensions$permessage_deflate$$$function__12_process_request_params->m_frame.f_lineno = 653;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_digest_38cebe81fdfa5b441ab5a441d6c56553_tuple);

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 653;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 653;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 653;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "coooooo";
goto frame_exception_exit_1;
}
branch_no_12:;
goto branch_end_11;
branch_no_11:;
{
bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(var_client_max_window_bits);
tmp_cmp_expr_left_7 = var_client_max_window_bits;
tmp_cmp_expr_right_7 = Py_True;
tmp_condition_result_13 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_13 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_11 = Nuitka_Cell_GET(par_self);
tmp_assign_source_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_client_max_window_bits);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 655;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_client_max_window_bits;
    assert(old != NULL);
    var_client_max_window_bits = tmp_assign_source_16;
    Py_DECREF(old);
}

}
goto branch_end_13;
branch_no_13:;
{
nuitka_bool tmp_condition_result_14;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_12 = Nuitka_Cell_GET(par_self);
tmp_cmp_expr_left_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_client_max_window_bits);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 656;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_client_max_window_bits);
tmp_cmp_expr_right_8 = var_client_max_window_bits;
tmp_condition_result_14 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 656;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_13 = Nuitka_Cell_GET(par_self);
tmp_assign_source_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_client_max_window_bits);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 657;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_client_max_window_bits;
    assert(old != NULL);
    var_client_max_window_bits = tmp_assign_source_17;
    Py_DECREF(old);
}

}
branch_no_14:;
branch_end_13:;
branch_end_11:;
branch_end_9:;
{
PyObject *tmp_tuple_element_3;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_value_4 = module_var_accessor_websockets$extensions$permessage_deflate$_build_parameters(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__build_parameters);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 660;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_server_no_context_takeover);
tmp_args_element_value_2 = var_server_no_context_takeover;
CHECK_OBJECT(var_client_no_context_takeover);
tmp_args_element_value_3 = var_client_no_context_takeover;
CHECK_OBJECT(var_server_max_window_bits);
tmp_args_element_value_4 = var_server_max_window_bits;
CHECK_OBJECT(var_client_max_window_bits);
tmp_args_element_value_5 = var_client_max_window_bits;
frame_frame_websockets$extensions$permessage_deflate$$$function__12_process_request_params->m_frame.f_lineno = 660;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_tuple_element_3 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_4, call_args);
}

if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 660;
type_description_1 = "coooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_args_element_value_9;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_args_element_value_10;
PyObject *tmp_expression_value_14;
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_3);
tmp_called_value_5 = module_var_accessor_websockets$extensions$permessage_deflate$PerMessageDeflate(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PerMessageDeflate);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 666;
type_description_1 = "coooooo";
    goto tuple_build_exception_2;
}
CHECK_OBJECT(var_client_no_context_takeover);
tmp_args_element_value_6 = var_client_no_context_takeover;
CHECK_OBJECT(var_server_no_context_takeover);
tmp_args_element_value_7 = var_server_no_context_takeover;
CHECK_OBJECT(var_client_max_window_bits);
tmp_or_left_value_1 = var_client_max_window_bits;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 669;
type_description_1 = "coooooo";
    goto tuple_build_exception_2;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_or_right_value_1 = mod_consts.const_int_pos_15;
tmp_args_element_value_8 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_args_element_value_8 = tmp_or_left_value_1;
or_end_1:;
CHECK_OBJECT(var_server_max_window_bits);
tmp_or_left_value_2 = var_server_max_window_bits;
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 670;
type_description_1 = "coooooo";
    goto tuple_build_exception_2;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
tmp_or_right_value_2 = mod_consts.const_int_pos_15;
tmp_args_element_value_9 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_args_element_value_9 = tmp_or_left_value_2;
or_end_2:;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_14 = Nuitka_Cell_GET(par_self);
tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_compress_settings);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 671;
type_description_1 = "coooooo";
    goto tuple_build_exception_2;
}
frame_frame_websockets$extensions$permessage_deflate$$$function__12_process_request_params->m_frame.f_lineno = 666;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_tuple_element_3 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 666;
type_description_1 = "coooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_3);
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$extensions$permessage_deflate$$$function__12_process_request_params, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$extensions$permessage_deflate$$$function__12_process_request_params->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$extensions$permessage_deflate$$$function__12_process_request_params, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$extensions$permessage_deflate$$$function__12_process_request_params,
    type_description_1,
    par_self,
    par_params,
    par_accepted_extensions,
    var_server_no_context_takeover,
    var_client_no_context_takeover,
    var_server_max_window_bits,
    var_client_max_window_bits
);


// Release cached frame if used for exception.
if (frame_frame_websockets$extensions$permessage_deflate$$$function__12_process_request_params == cache_frame_frame_websockets$extensions$permessage_deflate$$$function__12_process_request_params) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__12_process_request_params);
    cache_frame_frame_websockets$extensions$permessage_deflate$$$function__12_process_request_params = NULL;
}

assertFrameObject(frame_frame_websockets$extensions$permessage_deflate$$$function__12_process_request_params);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(var_server_no_context_takeover);
CHECK_OBJECT(var_server_no_context_takeover);
Py_DECREF(var_server_no_context_takeover);
var_server_no_context_takeover = NULL;
CHECK_OBJECT(var_client_no_context_takeover);
CHECK_OBJECT(var_client_no_context_takeover);
Py_DECREF(var_client_no_context_takeover);
var_client_no_context_takeover = NULL;
CHECK_OBJECT(var_server_max_window_bits);
CHECK_OBJECT(var_server_max_window_bits);
Py_DECREF(var_server_max_window_bits);
var_server_max_window_bits = NULL;
CHECK_OBJECT(var_client_max_window_bits);
CHECK_OBJECT(var_client_max_window_bits);
Py_DECREF(var_client_max_window_bits);
var_client_max_window_bits = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
Py_XDECREF(var_server_no_context_takeover);
var_server_no_context_takeover = NULL;
Py_XDECREF(var_client_no_context_takeover);
var_client_no_context_takeover = NULL;
Py_XDECREF(var_server_max_window_bits);
var_server_max_window_bits = NULL;
Py_XDECREF(var_client_max_window_bits);
var_client_max_window_bits = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_params);
Py_DECREF(par_params);
CHECK_OBJECT(par_accepted_extensions);
Py_DECREF(par_accepted_extensions);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_params);
Py_DECREF(par_params);
CHECK_OBJECT(par_accepted_extensions);
Py_DECREF(par_accepted_extensions);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct websockets$extensions$permessage_deflate$$$function__12_process_request_params$$$genexpr__1_genexpr_locals {
PyObject *var_other;
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

static PyObject *websockets$extensions$permessage_deflate$$$function__12_process_request_params$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct websockets$extensions$permessage_deflate$$$function__12_process_request_params$$$genexpr__1_genexpr_locals *generator_heap = (struct websockets$extensions$permessage_deflate$$$function__12_process_request_params$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_other = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_8370eec31917d030f893ece8cfac8c78, module_websockets$extensions$permessage_deflate, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
generator_heap->type_description_1 = "Noc";
generator_heap->exception_lineno = 573;
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
    PyObject *old = generator_heap->var_other;
    generator_heap->var_other = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_other);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_other);
tmp_expression_value_2 = generator_heap->var_other;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_name);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 573;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
Py_DECREF(tmp_cmp_expr_left_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 573;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}

tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_name);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

generator_heap->exception_lineno = 573;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
tmp_expression_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 573;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 573;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 573;
generator_heap->type_description_1 = "Noc";
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
    generator_heap->var_other,
    generator->m_closure[1]
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

Py_XDECREF(generator_heap->var_other);
generator_heap->var_other = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_other);
generator_heap->var_other = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_websockets$extensions$permessage_deflate$$$function__12_process_request_params$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        websockets$extensions$permessage_deflate$$$function__12_process_request_params$$$genexpr__1_genexpr_context,
        module_websockets$extensions$permessage_deflate,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_b30ca9af6e0a6141cf34e68449b8fe39,
#endif
        code_objects_8370eec31917d030f893ece8cfac8c78,
        closure,
        2,
#if 1
        sizeof(struct websockets$extensions$permessage_deflate$$$function__12_process_request_params$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_extensions = python_pars[0];
PyObject *tmp_genexpr_1__$0 = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
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
// Tried code:
if (isFrameUnusable(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate)) {
    Py_XDECREF(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate = MAKE_FUNCTION_FRAME(tstate, code_objects_4a75ea5677c5033c47fc90e7517887e5, module_websockets$extensions$permessage_deflate, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate->m_type_description == NULL);
frame_frame_websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate = cache_frame_frame_websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate);
assert(Py_REFCNT(frame_frame_websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate) == 2);

// Framed code:
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_any_arg_1;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_extensions);
tmp_iter_arg_1 = par_extensions;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 690;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_2;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_any_arg_1 = MAKE_GENERATOR_websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate$$$genexpr__1_genexpr(tstate, tmp_closure_1);

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
tmp_operand_value_1 = BUILTIN_ANY(tstate, tmp_any_arg_1);
CHECK_OBJECT(tmp_any_arg_1);
Py_DECREF(tmp_any_arg_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 688;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_list_arg_1;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_call_args_kw_split_1;
CHECK_OBJECT(par_extensions);
tmp_list_arg_1 = par_extensions;
tmp_add_expr_left_1 = MAKE_LIST(tstate, tmp_list_arg_1);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 692;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = module_var_accessor_websockets$extensions$permessage_deflate$ServerPerMessageDeflateFactory(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ServerPerMessageDeflateFactory);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 693;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_call_args_kw_split_1 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts.const_tuple_int_pos_12_int_pos_12_dict_8418af9c661d5b75fe018d2207c320cb_tuple, "iid");
frame_frame_websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate->m_frame.f_lineno = 693;
tmp_list_element_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(tmp_call_args_kw_split_1, 0), mod_consts.const_tuple_68c981209ca10d9441e73f14da690bfd_tuple);
CHECK_OBJECT(tmp_call_args_kw_split_1);
Py_DECREF(tmp_call_args_kw_split_1);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 693;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_add_expr_right_1, 0, tmp_list_element_1);
tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_LIST_LIST(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
assert(!(tmp_assign_source_3 == NULL));
{
    PyObject *old = par_extensions;
    assert(old != NULL);
    par_extensions = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_no_2:;
if (par_extensions == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_extensions);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 699;
type_description_1 = "o";
    goto frame_exception_exit_1;
}

tmp_return_value = par_extensions;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate,
    type_description_1,
    par_extensions
);


// Release cached frame if used for exception.
if (frame_frame_websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate == cache_frame_frame_websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate);
    cache_frame_frame_websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate = NULL;
}

assertFrameObject(frame_frame_websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_extensions);
par_extensions = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_extensions);
par_extensions = NULL;
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



#if 1
struct websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate$$$genexpr__1_genexpr_locals {
PyObject *var_ext_factory;
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

static PyObject *websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate$$$genexpr__1_genexpr_locals *generator_heap = (struct websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_ext_factory = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_bf84ffe51af2ac44295188d169cc5f1e, module_websockets$extensions$permessage_deflate, sizeof(void *)+sizeof(void *));
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
generator_heap->exception_lineno = 688;
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
    PyObject *old = generator_heap->var_ext_factory;
    generator_heap->var_ext_factory = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_ext_factory);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_ext_factory);
tmp_expression_value_2 = generator_heap->var_ext_factory;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_name);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 689;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_expression_value_3 = module_var_accessor_websockets$extensions$permessage_deflate$ServerPerMessageDeflateFactory(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_ServerPerMessageDeflateFactory);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

generator_heap->exception_lineno = 689;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_name);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

generator_heap->exception_lineno = 689;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_expression_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 689;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 689;
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


generator_heap->exception_lineno = 688;
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
    generator_heap->var_ext_factory
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

Py_XDECREF(generator_heap->var_ext_factory);
generator_heap->var_ext_factory = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_ext_factory);
generator_heap->var_ext_factory = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate$$$genexpr__1_genexpr_context,
        module_websockets$extensions$permessage_deflate,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_93f97c5f134a74c2003dd0c6ac295afd,
#endif
        code_objects_bf84ffe51af2ac44295188d169cc5f1e,
        closure,
        1,
#if 1
        sizeof(struct websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate,
        mod_consts.const_str_plain_enable_client_permessage_deflate,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5764f210c9da164945ca1e484ae6f060,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$extensions$permessage_deflate,
        mod_consts.const_str_digest_b21bc56b5062087773048e931f6e0ca4,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__11___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$extensions$permessage_deflate$$$function__11___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a96c233b5ef36c3c43f26110349b2cd2,
#endif
        code_objects_cba6c20a3b2f5bd3d7efc4c38f88c3f9,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$extensions$permessage_deflate,
        mod_consts.const_str_digest_a179c08a3f5f1955770c299a03c04918,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__12_process_request_params(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$extensions$permessage_deflate$$$function__12_process_request_params,
        mod_consts.const_str_plain_process_request_params,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_bb9c93350ed9258f8b9dd34181ca95d8,
#endif
        code_objects_936770eaee7c8967f2e804b6e561e74d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$extensions$permessage_deflate,
        mod_consts.const_str_digest_c0c390169658744fceb1900dcbbedaa5,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate,
        mod_consts.const_str_plain_enable_server_permessage_deflate,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_4a75ea5677c5033c47fc90e7517887e5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$extensions$permessage_deflate,
        mod_consts.const_str_digest_c3826d3b55c3177d0f07e0d1e66a4ace,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__1___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$extensions$permessage_deflate$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_486293ccf10cfc6b8cb6758d320366c2,
#endif
        code_objects_40ca3c73ce2b8e05af9ba5724c7c1903,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$extensions$permessage_deflate,
        mod_consts.const_str_digest_c10e84bee074718edad3b0ad6a805b82,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__2___repr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$extensions$permessage_deflate$$$function__2___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_bd9acee54ece92714b10ff0b173c640b,
#endif
        code_objects_945de4cb1bdb5b3481801a71359a188a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$extensions$permessage_deflate,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__3_decode(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$extensions$permessage_deflate$$$function__3_decode,
        mod_consts.const_str_plain_decode,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2d2f01567441eddc178b85bb5097d810,
#endif
        code_objects_75cadeb27d44742cf732bcb3d63785d4,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_websockets$extensions$permessage_deflate,
        mod_consts.const_str_digest_c930139b81667e31fb581632a18b7c30,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__4_encode(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$extensions$permessage_deflate$$$function__4_encode,
        mod_consts.const_str_plain_encode,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_dae140afa7a0e72e99ac249732b40639,
#endif
        code_objects_ecde6adb0efd9761a5dadab724ff3be3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$extensions$permessage_deflate,
        mod_consts.const_str_digest_c7bd42b79e5d8c02251b43374d20c465,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__5__build_parameters(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$extensions$permessage_deflate$$$function__5__build_parameters,
        mod_consts.const_str_plain__build_parameters,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2479fe4a5ba4a2975da6087bc3cb29f1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$extensions$permessage_deflate,
        mod_consts.const_str_digest_d3a29b2f6685155f693350b3300b1895,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__6__extract_parameters(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$extensions$permessage_deflate$$$function__6__extract_parameters,
        mod_consts.const_str_plain__extract_parameters,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2c99e2c1f62d8e3c49ad7c181a50a2eb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$extensions$permessage_deflate,
        mod_consts.const_str_digest_b0fa69a29f282d08a4184133a201d95f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__7___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$extensions$permessage_deflate$$$function__7___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_eabeb705064fe346caf790181fe28ca8,
#endif
        code_objects_4ff587d22418f2aa1447a07428c2dc58,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$extensions$permessage_deflate,
        mod_consts.const_str_digest_a179c08a3f5f1955770c299a03c04918,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__8_get_request_params(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$extensions$permessage_deflate$$$function__8_get_request_params,
        mod_consts.const_str_plain_get_request_params,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3aa1e38b07e52b178e94011317e8e3ec,
#endif
        code_objects_d3b58d26f126fa487407f540bc4832d9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$extensions$permessage_deflate,
        mod_consts.const_str_digest_04e988f451cec288f7af9a08447c9d97,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__9_process_response_params(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$extensions$permessage_deflate$$$function__9_process_response_params,
        mod_consts.const_str_plain_process_response_params,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a06e95cdb30fd0668a9cec405de48464,
#endif
        code_objects_2aeff945c1774c6d7b4967f388110c7a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$extensions$permessage_deflate,
        mod_consts.const_str_digest_c27ecd866ab726224f251dd7448ca03a,
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

static function_impl_code const function_table_websockets$extensions$permessage_deflate[] = {
impl_websockets$extensions$permessage_deflate$$$function__1___init__,
impl_websockets$extensions$permessage_deflate$$$function__2___repr__,
impl_websockets$extensions$permessage_deflate$$$function__3_decode,
impl_websockets$extensions$permessage_deflate$$$function__4_encode,
impl_websockets$extensions$permessage_deflate$$$function__5__build_parameters,
impl_websockets$extensions$permessage_deflate$$$function__6__extract_parameters,
impl_websockets$extensions$permessage_deflate$$$function__7___init__,
impl_websockets$extensions$permessage_deflate$$$function__8_get_request_params,
impl_websockets$extensions$permessage_deflate$$$function__9_process_response_params,
impl_websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate,
impl_websockets$extensions$permessage_deflate$$$function__11___init__,
impl_websockets$extensions$permessage_deflate$$$function__12_process_request_params,
impl_websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate,
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

    return Nuitka_Function_GetFunctionState(function, function_table_websockets$extensions$permessage_deflate);
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
        module_websockets$extensions$permessage_deflate,
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
        function_table_websockets$extensions$permessage_deflate,
        sizeof(function_table_websockets$extensions$permessage_deflate) / sizeof(function_impl_code)
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
static char const *module_full_name = "websockets.extensions.permessage_deflate";
#endif

// Internal entry point for module code.
PyObject *module_code_websockets$extensions$permessage_deflate(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("websockets$extensions$permessage_deflate");

    // Store the module for future use.
    module_websockets$extensions$permessage_deflate = module;

    moduledict_websockets$extensions$permessage_deflate = MODULE_DICT(module_websockets$extensions$permessage_deflate);

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
        PRINT_STRING("websockets$extensions$permessage_deflate: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("websockets$extensions$permessage_deflate: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("websockets$extensions$permessage_deflate: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "websockets.extensions.permessage_deflate" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initwebsockets$extensions$permessage_deflate\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_websockets$extensions$permessage_deflate,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_websockets$extensions$permessage_deflate,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_websockets$extensions$permessage_deflate,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_websockets$extensions$permessage_deflate,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_websockets$extensions$permessage_deflate,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_websockets$extensions$permessage_deflate);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_websockets$extensions$permessage_deflate);
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

        UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var_bits = NULL;
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
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$extensions$permessage_deflate;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_33 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
PyObject *locals_websockets$extensions$permessage_deflate$$$class__2_ClientPerMessageDeflateFactory_298 = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$extensions$permessage_deflate$$$class__2_ClientPerMessageDeflateFactory_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
PyObject *locals_websockets$extensions$permessage_deflate$$$class__3_ServerPerMessageDeflateFactory_498 = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$extensions$permessage_deflate$$$class__3_ServerPerMessageDeflateFactory_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_websockets$extensions$permessage_deflate = MAKE_MODULE_FRAME(code_objects_bcec8e8b4ec602481effe76f78ca15ab, module_websockets$extensions$permessage_deflate);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$extensions$permessage_deflate);
assert(Py_REFCNT(frame_frame_websockets$extensions$permessage_deflate) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_websockets$extensions$permessage_deflate$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_websockets$extensions$permessage_deflate$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_zlib;
tmp_globals_arg_value_1 = (PyObject *)moduledict_websockets$extensions$permessage_deflate;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_websockets$extensions$permessage_deflate->m_frame.f_lineno = 3;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_zlib, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
tmp_globals_arg_value_2 = (PyObject *)moduledict_websockets$extensions$permessage_deflate;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Sequence_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_websockets$extensions$permessage_deflate->m_frame.f_lineno = 4;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_websockets$extensions$permessage_deflate,
        mod_consts.const_str_plain_Sequence,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Sequence);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_Sequence, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_7 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_7);
tmp_import_from_1__module = tmp_assign_source_7;
}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_websockets$extensions$permessage_deflate,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_8);
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
        (PyObject *)moduledict_websockets$extensions$permessage_deflate,
        mod_consts.const_str_plain_Literal,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Literal);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal, tmp_assign_source_9);
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
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = const_str_empty;
tmp_globals_arg_value_3 = (PyObject *)moduledict_websockets$extensions$permessage_deflate;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_frames_tuple;
tmp_level_value_3 = mod_consts.const_int_pos_2;
frame_frame_websockets$extensions$permessage_deflate->m_frame.f_lineno = 7;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_websockets$extensions$permessage_deflate,
        mod_consts.const_str_plain_frames,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_frames);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_frames, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_exceptions;
tmp_globals_arg_value_4 = (PyObject *)moduledict_websockets$extensions$permessage_deflate;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_d4d1241b77eb0028ee5ae78ab2a00fbf_tuple;
tmp_level_value_4 = mod_consts.const_int_pos_2;
frame_frame_websockets$extensions$permessage_deflate->m_frame.f_lineno = 8;
tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_11;
}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_websockets$extensions$permessage_deflate,
        mod_consts.const_str_plain_DuplicateParameter,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_DuplicateParameter);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_DuplicateParameter, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_6 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_websockets$extensions$permessage_deflate,
        mod_consts.const_str_plain_InvalidParameterName,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_InvalidParameterName);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidParameterName, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_7 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_websockets$extensions$permessage_deflate,
        mod_consts.const_str_plain_InvalidParameterValue,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_InvalidParameterValue);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidParameterValue, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_8 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_websockets$extensions$permessage_deflate,
        mod_consts.const_str_plain_NegotiationError,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_NegotiationError);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_NegotiationError, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_9 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_websockets$extensions$permessage_deflate,
        mod_consts.const_str_plain_PayloadTooBig,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_PayloadTooBig);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_PayloadTooBig, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_10 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_websockets$extensions$permessage_deflate,
        mod_consts.const_str_plain_ProtocolError,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_ProtocolError);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_ProtocolError, tmp_assign_source_17);
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
PyObject *tmp_assign_source_18;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_typing;
tmp_globals_arg_value_5 = (PyObject *)moduledict_websockets$extensions$permessage_deflate;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_83ccdc8beeec41eeab73cbad6ceeafc3_tuple;
tmp_level_value_5 = mod_consts.const_int_pos_2;
frame_frame_websockets$extensions$permessage_deflate->m_frame.f_lineno = 16;
tmp_assign_source_18 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_18;
}
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_11 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_websockets$extensions$permessage_deflate,
        mod_consts.const_str_plain_BytesLike,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_BytesLike);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_BytesLike, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_12 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_websockets$extensions$permessage_deflate,
        mod_consts.const_str_plain_ExtensionName,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_ExtensionName);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_ExtensionName, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_13 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_websockets$extensions$permessage_deflate,
        mod_consts.const_str_plain_ExtensionParameter,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_ExtensionParameter);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_ExtensionParameter, tmp_assign_source_21);
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
PyObject *tmp_assign_source_22;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_base;
tmp_globals_arg_value_6 = (PyObject *)moduledict_websockets$extensions$permessage_deflate;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_409cd71a9f91f1e1c7b636b1bfa5e055_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_websockets$extensions$permessage_deflate->m_frame.f_lineno = 17;
tmp_assign_source_22 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_22;
}
// Tried code:
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_14 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_websockets$extensions$permessage_deflate,
        mod_consts.const_str_plain_ClientExtensionFactory,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_ClientExtensionFactory);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_ClientExtensionFactory, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_15 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_websockets$extensions$permessage_deflate,
        mod_consts.const_str_plain_Extension,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_Extension);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_Extension, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_16;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_16 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_websockets$extensions$permessage_deflate,
        mod_consts.const_str_plain_ServerExtensionFactory,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_ServerExtensionFactory);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_ServerExtensionFactory, tmp_assign_source_25);
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
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = MAKE_LIST5(tstate, mod_consts.const_list_0cb022d28e4d2d95c0451f65e47f5a08_list);
UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = mod_consts.const_bytes_digest_4e69fbf728e33ad1a4bd582763689e5d;
UPDATE_STRING_DICT0(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain__EMPTY_UNCOMPRESSED_BLOCK, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
{
PyObject *tmp_assign_source_29;
PyObject *tmp_iter_arg_1;
tmp_iter_arg_1 = mod_consts.const_xrange_8_16;
tmp_assign_source_29 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
assert(!(tmp_assign_source_29 == NULL));
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_29;
}
{
PyObject *tmp_assign_source_30;
tmp_assign_source_30 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_30;
}
// Tried code:
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_31;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_31 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_31 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

exception_lineno = 30;
        goto try_except_handler_6;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_31;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_32;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_32 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_bits;
    outline_0_var_bits = tmp_assign_source_32;
    Py_INCREF(outline_0_var_bits);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_unicode_arg_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var_bits);
tmp_unicode_arg_1 = outline_0_var_bits;
tmp_append_value_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_6;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_6;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_6;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_assign_source_28 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_assign_source_28);
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
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
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
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_5;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_XDECREF(outline_0_var_bits);
outline_0_var_bits = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_bits);
outline_0_var_bits = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 30;
goto frame_exception_exit_1;
outline_result_1:;
UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain__MAX_WINDOW_BITS_VALUES, tmp_assign_source_28);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_33;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_websockets$extensions$permessage_deflate$Extension(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Extension);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;

    goto try_except_handler_7;
}
tmp_assign_source_33 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_33, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_33;
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_34 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_34;
}
{
PyObject *tmp_assign_source_35;
tmp_assign_source_35 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_35;
}
{
PyObject *tmp_assign_source_36;
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


exception_lineno = 33;

    goto try_except_handler_7;
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


exception_lineno = 33;

    goto try_except_handler_7;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_7;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_36 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_36;
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


exception_lineno = 33;

    goto try_except_handler_7;
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
PyObject *tmp_assign_source_37;
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


exception_lineno = 33;

    goto try_except_handler_7;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_PerMessageDeflate;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_websockets$extensions$permessage_deflate->m_frame.f_lineno = 33;
tmp_assign_source_37 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_37;
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


exception_lineno = 33;

    goto try_except_handler_7;
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
PyObject *tmp_name_value_7;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_7 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_7, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_7;
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


exception_lineno = 33;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_7;
}
frame_frame_websockets$extensions$permessage_deflate->m_frame.f_lineno = 33;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 33;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_7;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_38;
tmp_assign_source_38 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_38;
}
branch_end_1:;
{
PyObject *tmp_assign_source_39;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_33 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_1cd615c9c7c9240af135c4a3ac3422eb;
tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_33, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_digest_ed9c829c87ee4162c52a7d15807d7caa;
tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_33, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_plain_PerMessageDeflate;
tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_33, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_int_pos_33;
tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_33, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_9;
}
frame_frame_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_2 = MAKE_CLASS_FRAME(tstate, code_objects_b622438608ec81a13add00746101db5a, module_websockets$extensions$permessage_deflate, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_2);
assert(Py_REFCNT(frame_frame_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_2) == 2);

// Framed code:
{
PyObject *tmp_called_value_2;
tmp_called_value_2 = PyObject_GetItem(locals_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_33, mod_consts.const_str_plain_ExtensionName);

if (tmp_called_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_2 = module_var_accessor_websockets$extensions$permessage_deflate$ExtensionName(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ExtensionName);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 39;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_2->m_frame.f_lineno = 39;
tmp_dictset_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_f94a7f1709d232bef66090e158c3c489_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_33, const_str_plain_name, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_1;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_6dcb583cb628ce52e413ee031d009704);
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__1___init__(tstate, tmp_defaults_1, tmp_annotations_1);

tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_33, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__2___repr__(tstate, tmp_annotations_2);

tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_33, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_3;
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_941c36190bd5a33903fe24d231e219ad);
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_c04f60f63fcc55182ba198ff6f16f46a);

tmp_dictset_value = MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__3_decode(tstate, tmp_kw_defaults_1, tmp_annotations_3);

tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_33, mod_consts.const_str_plain_decode, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_dc08552453e7e97fc97b32a4b9c78af5);

tmp_dictset_value = MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__4_encode(tstate, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_33, mod_consts.const_str_plain_encode, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_2,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_9;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_1364c606a4096c508ca02f3a952ed45a_tuple;
tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_33, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_9;
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


exception_lineno = 33;

    goto try_except_handler_9;
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
tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_33, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_9;
}
branch_no_3:;
{
PyObject *tmp_assign_source_40;
PyObject *tmp_called_value_3;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_PerMessageDeflate;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_33;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_websockets$extensions$permessage_deflate->m_frame.f_lineno = 33;
tmp_assign_source_40 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_9;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_40;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_39 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_39);
goto try_return_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_DECREF(locals_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_33);
locals_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_33 = NULL;
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_33);
locals_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_33 = NULL;
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
goto outline_result_3;
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
exception_lineno = 33;
goto try_except_handler_7;
outline_result_3:;
UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_PerMessageDeflate, tmp_assign_source_39);
}
goto try_end_5;
// Exception handler code:
try_except_handler_7:;
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
goto outline_result_2;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_2:;
CHECK_OBJECT(tmp_outline_return_value_1);
Py_DECREF(tmp_outline_return_value_1);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_7542c8623e449d1cb467384145e5efc0);

tmp_assign_source_41 = MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__5__build_parameters(tstate, tmp_annotations_5);

UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain__build_parameters, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_66386e192c49d4dc46d7525b6ece563f);

tmp_assign_source_42 = MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__6__extract_parameters(tstate, tmp_annotations_6);

UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain__extract_parameters, tmp_assign_source_42);
}
{
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_43;
PyObject *tmp_tuple_element_5;
tmp_tuple_element_5 = module_var_accessor_websockets$extensions$permessage_deflate$ClientExtensionFactory(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ClientExtensionFactory);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 298;

    goto try_except_handler_10;
}
tmp_assign_source_43 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_43, 0, tmp_tuple_element_5);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_43;
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_44 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_44;
}
{
PyObject *tmp_assign_source_45;
tmp_assign_source_45 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_45;
}
{
PyObject *tmp_assign_source_46;
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


exception_lineno = 298;

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
tmp_expression_value_7 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;

    goto try_except_handler_10;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;

    goto try_except_handler_10;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_46 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_46;
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


exception_lineno = 298;

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
PyObject *tmp_assign_source_47;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;

    goto try_except_handler_10;
}
tmp_tuple_element_6 = mod_consts.const_str_plain_ClientPerMessageDeflateFactory;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_websockets$extensions$permessage_deflate->m_frame.f_lineno = 298;
tmp_assign_source_47 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_47;
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


exception_lineno = 298;

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
PyObject *tmp_expression_value_11;
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_8 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_8, tmp_default_value_2);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;

    goto try_except_handler_10;
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


exception_lineno = 298;

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


exception_lineno = 298;

    goto try_except_handler_10;
}
frame_frame_websockets$extensions$permessage_deflate->m_frame.f_lineno = 298;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 298;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_10;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_48;
tmp_assign_source_48 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_48;
}
branch_end_4:;
{
PyObject *tmp_assign_source_49;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_websockets$extensions$permessage_deflate$$$class__2_ClientPerMessageDeflateFactory_298 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_1cd615c9c7c9240af135c4a3ac3422eb;
tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__2_ClientPerMessageDeflateFactory_298, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_str_digest_55c30d0c7d4897c0e3863a128c73508a;
tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__2_ClientPerMessageDeflateFactory_298, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_str_plain_ClientPerMessageDeflateFactory;
tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__2_ClientPerMessageDeflateFactory_298, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_int_pos_298;
tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__2_ClientPerMessageDeflateFactory_298, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;

    goto try_except_handler_12;
}
frame_frame_websockets$extensions$permessage_deflate$$$class__2_ClientPerMessageDeflateFactory_3 = MAKE_CLASS_FRAME(tstate, code_objects_39e2135090366470df1cd48b5b6b0ced, module_websockets$extensions$permessage_deflate, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$extensions$permessage_deflate$$$class__2_ClientPerMessageDeflateFactory_3);
assert(Py_REFCNT(frame_frame_websockets$extensions$permessage_deflate$$$class__2_ClientPerMessageDeflateFactory_3) == 2);

// Framed code:
{
PyObject *tmp_called_value_5;
tmp_called_value_5 = PyObject_GetItem(locals_websockets$extensions$permessage_deflate$$$class__2_ClientPerMessageDeflateFactory_298, mod_consts.const_str_plain_ExtensionName);

if (tmp_called_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_5 = module_var_accessor_websockets$extensions$permessage_deflate$ExtensionName(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ExtensionName);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 322;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_websockets$extensions$permessage_deflate$$$class__2_ClientPerMessageDeflateFactory_3->m_frame.f_lineno = 322;
tmp_dictset_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_digest_f94a7f1709d232bef66090e158c3c489_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__2_ClientPerMessageDeflateFactory_298, const_str_plain_name, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_7;
tmp_defaults_2 = mod_consts.const_tuple_false_false_none_true_none_tuple;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_e1ddeb2dad3e831c139bb802c5f6ac27);
Py_INCREF(tmp_defaults_2);

tmp_dictset_value = MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__7___init__(tstate, tmp_defaults_2, tmp_annotations_7);

tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__2_ClientPerMessageDeflateFactory_298, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_7d5343c206102798af6657547d2cd14d);

tmp_dictset_value = MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__8_get_request_params(tstate, tmp_annotations_8);

tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__2_ClientPerMessageDeflateFactory_298, mod_consts.const_str_plain_get_request_params, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_9;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_a3973982c3835d7267d813c3dd056557);

tmp_dictset_value = MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__9_process_response_params(tstate, tmp_annotations_9);

tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__2_ClientPerMessageDeflateFactory_298, mod_consts.const_str_plain_process_response_params, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$extensions$permessage_deflate$$$class__2_ClientPerMessageDeflateFactory_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$extensions$permessage_deflate$$$class__2_ClientPerMessageDeflateFactory_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$extensions$permessage_deflate$$$class__2_ClientPerMessageDeflateFactory_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$extensions$permessage_deflate$$$class__2_ClientPerMessageDeflateFactory_3,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_websockets$extensions$permessage_deflate$$$class__2_ClientPerMessageDeflateFactory_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_12;
skip_nested_handling_2:;
tmp_dictset_value = mod_consts.const_tuple_abc9055bca592d44d6a7206031f1db9f_tuple;
tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__2_ClientPerMessageDeflateFactory_298, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;

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


exception_lineno = 298;

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
tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__2_ClientPerMessageDeflateFactory_298, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;

    goto try_except_handler_12;
}
branch_no_6:;
{
PyObject *tmp_assign_source_50;
PyObject *tmp_called_value_6;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_6 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_8 = mod_consts.const_str_plain_ClientPerMessageDeflateFactory;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = locals_websockets$extensions$permessage_deflate$$$class__2_ClientPerMessageDeflateFactory_298;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_websockets$extensions$permessage_deflate->m_frame.f_lineno = 298;
tmp_assign_source_50 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;

    goto try_except_handler_12;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_50;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_49 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_49);
goto try_return_handler_12;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
Py_DECREF(locals_websockets$extensions$permessage_deflate$$$class__2_ClientPerMessageDeflateFactory_298);
locals_websockets$extensions$permessage_deflate$$$class__2_ClientPerMessageDeflateFactory_298 = NULL;
goto try_return_handler_11;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_websockets$extensions$permessage_deflate$$$class__2_ClientPerMessageDeflateFactory_298);
locals_websockets$extensions$permessage_deflate$$$class__2_ClientPerMessageDeflateFactory_298 = NULL;
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
goto outline_result_5;
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
exception_lineno = 298;
goto try_except_handler_10;
outline_result_5:;
UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_ClientPerMessageDeflateFactory, tmp_assign_source_49);
}
goto try_end_6;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
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
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

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
goto outline_result_4;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_4:;
CHECK_OBJECT(tmp_outline_return_value_2);
Py_DECREF(tmp_outline_return_value_2);
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_49c69c18623e9b58c04d5d145ef1283c);

tmp_assign_source_51 = MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate(tstate, tmp_annotations_10);

UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_enable_client_permessage_deflate, tmp_assign_source_51);
}
{
PyObject *tmp_outline_return_value_3;
// Tried code:
{
PyObject *tmp_assign_source_52;
PyObject *tmp_tuple_element_9;
tmp_tuple_element_9 = module_var_accessor_websockets$extensions$permessage_deflate$ServerExtensionFactory(tstate);
if (unlikely(tmp_tuple_element_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ServerExtensionFactory);
}

if (tmp_tuple_element_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 498;

    goto try_except_handler_13;
}
tmp_assign_source_52 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_52, 0, tmp_tuple_element_9);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_52;
}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_53 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 498;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_53;
}
{
PyObject *tmp_assign_source_54;
tmp_assign_source_54 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_54;
}
{
PyObject *tmp_assign_source_55;
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


exception_lineno = 498;

    goto try_except_handler_13;
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


exception_lineno = 498;

    goto try_except_handler_13;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 498;

    goto try_except_handler_13;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_55 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 498;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_55;
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


exception_lineno = 498;

    goto try_except_handler_13;
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
PyObject *tmp_assign_source_56;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_10;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_15 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 498;

    goto try_except_handler_13;
}
tmp_tuple_element_10 = mod_consts.const_str_plain_ServerPerMessageDeflateFactory;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_10 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_websockets$extensions$permessage_deflate->m_frame.f_lineno = 498;
tmp_assign_source_56 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 498;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_56;
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


exception_lineno = 498;

    goto try_except_handler_13;
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
PyObject *tmp_name_value_9;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_17 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_9 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_11 = BUILTIN_GETATTR(tstate, tmp_expression_value_17, tmp_name_value_9, tmp_default_value_3);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 498;

    goto try_except_handler_13;
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


exception_lineno = 498;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_11);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_13;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 498;

    goto try_except_handler_13;
}
frame_frame_websockets$extensions$permessage_deflate->m_frame.f_lineno = 498;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 498;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_13;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_57;
tmp_assign_source_57 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_57;
}
branch_end_7:;
{
PyObject *tmp_assign_source_58;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_websockets$extensions$permessage_deflate$$$class__3_ServerPerMessageDeflateFactory_498 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_1cd615c9c7c9240af135c4a3ac3422eb;
tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__3_ServerPerMessageDeflateFactory_498, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 498;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_str_digest_89ee7863fbc07534e7cb759d845281a4;
tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__3_ServerPerMessageDeflateFactory_498, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 498;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_str_plain_ServerPerMessageDeflateFactory;
tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__3_ServerPerMessageDeflateFactory_498, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 498;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_int_pos_498;
tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__3_ServerPerMessageDeflateFactory_498, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 498;

    goto try_except_handler_15;
}
frame_frame_websockets$extensions$permessage_deflate$$$class__3_ServerPerMessageDeflateFactory_4 = MAKE_CLASS_FRAME(tstate, code_objects_7b53e648ba8098f349d6b43238314ec0, module_websockets$extensions$permessage_deflate, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$extensions$permessage_deflate$$$class__3_ServerPerMessageDeflateFactory_4);
assert(Py_REFCNT(frame_frame_websockets$extensions$permessage_deflate$$$class__3_ServerPerMessageDeflateFactory_4) == 2);

// Framed code:
{
PyObject *tmp_called_value_8;
tmp_called_value_8 = PyObject_GetItem(locals_websockets$extensions$permessage_deflate$$$class__3_ServerPerMessageDeflateFactory_498, mod_consts.const_str_plain_ExtensionName);

if (tmp_called_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_8 = module_var_accessor_websockets$extensions$permessage_deflate$ExtensionName(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ExtensionName);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 525;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_called_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

frame_frame_websockets$extensions$permessage_deflate$$$class__3_ServerPerMessageDeflateFactory_4->m_frame.f_lineno = 525;
tmp_dictset_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_8, mod_consts.const_tuple_str_digest_f94a7f1709d232bef66090e158c3c489_tuple);

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 525;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__3_ServerPerMessageDeflateFactory_498, const_str_plain_name, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 525;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_defaults_3;
PyObject *tmp_annotations_11;
tmp_defaults_3 = mod_consts.const_tuple_false_false_none_none_none_false_tuple;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_7722afae97baf8b06dc92453c47bcb07);
Py_INCREF(tmp_defaults_3);

tmp_dictset_value = MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__11___init__(tstate, tmp_defaults_3, tmp_annotations_11);

tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__3_ServerPerMessageDeflateFactory_498, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 527;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_12;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_e0c3e9acd6cba7009bfa22e3a902a9db);

tmp_dictset_value = MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__12_process_request_params(tstate, tmp_annotations_12);

tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__3_ServerPerMessageDeflateFactory_498, mod_consts.const_str_plain_process_request_params, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 562;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$extensions$permessage_deflate$$$class__3_ServerPerMessageDeflateFactory_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$extensions$permessage_deflate$$$class__3_ServerPerMessageDeflateFactory_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$extensions$permessage_deflate$$$class__3_ServerPerMessageDeflateFactory_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$extensions$permessage_deflate$$$class__3_ServerPerMessageDeflateFactory_4,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_websockets$extensions$permessage_deflate$$$class__3_ServerPerMessageDeflateFactory_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_15;
skip_nested_handling_3:;
tmp_dictset_value = mod_consts.const_tuple_9e80f4ce538d0417d538e530310b0f2e_tuple;
tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__3_ServerPerMessageDeflateFactory_498, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 498;

    goto try_except_handler_15;
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


exception_lineno = 498;

    goto try_except_handler_15;
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
tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__3_ServerPerMessageDeflateFactory_498, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 498;

    goto try_except_handler_15;
}
branch_no_9:;
{
PyObject *tmp_assign_source_59;
PyObject *tmp_called_value_9;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_12;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_9 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_12 = mod_consts.const_str_plain_ServerPerMessageDeflateFactory;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_12 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_12);
tmp_tuple_element_12 = locals_websockets$extensions$permessage_deflate$$$class__3_ServerPerMessageDeflateFactory_498;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_websockets$extensions$permessage_deflate->m_frame.f_lineno = 498;
tmp_assign_source_59 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 498;

    goto try_except_handler_15;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_59;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_58 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_58);
goto try_return_handler_15;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_15:;
Py_DECREF(locals_websockets$extensions$permessage_deflate$$$class__3_ServerPerMessageDeflateFactory_498);
locals_websockets$extensions$permessage_deflate$$$class__3_ServerPerMessageDeflateFactory_498 = NULL;
goto try_return_handler_14;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_websockets$extensions$permessage_deflate$$$class__3_ServerPerMessageDeflateFactory_498);
locals_websockets$extensions$permessage_deflate$$$class__3_ServerPerMessageDeflateFactory_498 = NULL;
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
goto outline_result_7;
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
exception_lineno = 498;
goto try_except_handler_13;
outline_result_7:;
UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_ServerPerMessageDeflateFactory, tmp_assign_source_58);
}
goto try_end_7;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
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
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

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
goto outline_result_6;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_6:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$extensions$permessage_deflate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$extensions$permessage_deflate->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$extensions$permessage_deflate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_websockets$extensions$permessage_deflate);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_4:;
{
PyObject *tmp_assign_source_60;
PyObject *tmp_annotations_13;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_71c51b6e1b0b6e0ab53bd806dae73a6e);

tmp_assign_source_60 = MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate(tstate, tmp_annotations_13);

UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts.const_str_plain_enable_server_permessage_deflate, tmp_assign_source_60);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("websockets$extensions$permessage_deflate", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "websockets.extensions.permessage_deflate" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_websockets$extensions$permessage_deflate);
    return module_websockets$extensions$permessage_deflate;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("websockets$extensions$permessage_deflate", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

/* Generated code for Python module 'rsa$pkcs1'
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



/* The "module_rsa$pkcs1" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_rsa$pkcs1;
PyDictObject *moduledict_rsa$pkcs1;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_int_pos_11;
PyObject *const_str_digest_36bfa1361832794c1e78e5a2976574b0;
PyObject *const_int_pos_3;
PyObject *const_str_plain_padding;
PyObject *const_str_plain_padding_length;
PyObject *const_str_plain_urandom;
PyObject *const_int_pos_5;
PyObject *const_str_plain_replace;
PyObject *const_tuple_bytes_null_bytes_empty_tuple;
PyObject *const_bytes_digest_9a2bb00eeadd7f9a36ea9bb9096c65a8;
PyObject *const_bytes_null;
PyObject *const_str_digest_189d1a5a8cbb8dd88fe02545b3e5cd01;
PyObject *const_bytes_digest_edd34ccaf3601e7d40e83e6a42a0da40;
PyObject *const_bytes_chr_255;
PyObject *const_str_digest_a61e0f945542e8bf2cc6323b95f66edb;
PyObject *const_str_plain_common;
PyObject *const_str_plain_byte_size;
PyObject *const_str_plain_n;
PyObject *const_str_plain__pad_for_encryption;
PyObject *const_str_plain_transform;
PyObject *const_str_plain_bytes2int;
PyObject *const_str_plain_core;
PyObject *const_str_plain_encrypt_int;
PyObject *const_str_plain_e;
PyObject *const_str_plain_int2bytes;
PyObject *const_str_digest_6b1eb3ee3a5feec5ea62f4e868b5c56c;
PyObject *const_str_plain_blinded_decrypt;
PyObject *const_str_plain_DecryptionError;
PyObject *const_tuple_str_digest_7330fab1d7073751f2d5bfc9ad7b70de_tuple;
PyObject *const_str_plain_compare_digest;
PyObject *const_slice_none_int_pos_2_none;
PyObject *const_str_plain_find;
PyObject *const_tuple_bytes_null_int_pos_2_tuple;
PyObject *const_int_pos_10;
PyObject *const_str_digest_2b87f0f863e708aaea3b4dbe0f53c2f8;
PyObject *const_str_plain_HASH_ASN1;
PyObject *const_str_digest_812da8a29ca127380db23416adbaf925;
PyObject *const_str_plain__pad_for_signing;
PyObject *const_str_plain_blinded_encrypt;
PyObject *const_str_digest_723a9c59a1562d09ccea228794a0dab5;
PyObject *const_str_plain_compute_hash;
PyObject *const_str_plain_sign_hash;
PyObject *const_str_digest_32ca4c5448b5ef80153ec1e314460588;
PyObject *const_str_plain_decrypt_int;
PyObject *const_str_plain__find_method_hash;
PyObject *const_str_plain_VerificationError;
PyObject *const_tuple_str_digest_200d74a8d89d6c50593485fee41c8c7a_tuple;
PyObject *const_str_digest_c315618cbf868730bbbe33199e90e11d;
PyObject *const_str_digest_af0498b3a85009ae34a3ad96476d8206;
PyObject *const_str_digest_51ddb104c0c56080abe1880e7c52c746;
PyObject *const_str_plain_infile;
PyObject *const_str_plain_blocksize;
PyObject *const_str_plain_yield_fixedblocks;
PyObject *const_str_plain_HASH_METHODS;
PyObject *const_str_plain_update;
PyObject *const_str_plain___call__;
PyObject *const_int_pos_1024;
PyObject *const_str_plain_hasher;
PyObject *const_str_plain_digest;
PyObject *const_str_digest_2c1e7923913819db21944bbb509377cf;
PyObject *const_str_plain_items;
PyObject *const_str_digest_72c5192cfcd05152e099e5b0075f6917;
PyObject *const_str_digest_b2381abc5fe9bf03282948a8bd3c3c2b;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_hashlib;
PyObject *const_str_plain_os;
PyObject *const_str_plain_sys;
PyObject *const_str_plain_typing;
PyObject *const_str_plain_hmac;
PyObject *const_tuple_str_plain_compare_digest_tuple;
PyObject *const_tuple_09cf44b4bf70cfe79d2153cfc57d67c2_tuple;
PyObject *const_str_plain_key;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_HashType;
PyObject *const_dict_b3b804f3a7045b1019f724e56da33528;
PyObject *const_str_plain_MD5;
PyObject *const_str_plain_md5;
PyObject *const_str_digest_97dcb4754378a8f54936024697d0d59e;
PyObject *const_str_plain_sha1;
PyObject *const_str_digest_8e6c146abea2e9a74bbae52248e9fe41;
PyObject *const_str_plain_sha224;
PyObject *const_str_digest_1e080f858ef601c43605cc71a556333d;
PyObject *const_str_plain_sha256;
PyObject *const_str_digest_13616ed0239e00d0446f4afcc75f4919;
PyObject *const_str_plain_sha384;
PyObject *const_str_digest_91012c747d1826684889b0187ce7d184;
PyObject *const_str_plain_sha512;
PyObject *const_str_plain_Dict;
PyObject *const_str_plain_Callable;
PyObject *const_dict_c36ee2642f1a8716acb6b27d523fb8c5;
PyObject *const_str_digest_8a57a8a7eb7225175ef084daf5e018fc;
PyObject *const_str_plain_sha3_256;
PyObject *const_str_digest_3d543068145ac445e373ed4f59b26528;
PyObject *const_str_plain_sha3_384;
PyObject *const_str_digest_f4af1b74055018a7f096733f98e5e958;
PyObject *const_str_plain_sha3_512;
PyObject *const_tuple_type_Exception_tuple;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_CryptoError;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_172952d0bc04806234e0d58ce32ce3d8;
PyObject *const_str_digest_1de70dca33ce419c934a309ef8124470;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_82;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_8df157174a1e079df3585a3201ee9cb5;
PyObject *const_int_pos_86;
PyObject *const_str_digest_3eb4481563a33d714bf11d2347041c54;
PyObject *const_int_pos_90;
PyObject *const_dict_679df97ee336d8d2c94f21da0cc8934f;
PyObject *const_str_plain_message;
PyObject *const_str_plain_pub_key;
PyObject *const_str_plain_PublicKey;
PyObject *const_str_plain_return;
PyObject *const_str_plain_encrypt;
PyObject *const_str_plain_crypto;
PyObject *const_str_plain_priv_key;
PyObject *const_str_plain_PrivateKey;
PyObject *const_str_plain_decrypt;
PyObject *const_str_plain_hash_value;
PyObject *const_str_plain_hash_method;
PyObject *const_str_plain_sign;
PyObject *const_str_plain_signature;
PyObject *const_str_plain_verify;
PyObject *const_str_plain_find_signature_hash;
PyObject *const_str_plain_BinaryIO;
PyObject *const_str_plain_Iterator;
PyObject *const_str_plain_Union;
PyObject *const_str_plain_method_name;
PyObject *const_dict_b26fcbcd8fd9b94e022267339eff80e6;
PyObject *const_list_c5a99d18a43567ed28454d8b2a4a6a21_list;
PyObject *const_str_digest_1515766be3095519a94d7896779472ad;
PyObject *const_str_digest_bc321a0ae8399bdea023d1a6bb95c877;
PyObject *const_tuple_str_plain_clearsig_str_plain_hashname_str_plain_asn1code_tuple;
PyObject *const_tuple_44dfa175efc8ea04840f589fa45674b3_tuple;
PyObject *const_tuple_facb14fc90c17762d50a0f0b6bcde72b_tuple;
PyObject *const_tuple_0f05faef1c179f8822f536cfa549b4e6_tuple;
PyObject *const_tuple_590e5e7f1dc627ad85d67cf544c217df_tuple;
PyObject *const_tuple_28a1ab3f22fd89e51320622850b7c164_tuple;
PyObject *const_tuple_2f738c600f7e1c2dee68f86dc7a5c55a_tuple;
PyObject *const_tuple_ef07aa358d7115cf7097a106edb8e089_tuple;
PyObject *const_tuple_99a82e22b86cb1701667044b0966ab4d_tuple;
PyObject *const_tuple_b7b1d2a93d14fe3fb5d920906b61fe22_tuple;
PyObject *const_tuple_ae97b766754d2e1d3a3368efeafcec64_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[149];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("rsa.pkcs1"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_int_pos_11);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_digest_36bfa1361832794c1e78e5a2976574b0);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_padding);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_padding_length);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_urandom);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_int_pos_5);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_replace);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_tuple_bytes_null_bytes_empty_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_9a2bb00eeadd7f9a36ea9bb9096c65a8);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_bytes_null);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_189d1a5a8cbb8dd88fe02545b3e5cd01);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_edd34ccaf3601e7d40e83e6a42a0da40);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_bytes_chr_255);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_a61e0f945542e8bf2cc6323b95f66edb);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_common);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_byte_size);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_n);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain__pad_for_encryption);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_transform);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_bytes2int);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_core);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_encrypt_int);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_e);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_int2bytes);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_6b1eb3ee3a5feec5ea62f4e868b5c56c);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_blinded_decrypt);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_DecryptionError);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_7330fab1d7073751f2d5bfc9ad7b70de_tuple);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_compare_digest);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_2_none);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_find);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_tuple_bytes_null_int_pos_2_tuple);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_int_pos_10);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_2b87f0f863e708aaea3b4dbe0f53c2f8);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_HASH_ASN1);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_812da8a29ca127380db23416adbaf925);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain__pad_for_signing);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_blinded_encrypt);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_723a9c59a1562d09ccea228794a0dab5);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_compute_hash);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_sign_hash);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_32ca4c5448b5ef80153ec1e314460588);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_decrypt_int);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain__find_method_hash);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_VerificationError);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_200d74a8d89d6c50593485fee41c8c7a_tuple);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_c315618cbf868730bbbe33199e90e11d);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_af0498b3a85009ae34a3ad96476d8206);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_51ddb104c0c56080abe1880e7c52c746);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_infile);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_blocksize);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_yield_fixedblocks);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_HASH_METHODS);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_update);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain___call__);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_int_pos_1024);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_hasher);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_digest);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_2c1e7923913819db21944bbb509377cf);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_72c5192cfcd05152e099e5b0075f6917);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_b2381abc5fe9bf03282948a8bd3c3c2b);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_hashlib);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_hmac);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_compare_digest_tuple);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_tuple_09cf44b4bf70cfe79d2153cfc57d67c2_tuple);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_key);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_HashType);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_dict_b3b804f3a7045b1019f724e56da33528);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_MD5);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_md5);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_97dcb4754378a8f54936024697d0d59e);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_sha1);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_8e6c146abea2e9a74bbae52248e9fe41);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_sha224);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_digest_1e080f858ef601c43605cc71a556333d);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_sha256);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_digest_13616ed0239e00d0446f4afcc75f4919);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_sha384);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_digest_91012c747d1826684889b0187ce7d184);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_sha512);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_Dict);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_Callable);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_dict_c36ee2642f1a8716acb6b27d523fb8c5);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_digest_8a57a8a7eb7225175ef084daf5e018fc);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_sha3_256);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_3d543068145ac445e373ed4f59b26528);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_sha3_384);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_digest_f4af1b74055018a7f096733f98e5e958);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_sha3_512);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_tuple_type_Exception_tuple);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_CryptoError);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_digest_172952d0bc04806234e0d58ce32ce3d8);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_digest_1de70dca33ce419c934a309ef8124470);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_int_pos_82);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_8df157174a1e079df3585a3201ee9cb5);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_int_pos_86);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_digest_3eb4481563a33d714bf11d2347041c54);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_int_pos_90);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_dict_679df97ee336d8d2c94f21da0cc8934f);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_message);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_pub_key);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_PublicKey);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_encrypt);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_crypto);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_priv_key);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_PrivateKey);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_decrypt);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_hash_value);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_hash_method);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_sign);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_signature);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_verify);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_find_signature_hash);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_BinaryIO);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterator);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_method_name);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_dict_b26fcbcd8fd9b94e022267339eff80e6);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_list_c5a99d18a43567ed28454d8b2a4a6a21_list);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_digest_1515766be3095519a94d7896779472ad);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_digest_bc321a0ae8399bdea023d1a6bb95c877);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_clearsig_str_plain_hashname_str_plain_asn1code_tuple);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_tuple_44dfa175efc8ea04840f589fa45674b3_tuple);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_tuple_facb14fc90c17762d50a0f0b6bcde72b_tuple);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_tuple_0f05faef1c179f8822f536cfa549b4e6_tuple);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_tuple_590e5e7f1dc627ad85d67cf544c217df_tuple);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_tuple_28a1ab3f22fd89e51320622850b7c164_tuple);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_tuple_2f738c600f7e1c2dee68f86dc7a5c55a_tuple);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_tuple_ef07aa358d7115cf7097a106edb8e089_tuple);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_tuple_99a82e22b86cb1701667044b0966ab4d_tuple);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_tuple_b7b1d2a93d14fe3fb5d920906b61fe22_tuple);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_tuple_ae97b766754d2e1d3a3368efeafcec64_tuple);
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
void checkModuleConstants_rsa$pkcs1(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_int_pos_11));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_11);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_digest_36bfa1361832794c1e78e5a2976574b0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_36bfa1361832794c1e78e5a2976574b0);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_int_pos_3));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_3);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_padding));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_padding);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_padding_length));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_padding_length);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_urandom));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_urandom);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_int_pos_5));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_5);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_replace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_replace);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_tuple_bytes_null_bytes_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bytes_null_bytes_empty_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_9a2bb00eeadd7f9a36ea9bb9096c65a8));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_digest_9a2bb00eeadd7f9a36ea9bb9096c65a8);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_bytes_null));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_null);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_189d1a5a8cbb8dd88fe02545b3e5cd01));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_189d1a5a8cbb8dd88fe02545b3e5cd01);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_edd34ccaf3601e7d40e83e6a42a0da40));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_digest_edd34ccaf3601e7d40e83e6a42a0da40);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_bytes_chr_255));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_chr_255);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_a61e0f945542e8bf2cc6323b95f66edb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a61e0f945542e8bf2cc6323b95f66edb);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_common));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_common);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_byte_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_byte_size);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_n));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_n);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain__pad_for_encryption));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__pad_for_encryption);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_transform));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_transform);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_bytes2int));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bytes2int);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_core));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_core);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_encrypt_int));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encrypt_int);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_e));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_e);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_int2bytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_int2bytes);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_6b1eb3ee3a5feec5ea62f4e868b5c56c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6b1eb3ee3a5feec5ea62f4e868b5c56c);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_blinded_decrypt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_blinded_decrypt);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_DecryptionError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DecryptionError);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_7330fab1d7073751f2d5bfc9ad7b70de_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_7330fab1d7073751f2d5bfc9ad7b70de_tuple);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_compare_digest));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_compare_digest);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_2_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_int_pos_2_none);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_find));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_find);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_tuple_bytes_null_int_pos_2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bytes_null_int_pos_2_tuple);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_int_pos_10));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_10);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_2b87f0f863e708aaea3b4dbe0f53c2f8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2b87f0f863e708aaea3b4dbe0f53c2f8);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_HASH_ASN1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HASH_ASN1);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_812da8a29ca127380db23416adbaf925));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_812da8a29ca127380db23416adbaf925);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain__pad_for_signing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__pad_for_signing);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_blinded_encrypt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_blinded_encrypt);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_723a9c59a1562d09ccea228794a0dab5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_723a9c59a1562d09ccea228794a0dab5);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_compute_hash));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_compute_hash);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_sign_hash));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sign_hash);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_32ca4c5448b5ef80153ec1e314460588));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_32ca4c5448b5ef80153ec1e314460588);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_decrypt_int));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decrypt_int);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain__find_method_hash));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__find_method_hash);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_VerificationError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VerificationError);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_200d74a8d89d6c50593485fee41c8c7a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_200d74a8d89d6c50593485fee41c8c7a_tuple);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_c315618cbf868730bbbe33199e90e11d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c315618cbf868730bbbe33199e90e11d);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_af0498b3a85009ae34a3ad96476d8206));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_af0498b3a85009ae34a3ad96476d8206);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_51ddb104c0c56080abe1880e7c52c746));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_51ddb104c0c56080abe1880e7c52c746);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_infile));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_infile);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_blocksize));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_blocksize);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_yield_fixedblocks));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_yield_fixedblocks);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_HASH_METHODS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HASH_METHODS);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_update));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_update);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain___call__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___call__);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_int_pos_1024));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_1024);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_hasher));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hasher);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_digest));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_digest);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_2c1e7923913819db21944bbb509377cf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2c1e7923913819db21944bbb509377cf);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_items));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_items);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_72c5192cfcd05152e099e5b0075f6917));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_72c5192cfcd05152e099e5b0075f6917);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_b2381abc5fe9bf03282948a8bd3c3c2b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b2381abc5fe9bf03282948a8bd3c3c2b);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_hashlib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hashlib);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_os));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_os);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_hmac));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hmac);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_compare_digest_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_compare_digest_tuple);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_tuple_09cf44b4bf70cfe79d2153cfc57d67c2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_09cf44b4bf70cfe79d2153cfc57d67c2_tuple);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_key);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_HashType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HashType);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_dict_b3b804f3a7045b1019f724e56da33528));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b3b804f3a7045b1019f724e56da33528);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_MD5));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MD5);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_md5));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_md5);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_97dcb4754378a8f54936024697d0d59e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_97dcb4754378a8f54936024697d0d59e);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_sha1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sha1);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_8e6c146abea2e9a74bbae52248e9fe41));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8e6c146abea2e9a74bbae52248e9fe41);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_sha224));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sha224);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_digest_1e080f858ef601c43605cc71a556333d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1e080f858ef601c43605cc71a556333d);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_sha256));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sha256);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_digest_13616ed0239e00d0446f4afcc75f4919));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_13616ed0239e00d0446f4afcc75f4919);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_sha384));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sha384);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_digest_91012c747d1826684889b0187ce7d184));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_91012c747d1826684889b0187ce7d184);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_sha512));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sha512);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_Dict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Dict);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_Callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Callable);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_dict_c36ee2642f1a8716acb6b27d523fb8c5));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c36ee2642f1a8716acb6b27d523fb8c5);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_digest_8a57a8a7eb7225175ef084daf5e018fc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8a57a8a7eb7225175ef084daf5e018fc);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_sha3_256));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sha3_256);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_3d543068145ac445e373ed4f59b26528));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3d543068145ac445e373ed4f59b26528);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_sha3_384));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sha3_384);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_digest_f4af1b74055018a7f096733f98e5e958));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f4af1b74055018a7f096733f98e5e958);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_sha3_512));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sha3_512);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_tuple_type_Exception_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_Exception_tuple);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_CryptoError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CryptoError);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_digest_172952d0bc04806234e0d58ce32ce3d8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_172952d0bc04806234e0d58ce32ce3d8);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_digest_1de70dca33ce419c934a309ef8124470));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1de70dca33ce419c934a309ef8124470);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_int_pos_82));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_82);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_8df157174a1e079df3585a3201ee9cb5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8df157174a1e079df3585a3201ee9cb5);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_int_pos_86));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_86);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_digest_3eb4481563a33d714bf11d2347041c54));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3eb4481563a33d714bf11d2347041c54);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_int_pos_90));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_90);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_dict_679df97ee336d8d2c94f21da0cc8934f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_679df97ee336d8d2c94f21da0cc8934f);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_message));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_message);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_pub_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pub_key);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_PublicKey));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PublicKey);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_encrypt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encrypt);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_crypto));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_crypto);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_priv_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_priv_key);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_PrivateKey));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PrivateKey);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_decrypt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decrypt);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_hash_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hash_value);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_hash_method));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hash_method);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_sign));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sign);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_signature));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_signature);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_verify));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_verify);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_find_signature_hash));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_find_signature_hash);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_BinaryIO));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BinaryIO);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Iterator);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_method_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_method_name);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_dict_b26fcbcd8fd9b94e022267339eff80e6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b26fcbcd8fd9b94e022267339eff80e6);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_list_c5a99d18a43567ed28454d8b2a4a6a21_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_c5a99d18a43567ed28454d8b2a4a6a21_list);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_digest_1515766be3095519a94d7896779472ad));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1515766be3095519a94d7896779472ad);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_digest_bc321a0ae8399bdea023d1a6bb95c877));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bc321a0ae8399bdea023d1a6bb95c877);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_clearsig_str_plain_hashname_str_plain_asn1code_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_clearsig_str_plain_hashname_str_plain_asn1code_tuple);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_tuple_44dfa175efc8ea04840f589fa45674b3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_44dfa175efc8ea04840f589fa45674b3_tuple);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_tuple_facb14fc90c17762d50a0f0b6bcde72b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_facb14fc90c17762d50a0f0b6bcde72b_tuple);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_tuple_0f05faef1c179f8822f536cfa549b4e6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0f05faef1c179f8822f536cfa549b4e6_tuple);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_tuple_590e5e7f1dc627ad85d67cf544c217df_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_590e5e7f1dc627ad85d67cf544c217df_tuple);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_tuple_28a1ab3f22fd89e51320622850b7c164_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_28a1ab3f22fd89e51320622850b7c164_tuple);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_tuple_2f738c600f7e1c2dee68f86dc7a5c55a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2f738c600f7e1c2dee68f86dc7a5c55a_tuple);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_tuple_ef07aa358d7115cf7097a106edb8e089_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ef07aa358d7115cf7097a106edb8e089_tuple);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_tuple_99a82e22b86cb1701667044b0966ab4d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_99a82e22b86cb1701667044b0966ab4d_tuple);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_tuple_b7b1d2a93d14fe3fb5d920906b61fe22_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b7b1d2a93d14fe3fb5d920906b61fe22_tuple);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_tuple_ae97b766754d2e1d3a3368efeafcec64_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ae97b766754d2e1d3a3368efeafcec64_tuple);
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
static PyObject *module_var_accessor_rsa$pkcs1$CryptoError(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_rsa$pkcs1->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_rsa$pkcs1->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_CryptoError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_rsa$pkcs1->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CryptoError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CryptoError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CryptoError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CryptoError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_CryptoError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_CryptoError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CryptoError);
    }

    return result;
}

static PyObject *module_var_accessor_rsa$pkcs1$DecryptionError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_rsa$pkcs1->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_rsa$pkcs1->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_DecryptionError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_rsa$pkcs1->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DecryptionError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DecryptionError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DecryptionError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DecryptionError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_DecryptionError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_DecryptionError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DecryptionError);
    }

    return result;
}

static PyObject *module_var_accessor_rsa$pkcs1$HASH_ASN1(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_rsa$pkcs1->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_rsa$pkcs1->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_HASH_ASN1);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_rsa$pkcs1->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HASH_ASN1);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HASH_ASN1, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HASH_ASN1);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HASH_ASN1, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_HASH_ASN1);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_HASH_ASN1);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HASH_ASN1);
    }

    return result;
}

static PyObject *module_var_accessor_rsa$pkcs1$HASH_METHODS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_rsa$pkcs1->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_rsa$pkcs1->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_HASH_METHODS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_rsa$pkcs1->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HASH_METHODS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HASH_METHODS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HASH_METHODS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HASH_METHODS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_HASH_METHODS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_HASH_METHODS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HASH_METHODS);
    }

    return result;
}

static PyObject *module_var_accessor_rsa$pkcs1$HashType(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_rsa$pkcs1->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_rsa$pkcs1->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_HashType);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_rsa$pkcs1->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HashType);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HashType, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HashType);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HashType, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_HashType);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_HashType);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HashType);
    }

    return result;
}

static PyObject *module_var_accessor_rsa$pkcs1$VerificationError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_rsa$pkcs1->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_rsa$pkcs1->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_VerificationError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_rsa$pkcs1->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_VerificationError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_VerificationError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_VerificationError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_VerificationError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_VerificationError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_VerificationError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_VerificationError);
    }

    return result;
}

static PyObject *module_var_accessor_rsa$pkcs1$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_rsa$pkcs1->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_rsa$pkcs1->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_rsa$pkcs1->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_rsa$pkcs1$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_rsa$pkcs1->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_rsa$pkcs1->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_rsa$pkcs1->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_rsa$pkcs1$_find_method_hash(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_rsa$pkcs1->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_rsa$pkcs1->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain__find_method_hash);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_rsa$pkcs1->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__find_method_hash);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__find_method_hash, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__find_method_hash);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__find_method_hash, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain__find_method_hash);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain__find_method_hash);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__find_method_hash);
    }

    return result;
}

static PyObject *module_var_accessor_rsa$pkcs1$_pad_for_encryption(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_rsa$pkcs1->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_rsa$pkcs1->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain__pad_for_encryption);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_rsa$pkcs1->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__pad_for_encryption);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__pad_for_encryption, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__pad_for_encryption);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__pad_for_encryption, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain__pad_for_encryption);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain__pad_for_encryption);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__pad_for_encryption);
    }

    return result;
}

static PyObject *module_var_accessor_rsa$pkcs1$_pad_for_signing(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_rsa$pkcs1->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_rsa$pkcs1->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain__pad_for_signing);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_rsa$pkcs1->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__pad_for_signing);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__pad_for_signing, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__pad_for_signing);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__pad_for_signing, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain__pad_for_signing);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain__pad_for_signing);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__pad_for_signing);
    }

    return result;
}

static PyObject *module_var_accessor_rsa$pkcs1$common(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_rsa$pkcs1->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_rsa$pkcs1->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_common);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_rsa$pkcs1->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_common);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_common, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_common);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_common, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_common);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_common);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_common);
    }

    return result;
}

static PyObject *module_var_accessor_rsa$pkcs1$compare_digest(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_rsa$pkcs1->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_rsa$pkcs1->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_compare_digest);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_rsa$pkcs1->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_compare_digest);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_compare_digest, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_compare_digest);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_compare_digest, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_compare_digest);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_compare_digest);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_compare_digest);
    }

    return result;
}

static PyObject *module_var_accessor_rsa$pkcs1$compute_hash(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_rsa$pkcs1->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_rsa$pkcs1->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_compute_hash);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_rsa$pkcs1->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_compute_hash);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_compute_hash, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_compute_hash);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_compute_hash, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_compute_hash);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_compute_hash);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_compute_hash);
    }

    return result;
}

static PyObject *module_var_accessor_rsa$pkcs1$core(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_rsa$pkcs1->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_rsa$pkcs1->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_core);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_rsa$pkcs1->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_core);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_core, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_core);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_core, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_core);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_core);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_core);
    }

    return result;
}

static PyObject *module_var_accessor_rsa$pkcs1$hashlib(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_rsa$pkcs1->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_rsa$pkcs1->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_hashlib);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_rsa$pkcs1->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hashlib);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hashlib, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hashlib);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hashlib, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_hashlib);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_hashlib);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hashlib);
    }

    return result;
}

static PyObject *module_var_accessor_rsa$pkcs1$key(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_rsa$pkcs1->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_rsa$pkcs1->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_key);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_rsa$pkcs1->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_key);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_key, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_key);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_key, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_key);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_key);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_key);
    }

    return result;
}

static PyObject *module_var_accessor_rsa$pkcs1$sign_hash(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_rsa$pkcs1->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_rsa$pkcs1->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_sign_hash);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_rsa$pkcs1->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_sign_hash);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_sign_hash, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_sign_hash);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_sign_hash, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_sign_hash);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_sign_hash);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_sign_hash);
    }

    return result;
}

static PyObject *module_var_accessor_rsa$pkcs1$transform(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_rsa$pkcs1->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_rsa$pkcs1->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_transform);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_rsa$pkcs1->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_transform);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_transform, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_transform);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_transform, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_transform);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_transform);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_transform);
    }

    return result;
}

static PyObject *module_var_accessor_rsa$pkcs1$yield_fixedblocks(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_rsa$pkcs1->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_rsa$pkcs1->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_yield_fixedblocks);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_rsa$pkcs1->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_yield_fixedblocks);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_yield_fixedblocks, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_yield_fixedblocks);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_yield_fixedblocks, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_yield_fixedblocks);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_yield_fixedblocks);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_yield_fixedblocks);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_e05370460a07551eeab9a4299dc86e7d;
static PyCodeObject *code_objects_339904d9bc08f0ff1cc177b2041d17e6;
static PyCodeObject *code_objects_18a2f5f9f4e9cae607ccd14aa763bb4a;
static PyCodeObject *code_objects_2b5a73d800e813b31a6aa6c6fcfc59e7;
static PyCodeObject *code_objects_a84922ba944f35070d6560625380c59d;
static PyCodeObject *code_objects_e9c07903a92c631f0b212c6980bcbfec;
static PyCodeObject *code_objects_afa15ff77b7b51d38bbb47762282dadb;
static PyCodeObject *code_objects_5d5ca4b0f5375dd1d725c37142be47ad;
static PyCodeObject *code_objects_fa279102451fbfe206d7188fa3b61581;
static PyCodeObject *code_objects_27d41bf598a67aee079f298e0cd62837;
static PyCodeObject *code_objects_568b0cce0832c57de52ff26db38dde3e;
static PyCodeObject *code_objects_6fbdd7717447da857894284baee9d8a7;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_1515766be3095519a94d7896779472ad); CHECK_OBJECT(module_filename_obj);
code_objects_e05370460a07551eeab9a4299dc86e7d = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_bc321a0ae8399bdea023d1a6bb95c877, mod_consts.const_str_digest_bc321a0ae8399bdea023d1a6bb95c877, NULL, NULL, 0, 0, 0);
code_objects_339904d9bc08f0ff1cc177b2041d17e6 = MAKE_CODE_OBJECT(module_filename_obj, 448, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__find_method_hash, mod_consts.const_str_plain__find_method_hash, mod_consts.const_tuple_str_plain_clearsig_str_plain_hashname_str_plain_asn1code_tuple, NULL, 1, 0, 0);
code_objects_18a2f5f9f4e9cae607ccd14aa763bb4a = MAKE_CODE_OBJECT(module_filename_obj, 94, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__pad_for_encryption, mod_consts.const_str_plain__pad_for_encryption, mod_consts.const_tuple_44dfa175efc8ea04840f589fa45674b3_tuple, NULL, 2, 0, 0);
code_objects_2b5a73d800e813b31a6aa6c6fcfc59e7 = MAKE_CODE_OBJECT(module_filename_obj, 139, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__pad_for_signing, mod_consts.const_str_plain__pad_for_signing, mod_consts.const_tuple_facb14fc90c17762d50a0f0b6bcde72b_tuple, NULL, 2, 0, 0);
code_objects_a84922ba944f35070d6560625380c59d = MAKE_CODE_OBJECT(module_filename_obj, 420, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_compute_hash, mod_consts.const_str_plain_compute_hash, mod_consts.const_tuple_0f05faef1c179f8822f536cfa549b4e6_tuple, NULL, 2, 0, 0);
code_objects_e9c07903a92c631f0b212c6980bcbfec = MAKE_CODE_OBJECT(module_filename_obj, 204, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_decrypt, mod_consts.const_str_plain_decrypt, mod_consts.const_tuple_590e5e7f1dc627ad85d67cf544c217df_tuple, NULL, 2, 0, 0);
code_objects_afa15ff77b7b51d38bbb47762282dadb = MAKE_CODE_OBJECT(module_filename_obj, 172, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_encrypt, mod_consts.const_str_plain_encrypt, mod_consts.const_tuple_28a1ab3f22fd89e51320622850b7c164_tuple, NULL, 2, 0, 0);
code_objects_5d5ca4b0f5375dd1d725c37142be47ad = MAKE_CODE_OBJECT(module_filename_obj, 380, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_find_signature_hash, mod_consts.const_str_plain_find_signature_hash, mod_consts.const_tuple_2f738c600f7e1c2dee68f86dc7a5c55a_tuple, NULL, 2, 0, 0);
code_objects_fa279102451fbfe206d7188fa3b61581 = MAKE_CODE_OBJECT(module_filename_obj, 320, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_sign, mod_consts.const_str_plain_sign, mod_consts.const_tuple_ef07aa358d7115cf7097a106edb8e089_tuple, NULL, 3, 0, 0);
code_objects_27d41bf598a67aee079f298e0cd62837 = MAKE_CODE_OBJECT(module_filename_obj, 287, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_sign_hash, mod_consts.const_str_plain_sign_hash, mod_consts.const_tuple_99a82e22b86cb1701667044b0966ab4d_tuple, NULL, 3, 0, 0);
code_objects_568b0cce0832c57de52ff26db38dde3e = MAKE_CODE_OBJECT(module_filename_obj, 342, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_verify, mod_consts.const_str_plain_verify, mod_consts.const_tuple_b7b1d2a93d14fe3fb5d920906b61fe22_tuple, NULL, 3, 0, 0);
code_objects_6fbdd7717447da857894284baee9d8a7 = MAKE_CODE_OBJECT(module_filename_obj, 399, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_yield_fixedblocks, mod_consts.const_str_plain_yield_fixedblocks, mod_consts.const_tuple_ae97b766754d2e1d3a3368efeafcec64_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_rsa$pkcs1$$$function__9_yield_fixedblocks$$$genobj__1_yield_fixedblocks(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_rsa$pkcs1$$$function__10_compute_hash(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$pkcs1$$$function__11__find_method_hash(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$pkcs1$$$function__1__pad_for_encryption(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$pkcs1$$$function__2__pad_for_signing(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$pkcs1$$$function__3_encrypt(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$pkcs1$$$function__4_decrypt(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$pkcs1$$$function__5_sign_hash(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$pkcs1$$$function__6_sign(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$pkcs1$$$function__7_verify(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$pkcs1$$$function__8_find_signature_hash(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$pkcs1$$$function__9_yield_fixedblocks(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_rsa$pkcs1$$$function__1__pad_for_encryption(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_message = python_pars[0];
PyObject *par_target_length = python_pars[1];
PyObject *var_max_msglength = NULL;
PyObject *var_msglength = NULL;
PyObject *var_padding = NULL;
PyObject *var_padding_length = NULL;
PyObject *var_needed_bytes = NULL;
PyObject *var_new_padding = NULL;
struct Nuitka_FrameObject *frame_frame_rsa$pkcs1$$$function__1__pad_for_encryption;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$pkcs1$$$function__1__pad_for_encryption = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_rsa$pkcs1$$$function__1__pad_for_encryption)) {
    Py_XDECREF(cache_frame_frame_rsa$pkcs1$$$function__1__pad_for_encryption);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$pkcs1$$$function__1__pad_for_encryption == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$pkcs1$$$function__1__pad_for_encryption = MAKE_FUNCTION_FRAME(tstate, code_objects_18a2f5f9f4e9cae607ccd14aa763bb4a, module_rsa$pkcs1, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$pkcs1$$$function__1__pad_for_encryption->m_type_description == NULL);
frame_frame_rsa$pkcs1$$$function__1__pad_for_encryption = cache_frame_frame_rsa$pkcs1$$$function__1__pad_for_encryption;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$pkcs1$$$function__1__pad_for_encryption);
assert(Py_REFCNT(frame_frame_rsa$pkcs1$$$function__1__pad_for_encryption) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
CHECK_OBJECT(par_target_length);
tmp_sub_expr_left_1 = par_target_length;
tmp_sub_expr_right_1 = mod_consts.const_int_pos_11;
tmp_assign_source_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_max_msglength == NULL);
var_max_msglength = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_message);
tmp_len_arg_1 = par_message;
tmp_assign_source_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_msglength == NULL);
var_msglength = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_msglength);
tmp_cmp_expr_left_1 = var_msglength;
CHECK_OBJECT(var_max_msglength);
tmp_cmp_expr_right_1 = var_max_msglength;
tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "oooooooo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_36bfa1361832794c1e78e5a2976574b0;
CHECK_OBJECT(var_msglength);
tmp_tuple_element_1 = var_msglength;
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_max_msglength);
tmp_tuple_element_1 = var_max_msglength;
PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$pkcs1$$$function__1__pad_for_encryption->m_frame.f_lineno = 113;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_OverflowError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 113;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = const_bytes_empty;
assert(var_padding == NULL);
Py_INCREF(tmp_assign_source_3);
var_padding = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_sub_expr_left_3;
PyObject *tmp_sub_expr_right_3;
CHECK_OBJECT(par_target_length);
tmp_sub_expr_left_3 = par_target_length;
CHECK_OBJECT(var_msglength);
tmp_sub_expr_right_3 = var_msglength;
tmp_sub_expr_left_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
if (tmp_sub_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_2 = mod_consts.const_int_pos_3;
tmp_assign_source_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
CHECK_OBJECT(tmp_sub_expr_left_2);
Py_DECREF(tmp_sub_expr_left_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_padding_length == NULL);
var_padding_length = tmp_assign_source_4;
}
loop_start_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_len_arg_2;
if (var_padding == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_padding);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 124;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_len_arg_2 = var_padding;
tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (var_padding_length == NULL) {
Py_DECREF(tmp_cmp_expr_left_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_padding_length);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 124;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_right_2 = var_padding_length;
tmp_operand_value_1 = RICH_COMPARE_LT_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooooooo";
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
goto loop_end_1;
branch_no_2:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_sub_expr_left_4;
PyObject *tmp_sub_expr_right_4;
PyObject *tmp_len_arg_3;
if (var_padding_length == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_padding_length);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 125;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_sub_expr_left_4 = var_padding_length;
if (var_padding == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_padding);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 125;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_len_arg_3 = var_padding;
tmp_sub_expr_right_4 = BUILTIN_LEN(tstate, tmp_len_arg_3);
if (tmp_sub_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
CHECK_OBJECT(tmp_sub_expr_right_4);
Py_DECREF(tmp_sub_expr_right_4);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_needed_bytes;
    var_needed_bytes = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
tmp_expression_value_1 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_1 == NULL));
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_urandom);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_needed_bytes);
tmp_add_expr_left_1 = var_needed_bytes;
tmp_add_expr_right_1 = mod_consts.const_int_pos_5;
tmp_args_element_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 130;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$pkcs1$$$function__1__pad_for_encryption->m_frame.f_lineno = 130;
tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_new_padding;
    var_new_padding = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_new_padding);
tmp_expression_value_2 = var_new_padding;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_replace);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$pkcs1$$$function__1__pad_for_encryption->m_frame.f_lineno = 131;
tmp_assign_source_7 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_bytes_null_bytes_empty_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_new_padding;
    assert(old != NULL);
    var_new_padding = tmp_assign_source_7;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_stop_value_1;
if (var_padding == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_padding);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 132;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_2 = var_padding;
CHECK_OBJECT(var_new_padding);
tmp_expression_value_3 = var_new_padding;
CHECK_OBJECT(var_needed_bytes);
tmp_stop_value_1 = var_needed_bytes;
tmp_subscript_value_1 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_1);
assert(!(tmp_subscript_value_1 == NULL));
tmp_add_expr_right_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_padding;
    var_padding = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_len_arg_4;
if (var_padding == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_padding);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 134;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_len_arg_4 = var_padding;
tmp_cmp_expr_left_3 = BUILTIN_LEN(tstate, tmp_len_arg_4);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (var_padding_length == NULL) {
Py_DECREF(tmp_cmp_expr_left_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_padding_length);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 134;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_right_3 = var_padding_length;
tmp_operand_value_2 = RICH_COMPARE_EQ_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "oooooooo";
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
frame_frame_rsa$pkcs1$$$function__1__pad_for_encryption->m_frame.f_lineno = 134;
tmp_raise_type_2 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 134;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
PyObject *tmp_bytes_arg_value_1;
PyObject *tmp_iterable_value_1;
PyObject *tmp_list_element_1;
tmp_bytes_arg_value_1 = const_bytes_empty;
tmp_list_element_1 = mod_consts.const_bytes_digest_9a2bb00eeadd7f9a36ea9bb9096c65a8;
tmp_iterable_value_1 = MAKE_LIST_EMPTY(tstate, 4);
PyList_SET_ITEM0(tmp_iterable_value_1, 0, tmp_list_element_1);
if (var_padding == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_padding);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 136;
type_description_1 = "oooooooo";
    goto list_build_exception_1;
}

tmp_list_element_1 = var_padding;
PyList_SET_ITEM0(tmp_iterable_value_1, 1, tmp_list_element_1);
tmp_list_element_1 = mod_consts.const_bytes_null;
PyList_SET_ITEM0(tmp_iterable_value_1, 2, tmp_list_element_1);
CHECK_OBJECT(par_message);
tmp_list_element_1 = par_message;
PyList_SET_ITEM0(tmp_iterable_value_1, 3, tmp_list_element_1);
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_iterable_value_1);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
tmp_return_value = BYTES_JOIN(tstate, tmp_bytes_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$pkcs1$$$function__1__pad_for_encryption, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$pkcs1$$$function__1__pad_for_encryption->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$pkcs1$$$function__1__pad_for_encryption, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$pkcs1$$$function__1__pad_for_encryption,
    type_description_1,
    par_message,
    par_target_length,
    var_max_msglength,
    var_msglength,
    var_padding,
    var_padding_length,
    var_needed_bytes,
    var_new_padding
);


// Release cached frame if used for exception.
if (frame_frame_rsa$pkcs1$$$function__1__pad_for_encryption == cache_frame_frame_rsa$pkcs1$$$function__1__pad_for_encryption) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$pkcs1$$$function__1__pad_for_encryption);
    cache_frame_frame_rsa$pkcs1$$$function__1__pad_for_encryption = NULL;
}

assertFrameObject(frame_frame_rsa$pkcs1$$$function__1__pad_for_encryption);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_max_msglength);
CHECK_OBJECT(var_max_msglength);
Py_DECREF(var_max_msglength);
var_max_msglength = NULL;
CHECK_OBJECT(var_msglength);
CHECK_OBJECT(var_msglength);
Py_DECREF(var_msglength);
var_msglength = NULL;
Py_XDECREF(var_padding);
var_padding = NULL;
Py_XDECREF(var_padding_length);
var_padding_length = NULL;
Py_XDECREF(var_needed_bytes);
var_needed_bytes = NULL;
Py_XDECREF(var_new_padding);
var_new_padding = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_max_msglength);
var_max_msglength = NULL;
Py_XDECREF(var_msglength);
var_msglength = NULL;
Py_XDECREF(var_padding);
var_padding = NULL;
Py_XDECREF(var_padding_length);
var_padding_length = NULL;
Py_XDECREF(var_needed_bytes);
var_needed_bytes = NULL;
Py_XDECREF(var_new_padding);
var_new_padding = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
CHECK_OBJECT(par_target_length);
Py_DECREF(par_target_length);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
CHECK_OBJECT(par_target_length);
Py_DECREF(par_target_length);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_rsa$pkcs1$$$function__2__pad_for_signing(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_message = python_pars[0];
PyObject *par_target_length = python_pars[1];
PyObject *var_max_msglength = NULL;
PyObject *var_msglength = NULL;
PyObject *var_padding_length = NULL;
struct Nuitka_FrameObject *frame_frame_rsa$pkcs1$$$function__2__pad_for_signing;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$pkcs1$$$function__2__pad_for_signing = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_rsa$pkcs1$$$function__2__pad_for_signing)) {
    Py_XDECREF(cache_frame_frame_rsa$pkcs1$$$function__2__pad_for_signing);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$pkcs1$$$function__2__pad_for_signing == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$pkcs1$$$function__2__pad_for_signing = MAKE_FUNCTION_FRAME(tstate, code_objects_2b5a73d800e813b31a6aa6c6fcfc59e7, module_rsa$pkcs1, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$pkcs1$$$function__2__pad_for_signing->m_type_description == NULL);
frame_frame_rsa$pkcs1$$$function__2__pad_for_signing = cache_frame_frame_rsa$pkcs1$$$function__2__pad_for_signing;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$pkcs1$$$function__2__pad_for_signing);
assert(Py_REFCNT(frame_frame_rsa$pkcs1$$$function__2__pad_for_signing) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
CHECK_OBJECT(par_target_length);
tmp_sub_expr_left_1 = par_target_length;
tmp_sub_expr_right_1 = mod_consts.const_int_pos_11;
tmp_assign_source_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_max_msglength == NULL);
var_max_msglength = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_message);
tmp_len_arg_1 = par_message;
tmp_assign_source_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_msglength == NULL);
var_msglength = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_msglength);
tmp_cmp_expr_left_1 = var_msglength;
CHECK_OBJECT(var_max_msglength);
tmp_cmp_expr_right_1 = var_max_msglength;
tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "ooooo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_36bfa1361832794c1e78e5a2976574b0;
CHECK_OBJECT(var_msglength);
tmp_tuple_element_1 = var_msglength;
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_max_msglength);
tmp_tuple_element_1 = var_max_msglength;
PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$pkcs1$$$function__2__pad_for_signing->m_frame.f_lineno = 162;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_OverflowError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 162;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_sub_expr_left_3;
PyObject *tmp_sub_expr_right_3;
CHECK_OBJECT(par_target_length);
tmp_sub_expr_left_3 = par_target_length;
CHECK_OBJECT(var_msglength);
tmp_sub_expr_right_3 = var_msglength;
tmp_sub_expr_left_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
if (tmp_sub_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_2 = mod_consts.const_int_pos_3;
tmp_assign_source_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
CHECK_OBJECT(tmp_sub_expr_left_2);
Py_DECREF(tmp_sub_expr_left_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_padding_length == NULL);
var_padding_length = tmp_assign_source_3;
}
{
PyObject *tmp_bytes_arg_value_1;
PyObject *tmp_iterable_value_1;
PyObject *tmp_list_element_1;
tmp_bytes_arg_value_1 = const_bytes_empty;
tmp_list_element_1 = mod_consts.const_bytes_digest_edd34ccaf3601e7d40e83e6a42a0da40;
tmp_iterable_value_1 = MAKE_LIST_EMPTY(tstate, 4);
{
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyList_SET_ITEM0(tmp_iterable_value_1, 0, tmp_list_element_1);
CHECK_OBJECT(var_padding_length);
tmp_mult_expr_left_1 = var_padding_length;
tmp_mult_expr_right_1 = mod_consts.const_bytes_chr_255;
tmp_list_element_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_BYTES(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "ooooo";
    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_iterable_value_1, 1, tmp_list_element_1);
tmp_list_element_1 = mod_consts.const_bytes_null;
PyList_SET_ITEM0(tmp_iterable_value_1, 2, tmp_list_element_1);
CHECK_OBJECT(par_message);
tmp_list_element_1 = par_message;
PyList_SET_ITEM0(tmp_iterable_value_1, 3, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_iterable_value_1);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
tmp_return_value = BYTES_JOIN(tstate, tmp_bytes_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$pkcs1$$$function__2__pad_for_signing, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$pkcs1$$$function__2__pad_for_signing->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$pkcs1$$$function__2__pad_for_signing, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$pkcs1$$$function__2__pad_for_signing,
    type_description_1,
    par_message,
    par_target_length,
    var_max_msglength,
    var_msglength,
    var_padding_length
);


// Release cached frame if used for exception.
if (frame_frame_rsa$pkcs1$$$function__2__pad_for_signing == cache_frame_frame_rsa$pkcs1$$$function__2__pad_for_signing) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$pkcs1$$$function__2__pad_for_signing);
    cache_frame_frame_rsa$pkcs1$$$function__2__pad_for_signing = NULL;
}

assertFrameObject(frame_frame_rsa$pkcs1$$$function__2__pad_for_signing);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_max_msglength);
CHECK_OBJECT(var_max_msglength);
Py_DECREF(var_max_msglength);
var_max_msglength = NULL;
CHECK_OBJECT(var_msglength);
CHECK_OBJECT(var_msglength);
Py_DECREF(var_msglength);
var_msglength = NULL;
CHECK_OBJECT(var_padding_length);
CHECK_OBJECT(var_padding_length);
Py_DECREF(var_padding_length);
var_padding_length = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_max_msglength);
var_max_msglength = NULL;
Py_XDECREF(var_msglength);
var_msglength = NULL;
Py_XDECREF(var_padding_length);
var_padding_length = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
CHECK_OBJECT(par_target_length);
Py_DECREF(par_target_length);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
CHECK_OBJECT(par_target_length);
Py_DECREF(par_target_length);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_rsa$pkcs1$$$function__3_encrypt(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_message = python_pars[0];
PyObject *par_pub_key = python_pars[1];
PyObject *var_keylength = NULL;
PyObject *var_padded = NULL;
PyObject *var_payload = NULL;
PyObject *var_encrypted = NULL;
PyObject *var_block = NULL;
struct Nuitka_FrameObject *frame_frame_rsa$pkcs1$$$function__3_encrypt;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$pkcs1$$$function__3_encrypt = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_rsa$pkcs1$$$function__3_encrypt)) {
    Py_XDECREF(cache_frame_frame_rsa$pkcs1$$$function__3_encrypt);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$pkcs1$$$function__3_encrypt == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$pkcs1$$$function__3_encrypt = MAKE_FUNCTION_FRAME(tstate, code_objects_afa15ff77b7b51d38bbb47762282dadb, module_rsa$pkcs1, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$pkcs1$$$function__3_encrypt->m_type_description == NULL);
frame_frame_rsa$pkcs1$$$function__3_encrypt = cache_frame_frame_rsa$pkcs1$$$function__3_encrypt;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$pkcs1$$$function__3_encrypt);
assert(Py_REFCNT(frame_frame_rsa$pkcs1$$$function__3_encrypt) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = module_var_accessor_rsa$pkcs1$common(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_common);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 194;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_byte_size);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_pub_key);
tmp_expression_value_2 = par_pub_key;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_n);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 194;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$pkcs1$$$function__3_encrypt->m_frame.f_lineno = 194;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_keylength == NULL);
var_keylength = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_2 = module_var_accessor_rsa$pkcs1$_pad_for_encryption(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__pad_for_encryption);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 195;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_message);
tmp_args_element_value_2 = par_message;
CHECK_OBJECT(var_keylength);
tmp_args_element_value_3 = var_keylength;
frame_frame_rsa$pkcs1$$$function__3_encrypt->m_frame.f_lineno = 195;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_padded == NULL);
var_padded = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_4;
tmp_called_instance_1 = module_var_accessor_rsa$pkcs1$transform(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transform);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 197;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_padded);
tmp_args_element_value_4 = var_padded;
frame_frame_rsa$pkcs1$$$function__3_encrypt->m_frame.f_lineno = 197;
tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_bytes2int, tmp_args_element_value_4);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_payload == NULL);
var_payload = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_5;
tmp_expression_value_3 = module_var_accessor_rsa$pkcs1$core(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_core);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 198;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_encrypt_int);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_payload);
tmp_args_element_value_5 = var_payload;
CHECK_OBJECT(par_pub_key);
tmp_expression_value_4 = par_pub_key;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_e);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 198;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_pub_key);
tmp_expression_value_5 = par_pub_key;
tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_n);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_args_element_value_6);

exception_lineno = 198;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$pkcs1$$$function__3_encrypt->m_frame.f_lineno = 198;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_encrypted == NULL);
var_encrypted = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_called_instance_2 = module_var_accessor_rsa$pkcs1$transform(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transform);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 199;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_encrypted);
tmp_args_element_value_8 = var_encrypted;
CHECK_OBJECT(var_keylength);
tmp_args_element_value_9 = var_keylength;
frame_frame_rsa$pkcs1$$$function__3_encrypt->m_frame.f_lineno = 199;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_assign_source_5 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_int2bytes,
        call_args
    );
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_block == NULL);
var_block = tmp_assign_source_5;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$pkcs1$$$function__3_encrypt, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$pkcs1$$$function__3_encrypt->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$pkcs1$$$function__3_encrypt, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$pkcs1$$$function__3_encrypt,
    type_description_1,
    par_message,
    par_pub_key,
    var_keylength,
    var_padded,
    var_payload,
    var_encrypted,
    var_block
);


// Release cached frame if used for exception.
if (frame_frame_rsa$pkcs1$$$function__3_encrypt == cache_frame_frame_rsa$pkcs1$$$function__3_encrypt) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$pkcs1$$$function__3_encrypt);
    cache_frame_frame_rsa$pkcs1$$$function__3_encrypt = NULL;
}

assertFrameObject(frame_frame_rsa$pkcs1$$$function__3_encrypt);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_block);
tmp_return_value = var_block;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_keylength);
CHECK_OBJECT(var_keylength);
Py_DECREF(var_keylength);
var_keylength = NULL;
CHECK_OBJECT(var_padded);
CHECK_OBJECT(var_padded);
Py_DECREF(var_padded);
var_padded = NULL;
CHECK_OBJECT(var_payload);
CHECK_OBJECT(var_payload);
Py_DECREF(var_payload);
var_payload = NULL;
CHECK_OBJECT(var_encrypted);
CHECK_OBJECT(var_encrypted);
Py_DECREF(var_encrypted);
var_encrypted = NULL;
CHECK_OBJECT(var_block);
CHECK_OBJECT(var_block);
Py_DECREF(var_block);
var_block = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_keylength);
var_keylength = NULL;
Py_XDECREF(var_padded);
var_padded = NULL;
Py_XDECREF(var_payload);
var_payload = NULL;
Py_XDECREF(var_encrypted);
var_encrypted = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
CHECK_OBJECT(par_pub_key);
Py_DECREF(par_pub_key);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
CHECK_OBJECT(par_pub_key);
Py_DECREF(par_pub_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_rsa$pkcs1$$$function__4_decrypt(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_crypto = python_pars[0];
PyObject *par_priv_key = python_pars[1];
PyObject *var_blocksize = NULL;
PyObject *var_encrypted = NULL;
PyObject *var_decrypted = NULL;
PyObject *var_cleartext = NULL;
PyObject *var_cleartext_marker_bad = NULL;
PyObject *var_sep_idx = NULL;
PyObject *var_sep_idx_bad = NULL;
PyObject *var_anything_bad = NULL;
struct Nuitka_FrameObject *frame_frame_rsa$pkcs1$$$function__4_decrypt;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$pkcs1$$$function__4_decrypt = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_rsa$pkcs1$$$function__4_decrypt)) {
    Py_XDECREF(cache_frame_frame_rsa$pkcs1$$$function__4_decrypt);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$pkcs1$$$function__4_decrypt == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$pkcs1$$$function__4_decrypt = MAKE_FUNCTION_FRAME(tstate, code_objects_e9c07903a92c631f0b212c6980bcbfec, module_rsa$pkcs1, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$pkcs1$$$function__4_decrypt->m_type_description == NULL);
frame_frame_rsa$pkcs1$$$function__4_decrypt = cache_frame_frame_rsa$pkcs1$$$function__4_decrypt;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$pkcs1$$$function__4_decrypt);
assert(Py_REFCNT(frame_frame_rsa$pkcs1$$$function__4_decrypt) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = module_var_accessor_rsa$pkcs1$common(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_common);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 255;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_byte_size);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_priv_key);
tmp_expression_value_2 = par_priv_key;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_n);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 255;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$pkcs1$$$function__4_decrypt->m_frame.f_lineno = 255;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_blocksize == NULL);
var_blocksize = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_rsa$pkcs1$transform(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transform);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 256;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_crypto);
tmp_args_element_value_2 = par_crypto;
frame_frame_rsa$pkcs1$$$function__4_decrypt->m_frame.f_lineno = 256;
tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_bytes2int, tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_encrypted == NULL);
var_encrypted = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_priv_key);
tmp_called_instance_2 = par_priv_key;
CHECK_OBJECT(var_encrypted);
tmp_args_element_value_3 = var_encrypted;
frame_frame_rsa$pkcs1$$$function__4_decrypt->m_frame.f_lineno = 257;
tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_blinded_decrypt, tmp_args_element_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_decrypted == NULL);
var_decrypted = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_instance_3 = module_var_accessor_rsa$pkcs1$transform(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transform);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 258;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_decrypted);
tmp_args_element_value_4 = var_decrypted;
CHECK_OBJECT(var_blocksize);
tmp_args_element_value_5 = var_blocksize;
frame_frame_rsa$pkcs1$$$function__4_decrypt->m_frame.f_lineno = 258;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_4 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain_int2bytes,
        call_args
    );
}

if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_cleartext == NULL);
var_cleartext = tmp_assign_source_4;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_crypto);
tmp_len_arg_1 = par_crypto;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_blocksize);
tmp_cmp_expr_right_1 = var_blocksize;
tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "oooooooooo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_rsa$pkcs1$DecryptionError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DecryptionError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 265;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$pkcs1$$$function__4_decrypt->m_frame.f_lineno = 265;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_7330fab1d7073751f2d5bfc9ad7b70de_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 265;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_args_element_value_7;
tmp_called_value_3 = module_var_accessor_rsa$pkcs1$compare_digest(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_compare_digest);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 268;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_cleartext);
tmp_expression_value_3 = var_cleartext;
tmp_subscript_value_1 = mod_consts.const_slice_none_int_pos_2_none;
tmp_args_element_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_7 = mod_consts.const_bytes_digest_9a2bb00eeadd7f9a36ea9bb9096c65a8;
frame_frame_rsa$pkcs1$$$function__4_decrypt->m_frame.f_lineno = 268;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = (tmp_res == 0) ? Py_True : Py_False;
assert(var_cleartext_marker_bad == NULL);
Py_INCREF(tmp_assign_source_5);
var_cleartext_marker_bad = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_cleartext);
tmp_expression_value_4 = var_cleartext;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_find);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$pkcs1$$$function__4_decrypt->m_frame.f_lineno = 271;
tmp_assign_source_6 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_4, mod_consts.const_tuple_bytes_null_int_pos_2_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_sep_idx == NULL);
var_sep_idx = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_sep_idx);
tmp_cmp_expr_left_2 = var_sep_idx;
tmp_cmp_expr_right_2 = mod_consts.const_int_pos_10;
tmp_assign_source_7 = RICH_COMPARE_LT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_sep_idx_bad == NULL);
var_sep_idx_bad = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_bitor_expr_left_1;
PyObject *tmp_bitor_expr_right_1;
CHECK_OBJECT(var_cleartext_marker_bad);
tmp_bitor_expr_left_1 = var_cleartext_marker_bad;
CHECK_OBJECT(var_sep_idx_bad);
tmp_bitor_expr_right_1 = var_sep_idx_bad;
tmp_assign_source_8 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_anything_bad == NULL);
var_anything_bad = tmp_assign_source_8;
}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(var_anything_bad);
tmp_truth_name_1 = CHECK_IF_TRUE(var_anything_bad);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
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
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_5;
tmp_called_value_5 = module_var_accessor_rsa$pkcs1$DecryptionError(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DecryptionError);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 282;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$pkcs1$$$function__4_decrypt->m_frame.f_lineno = 282;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_digest_7330fab1d7073751f2d5bfc9ad7b70de_tuple);

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 282;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_2;
PyObject *tmp_start_value_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_stop_value_1;
CHECK_OBJECT(var_cleartext);
tmp_expression_value_5 = var_cleartext;
CHECK_OBJECT(var_sep_idx);
tmp_add_expr_left_1 = var_sep_idx;
tmp_add_expr_right_1 = const_int_pos_1;
tmp_start_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_start_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_stop_value_1 = Py_None;
tmp_subscript_value_2 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
CHECK_OBJECT(tmp_start_value_1);
Py_DECREF(tmp_start_value_1);
assert(!(tmp_subscript_value_2 == NULL));
tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$pkcs1$$$function__4_decrypt, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$pkcs1$$$function__4_decrypt->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$pkcs1$$$function__4_decrypt, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$pkcs1$$$function__4_decrypt,
    type_description_1,
    par_crypto,
    par_priv_key,
    var_blocksize,
    var_encrypted,
    var_decrypted,
    var_cleartext,
    var_cleartext_marker_bad,
    var_sep_idx,
    var_sep_idx_bad,
    var_anything_bad
);


// Release cached frame if used for exception.
if (frame_frame_rsa$pkcs1$$$function__4_decrypt == cache_frame_frame_rsa$pkcs1$$$function__4_decrypt) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$pkcs1$$$function__4_decrypt);
    cache_frame_frame_rsa$pkcs1$$$function__4_decrypt = NULL;
}

assertFrameObject(frame_frame_rsa$pkcs1$$$function__4_decrypt);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_blocksize);
CHECK_OBJECT(var_blocksize);
Py_DECREF(var_blocksize);
var_blocksize = NULL;
CHECK_OBJECT(var_encrypted);
CHECK_OBJECT(var_encrypted);
Py_DECREF(var_encrypted);
var_encrypted = NULL;
CHECK_OBJECT(var_decrypted);
CHECK_OBJECT(var_decrypted);
Py_DECREF(var_decrypted);
var_decrypted = NULL;
CHECK_OBJECT(var_cleartext);
CHECK_OBJECT(var_cleartext);
Py_DECREF(var_cleartext);
var_cleartext = NULL;
CHECK_OBJECT(var_cleartext_marker_bad);
CHECK_OBJECT(var_cleartext_marker_bad);
Py_DECREF(var_cleartext_marker_bad);
var_cleartext_marker_bad = NULL;
CHECK_OBJECT(var_sep_idx);
CHECK_OBJECT(var_sep_idx);
Py_DECREF(var_sep_idx);
var_sep_idx = NULL;
CHECK_OBJECT(var_sep_idx_bad);
CHECK_OBJECT(var_sep_idx_bad);
Py_DECREF(var_sep_idx_bad);
var_sep_idx_bad = NULL;
CHECK_OBJECT(var_anything_bad);
CHECK_OBJECT(var_anything_bad);
Py_DECREF(var_anything_bad);
var_anything_bad = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_blocksize);
var_blocksize = NULL;
Py_XDECREF(var_encrypted);
var_encrypted = NULL;
Py_XDECREF(var_decrypted);
var_decrypted = NULL;
Py_XDECREF(var_cleartext);
var_cleartext = NULL;
Py_XDECREF(var_cleartext_marker_bad);
var_cleartext_marker_bad = NULL;
Py_XDECREF(var_sep_idx);
var_sep_idx = NULL;
Py_XDECREF(var_sep_idx_bad);
var_sep_idx_bad = NULL;
Py_XDECREF(var_anything_bad);
var_anything_bad = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_crypto);
Py_DECREF(par_crypto);
CHECK_OBJECT(par_priv_key);
Py_DECREF(par_priv_key);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_crypto);
Py_DECREF(par_crypto);
CHECK_OBJECT(par_priv_key);
Py_DECREF(par_priv_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_rsa$pkcs1$$$function__5_sign_hash(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_hash_value = python_pars[0];
PyObject *par_priv_key = python_pars[1];
PyObject *par_hash_method = python_pars[2];
PyObject *var_asn1code = NULL;
PyObject *var_cleartext = NULL;
PyObject *var_keylength = NULL;
PyObject *var_padded = NULL;
PyObject *var_payload = NULL;
PyObject *var_encrypted = NULL;
PyObject *var_block = NULL;
struct Nuitka_FrameObject *frame_frame_rsa$pkcs1$$$function__5_sign_hash;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$pkcs1$$$function__5_sign_hash = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_rsa$pkcs1$$$function__5_sign_hash)) {
    Py_XDECREF(cache_frame_frame_rsa$pkcs1$$$function__5_sign_hash);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$pkcs1$$$function__5_sign_hash == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$pkcs1$$$function__5_sign_hash = MAKE_FUNCTION_FRAME(tstate, code_objects_27d41bf598a67aee079f298e0cd62837, module_rsa$pkcs1, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$pkcs1$$$function__5_sign_hash->m_type_description == NULL);
frame_frame_rsa$pkcs1$$$function__5_sign_hash = cache_frame_frame_rsa$pkcs1$$$function__5_sign_hash;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$pkcs1$$$function__5_sign_hash);
assert(Py_REFCNT(frame_frame_rsa$pkcs1$$$function__5_sign_hash) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_hash_method);
tmp_cmp_expr_left_1 = par_hash_method;
tmp_cmp_expr_right_1 = module_var_accessor_rsa$pkcs1$HASH_ASN1(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HASH_ASN1);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 304;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "oooooooooo";
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
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_812da8a29ca127380db23416adbaf925;
CHECK_OBJECT(par_hash_method);
tmp_mod_expr_right_1 = par_hash_method;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$pkcs1$$$function__5_sign_hash->m_frame.f_lineno = 305;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 305;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
tmp_expression_value_1 = module_var_accessor_rsa$pkcs1$HASH_ASN1(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HASH_ASN1);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 306;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_hash_method);
tmp_subscript_value_1 = par_hash_method;
tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_asn1code == NULL);
var_asn1code = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
CHECK_OBJECT(var_asn1code);
tmp_add_expr_left_1 = var_asn1code;
CHECK_OBJECT(par_hash_value);
tmp_add_expr_right_1 = par_hash_value;
tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_cleartext == NULL);
var_cleartext = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_3;
tmp_expression_value_2 = module_var_accessor_rsa$pkcs1$common(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_common);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 310;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_byte_size);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_priv_key);
tmp_expression_value_3 = par_priv_key;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_n);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 310;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$pkcs1$$$function__5_sign_hash->m_frame.f_lineno = 310;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_keylength == NULL);
var_keylength = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_2 = module_var_accessor_rsa$pkcs1$_pad_for_signing(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__pad_for_signing);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_cleartext);
tmp_args_element_value_2 = var_cleartext;
CHECK_OBJECT(var_keylength);
tmp_args_element_value_3 = var_keylength;
frame_frame_rsa$pkcs1$$$function__5_sign_hash->m_frame.f_lineno = 311;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_padded == NULL);
var_padded = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_4;
tmp_called_instance_1 = module_var_accessor_rsa$pkcs1$transform(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transform);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 313;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_padded);
tmp_args_element_value_4 = var_padded;
frame_frame_rsa$pkcs1$$$function__5_sign_hash->m_frame.f_lineno = 313;
tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_bytes2int, tmp_args_element_value_4);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_payload == NULL);
var_payload = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(par_priv_key);
tmp_called_instance_2 = par_priv_key;
CHECK_OBJECT(var_payload);
tmp_args_element_value_5 = var_payload;
frame_frame_rsa$pkcs1$$$function__5_sign_hash->m_frame.f_lineno = 314;
tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_blinded_encrypt, tmp_args_element_value_5);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_encrypted == NULL);
var_encrypted = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_instance_3 = module_var_accessor_rsa$pkcs1$transform(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transform);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 315;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_encrypted);
tmp_args_element_value_6 = var_encrypted;
CHECK_OBJECT(var_keylength);
tmp_args_element_value_7 = var_keylength;
frame_frame_rsa$pkcs1$$$function__5_sign_hash->m_frame.f_lineno = 315;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_assign_source_7 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain_int2bytes,
        call_args
    );
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_block == NULL);
var_block = tmp_assign_source_7;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$pkcs1$$$function__5_sign_hash, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$pkcs1$$$function__5_sign_hash->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$pkcs1$$$function__5_sign_hash, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$pkcs1$$$function__5_sign_hash,
    type_description_1,
    par_hash_value,
    par_priv_key,
    par_hash_method,
    var_asn1code,
    var_cleartext,
    var_keylength,
    var_padded,
    var_payload,
    var_encrypted,
    var_block
);


// Release cached frame if used for exception.
if (frame_frame_rsa$pkcs1$$$function__5_sign_hash == cache_frame_frame_rsa$pkcs1$$$function__5_sign_hash) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$pkcs1$$$function__5_sign_hash);
    cache_frame_frame_rsa$pkcs1$$$function__5_sign_hash = NULL;
}

assertFrameObject(frame_frame_rsa$pkcs1$$$function__5_sign_hash);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_block);
tmp_return_value = var_block;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_asn1code);
CHECK_OBJECT(var_asn1code);
Py_DECREF(var_asn1code);
var_asn1code = NULL;
CHECK_OBJECT(var_cleartext);
CHECK_OBJECT(var_cleartext);
Py_DECREF(var_cleartext);
var_cleartext = NULL;
CHECK_OBJECT(var_keylength);
CHECK_OBJECT(var_keylength);
Py_DECREF(var_keylength);
var_keylength = NULL;
CHECK_OBJECT(var_padded);
CHECK_OBJECT(var_padded);
Py_DECREF(var_padded);
var_padded = NULL;
CHECK_OBJECT(var_payload);
CHECK_OBJECT(var_payload);
Py_DECREF(var_payload);
var_payload = NULL;
CHECK_OBJECT(var_encrypted);
CHECK_OBJECT(var_encrypted);
Py_DECREF(var_encrypted);
var_encrypted = NULL;
CHECK_OBJECT(var_block);
CHECK_OBJECT(var_block);
Py_DECREF(var_block);
var_block = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_asn1code);
var_asn1code = NULL;
Py_XDECREF(var_cleartext);
var_cleartext = NULL;
Py_XDECREF(var_keylength);
var_keylength = NULL;
Py_XDECREF(var_padded);
var_padded = NULL;
Py_XDECREF(var_payload);
var_payload = NULL;
Py_XDECREF(var_encrypted);
var_encrypted = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_hash_value);
Py_DECREF(par_hash_value);
CHECK_OBJECT(par_priv_key);
Py_DECREF(par_priv_key);
CHECK_OBJECT(par_hash_method);
Py_DECREF(par_hash_method);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_hash_value);
Py_DECREF(par_hash_value);
CHECK_OBJECT(par_priv_key);
Py_DECREF(par_priv_key);
CHECK_OBJECT(par_hash_method);
Py_DECREF(par_hash_method);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_rsa$pkcs1$$$function__6_sign(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_message = python_pars[0];
PyObject *par_priv_key = python_pars[1];
PyObject *par_hash_method = python_pars[2];
PyObject *var_msg_hash = NULL;
struct Nuitka_FrameObject *frame_frame_rsa$pkcs1$$$function__6_sign;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$pkcs1$$$function__6_sign = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_rsa$pkcs1$$$function__6_sign)) {
    Py_XDECREF(cache_frame_frame_rsa$pkcs1$$$function__6_sign);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$pkcs1$$$function__6_sign == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$pkcs1$$$function__6_sign = MAKE_FUNCTION_FRAME(tstate, code_objects_fa279102451fbfe206d7188fa3b61581, module_rsa$pkcs1, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$pkcs1$$$function__6_sign->m_type_description == NULL);
frame_frame_rsa$pkcs1$$$function__6_sign = cache_frame_frame_rsa$pkcs1$$$function__6_sign;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$pkcs1$$$function__6_sign);
assert(Py_REFCNT(frame_frame_rsa$pkcs1$$$function__6_sign) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_rsa$pkcs1$compute_hash(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_compute_hash);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 338;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_message);
tmp_args_element_value_1 = par_message;
CHECK_OBJECT(par_hash_method);
tmp_args_element_value_2 = par_hash_method;
frame_frame_rsa$pkcs1$$$function__6_sign->m_frame.f_lineno = 338;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_msg_hash == NULL);
var_msg_hash = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_value_2 = module_var_accessor_rsa$pkcs1$sign_hash(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sign_hash);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 339;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_msg_hash);
tmp_args_element_value_3 = var_msg_hash;
CHECK_OBJECT(par_priv_key);
tmp_args_element_value_4 = par_priv_key;
CHECK_OBJECT(par_hash_method);
tmp_args_element_value_5 = par_hash_method;
frame_frame_rsa$pkcs1$$$function__6_sign->m_frame.f_lineno = 339;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 339;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$pkcs1$$$function__6_sign, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$pkcs1$$$function__6_sign->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$pkcs1$$$function__6_sign, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$pkcs1$$$function__6_sign,
    type_description_1,
    par_message,
    par_priv_key,
    par_hash_method,
    var_msg_hash
);


// Release cached frame if used for exception.
if (frame_frame_rsa$pkcs1$$$function__6_sign == cache_frame_frame_rsa$pkcs1$$$function__6_sign) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$pkcs1$$$function__6_sign);
    cache_frame_frame_rsa$pkcs1$$$function__6_sign = NULL;
}

assertFrameObject(frame_frame_rsa$pkcs1$$$function__6_sign);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_msg_hash);
CHECK_OBJECT(var_msg_hash);
Py_DECREF(var_msg_hash);
var_msg_hash = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_msg_hash);
var_msg_hash = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
CHECK_OBJECT(par_priv_key);
Py_DECREF(par_priv_key);
CHECK_OBJECT(par_hash_method);
Py_DECREF(par_hash_method);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
CHECK_OBJECT(par_priv_key);
Py_DECREF(par_priv_key);
CHECK_OBJECT(par_hash_method);
Py_DECREF(par_hash_method);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_rsa$pkcs1$$$function__7_verify(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_message = python_pars[0];
PyObject *par_signature = python_pars[1];
PyObject *par_pub_key = python_pars[2];
PyObject *var_keylength = NULL;
PyObject *var_encrypted = NULL;
PyObject *var_decrypted = NULL;
PyObject *var_clearsig = NULL;
PyObject *var_method_name = NULL;
PyObject *var_message_hash = NULL;
PyObject *var_cleartext = NULL;
PyObject *var_expected = NULL;
struct Nuitka_FrameObject *frame_frame_rsa$pkcs1$$$function__7_verify;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$pkcs1$$$function__7_verify = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_rsa$pkcs1$$$function__7_verify)) {
    Py_XDECREF(cache_frame_frame_rsa$pkcs1$$$function__7_verify);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$pkcs1$$$function__7_verify == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$pkcs1$$$function__7_verify = MAKE_FUNCTION_FRAME(tstate, code_objects_568b0cce0832c57de52ff26db38dde3e, module_rsa$pkcs1, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$pkcs1$$$function__7_verify->m_type_description == NULL);
frame_frame_rsa$pkcs1$$$function__7_verify = cache_frame_frame_rsa$pkcs1$$$function__7_verify;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$pkcs1$$$function__7_verify);
assert(Py_REFCNT(frame_frame_rsa$pkcs1$$$function__7_verify) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = module_var_accessor_rsa$pkcs1$common(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_common);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 357;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_byte_size);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_pub_key);
tmp_expression_value_2 = par_pub_key;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_n);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 357;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$pkcs1$$$function__7_verify->m_frame.f_lineno = 357;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_keylength == NULL);
var_keylength = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_rsa$pkcs1$transform(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transform);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 358;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_signature);
tmp_args_element_value_2 = par_signature;
frame_frame_rsa$pkcs1$$$function__7_verify->m_frame.f_lineno = 358;
tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_bytes2int, tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_encrypted == NULL);
var_encrypted = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_5;
tmp_expression_value_3 = module_var_accessor_rsa$pkcs1$core(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_core);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 359;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_decrypt_int);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_encrypted);
tmp_args_element_value_3 = var_encrypted;
CHECK_OBJECT(par_pub_key);
tmp_expression_value_4 = par_pub_key;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_e);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 359;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_pub_key);
tmp_expression_value_5 = par_pub_key;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_n);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 359;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$pkcs1$$$function__7_verify->m_frame.f_lineno = 359;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_decrypted == NULL);
var_decrypted = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_instance_2 = module_var_accessor_rsa$pkcs1$transform(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transform);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 360;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_decrypted);
tmp_args_element_value_6 = var_decrypted;
CHECK_OBJECT(var_keylength);
tmp_args_element_value_7 = var_keylength;
frame_frame_rsa$pkcs1$$$function__7_verify->m_frame.f_lineno = 360;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_assign_source_4 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_int2bytes,
        call_args
    );
}

if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_clearsig == NULL);
var_clearsig = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_8;
tmp_called_value_3 = module_var_accessor_rsa$pkcs1$_find_method_hash(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__find_method_hash);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 363;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_clearsig);
tmp_args_element_value_8 = var_clearsig;
frame_frame_rsa$pkcs1$$$function__7_verify->m_frame.f_lineno = 363;
tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_8);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_method_name == NULL);
var_method_name = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
tmp_called_value_4 = module_var_accessor_rsa$pkcs1$compute_hash(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_compute_hash);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 364;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_message);
tmp_args_element_value_9 = par_message;
CHECK_OBJECT(var_method_name);
tmp_args_element_value_10 = var_method_name;
frame_frame_rsa$pkcs1$$$function__7_verify->m_frame.f_lineno = 364;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_message_hash == NULL);
var_message_hash = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_1;
tmp_expression_value_6 = module_var_accessor_rsa$pkcs1$HASH_ASN1(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HASH_ASN1);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 367;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_method_name);
tmp_subscript_value_1 = var_method_name;
tmp_add_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_1);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_message_hash);
tmp_add_expr_right_1 = var_message_hash;
tmp_assign_source_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_cleartext == NULL);
var_cleartext = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
tmp_called_value_5 = module_var_accessor_rsa$pkcs1$_pad_for_signing(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__pad_for_signing);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 368;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_cleartext);
tmp_args_element_value_11 = var_cleartext;
CHECK_OBJECT(var_keylength);
tmp_args_element_value_12 = var_keylength;
frame_frame_rsa$pkcs1$$$function__7_verify->m_frame.f_lineno = 368;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_expected == NULL);
var_expected = tmp_assign_source_8;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_signature);
tmp_len_arg_1 = par_signature;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_keylength);
tmp_cmp_expr_right_1 = var_keylength;
tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_1 = "ooooooooooo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_6;
tmp_called_value_6 = module_var_accessor_rsa$pkcs1$VerificationError(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VerificationError);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 371;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$pkcs1$$$function__7_verify->m_frame.f_lineno = 371;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts.const_tuple_str_digest_200d74a8d89d6c50593485fee41c8c7a_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 371;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_expected);
tmp_cmp_expr_left_2 = var_expected;
CHECK_OBJECT(var_clearsig);
tmp_cmp_expr_right_2 = var_clearsig;
tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 374;
type_description_1 = "ooooooooooo";
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
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_7;
tmp_called_value_7 = module_var_accessor_rsa$pkcs1$VerificationError(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VerificationError);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 375;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$pkcs1$$$function__7_verify->m_frame.f_lineno = 375;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_7, mod_consts.const_tuple_str_digest_200d74a8d89d6c50593485fee41c8c7a_tuple);

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 375;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 375;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 375;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooo";
goto frame_exception_exit_1;
}
branch_no_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$pkcs1$$$function__7_verify, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$pkcs1$$$function__7_verify->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$pkcs1$$$function__7_verify, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$pkcs1$$$function__7_verify,
    type_description_1,
    par_message,
    par_signature,
    par_pub_key,
    var_keylength,
    var_encrypted,
    var_decrypted,
    var_clearsig,
    var_method_name,
    var_message_hash,
    var_cleartext,
    var_expected
);


// Release cached frame if used for exception.
if (frame_frame_rsa$pkcs1$$$function__7_verify == cache_frame_frame_rsa$pkcs1$$$function__7_verify) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$pkcs1$$$function__7_verify);
    cache_frame_frame_rsa$pkcs1$$$function__7_verify = NULL;
}

assertFrameObject(frame_frame_rsa$pkcs1$$$function__7_verify);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_method_name);
tmp_return_value = var_method_name;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_keylength);
CHECK_OBJECT(var_keylength);
Py_DECREF(var_keylength);
var_keylength = NULL;
CHECK_OBJECT(var_encrypted);
CHECK_OBJECT(var_encrypted);
Py_DECREF(var_encrypted);
var_encrypted = NULL;
CHECK_OBJECT(var_decrypted);
CHECK_OBJECT(var_decrypted);
Py_DECREF(var_decrypted);
var_decrypted = NULL;
CHECK_OBJECT(var_clearsig);
CHECK_OBJECT(var_clearsig);
Py_DECREF(var_clearsig);
var_clearsig = NULL;
CHECK_OBJECT(var_method_name);
CHECK_OBJECT(var_method_name);
Py_DECREF(var_method_name);
var_method_name = NULL;
CHECK_OBJECT(var_message_hash);
CHECK_OBJECT(var_message_hash);
Py_DECREF(var_message_hash);
var_message_hash = NULL;
CHECK_OBJECT(var_cleartext);
CHECK_OBJECT(var_cleartext);
Py_DECREF(var_cleartext);
var_cleartext = NULL;
CHECK_OBJECT(var_expected);
CHECK_OBJECT(var_expected);
Py_DECREF(var_expected);
var_expected = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_keylength);
var_keylength = NULL;
Py_XDECREF(var_encrypted);
var_encrypted = NULL;
Py_XDECREF(var_decrypted);
var_decrypted = NULL;
Py_XDECREF(var_clearsig);
var_clearsig = NULL;
Py_XDECREF(var_method_name);
var_method_name = NULL;
Py_XDECREF(var_message_hash);
var_message_hash = NULL;
Py_XDECREF(var_cleartext);
var_cleartext = NULL;
Py_XDECREF(var_expected);
var_expected = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
CHECK_OBJECT(par_signature);
Py_DECREF(par_signature);
CHECK_OBJECT(par_pub_key);
Py_DECREF(par_pub_key);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
CHECK_OBJECT(par_signature);
Py_DECREF(par_signature);
CHECK_OBJECT(par_pub_key);
Py_DECREF(par_pub_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_rsa$pkcs1$$$function__8_find_signature_hash(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_signature = python_pars[0];
PyObject *par_pub_key = python_pars[1];
PyObject *var_keylength = NULL;
PyObject *var_encrypted = NULL;
PyObject *var_decrypted = NULL;
PyObject *var_clearsig = NULL;
struct Nuitka_FrameObject *frame_frame_rsa$pkcs1$$$function__8_find_signature_hash;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$pkcs1$$$function__8_find_signature_hash = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_rsa$pkcs1$$$function__8_find_signature_hash)) {
    Py_XDECREF(cache_frame_frame_rsa$pkcs1$$$function__8_find_signature_hash);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$pkcs1$$$function__8_find_signature_hash == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$pkcs1$$$function__8_find_signature_hash = MAKE_FUNCTION_FRAME(tstate, code_objects_5d5ca4b0f5375dd1d725c37142be47ad, module_rsa$pkcs1, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$pkcs1$$$function__8_find_signature_hash->m_type_description == NULL);
frame_frame_rsa$pkcs1$$$function__8_find_signature_hash = cache_frame_frame_rsa$pkcs1$$$function__8_find_signature_hash;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$pkcs1$$$function__8_find_signature_hash);
assert(Py_REFCNT(frame_frame_rsa$pkcs1$$$function__8_find_signature_hash) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = module_var_accessor_rsa$pkcs1$common(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_common);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 391;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_byte_size);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_pub_key);
tmp_expression_value_2 = par_pub_key;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_n);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 391;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$pkcs1$$$function__8_find_signature_hash->m_frame.f_lineno = 391;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_keylength == NULL);
var_keylength = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_rsa$pkcs1$transform(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transform);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 392;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_signature);
tmp_args_element_value_2 = par_signature;
frame_frame_rsa$pkcs1$$$function__8_find_signature_hash->m_frame.f_lineno = 392;
tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_bytes2int, tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_encrypted == NULL);
var_encrypted = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_5;
tmp_expression_value_3 = module_var_accessor_rsa$pkcs1$core(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_core);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 393;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_decrypt_int);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 393;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_encrypted);
tmp_args_element_value_3 = var_encrypted;
CHECK_OBJECT(par_pub_key);
tmp_expression_value_4 = par_pub_key;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_e);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 393;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_pub_key);
tmp_expression_value_5 = par_pub_key;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_n);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 393;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$pkcs1$$$function__8_find_signature_hash->m_frame.f_lineno = 393;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 393;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_decrypted == NULL);
var_decrypted = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_instance_2 = module_var_accessor_rsa$pkcs1$transform(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transform);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 394;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_decrypted);
tmp_args_element_value_6 = var_decrypted;
CHECK_OBJECT(var_keylength);
tmp_args_element_value_7 = var_keylength;
frame_frame_rsa$pkcs1$$$function__8_find_signature_hash->m_frame.f_lineno = 394;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_assign_source_4 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_int2bytes,
        call_args
    );
}

if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 394;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_clearsig == NULL);
var_clearsig = tmp_assign_source_4;
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_8;
tmp_called_value_3 = module_var_accessor_rsa$pkcs1$_find_method_hash(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__find_method_hash);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 396;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_clearsig);
tmp_args_element_value_8 = var_clearsig;
frame_frame_rsa$pkcs1$$$function__8_find_signature_hash->m_frame.f_lineno = 396;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_8);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 396;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$pkcs1$$$function__8_find_signature_hash, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$pkcs1$$$function__8_find_signature_hash->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$pkcs1$$$function__8_find_signature_hash, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$pkcs1$$$function__8_find_signature_hash,
    type_description_1,
    par_signature,
    par_pub_key,
    var_keylength,
    var_encrypted,
    var_decrypted,
    var_clearsig
);


// Release cached frame if used for exception.
if (frame_frame_rsa$pkcs1$$$function__8_find_signature_hash == cache_frame_frame_rsa$pkcs1$$$function__8_find_signature_hash) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$pkcs1$$$function__8_find_signature_hash);
    cache_frame_frame_rsa$pkcs1$$$function__8_find_signature_hash = NULL;
}

assertFrameObject(frame_frame_rsa$pkcs1$$$function__8_find_signature_hash);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_keylength);
CHECK_OBJECT(var_keylength);
Py_DECREF(var_keylength);
var_keylength = NULL;
CHECK_OBJECT(var_encrypted);
CHECK_OBJECT(var_encrypted);
Py_DECREF(var_encrypted);
var_encrypted = NULL;
CHECK_OBJECT(var_decrypted);
CHECK_OBJECT(var_decrypted);
Py_DECREF(var_decrypted);
var_decrypted = NULL;
CHECK_OBJECT(var_clearsig);
CHECK_OBJECT(var_clearsig);
Py_DECREF(var_clearsig);
var_clearsig = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_keylength);
var_keylength = NULL;
Py_XDECREF(var_encrypted);
var_encrypted = NULL;
Py_XDECREF(var_decrypted);
var_decrypted = NULL;
Py_XDECREF(var_clearsig);
var_clearsig = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_signature);
Py_DECREF(par_signature);
CHECK_OBJECT(par_pub_key);
Py_DECREF(par_pub_key);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_signature);
Py_DECREF(par_signature);
CHECK_OBJECT(par_pub_key);
Py_DECREF(par_pub_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_rsa$pkcs1$$$function__9_yield_fixedblocks(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_infile = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_blocksize = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_blocksize;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_infile;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_GENERATOR_rsa$pkcs1$$$function__9_yield_fixedblocks$$$genobj__1_yield_fixedblocks(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_infile);
CHECK_OBJECT(par_infile);
Py_DECREF(par_infile);
par_infile = NULL;
CHECK_OBJECT(par_blocksize);
CHECK_OBJECT(par_blocksize);
Py_DECREF(par_blocksize);
par_blocksize = NULL;
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
struct rsa$pkcs1$$$function__9_yield_fixedblocks$$$genobj__1_yield_fixedblocks_locals {
PyObject *var_block;
PyObject *var_read_bytes;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
};
#endif

static PyObject *rsa$pkcs1$$$function__9_yield_fixedblocks$$$genobj__1_yield_fixedblocks_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct rsa$pkcs1$$$function__9_yield_fixedblocks$$$genobj__1_yield_fixedblocks_locals *generator_heap = (struct rsa$pkcs1$$$function__9_yield_fixedblocks$$$genobj__1_yield_fixedblocks_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_block = NULL;
generator_heap->var_read_bytes = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_6fbdd7717447da857894284baee9d8a7, module_rsa$pkcs1, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
loop_start_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_infile);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 408;
generator_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_read);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 408;
generator_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_blocksize);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 408;
generator_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
generator->m_frame->m_frame.f_lineno = 408;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 408;
generator_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_block;
    generator_heap->var_block = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(generator_heap->var_block);
tmp_len_arg_1 = generator_heap->var_block;
tmp_assign_source_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 410;
generator_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_read_bytes;
    generator_heap->var_read_bytes = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
CHECK_OBJECT(generator_heap->var_read_bytes);
tmp_cmp_expr_left_1 = generator_heap->var_read_bytes;
tmp_cmp_expr_right_1 = 0;
tmp_condition_result_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
goto loop_end_1;
branch_no_1:;
{
PyObject *tmp_expression_value_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_block);
tmp_expression_value_2 = generator_heap->var_block;
Py_INCREF(tmp_expression_value_2);
generator->m_yield_return_index = 1;
return tmp_expression_value_2;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 414;
generator_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(generator_heap->var_read_bytes);
tmp_cmp_expr_left_2 = generator_heap->var_read_bytes;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_blocksize);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 416;
generator_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_right_2 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_condition_result_2 = RICH_COMPARE_LT_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 416;
generator_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
goto loop_end_1;
branch_no_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 407;
generator_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;

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
    generator_heap->var_block,
    generator_heap->var_read_bytes
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
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_block);
generator_heap->var_block = NULL;
Py_XDECREF(generator_heap->var_read_bytes);
generator_heap->var_read_bytes = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:
try_end_1:;
CHECK_OBJECT(generator_heap->var_block);
CHECK_OBJECT(generator_heap->var_block);
Py_DECREF(generator_heap->var_block);
generator_heap->var_block = NULL;
CHECK_OBJECT(generator_heap->var_read_bytes);
CHECK_OBJECT(generator_heap->var_read_bytes);
Py_DECREF(generator_heap->var_read_bytes);
generator_heap->var_read_bytes = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_rsa$pkcs1$$$function__9_yield_fixedblocks$$$genobj__1_yield_fixedblocks(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        rsa$pkcs1$$$function__9_yield_fixedblocks$$$genobj__1_yield_fixedblocks_context,
        module_rsa$pkcs1,
        mod_consts.const_str_plain_yield_fixedblocks,
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        code_objects_6fbdd7717447da857894284baee9d8a7,
        closure,
        2,
#if 1
        sizeof(struct rsa$pkcs1$$$function__9_yield_fixedblocks$$$genobj__1_yield_fixedblocks_locals)
#else
        0
#endif
    );
}


static PyObject *impl_rsa$pkcs1$$$function__10_compute_hash(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_message = python_pars[0];
PyObject *par_method_name = python_pars[1];
PyObject *var_method = NULL;
PyObject *var_hasher = NULL;
PyObject *var_block = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_rsa$pkcs1$$$function__10_compute_hash;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$pkcs1$$$function__10_compute_hash = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_rsa$pkcs1$$$function__10_compute_hash)) {
    Py_XDECREF(cache_frame_frame_rsa$pkcs1$$$function__10_compute_hash);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$pkcs1$$$function__10_compute_hash == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$pkcs1$$$function__10_compute_hash = MAKE_FUNCTION_FRAME(tstate, code_objects_a84922ba944f35070d6560625380c59d, module_rsa$pkcs1, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$pkcs1$$$function__10_compute_hash->m_type_description == NULL);
frame_frame_rsa$pkcs1$$$function__10_compute_hash = cache_frame_frame_rsa$pkcs1$$$function__10_compute_hash;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$pkcs1$$$function__10_compute_hash);
assert(Py_REFCNT(frame_frame_rsa$pkcs1$$$function__10_compute_hash) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_method_name);
tmp_cmp_expr_left_1 = par_method_name;
tmp_cmp_expr_right_1 = module_var_accessor_rsa$pkcs1$HASH_METHODS(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HASH_METHODS);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 431;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;
type_description_1 = "ooooo";
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
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_812da8a29ca127380db23416adbaf925;
CHECK_OBJECT(par_method_name);
tmp_mod_expr_right_1 = par_method_name;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 432;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$pkcs1$$$function__10_compute_hash->m_frame.f_lineno = 432;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 432;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
tmp_expression_value_1 = module_var_accessor_rsa$pkcs1$HASH_METHODS(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HASH_METHODS);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 434;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_method_name);
tmp_subscript_value_1 = par_method_name;
tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 434;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_method == NULL);
var_method = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
CHECK_OBJECT(var_method);
tmp_called_value_1 = var_method;
frame_frame_rsa$pkcs1$$$function__10_compute_hash->m_frame.f_lineno = 435;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_hasher == NULL);
var_hasher = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_message);
tmp_isinstance_inst_1 = par_message;
tmp_isinstance_cls_1 = (PyObject *)&PyBytes_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 437;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
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
CHECK_OBJECT(var_hasher);
tmp_expression_value_2 = var_hasher;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_update);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_message);
tmp_args_element_value_1 = par_message;
frame_frame_rsa$pkcs1$$$function__10_compute_hash->m_frame.f_lineno = 438;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto branch_end_2;
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_message);
tmp_expression_value_3 = par_message;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, const_str_plain_read);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_message);
tmp_expression_value_5 = par_message;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_read);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain___call__);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_operand_value_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_operand_value_1 = tmp_and_left_value_1;
and_end_1:;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
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
frame_frame_rsa$pkcs1$$$function__10_compute_hash->m_frame.f_lineno = 440;
tmp_raise_type_2 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 440;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_3 = module_var_accessor_rsa$pkcs1$yield_fixedblocks(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_yield_fixedblocks);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 442;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_message);
tmp_args_element_value_2 = par_message;
tmp_args_element_value_3 = mod_consts.const_int_pos_1024;
frame_frame_rsa$pkcs1$$$function__10_compute_hash->m_frame.f_lineno = 442;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 442;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 442;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_3;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_4 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooo";
exception_lineno = 442;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_5 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_block;
    var_block = tmp_assign_source_5;
    Py_INCREF(var_block);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_4;
if (var_hasher == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hasher);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 443;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}

tmp_expression_value_6 = var_hasher;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_update);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_block);
tmp_args_element_value_4 = var_block;
frame_frame_rsa$pkcs1$$$function__10_compute_hash->m_frame.f_lineno = 443;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 442;
type_description_1 = "ooooo";
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
branch_end_2:;
{
PyObject *tmp_called_instance_1;
if (var_hasher == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hasher);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 445;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_1 = var_hasher;
frame_frame_rsa$pkcs1$$$function__10_compute_hash->m_frame.f_lineno = 445;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_digest);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$pkcs1$$$function__10_compute_hash, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$pkcs1$$$function__10_compute_hash->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$pkcs1$$$function__10_compute_hash, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$pkcs1$$$function__10_compute_hash,
    type_description_1,
    par_message,
    par_method_name,
    var_method,
    var_hasher,
    var_block
);


// Release cached frame if used for exception.
if (frame_frame_rsa$pkcs1$$$function__10_compute_hash == cache_frame_frame_rsa$pkcs1$$$function__10_compute_hash) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$pkcs1$$$function__10_compute_hash);
    cache_frame_frame_rsa$pkcs1$$$function__10_compute_hash = NULL;
}

assertFrameObject(frame_frame_rsa$pkcs1$$$function__10_compute_hash);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_method);
CHECK_OBJECT(var_method);
Py_DECREF(var_method);
var_method = NULL;
Py_XDECREF(var_hasher);
var_hasher = NULL;
Py_XDECREF(var_block);
var_block = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_method);
var_method = NULL;
Py_XDECREF(var_hasher);
var_hasher = NULL;
Py_XDECREF(var_block);
var_block = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
CHECK_OBJECT(par_method_name);
Py_DECREF(par_method_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
CHECK_OBJECT(par_method_name);
Py_DECREF(par_method_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_rsa$pkcs1$$$function__11__find_method_hash(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_clearsig = python_pars[0];
PyObject *var_hashname = NULL;
PyObject *var_asn1code = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_rsa$pkcs1$$$function__11__find_method_hash;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$pkcs1$$$function__11__find_method_hash = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_rsa$pkcs1$$$function__11__find_method_hash)) {
    Py_XDECREF(cache_frame_frame_rsa$pkcs1$$$function__11__find_method_hash);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$pkcs1$$$function__11__find_method_hash == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$pkcs1$$$function__11__find_method_hash = MAKE_FUNCTION_FRAME(tstate, code_objects_339904d9bc08f0ff1cc177b2041d17e6, module_rsa$pkcs1, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$pkcs1$$$function__11__find_method_hash->m_type_description == NULL);
frame_frame_rsa$pkcs1$$$function__11__find_method_hash = cache_frame_frame_rsa$pkcs1$$$function__11__find_method_hash;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$pkcs1$$$function__11__find_method_hash);
assert(Py_REFCNT(frame_frame_rsa$pkcs1$$$function__11__find_method_hash) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_rsa$pkcs1$HASH_ASN1(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HASH_ASN1);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 456;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_items);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 456;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$pkcs1$$$function__11__find_method_hash->m_frame.f_lineno = 456;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 456;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 456;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_1;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_2;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_2 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooo";
exception_lineno = 456;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 456;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 456;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 456;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
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



exception_lineno = 456;
type_description_1 = "ooo";
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
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_hashname;
    var_hashname = tmp_assign_source_6;
    Py_INCREF(var_hashname);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_asn1code;
    var_asn1code = tmp_assign_source_7;
    Py_INCREF(var_asn1code);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_asn1code);
tmp_cmp_expr_left_1 = var_asn1code;
CHECK_OBJECT(par_clearsig);
tmp_cmp_expr_right_1 = par_clearsig;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 457;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_condition_result_1 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
CHECK_OBJECT(var_hashname);
tmp_return_value = var_hashname;
Py_INCREF(tmp_return_value);
goto try_return_handler_2;
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 456;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
CHECK_OBJECT(tmp_for_loop_1__iter_value);
Py_DECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
goto frame_return_exit_1;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_rsa$pkcs1$VerificationError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VerificationError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 460;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$pkcs1$$$function__11__find_method_hash->m_frame.f_lineno = 460;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_200d74a8d89d6c50593485fee41c8c7a_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 460;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 460;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 460;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$pkcs1$$$function__11__find_method_hash, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$pkcs1$$$function__11__find_method_hash->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$pkcs1$$$function__11__find_method_hash, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$pkcs1$$$function__11__find_method_hash,
    type_description_1,
    par_clearsig,
    var_hashname,
    var_asn1code
);


// Release cached frame if used for exception.
if (frame_frame_rsa$pkcs1$$$function__11__find_method_hash == cache_frame_frame_rsa$pkcs1$$$function__11__find_method_hash) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$pkcs1$$$function__11__find_method_hash);
    cache_frame_frame_rsa$pkcs1$$$function__11__find_method_hash = NULL;
}

assertFrameObject(frame_frame_rsa$pkcs1$$$function__11__find_method_hash);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_hashname);
CHECK_OBJECT(var_hashname);
Py_DECREF(var_hashname);
var_hashname = NULL;
CHECK_OBJECT(var_asn1code);
CHECK_OBJECT(var_asn1code);
Py_DECREF(var_asn1code);
var_asn1code = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_hashname);
var_hashname = NULL;
Py_XDECREF(var_asn1code);
var_asn1code = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_clearsig);
Py_DECREF(par_clearsig);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_clearsig);
Py_DECREF(par_clearsig);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_rsa$pkcs1$$$function__10_compute_hash(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$pkcs1$$$function__10_compute_hash,
        mod_consts.const_str_plain_compute_hash,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a84922ba944f35070d6560625380c59d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$pkcs1,
        mod_consts.const_str_digest_2c1e7923913819db21944bbb509377cf,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$pkcs1$$$function__11__find_method_hash(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$pkcs1$$$function__11__find_method_hash,
        mod_consts.const_str_plain__find_method_hash,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_339904d9bc08f0ff1cc177b2041d17e6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$pkcs1,
        mod_consts.const_str_digest_72c5192cfcd05152e099e5b0075f6917,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$pkcs1$$$function__1__pad_for_encryption(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$pkcs1$$$function__1__pad_for_encryption,
        mod_consts.const_str_plain__pad_for_encryption,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_18a2f5f9f4e9cae607ccd14aa763bb4a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$pkcs1,
        mod_consts.const_str_digest_189d1a5a8cbb8dd88fe02545b3e5cd01,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$pkcs1$$$function__2__pad_for_signing(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$pkcs1$$$function__2__pad_for_signing,
        mod_consts.const_str_plain__pad_for_signing,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2b5a73d800e813b31a6aa6c6fcfc59e7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$pkcs1,
        mod_consts.const_str_digest_a61e0f945542e8bf2cc6323b95f66edb,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$pkcs1$$$function__3_encrypt(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$pkcs1$$$function__3_encrypt,
        mod_consts.const_str_plain_encrypt,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_afa15ff77b7b51d38bbb47762282dadb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$pkcs1,
        mod_consts.const_str_digest_6b1eb3ee3a5feec5ea62f4e868b5c56c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$pkcs1$$$function__4_decrypt(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$pkcs1$$$function__4_decrypt,
        mod_consts.const_str_plain_decrypt,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e9c07903a92c631f0b212c6980bcbfec,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$pkcs1,
        mod_consts.const_str_digest_2b87f0f863e708aaea3b4dbe0f53c2f8,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$pkcs1$$$function__5_sign_hash(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$pkcs1$$$function__5_sign_hash,
        mod_consts.const_str_plain_sign_hash,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_27d41bf598a67aee079f298e0cd62837,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$pkcs1,
        mod_consts.const_str_digest_723a9c59a1562d09ccea228794a0dab5,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$pkcs1$$$function__6_sign(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$pkcs1$$$function__6_sign,
        mod_consts.const_str_plain_sign,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_fa279102451fbfe206d7188fa3b61581,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$pkcs1,
        mod_consts.const_str_digest_32ca4c5448b5ef80153ec1e314460588,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$pkcs1$$$function__7_verify(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$pkcs1$$$function__7_verify,
        mod_consts.const_str_plain_verify,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_568b0cce0832c57de52ff26db38dde3e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$pkcs1,
        mod_consts.const_str_digest_c315618cbf868730bbbe33199e90e11d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$pkcs1$$$function__8_find_signature_hash(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$pkcs1$$$function__8_find_signature_hash,
        mod_consts.const_str_plain_find_signature_hash,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5d5ca4b0f5375dd1d725c37142be47ad,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$pkcs1,
        mod_consts.const_str_digest_af0498b3a85009ae34a3ad96476d8206,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$pkcs1$$$function__9_yield_fixedblocks(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$pkcs1$$$function__9_yield_fixedblocks,
        mod_consts.const_str_plain_yield_fixedblocks,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6fbdd7717447da857894284baee9d8a7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$pkcs1,
        mod_consts.const_str_digest_51ddb104c0c56080abe1880e7c52c746,
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

static function_impl_code const function_table_rsa$pkcs1[] = {
impl_rsa$pkcs1$$$function__1__pad_for_encryption,
impl_rsa$pkcs1$$$function__2__pad_for_signing,
impl_rsa$pkcs1$$$function__3_encrypt,
impl_rsa$pkcs1$$$function__4_decrypt,
impl_rsa$pkcs1$$$function__5_sign_hash,
impl_rsa$pkcs1$$$function__6_sign,
impl_rsa$pkcs1$$$function__7_verify,
impl_rsa$pkcs1$$$function__8_find_signature_hash,
impl_rsa$pkcs1$$$function__9_yield_fixedblocks,
impl_rsa$pkcs1$$$function__10_compute_hash,
impl_rsa$pkcs1$$$function__11__find_method_hash,
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

    return Nuitka_Function_GetFunctionState(function, function_table_rsa$pkcs1);
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
        module_rsa$pkcs1,
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
        function_table_rsa$pkcs1,
        sizeof(function_table_rsa$pkcs1) / sizeof(function_impl_code)
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
static char const *module_full_name = "rsa.pkcs1";
#endif

// Internal entry point for module code.
PyObject *module_code_rsa$pkcs1(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("rsa$pkcs1");

    // Store the module for future use.
    module_rsa$pkcs1 = module;

    moduledict_rsa$pkcs1 = MODULE_DICT(module_rsa$pkcs1);

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
        PRINT_STRING("rsa$pkcs1: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("rsa$pkcs1: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("rsa$pkcs1: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "rsa.pkcs1" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initrsa$pkcs1\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_rsa$pkcs1,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_rsa$pkcs1,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_rsa$pkcs1,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_rsa$pkcs1,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_rsa$pkcs1,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_rsa$pkcs1);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_rsa$pkcs1);
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

        UPDATE_STRING_DICT1(moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
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
struct Nuitka_FrameObject *frame_frame_rsa$pkcs1;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_rsa$pkcs1$$$class__1_CryptoError_82 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *locals_rsa$pkcs1$$$class__2_DecryptionError_86 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
PyObject *locals_rsa$pkcs1$$$class__3_VerificationError_90 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_b2381abc5fe9bf03282948a8bd3c3c2b;
UPDATE_STRING_DICT0(moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_rsa$pkcs1 = MAKE_MODULE_FRAME(code_objects_e05370460a07551eeab9a4299dc86e7d, module_rsa$pkcs1);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$pkcs1);
assert(Py_REFCNT(frame_frame_rsa$pkcs1) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_rsa$pkcs1$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_rsa$pkcs1$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_hashlib;
tmp_globals_arg_value_1 = (PyObject *)moduledict_rsa$pkcs1;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_rsa$pkcs1->m_frame.f_lineno = 29;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_hashlib, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_7 == NULL));
UPDATE_STRING_DICT0(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_8 == NULL));
UPDATE_STRING_DICT0(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_typing, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_hmac;
tmp_globals_arg_value_2 = (PyObject *)moduledict_rsa$pkcs1;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_compare_digest_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_rsa$pkcs1->m_frame.f_lineno = 33;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_rsa$pkcs1,
        mod_consts.const_str_plain_compare_digest,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_compare_digest);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_compare_digest, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = const_str_empty;
tmp_globals_arg_value_3 = (PyObject *)moduledict_rsa$pkcs1;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_09cf44b4bf70cfe79d2153cfc57d67c2_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_rsa$pkcs1->m_frame.f_lineno = 35;
tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_10;
}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_rsa$pkcs1,
        mod_consts.const_str_plain_common,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_common);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_common, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_rsa$pkcs1,
        mod_consts.const_str_plain_transform,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_transform);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_transform, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_rsa$pkcs1,
        mod_consts.const_str_plain_core,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_core);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_core, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_rsa$pkcs1,
        mod_consts.const_str_plain_key,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_key);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_key, tmp_assign_source_14);
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
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_1 == NULL));
tmp_assign_source_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_Any);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_HashType, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = DICT_COPY(tstate, mod_consts.const_dict_b3b804f3a7045b1019f724e56da33528);
UPDATE_STRING_DICT1(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_HASH_ASN1, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_2;
tmp_dict_key_1 = mod_consts.const_str_plain_MD5;
tmp_expression_value_2 = module_var_accessor_rsa$pkcs1$hashlib(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashlib);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 53;

    goto frame_exception_exit_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_md5);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto frame_exception_exit_1;
}
tmp_assign_source_17 = _PyDict_NewPresized( 6 );
{
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_digest_97dcb4754378a8f54936024697d0d59e;
tmp_expression_value_3 = module_var_accessor_rsa$pkcs1$hashlib(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashlib);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_sha1);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_digest_8e6c146abea2e9a74bbae52248e9fe41;
tmp_expression_value_4 = module_var_accessor_rsa$pkcs1$hashlib(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashlib);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 55;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_sha224);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_digest_1e080f858ef601c43605cc71a556333d;
tmp_expression_value_5 = module_var_accessor_rsa$pkcs1$hashlib(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashlib);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 56;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_sha256);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_digest_13616ed0239e00d0446f4afcc75f4919;
tmp_expression_value_6 = module_var_accessor_rsa$pkcs1$hashlib(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashlib);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 57;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_sha384);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_digest_91012c747d1826684889b0187ce7d184;
tmp_expression_value_7 = module_var_accessor_rsa$pkcs1$hashlib(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashlib);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_sha512);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_17);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
UPDATE_STRING_DICT1(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_HASH_METHODS, tmp_assign_source_17);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_expression_value_9 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_9 == NULL));
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_Dict);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_2;
PyObject *tmp_tuple_element_2;
PyTuple_SET_ITEM0(tmp_subscript_value_1, 0, tmp_tuple_element_1);
tmp_expression_value_11 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_11 == NULL));
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_Callable);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto tuple_build_exception_1;
}
tmp_tuple_element_2 = MAKE_LIST_EMPTY(tstate, 0);
tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_rsa$pkcs1$HashType(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HashType);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 1, tmp_tuple_element_2);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_expression_value_10);
Py_DECREF(tmp_subscript_value_2);
goto tuple_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_subscript_value_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_expression_value_8);
Py_DECREF(tmp_subscript_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto frame_exception_exit_1;
}
tmp_ass_subscribed_1 = module_var_accessor_rsa$pkcs1$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 52;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_HASH_METHODS;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_12;
PyObject *tmp_call_result_1;
PyObject *tmp_call_arg_element_1;
tmp_expression_value_12 = module_var_accessor_rsa$pkcs1$HASH_ASN1(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HASH_ASN1);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 65;

    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_update);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto frame_exception_exit_1;
}
tmp_call_arg_element_1 = DICT_COPY(tstate, mod_consts.const_dict_c36ee2642f1a8716acb6b27d523fb8c5);
frame_frame_rsa$pkcs1->m_frame.f_lineno = 65;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_call_arg_element_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_call_arg_element_1);
Py_DECREF(tmp_call_arg_element_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_13;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_expression_value_14;
tmp_expression_value_13 = module_var_accessor_rsa$pkcs1$HASH_METHODS(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HASH_METHODS);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;

    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_update);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto frame_exception_exit_1;
}
tmp_dict_key_2 = mod_consts.const_str_digest_8a57a8a7eb7225175ef084daf5e018fc;
tmp_expression_value_14 = module_var_accessor_rsa$pkcs1$hashlib(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashlib);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 75;

    goto frame_exception_exit_1;
}
tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_sha3_256);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 75;

    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_digest_3d543068145ac445e373ed4f59b26528;
tmp_expression_value_15 = module_var_accessor_rsa$pkcs1$hashlib(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashlib);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 76;

    goto dict_build_exception_2;
}
tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_sha3_384);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_digest_f4af1b74055018a7f096733f98e5e958;
tmp_expression_value_16 = module_var_accessor_rsa$pkcs1$hashlib(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashlib);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 77;

    goto dict_build_exception_2;
}
tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_sha3_512);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;
frame_frame_rsa$pkcs1->m_frame.f_lineno = 73;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_direct_call_arg1_1;
tmp_direct_call_arg1_1 = mod_consts.const_tuple_type_Exception_tuple;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_18 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_18;
}
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_19;
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_2;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_expression_value_17 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_17, tmp_subscript_value_3, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_2;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_2;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_20 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_20;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_18;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_18 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_18, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_2;
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
PyObject *tmp_assign_source_21;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_19;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_19 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_2;
}
tmp_tuple_element_3 = mod_consts.const_str_plain_CryptoError;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_3 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_rsa$pkcs1->m_frame.f_lineno = 82;
tmp_assign_source_21 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_21;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_20;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_20 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_20, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_2;
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
PyObject *tmp_tuple_element_4;
PyObject *tmp_expression_value_21;
PyObject *tmp_name_value_4;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_21 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_4 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_4 = BUILTIN_GETATTR(tstate, tmp_expression_value_21, tmp_name_value_4, tmp_default_value_1);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_2;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_22;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_22 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_22 == NULL));
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_22);
Py_DECREF(tmp_expression_value_22);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_4);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_2;
}
frame_frame_rsa$pkcs1->m_frame.f_lineno = 82;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 82;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_2;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_22;
}
branch_end_1:;
{
PyObject *tmp_assign_source_23;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_rsa$pkcs1$$$class__1_CryptoError_82 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_172952d0bc04806234e0d58ce32ce3d8;
tmp_res = PyObject_SetItem(locals_rsa$pkcs1$$$class__1_CryptoError_82, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_digest_1de70dca33ce419c934a309ef8124470;
tmp_res = PyObject_SetItem(locals_rsa$pkcs1$$$class__1_CryptoError_82, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_plain_CryptoError;
tmp_res = PyObject_SetItem(locals_rsa$pkcs1$$$class__1_CryptoError_82, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_int_pos_82;
tmp_res = PyObject_SetItem(locals_rsa$pkcs1$$$class__1_CryptoError_82, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_4;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_rsa$pkcs1$$$class__1_CryptoError_82, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_4;
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


exception_lineno = 82;

    goto try_except_handler_4;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_dictset_value = mod_consts.const_tuple_type_Exception_tuple;
tmp_res = PyObject_SetItem(locals_rsa$pkcs1$$$class__1_CryptoError_82, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_4;
}
branch_no_3:;
{
PyObject *tmp_assign_source_24;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_4 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_5 = mod_consts.const_str_plain_CryptoError;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_5 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
tmp_tuple_element_5 = locals_rsa$pkcs1$$$class__1_CryptoError_82;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_rsa$pkcs1->m_frame.f_lineno = 82;
tmp_assign_source_24 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_4;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_24;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_23 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_23);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_rsa$pkcs1$$$class__1_CryptoError_82);
locals_rsa$pkcs1$$$class__1_CryptoError_82 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_rsa$pkcs1$$$class__1_CryptoError_82);
locals_rsa$pkcs1$$$class__1_CryptoError_82 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 82;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_CryptoError, tmp_assign_source_23);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
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
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
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
PyObject *tmp_assign_source_25;
PyObject *tmp_tuple_element_6;
tmp_tuple_element_6 = module_var_accessor_rsa$pkcs1$CryptoError(tstate);
if (unlikely(tmp_tuple_element_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CryptoError);
}

if (tmp_tuple_element_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 86;

    goto try_except_handler_5;
}
tmp_assign_source_25 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_25, 0, tmp_tuple_element_6);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_25;
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_26 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_26;
}
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_27;
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_23;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto try_except_handler_5;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_23 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_23, tmp_subscript_value_4, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto try_except_handler_5;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto try_except_handler_5;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_28 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_28;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_24;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_24 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_24, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto try_except_handler_5;
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
PyObject *tmp_assign_source_29;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_25;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_7;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_25 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto try_except_handler_5;
}
tmp_tuple_element_7 = mod_consts.const_str_plain_DecryptionError;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_7 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_rsa$pkcs1->m_frame.f_lineno = 86;
tmp_assign_source_29 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_29;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_26;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_26 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_26, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto try_except_handler_5;
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
PyObject *tmp_tuple_element_8;
PyObject *tmp_expression_value_27;
PyObject *tmp_name_value_5;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_27 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_5 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_8 = BUILTIN_GETATTR(tstate, tmp_expression_value_27, tmp_name_value_5, tmp_default_value_2);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto try_except_handler_5;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_28;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_28 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_28 == NULL));
tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_28);
Py_DECREF(tmp_expression_value_28);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_8);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto try_except_handler_5;
}
frame_frame_rsa$pkcs1->m_frame.f_lineno = 86;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 86;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_5;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_30;
tmp_assign_source_30 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_30;
}
branch_end_4:;
{
PyObject *tmp_assign_source_31;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_rsa$pkcs1$$$class__2_DecryptionError_86 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_172952d0bc04806234e0d58ce32ce3d8;
tmp_res = PyObject_SetItem(locals_rsa$pkcs1$$$class__2_DecryptionError_86, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_digest_8df157174a1e079df3585a3201ee9cb5;
tmp_res = PyObject_SetItem(locals_rsa$pkcs1$$$class__2_DecryptionError_86, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_plain_DecryptionError;
tmp_res = PyObject_SetItem(locals_rsa$pkcs1$$$class__2_DecryptionError_86, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_int_pos_86;
tmp_res = PyObject_SetItem(locals_rsa$pkcs1$$$class__2_DecryptionError_86, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto try_except_handler_7;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_rsa$pkcs1$$$class__2_DecryptionError_86, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto try_except_handler_7;
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


exception_lineno = 86;

    goto try_except_handler_7;
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
tmp_res = PyObject_SetItem(locals_rsa$pkcs1$$$class__2_DecryptionError_86, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto try_except_handler_7;
}
branch_no_6:;
{
PyObject *tmp_assign_source_32;
PyObject *tmp_called_value_6;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_9;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_6 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_9 = mod_consts.const_str_plain_DecryptionError;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_9 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_9);
tmp_tuple_element_9 = locals_rsa$pkcs1$$$class__2_DecryptionError_86;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_rsa$pkcs1->m_frame.f_lineno = 86;
tmp_assign_source_32 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto try_except_handler_7;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_32;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_31 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_31);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_DECREF(locals_rsa$pkcs1$$$class__2_DecryptionError_86);
locals_rsa$pkcs1$$$class__2_DecryptionError_86 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_rsa$pkcs1$$$class__2_DecryptionError_86);
locals_rsa$pkcs1$$$class__2_DecryptionError_86 = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_6;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 86;
goto try_except_handler_5;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_DecryptionError, tmp_assign_source_31);
}
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
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
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
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
PyObject *tmp_assign_source_33;
PyObject *tmp_tuple_element_10;
tmp_tuple_element_10 = module_var_accessor_rsa$pkcs1$CryptoError(tstate);
if (unlikely(tmp_tuple_element_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CryptoError);
}

if (tmp_tuple_element_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 90;

    goto try_except_handler_8;
}
tmp_assign_source_33 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_33, 0, tmp_tuple_element_10);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_33;
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_34 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_34;
}
{
PyObject *tmp_assign_source_35;
tmp_assign_source_35 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_35;
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_29;
PyObject *tmp_subscript_value_5;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_8;
}
tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_29 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_5 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_29, tmp_subscript_value_5, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_8;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_8;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_36 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_36;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_30;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_30 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_30, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_8;
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
PyObject *tmp_assign_source_37;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_31;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_11;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_31 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_8;
}
tmp_tuple_element_11 = mod_consts.const_str_plain_VerificationError;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_11 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_rsa$pkcs1->m_frame.f_lineno = 90;
tmp_assign_source_37 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_37;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_32;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_32 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_32, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_8;
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
PyObject *tmp_tuple_element_12;
PyObject *tmp_expression_value_33;
PyObject *tmp_name_value_6;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_33 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_6 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_12 = BUILTIN_GETATTR(tstate, tmp_expression_value_33, tmp_name_value_6, tmp_default_value_3);
if (tmp_tuple_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_8;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_34;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_34 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_34 == NULL));
tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_34);
Py_DECREF(tmp_expression_value_34);
if (tmp_tuple_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_12);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_8;
}
frame_frame_rsa$pkcs1->m_frame.f_lineno = 90;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 90;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_8;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_38;
tmp_assign_source_38 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_38;
}
branch_end_7:;
{
PyObject *tmp_assign_source_39;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_rsa$pkcs1$$$class__3_VerificationError_90 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_172952d0bc04806234e0d58ce32ce3d8;
tmp_res = PyObject_SetItem(locals_rsa$pkcs1$$$class__3_VerificationError_90, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_str_digest_3eb4481563a33d714bf11d2347041c54;
tmp_res = PyObject_SetItem(locals_rsa$pkcs1$$$class__3_VerificationError_90, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_str_plain_VerificationError;
tmp_res = PyObject_SetItem(locals_rsa$pkcs1$$$class__3_VerificationError_90, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_int_pos_90;
tmp_res = PyObject_SetItem(locals_rsa$pkcs1$$$class__3_VerificationError_90, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_10;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_rsa$pkcs1$$$class__3_VerificationError_90, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_10;
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


exception_lineno = 90;

    goto try_except_handler_10;
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
tmp_res = PyObject_SetItem(locals_rsa$pkcs1$$$class__3_VerificationError_90, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_10;
}
branch_no_9:;
{
PyObject *tmp_assign_source_40;
PyObject *tmp_called_value_8;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_13;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_8 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_13 = mod_consts.const_str_plain_VerificationError;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_13 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_13);
tmp_tuple_element_13 = locals_rsa$pkcs1$$$class__3_VerificationError_90;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_rsa$pkcs1->m_frame.f_lineno = 90;
tmp_assign_source_40 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_10;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_40;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_39 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_39);
goto try_return_handler_10;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
Py_DECREF(locals_rsa$pkcs1$$$class__3_VerificationError_90);
locals_rsa$pkcs1$$$class__3_VerificationError_90 = NULL;
goto try_return_handler_9;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_rsa$pkcs1$$$class__3_VerificationError_90);
locals_rsa$pkcs1$$$class__3_VerificationError_90 = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_9;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 90;
goto try_except_handler_8;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_VerificationError, tmp_assign_source_39);
}
goto try_end_4;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
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
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
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
PyObject *tmp_assign_source_41;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_679df97ee336d8d2c94f21da0cc8934f);

tmp_assign_source_41 = MAKE_FUNCTION_rsa$pkcs1$$$function__1__pad_for_encryption(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain__pad_for_encryption, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_679df97ee336d8d2c94f21da0cc8934f);

tmp_assign_source_42 = MAKE_FUNCTION_rsa$pkcs1$$$function__2__pad_for_signing(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain__pad_for_signing, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_annotations_3;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
tmp_dict_key_3 = mod_consts.const_str_plain_message;
tmp_dict_value_3 = (PyObject *)&PyBytes_Type;
tmp_annotations_3 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_35;
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_pub_key;
tmp_expression_value_35 = module_var_accessor_rsa$pkcs1$key(tstate);
if (unlikely(tmp_expression_value_35 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_key);
}

if (tmp_expression_value_35 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 172;

    goto dict_build_exception_3;
}
tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_PublicKey);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto dict_build_exception_3;
}
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_return;
tmp_dict_value_3 = (PyObject *)&PyBytes_Type;
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_3;
// Exception handling pass through code for dict_build:
dict_build_exception_3:;
Py_DECREF(tmp_annotations_3);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_3:;

tmp_assign_source_43 = MAKE_FUNCTION_rsa$pkcs1$$$function__3_encrypt(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_encrypt, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_annotations_4;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
tmp_dict_key_4 = mod_consts.const_str_plain_crypto;
tmp_dict_value_4 = (PyObject *)&PyBytes_Type;
tmp_annotations_4 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_36;
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_priv_key;
tmp_expression_value_36 = module_var_accessor_rsa$pkcs1$key(tstate);
if (unlikely(tmp_expression_value_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_key);
}

if (tmp_expression_value_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 204;

    goto dict_build_exception_4;
}
tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain_PrivateKey);
if (tmp_dict_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto dict_build_exception_4;
}
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_return;
tmp_dict_value_4 = (PyObject *)&PyBytes_Type;
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_4;
// Exception handling pass through code for dict_build:
dict_build_exception_4:;
Py_DECREF(tmp_annotations_4);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_4:;

tmp_assign_source_44 = MAKE_FUNCTION_rsa$pkcs1$$$function__4_decrypt(tstate, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_decrypt, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_annotations_5;
PyObject *tmp_dict_key_5;
PyObject *tmp_dict_value_5;
tmp_dict_key_5 = mod_consts.const_str_plain_hash_value;
tmp_dict_value_5 = (PyObject *)&PyBytes_Type;
tmp_annotations_5 = _PyDict_NewPresized( 4 );
{
PyObject *tmp_expression_value_37;
tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_priv_key;
tmp_expression_value_37 = module_var_accessor_rsa$pkcs1$key(tstate);
if (unlikely(tmp_expression_value_37 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_key);
}

if (tmp_expression_value_37 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 287;

    goto dict_build_exception_5;
}
tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain_PrivateKey);
if (tmp_dict_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;

    goto dict_build_exception_5;
}
tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_hash_method;
tmp_dict_value_5 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_return;
tmp_dict_value_5 = (PyObject *)&PyBytes_Type;
tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_5;
// Exception handling pass through code for dict_build:
dict_build_exception_5:;
Py_DECREF(tmp_annotations_5);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_5:;

tmp_assign_source_45 = MAKE_FUNCTION_rsa$pkcs1$$$function__5_sign_hash(tstate, tmp_annotations_5);

UPDATE_STRING_DICT1(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_sign_hash, tmp_assign_source_45);
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_annotations_6;
PyObject *tmp_dict_key_6;
PyObject *tmp_dict_value_6;
tmp_dict_key_6 = mod_consts.const_str_plain_message;
tmp_dict_value_6 = (PyObject *)&PyBytes_Type;
tmp_annotations_6 = _PyDict_NewPresized( 4 );
{
PyObject *tmp_expression_value_38;
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_priv_key;
tmp_expression_value_38 = module_var_accessor_rsa$pkcs1$key(tstate);
if (unlikely(tmp_expression_value_38 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_key);
}

if (tmp_expression_value_38 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 320;

    goto dict_build_exception_6;
}
tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts.const_str_plain_PrivateKey);
if (tmp_dict_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto dict_build_exception_6;
}
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_hash_method;
tmp_dict_value_6 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_return;
tmp_dict_value_6 = (PyObject *)&PyBytes_Type;
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_6;
// Exception handling pass through code for dict_build:
dict_build_exception_6:;
Py_DECREF(tmp_annotations_6);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_6:;

tmp_assign_source_46 = MAKE_FUNCTION_rsa$pkcs1$$$function__6_sign(tstate, tmp_annotations_6);

UPDATE_STRING_DICT1(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_sign, tmp_assign_source_46);
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_annotations_7;
PyObject *tmp_dict_key_7;
PyObject *tmp_dict_value_7;
tmp_dict_key_7 = mod_consts.const_str_plain_message;
tmp_dict_value_7 = (PyObject *)&PyBytes_Type;
tmp_annotations_7 = _PyDict_NewPresized( 4 );
{
PyObject *tmp_expression_value_39;
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_signature;
tmp_dict_value_7 = (PyObject *)&PyBytes_Type;
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_pub_key;
tmp_expression_value_39 = module_var_accessor_rsa$pkcs1$key(tstate);
if (unlikely(tmp_expression_value_39 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_key);
}

if (tmp_expression_value_39 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 342;

    goto dict_build_exception_7;
}
tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain_PublicKey);
if (tmp_dict_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;

    goto dict_build_exception_7;
}
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
Py_DECREF(tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_return;
tmp_dict_value_7 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_7;
// Exception handling pass through code for dict_build:
dict_build_exception_7:;
Py_DECREF(tmp_annotations_7);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_7:;

tmp_assign_source_47 = MAKE_FUNCTION_rsa$pkcs1$$$function__7_verify(tstate, tmp_annotations_7);

UPDATE_STRING_DICT1(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_verify, tmp_assign_source_47);
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_annotations_8;
PyObject *tmp_dict_key_8;
PyObject *tmp_dict_value_8;
tmp_dict_key_8 = mod_consts.const_str_plain_signature;
tmp_dict_value_8 = (PyObject *)&PyBytes_Type;
tmp_annotations_8 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_40;
tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_pub_key;
tmp_expression_value_40 = module_var_accessor_rsa$pkcs1$key(tstate);
if (unlikely(tmp_expression_value_40 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_key);
}

if (tmp_expression_value_40 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 380;

    goto dict_build_exception_8;
}
tmp_dict_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts.const_str_plain_PublicKey);
if (tmp_dict_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;

    goto dict_build_exception_8;
}
tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
Py_DECREF(tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_return;
tmp_dict_value_8 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_8;
// Exception handling pass through code for dict_build:
dict_build_exception_8:;
Py_DECREF(tmp_annotations_8);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_8:;

tmp_assign_source_48 = MAKE_FUNCTION_rsa$pkcs1$$$function__8_find_signature_hash(tstate, tmp_annotations_8);

UPDATE_STRING_DICT1(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_find_signature_hash, tmp_assign_source_48);
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_annotations_9;
PyObject *tmp_dict_key_9;
PyObject *tmp_dict_value_9;
PyObject *tmp_expression_value_41;
tmp_dict_key_9 = mod_consts.const_str_plain_infile;
tmp_expression_value_41 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_41 == NULL));
tmp_dict_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts.const_str_plain_BinaryIO);
if (tmp_dict_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 399;

    goto frame_exception_exit_1;
}
tmp_annotations_9 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_42;
PyObject *tmp_expression_value_43;
PyObject *tmp_subscript_value_6;
tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
Py_DECREF(tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_blocksize;
tmp_dict_value_9 = (PyObject *)&PyLong_Type;
tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_return;
tmp_expression_value_43 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_43 == NULL));
tmp_expression_value_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts.const_str_plain_Iterator);
if (tmp_expression_value_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 399;

    goto dict_build_exception_9;
}
tmp_subscript_value_6 = (PyObject *)&PyBytes_Type;
tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_42, tmp_subscript_value_6);
CHECK_OBJECT(tmp_expression_value_42);
Py_DECREF(tmp_expression_value_42);
if (tmp_dict_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 399;

    goto dict_build_exception_9;
}
tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
Py_DECREF(tmp_dict_value_9);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_9;
// Exception handling pass through code for dict_build:
dict_build_exception_9:;
Py_DECREF(tmp_annotations_9);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_9:;

tmp_assign_source_49 = MAKE_FUNCTION_rsa$pkcs1$$$function__9_yield_fixedblocks(tstate, tmp_annotations_9);

UPDATE_STRING_DICT1(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_yield_fixedblocks, tmp_assign_source_49);
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_annotations_10;
PyObject *tmp_dict_key_10;
PyObject *tmp_dict_value_10;
PyObject *tmp_expression_value_44;
PyObject *tmp_expression_value_45;
PyObject *tmp_subscript_value_7;
PyObject *tmp_tuple_element_14;
tmp_dict_key_10 = mod_consts.const_str_plain_message;
tmp_expression_value_45 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_45 == NULL));
tmp_expression_value_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts.const_str_plain_Union);
if (tmp_expression_value_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;

    goto frame_exception_exit_1;
}
tmp_tuple_element_14 = (PyObject *)&PyBytes_Type;
tmp_subscript_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_46;
PyTuple_SET_ITEM0(tmp_subscript_value_7, 0, tmp_tuple_element_14);
tmp_expression_value_46 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_46 == NULL));
tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts.const_str_plain_BinaryIO);
if (tmp_tuple_element_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_subscript_value_7, 1, tmp_tuple_element_14);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_expression_value_44);
Py_DECREF(tmp_subscript_value_7);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_44, tmp_subscript_value_7);
CHECK_OBJECT(tmp_expression_value_44);
Py_DECREF(tmp_expression_value_44);
CHECK_OBJECT(tmp_subscript_value_7);
Py_DECREF(tmp_subscript_value_7);
if (tmp_dict_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;

    goto frame_exception_exit_1;
}
tmp_annotations_10 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
Py_DECREF(tmp_dict_value_10);
assert(!(tmp_res != 0));
tmp_dict_key_10 = mod_consts.const_str_plain_method_name;
tmp_dict_value_10 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
assert(!(tmp_res != 0));
tmp_dict_key_10 = mod_consts.const_str_plain_return;
tmp_dict_value_10 = (PyObject *)&PyBytes_Type;
tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
assert(!(tmp_res != 0));

tmp_assign_source_50 = MAKE_FUNCTION_rsa$pkcs1$$$function__10_compute_hash(tstate, tmp_annotations_10);

UPDATE_STRING_DICT1(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain_compute_hash, tmp_assign_source_50);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$pkcs1, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$pkcs1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$pkcs1, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_rsa$pkcs1);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_51;
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_b26fcbcd8fd9b94e022267339eff80e6);

tmp_assign_source_51 = MAKE_FUNCTION_rsa$pkcs1$$$function__11__find_method_hash(tstate, tmp_annotations_11);

UPDATE_STRING_DICT1(moduledict_rsa$pkcs1, (Nuitka_StringObject *)mod_consts.const_str_plain__find_method_hash, tmp_assign_source_51);
}
{
PyObject *tmp_assign_source_52;
tmp_assign_source_52 = MAKE_LIST7(tstate, mod_consts.const_list_c5a99d18a43567ed28454d8b2a4a6a21_list);
UPDATE_STRING_DICT1(moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_52);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("rsa$pkcs1", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "rsa.pkcs1" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_rsa$pkcs1);
    return module_rsa$pkcs1;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("rsa$pkcs1", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
